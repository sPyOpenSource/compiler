module Main where

import Parsing hiding (ident, token, symbol)
import Data.Char
import Data.List (intercalate, minimumBy)
import System.Environment (getArgs)
import System.IO (readFile, stderr, hPutStrLn)
import Control.Monad (when)

-- =====================================================================
-- JSON
-- =====================================================================

data JSON = JString String
          | JNum Double
          | JBool Bool
          | JNull
          | JObject [(String, JSON)]
          | JArray [JSON]

jsonToString :: JSON -> String
jsonToString (JString s)  = show s
jsonToString (JNum n)
  | n == fromIntegral (round n :: Integer) = show (round n :: Integer)
  | otherwise                              = show n
jsonToString (JBool b)    = if b then "true" else "false"
jsonToString JNull        = "null"
jsonToString (JObject ps) = "{" ++ intercalate "," [show k ++ ":" ++ jsonToString v | (k,v) <- ps] ++ "}"
jsonToString (JArray vs)  = "[" ++ intercalate "," (map jsonToString vs) ++ "]"

-- =====================================================================
-- Java AST
-- =====================================================================

data Modifier = MPublic | MPrivate | MProtected | MStatic | MFinal | MAbstract
  deriving (Show, Eq)

data JavaType = TInt | TFloat | TDouble | TBoolean | TChar | TVoid | TString
              | TClass String
              | TArray JavaType
  deriving (Show, Eq)

data BinOp = OpAdd | OpSub | OpMul | OpDiv | OpMod
           | OpEq | OpNeq | OpLt | OpGt | OpLe | OpGe
           | OpAnd | OpOr
           | OpBitAnd | OpBitOr | OpBitXor
           | OpLShift | OpRShift
           | OpAssign
  deriving (Show, Eq)

data UnOp = UNeg | UNot | UPreInc | UPreDec
  deriving (Show, Eq)

data Expr = EInt Integer
          | EFloat Double
          | EBool Bool
          | EChar Char
          | EString String
          | ENull
          | EThis
          | EIdent String
          | EBinary BinOp Expr Expr
          | EUnary UnOp Expr
          | EAssign Expr Expr
          | ECall Expr [Expr]
          | EField Expr String
          | EArraySub Expr Expr
          | ENewClass String [Expr]
          | ENewArray JavaType Expr
          | ETernary Expr Expr Expr
          | ECast JavaType Expr
  deriving (Show, Eq)

data Stmt = SBlock [Stmt]
          | SIf Expr Stmt (Maybe Stmt)
          | SWhile Expr Stmt
          | SFor (Maybe Stmt) (Maybe Expr) (Maybe Expr) Stmt
          | SReturn (Maybe Expr)
          | SExprStmt Expr
          | SVarDecl JavaType String (Maybe Expr)
          | SBreak
          | SContinue
  deriving (Show, Eq)

data ParamDecl = ParamDecl JavaType String
  deriving (Show, Eq)

data FieldDecl = FieldDecl [Modifier] JavaType String (Maybe Expr)
  deriving (Show, Eq)

data MethodDecl = MethodDecl [Modifier] JavaType String [ParamDecl] [Stmt]
  deriving (Show, Eq)

data ClassDecl = ClassDecl [Modifier] String (Maybe String) [FieldDecl] [MethodDecl]
  deriving (Show, Eq)

data CompilationUnit = CompilationUnit (Maybe String) [ClassDecl]
  deriving (Show, Eq)

-- =====================================================================
-- AST -> JSON
-- =====================================================================

modToJSON :: Modifier -> JSON
modToJSON MPublic    = JString "public"
modToJSON MPrivate   = JString "private"
modToJSON MProtected = JString "protected"
modToJSON MStatic    = JString "static"
modToJSON MFinal     = JString "final"
modToJSON MAbstract  = JString "abstract"

typeToJSON :: JavaType -> JSON
typeToJSON TInt         = JString "int"
typeToJSON TFloat       = JString "float"
typeToJSON TDouble      = JString "double"
typeToJSON TBoolean     = JString "boolean"
typeToJSON TChar        = JString "char"
typeToJSON TVoid        = JString "void"
typeToJSON TString      = JString "String"
typeToJSON (TClass s)   = JString s
typeToJSON (TArray t)   = JArray [typeToJSON t, JString "[]"]

binOpToJSON :: BinOp -> JSON
binOpToJSON OpAdd    = JString "+"
binOpToJSON OpSub    = JString "-"
binOpToJSON OpMul    = JString "*"
binOpToJSON OpDiv    = JString "/"
binOpToJSON OpMod    = JString "%"
binOpToJSON OpEq     = JString "=="
binOpToJSON OpNeq    = JString "!="
binOpToJSON OpLt     = JString "<"
binOpToJSON OpGt     = JString ">"
binOpToJSON OpLe     = JString "<="
binOpToJSON OpGe     = JString ">="
binOpToJSON OpAnd    = JString "&&"
binOpToJSON OpOr     = JString "||"
binOpToJSON OpBitAnd = JString "&"
binOpToJSON OpBitOr  = JString "|"
binOpToJSON OpBitXor = JString "^"
binOpToJSON OpLShift = JString "<<"
binOpToJSON OpRShift = JString ">>"
binOpToJSON OpAssign = JString "="

unOpToJSON :: UnOp -> JSON
unOpToJSON UNeg    = JString "-"
unOpToJSON UNot    = JString "!"
unOpToJSON UPreInc = JString "++"
unOpToJSON UPreDec = JString "--"

exprToJSON :: Expr -> JSON
exprToJSON (EInt n)       = JObject [("_type", JString "int"), ("value", JNum (fromIntegral n))]
exprToJSON (EFloat n)     = JObject [("_type", JString "float"), ("value", JNum n)]
exprToJSON (EBool b)      = JObject [("_type", JString "bool"), ("value", JBool b)]
exprToJSON (EChar c)      = JObject [("_type", JString "char"), ("value", JString [c])]
exprToJSON (EString s)    = JObject [("_type", JString "string"), ("value", JString s)]
exprToJSON ENull          = JObject [("_type", JString "null")]
exprToJSON EThis          = JObject [("_type", JString "this")]
exprToJSON (EIdent s)     = JObject [("_type", JString "ident"), ("name", JString s)]
exprToJSON (EBinary op a b) = JObject [("_type", JString "binary"), ("op", binOpToJSON op), ("left", exprToJSON a), ("right", exprToJSON b)]
exprToJSON (EUnary op a)    = JObject [("_type", JString "unary"), ("op", unOpToJSON op), ("expr", exprToJSON a)]
exprToJSON (EAssign a b)    = JObject [("_type", JString "assign"), ("target", exprToJSON a), ("value", exprToJSON b)]
exprToJSON (ECall f as)     = JObject [("_type", JString "call"), ("target", exprToJSON f), ("args", JArray (map exprToJSON as))]
exprToJSON (EField o f)     = JObject [("_type", JString "field"), ("object", exprToJSON o), ("name", JString f)]
exprToJSON (EArraySub a i)  = JObject [("_type", JString "array_sub"), ("array", exprToJSON a), ("index", exprToJSON i)]
exprToJSON (ENewClass c as) = JObject [("_type", JString "new_class"), ("class", JString c), ("args", JArray (map exprToJSON as))]
exprToJSON (ENewArray t s)  = JObject [("_type", JString "new_array"), ("type", typeToJSON t), ("size", exprToJSON s)]
exprToJSON (ETernary c t f) = JObject [("_type", JString "ternary"), ("cond", exprToJSON c), ("then", exprToJSON t), ("else", exprToJSON f)]
exprToJSON (ECast t e)      = JObject [("_type", JString "cast"), ("to_type", typeToJSON t), ("expr", exprToJSON e)]

stmtToJSON :: Stmt -> JSON
stmtToJSON (SBlock ss)       = JObject [("_type", JString "block"), ("statements", JArray (map stmtToJSON ss))]
stmtToJSON (SIf c t me)      = JObject $ [("_type", JString "if"), ("cond", exprToJSON c), ("then", stmtToJSON t)]
                                          ++ maybe [] (\e -> [("else", stmtToJSON e)]) me
stmtToJSON (SWhile c b)      = JObject [("_type", JString "while"), ("cond", exprToJSON c), ("body", stmtToJSON b)]
stmtToJSON (SFor i c u b)    = JObject [("_type", JString "for"), ("init", maybe JNull stmtToJSON i), ("cond", maybe JNull exprToJSON c), ("update", maybe JNull exprToJSON u), ("body", stmtToJSON b)]
stmtToJSON (SReturn me)      = JObject [("_type", JString "return"), ("value", maybe JNull exprToJSON me)]
stmtToJSON (SExprStmt e)     = JObject [("_type", JString "expr_stmt"), ("expr", exprToJSON e)]
stmtToJSON (SVarDecl t n me) = JObject $ [("_type", JString "var_decl"), ("type", typeToJSON t), ("name", JString n)]
                                        ++ maybe [] (\e -> [("init", exprToJSON e)]) me
stmtToJSON SBreak             = JObject [("_type", JString "break")]
stmtToJSON SContinue          = JObject [("_type", JString "continue")]

paramToJSON :: ParamDecl -> JSON
paramToJSON (ParamDecl t n) = JObject [("type", typeToJSON t), ("name", JString n)]

fieldToJSON :: FieldDecl -> JSON
fieldToJSON (FieldDecl ms t n me) = JObject $
  [("_type", JString "field"), ("modifiers", JArray (map modToJSON ms)), ("type", typeToJSON t), ("name", JString n)]
  ++ maybe [] (\e -> [("init", exprToJSON e)]) me

methodToJSON :: MethodDecl -> JSON
methodToJSON (MethodDecl ms t n ps ss) = JObject
  [("_type", JString "method"), ("modifiers", JArray (map modToJSON ms)), ("return_type", typeToJSON t), ("name", JString n), ("params", JArray (map paramToJSON ps)), ("body", JArray (map stmtToJSON ss))]

classToJSON :: ClassDecl -> JSON
classToJSON (ClassDecl ms n parent fs ms') = JObject $
  [("_type", JString "class"), ("modifiers", JArray (map modToJSON ms)), ("name", JString n), ("fields", JArray (map fieldToJSON fs)), ("methods", JArray (map methodToJSON ms'))]
  ++ maybe [] (\p -> [("extends", JString p)]) parent

cuToJSON :: CompilationUnit -> JSON
cuToJSON (CompilationUnit pkg classes) = JObject $
  [("_type", JString "compilation_unit")]
  ++ maybe [] (\p -> [("package", JString p)]) pkg
  ++ [("classes", JArray (map classToJSON classes))]

-- =====================================================================
-- Parser utilities
-- =====================================================================

keywords :: [String]
keywords = ["abstract","assert","boolean","break","byte","case","catch",
            "char","class","const","continue","default","do","double",
            "else","enum","extends","final","finally","float","for",
            "goto","if","implements","import","instanceof","int",
            "interface","long","native","new","package","private",
            "protected","public","return","short","static","strictfp",
            "super","switch","synchronized","this","throw","throws",
            "transient","try","void","volatile","while","true","false","null"]

isKeyword :: String -> Bool
isKeyword = (`elem` keywords)

javaIdent :: Parser String
javaIdent = do
  x <- sat (\c -> isLetter c || c == '_' || c == '$')
  xs <- many (sat (\c -> isAlphaNum c || c == '_' || c == '$'))
  let name = x:xs
  if isKeyword name then empty else return name

-- whitespace + comments
skipWs :: Parser ()
skipWs = do
  many (spaceChar <|> lineCmt <|> blockCmt)
  return ()
  where
    spaceChar = sat isSpace
    lineCmt = do string "//"; many (sat (/= '\n')); return ' '
    blockCmt = do string "/*"; blockEnd; return ' '
    blockEnd = do c <- item; case c of '*' -> (char '/' >> return ()) <|> blockEnd; _ -> blockEnd

token :: Parser a -> Parser a
token p = do skipWs; v <- p; skipWs; return v

symbol :: String -> Parser String
symbol s = token (string s)

ident :: Parser String
ident = token javaIdent

keyword :: String -> Parser String
keyword kw = do
  skipWs
  s <- string kw
  let check = P (\inp -> case inp of
        [] -> [((), [])]
        (c:_) | isAlphaNum c || c == '_' || c == '$' -> []
        _ -> [((), inp)])
  check
  skipWs
  return s

-- =====================================================================
-- Literals
-- =====================================================================

escape :: Char -> Char
escape 'n' = '\n'
escape 't' = '\t'
escape 'r' = '\r'
escape 'b' = '\b'
escape 'f' = '\f'
escape '"' = '"'
escape '\'' = '\''
escape '\\' = '\\'
escape c   = c

strLit :: Parser String
strLit = do
  char '"'
  cs <- many (do c <- item
                 if c == '\\'
                   then do c2 <- item; return (escape c2)
                   else if c == '"' then empty
                   else return c)
  char '"'
  return cs

charLit :: Parser Char
charLit = do
  char '\''
  c <- item
  if c == '\\'
    then do c2 <- item; char '\''; return (escape c2)
    else do char '\''; return c

intLit :: Parser Integer
intLit = do
  ds <- some digit
  return (read ds)

floatLit :: Parser Double
floatLit = do
  ds <- some digit
  char '.'
  fs <- some digit
  return (read (ds ++ "." ++ fs))

-- =====================================================================
-- Types
-- =====================================================================

javaType :: Parser JavaType
javaType = do
  t <- (keyword "boolean" >> return TBoolean)
     <|> (keyword "int"    >> return TInt)
     <|> (keyword "float"  >> return TFloat)
     <|> (keyword "double" >> return TDouble)
     <|> (keyword "char"   >> return TChar)
     <|> (keyword "void"   >> return TVoid)
     <|> (do name <- ident
             let t = if name == "String" then TString else TClass name
             return t)
  (symbol "[" >> symbol "]" >> return (TArray t)) <|> return t

-- =====================================================================
-- Expressions (precedence climbing)
-- =====================================================================

chainl1 :: Parser a -> Parser (a -> a -> a) -> Parser a
chainl1 p op = do x <- p; rest x
  where rest x = (do f <- op; y <- p; rest (f x y)) <|> return x

-- Lowest precedence first

expr :: Parser Expr
expr = assignExpr

assignExpr :: Parser Expr
assignExpr = do
  e <- ternaryExpr
  (do symbol "="; e2 <- assignExpr; return (EBinary OpAssign e e2)) <|> return e

ternaryExpr :: Parser Expr
ternaryExpr = do
  e <- orExpr
  (do symbol "?"; e2 <- expr; symbol ":"; e3 <- ternaryExpr; return (ETernary e e2 e3)) <|> return e

orExpr :: Parser Expr
orExpr = chainl1 andExpr (symbol "||" >> return (\a b -> EBinary OpOr a b))

andExpr :: Parser Expr
andExpr = chainl1 bitOrExpr (symbol "&&" >> return (\a b -> EBinary OpAnd a b))

bitOrExpr :: Parser Expr
bitOrExpr = chainl1 bitXorExpr (symbol "|" >> return (\a b -> EBinary OpBitOr a b))

bitXorExpr :: Parser Expr
bitXorExpr = chainl1 bitAndExpr (symbol "^" >> return (\a b -> EBinary OpBitXor a b))

bitAndExpr :: Parser Expr
bitAndExpr = chainl1 eqExpr (symbol "&" >> return (\a b -> EBinary OpBitAnd a b))

eqExpr :: Parser Expr
eqExpr = chainl1 cmpExpr ((symbol "==" >> return (\a b -> EBinary OpEq a b))
                        <|> (symbol "!=" >> return (\a b -> EBinary OpNeq a b)))

cmpExpr :: Parser Expr
cmpExpr = chainl1 shiftExpr ((symbol "<=" >> return (\a b -> EBinary OpLe a b))
                           <|> (symbol ">=" >> return (\a b -> EBinary OpGe a b))
                           <|> (symbol "<"  >> return (\a b -> EBinary OpLt a b))
                           <|> (symbol ">"  >> return (\a b -> EBinary OpGt a b)))

shiftExpr :: Parser Expr
shiftExpr = chainl1 addExpr ((symbol "<<" >> return (\a b -> EBinary OpLShift a b))
                           <|> (symbol ">>" >> return (\a b -> EBinary OpRShift a b)))

addExpr :: Parser Expr
addExpr = chainl1 mulExpr ((symbol "+" >> return (\a b -> EBinary OpAdd a b))
                         <|> (symbol "-" >> return (\a b -> EBinary OpSub a b)))

mulExpr :: Parser Expr
mulExpr = chainl1 unaryExpr ((symbol "*" >> return (\a b -> EBinary OpMul a b))
                           <|> (symbol "/" >> return (\a b -> EBinary OpDiv a b))
                           <|> (symbol "%" >> return (\a b -> EBinary OpMod a b)))

unaryExpr :: Parser Expr
unaryExpr =
     (symbol "!" >> do e <- unaryExpr; return (EUnary UNot e))
  <|> (symbol "-" >> do e <- unaryExpr; return (EUnary UNeg e))
  <|> (symbol "++" >> do e <- unaryExpr; return (EUnary UPreInc e))
  <|> (symbol "--" >> do e <- unaryExpr; return (EUnary UPreDec e))
  <|> postfixExpr

postfixExpr :: Parser Expr
postfixExpr = do
  e <- primaryExpr
  suffix e
  where
    suffix e =
         (do symbol "("; args <- exprList; symbol ")" ; suffix (ECall e args))
      <|> (do symbol "."; n <- ident; callOrField e n)
      <|> (do symbol "["; i <- expr; symbol "]"; suffix (EArraySub e i))
      <|> (do symbol "++"; suffix (EUnary UPreInc e))
      <|> (do symbol "--"; suffix (EUnary UPreDec e))
      <|> return e
    callOrField e' n =
         (do symbol "("; args <- exprList; symbol ")"; suffix (ECall (EField e' n) args))
      <|> suffix (EField e' n)

exprList :: Parser [Expr]
exprList = (do e <- expr; es <- many (symbol "," >> expr); return (e:es)) <|> return []

primaryExpr :: Parser Expr
primaryExpr =
     (do keyword "true";   return (EBool True))
  <|> (do keyword "false";  return (EBool False))
  <|> (do keyword "null";   return ENull)
  <|> (do keyword "this";   return EThis)
  <|> (do n <- intLit; symbol "."; f <- floatLit; return (EFloat (read (show n ++ "." ++ show f))))
  <|> (do n <- intLit; return (EInt n))
  <|> (do f <- floatLit; return (EFloat f))
  <|> (do s <- strLit;  return (EString s))
  <|> (do c <- charLit; return (EChar c))
  <|> (do symbol "("; t <- javaType; symbol ")"; e <- unaryExpr; return (ECast t e))
  <|> (do symbol "("; e <- expr; symbol ")"; return e)
  <|> (do keyword "new"; n <- ident;
          (do symbol "("; args <- exprList; symbol ")"; return (ENewClass n args))
       <|> (do t <- javaType; symbol "["; s <- expr; symbol "]"; return (ENewArray t s)))
  <|> (do n <- ident; return (EIdent n))

-- =====================================================================
-- Statements
-- =====================================================================

stmt :: Parser Stmt
stmt =
     (do symbol "{"; ss <- many stmt; symbol "}"; return (SBlock ss))
  <|> (do keyword "if"; symbol "("; c <- expr; symbol ")"; t <- stmt
          e <- optionMaybe (keyword "else" >> stmt); return (SIf c t e))
  <|> (do keyword "while"; symbol "("; c <- expr; symbol ")"; b <- stmt; return (SWhile c b))
  <|> (do keyword "for"; symbol "("
          i <- forInit; symbol ";"
          c <- optionMaybe expr; symbol ";"
          u <- optionMaybe expr; symbol ")"
          b <- stmt; return (SFor i c u b))
  <|> (do keyword "return"; e <- optionMaybe expr; symbol ";"; return (SReturn e))
  <|> (do keyword "break"; symbol ";"; return SBreak)
  <|> (do keyword "continue"; symbol ";"; return SContinue)
  <|> declStmt
  <|> exprStmt

forInit :: Parser (Maybe Stmt)
forInit = P (\inp0 ->
  let rDecl = parse (do t <- javaType; n <- ident
                        init <- optionMaybe (symbol "=" >> expr)
                        return (Just (SVarDecl t n init))) inp0
      rExpr = parse (do e <- expr; return (Just (SExprStmt e))) inp0
      rNone = [(Nothing, inp0)]
  in case rDecl of
       [] -> case rExpr of
               [] -> rNone
               _  -> rExpr
       _  -> rDecl)

optionMaybe :: Parser a -> Parser (Maybe a)
optionMaybe p = (do v <- p; return (Just v)) <|> return Nothing

semi :: Parser ()
semi = symbol ";" >> return ()

exprStmt :: Parser Stmt
exprStmt = do e <- expr; symbol ";"; return (SExprStmt e)

declStmt :: Parser Stmt
declStmt = do t <- javaType; n <- ident
              init <- optionMaybe (symbol "=" >> expr)
              symbol ";"
              return (SVarDecl t n init)

-- =====================================================================
-- Member declarations (fields and methods)
-- =====================================================================

modifier :: Parser Modifier
modifier =
     (keyword "public"    >> return MPublic)
  <|> (keyword "private"   >> return MPrivate)
  <|> (keyword "protected" >> return MProtected)
  <|> (keyword "static"    >> return MStatic)
  <|> (keyword "final"     >> return MFinal)
  <|> (keyword "abstract"  >> return MAbstract)

modifiers :: Parser [Modifier]
modifiers = many modifier

paramList :: Parser [ParamDecl]
paramList = (do p <- param; ps <- many (symbol "," >> param); return (p:ps)) <|> return []

param :: Parser ParamDecl
param = do t <- javaType; n <- ident; return (ParamDecl t n)

fieldDecl :: Parser FieldDecl
fieldDecl = do
  ms <- modifiers
  t  <- javaType
  n  <- ident
  init <- optionMaybe (symbol "=" >> expr)
  symbol ";"
  return (FieldDecl ms t n init)

methodBody :: Parser [Stmt]
methodBody = symbol "{" >> many stmt >>= \ss -> symbol "}" >> return ss

methodDecl :: Parser MethodDecl
methodDecl = do
  ms <- modifiers
  t  <- javaType
  n  <- ident
  symbol "("
  ps <- paramList
  symbol ")"
  ss <- methodBody
  return (MethodDecl ms t n ps ss)

ctorDecl :: Parser MethodDecl
ctorDecl = do
  ms <- modifiers
  n  <- ident
  symbol "("
  ps <- paramList
  symbol ")"
  ss <- methodBody
  return (MethodDecl ms TVoid n ps ss)

memberDecl :: Parser (Either FieldDecl MethodDecl)
memberDecl = P (\inp0 ->
  let rM = parse methodDecl inp0
      rC = parse ctorDecl inp0
      rF = parse fieldDecl inp0
  in case rM of
       ((m,rm):_) -> [(Right m, rm)]
       [] -> case rC of
               ((c,rc):_) -> [(Right c, rc)]
               [] -> case rF of
                       ((f,rf):_) -> [(Left f, rf)]
                       [] -> [])

-- =====================================================================
-- Class and compilation unit
-- =====================================================================

classDecl :: Parser ClassDecl
classDecl = do
  ms <- modifiers
  keyword "class"
  n  <- ident
  parent <- optionMaybe (keyword "extends" >> ident)
  symbol "{"
  members <- many memberDecl
  symbol "}"
  let fields = [f | Left f <- members]
      methods = [m | Right m <- members]
  return (ClassDecl ms n parent fields methods)

qident :: Parser String
qident = do
  n <- ident
  rest n
  where
    rest n = (do symbol "."; n2 <- ident; rest (n ++ "." ++ n2)) <|> return n

compilationUnit :: Parser CompilationUnit
compilationUnit = do
  skipWs
  pkg <- optionMaybe (do n <- keyword "package" >> qident; symbol ";"; return n)
  classes <- many classDecl
  skipWs
  return (CompilationUnit pkg classes)

-- =====================================================================
-- Main
-- =====================================================================

parseFile :: String -> IO (CompilationUnit, String)
parseFile file = do
  src <- readFile file
  case parse compilationUnit src of
    [] -> error "Parse failed"
    results -> do
      let best = minimumBy (\a b -> compare (length (snd a)) (length (snd b))) results
      return (fst best, snd best)

main :: IO ()
main = do
  args <- getArgs
  case args of
    [file] -> do
      (cu, rest) <- parseFile file
      putStrLn $ jsonToString (cuToJSON cu)
      when (not (null rest) && rest /= "\n") $
        hPutStrLn stderr ("Warning: unparsed: " ++ take 80 rest)
    [file, "-o", out] -> do
      (cu, _) <- parseFile file
      writeFile out $ jsonToString (cuToJSON cu)
    [file, "--pretty"] -> do
      (cu, _) <- parseFile file
      putStrLn $ jsonToString (cuToJSON cu)
    _ -> putStrLn "Usage: JavaParser <file.java> [-o output.json] [--pretty]"
