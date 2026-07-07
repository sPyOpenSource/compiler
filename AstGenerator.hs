module Main where

import Parsing hiding (ident, token, symbol)
import Data.Char
import Data.List (intercalate)
import System.Environment (getArgs)
import System.IO (readFile)

-- =====================================================================
-- Shared JSON
-- =====================================================================

data JSON = JString String
          | JNum Double
          | JBool Bool
          | JNull
          | JObject [(String, JSON)]
          | JArray [JSON]
  deriving (Show, Eq)

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
-- Python
-- =====================================================================

data PyModule = PyModule [PyStmt]
  deriving (Show, Eq)

data PyStmt =
    PyFunctionDef String [String] [PyStmt]
  | PyClassDef String [PyExpr] [PyStmt]
  | PyReturn (Maybe PyExpr)
  | PyAssign [PyExpr] PyExpr
  | PyAugAssign PyExpr PyAugOp PyExpr
  | PyIf PyExpr [PyStmt] (Maybe [PyStmt])
  | PyWhile PyExpr [PyStmt]
  | PyFor PyExpr PyExpr [PyStmt]
  | PyExprStmt PyExpr
  | PyPass
  | PyBreak
  | PyContinue
  deriving (Show, Eq)

data PyExpr =
    PyBoolOp PyBoolOp [PyExpr]
  | PyBinOp PyExpr PyBinOp PyExpr
  | PyUnaryOp PyUnaryOp PyExpr
  | PyLambda [String] PyExpr
  | PyIfExp PyExpr PyExpr PyExpr
  | PyDict [PyExpr] [PyExpr]
  | PySet [PyExpr]
  | PyCompare PyExpr [PyCmpOp] [PyExpr]
  | PyCall PyExpr [PyExpr] [(String, PyExpr)]
  | PyConstant PyConstantValue
  | PyAttribute PyExpr String
  | PySubscript PyExpr PyExpr
  | PyStarred PyExpr
  | PyName String
  | PyList [PyExpr]
  | PyTuple [PyExpr]
  | PySlice (Maybe PyExpr) (Maybe PyExpr) (Maybe PyExpr)
  deriving (Show, Eq)

data PyBoolOp = PyAnd' | PyOr'
  deriving (Show, Eq)

data PyBinOp = PyAdd' | PySub' | PyMult' | PyDiv' | PyFloorDiv' | PyMod' | PyPow'
             | PyLShift' | PyRShift' | PyBitOr' | PyBitXor' | PyBitAnd' | PyMatMult'
  deriving (Show, Eq)

data PyUnaryOp = PyInvert' | PyNot' | PyUAdd' | PyUSub'
  deriving (Show, Eq)

data PyCmpOp = PyEq' | PyNotEq' | PyLt' | PyLtE' | PyGt' | PyGtE' | PyIs' | PyIsNot' | PyIn' | PyNotIn'
  deriving (Show, Eq)

data PyAugOp = PyAddAssign | PySubAssign | PyMultAssign | PyDivAssign | PyModAssign
             | PyLShiftAssign | PyRShiftAssign | PyBitOrAssign | PyBitXorAssign | PyBitAndAssign | PyFloorDivAssign
             | PyPowAssign | PyMatMultAssign
  deriving (Show, Eq)

data PyConstantValue = PyNone | PyBool Bool | PyInt Integer | PyFloat Double | PyStr String | PyBytes String
  deriving (Show, Eq)

preprocessPython :: String -> String
preprocessPython s = unlines (go (lines s) [0] [])
  where
    go [] stack acc = acc ++ replicate (length stack - 1) "}"
    go (l:ls) stack acc
      | all isSpace l = go ls stack (acc ++ [l])
      | otherwise =
          let indent = length (takeWhile isSpace l)
              (newStack, inserts) = adjust stack indent []
          in go ls newStack (acc ++ inserts ++ [l])

    adjust (s:ss) i acc
      | i > s = (i:s:ss, acc ++ ["{"])
      | i < s = adjust ss i (acc ++ ["}"])
      | otherwise = (s:ss, acc)
    adjust [] i acc = ([i], acc)

-- Python Parsing utilities
pykeywords :: [String]
pykeywords = ["False","None","True","and","as","assert","async","await","break","class","continue",
              "def","del","elif","else","except","finally","for","from","global","if","import",
              "in","is","lambda","nonlocal","not","or","pass","raise","return","try","while",
              "with","yield"]

pyisKeyword :: String -> Bool
pyisKeyword = (`elem` pykeywords)

pyident :: Parser String
pyident = do
  x <- sat (\c -> isLetter c || c == '_')
  xs <- many (sat (\c -> isAlphaNum c || c == '_'))
  let name = x:xs
  if pyisKeyword name then empty else return name

pyskipWs :: Parser ()
pyskipWs = do
  many (sat isSpace <|> pycmt)
  return ()
  where
    pycmt = do string "#"; many (sat (/= '\n')); return ' '

pytoken :: Parser a -> Parser a
pytoken p = do pyskipWs; v <- p; pyskipWs; return v

pysymbol :: String -> Parser String
pysymbol s = pytoken (string s)

pyident' :: Parser String
pyident' = pytoken pyident

optionMaybe :: Parser a -> Parser (Maybe a)
optionMaybe p = (do v <- p; return (Just v)) <|> return Nothing

chainl1 :: Parser a -> Parser (a -> a -> a) -> Parser a
chainl1 p op = do x <- p; rest x
  where rest x = (do f <- op; y <- p; rest (f x y)) <|> return x

intLit :: Parser Integer
intLit = do ds <- some digit; return (read ds)

floatLit :: Parser Double
floatLit = do
  ds1 <- some digit
  char '.'
  ds2 <- some digit
  return (read (ds1 ++ "." ++ ds2))

strLit :: Parser String
strLit = do
  char '"'
  s <- many (do c <- item; if c == '"' then empty else if c == '\\' then do c2 <- item; return (escape c2) else return c)
  char '"'
  return s
  where
    escape 'n' = '\n'; escape 't' = '\t'; escape 'r' = '\r'; escape '\\' = '\\'; escape '"' = '"'; escape c = c

-- Python Expressions
pyexpr :: Parser PyExpr
pyexpr = pylambda

pylambda :: Parser PyExpr
pylambda =
     (do pysymbol "lambda"; args <- pyargList; pysymbol ":"; body <- pyexpr; return (PyLambda args body))
  <|> pyifexp

pyifexp :: Parser PyExpr
pyifexp = do
  e <- pyn_comma
  (do pysymbol "if"; c <- pyifexp; pysymbol "else"; e2 <- pyifexp; return (PyIfExp c e e2)) <|> return e

pyn_comma :: Parser PyExpr
pyn_comma = do e <- pyor; es <- many (pysymbol "," >> pyor); return (if null es then e else PyTuple (e:es))

pyor :: Parser PyExpr
pyor = chainl1 pyand (pysymbol "or" >> return (\a b -> PyBoolOp PyOr' [a, b]))

pyand :: Parser PyExpr
pyand = chainl1 pynot (pysymbol "and" >> return (\a b -> PyBoolOp PyAnd' [a, b]))

pynot :: Parser PyExpr
pynot = (do pysymbol "not"; e <- pynot; return (PyUnaryOp PyNot' e)) <|> pycomparison

pycomparison :: Parser PyExpr
pycomparison = do
  e <- pybitwise_or
  (do op <- pycmpOp; e2 <- pybitwise_or; return (PyCompare e [op] [e2])) <|> return e

pycmpOp :: Parser PyCmpOp
pycmpOp =
     (pysymbol "==" >> return PyEq')
 <|> (pysymbol "!=" >> return PyNotEq')
 <|> (pysymbol "<=" >> return PyLtE')
 <|> (pysymbol ">=" >> return PyGtE')
 <|> (pysymbol "<" >> return PyLt')
 <|> (pysymbol ">" >> return PyGt')
 <|> (pysymbol "is" >> pysymbol "not" >> return PyIsNot')
 <|> (pysymbol "is" >> return PyIs')
 <|> (pysymbol "not" >> pysymbol "in" >> return PyNotIn')
 <|> (pysymbol "in" >> return PyIn')

pybitwise_or :: Parser PyExpr
pybitwise_or = chainl1 pybitwise_xor (pysymbol "|" >> return (\a b -> PyBinOp a PyBitOr' b))

pybitwise_xor :: Parser PyExpr
pybitwise_xor = chainl1 pybitwise_and (pysymbol "^" >> return (\a b -> PyBinOp a PyBitXor' b))

pybitwise_and :: Parser PyExpr
pybitwise_and = chainl1 pyshift (pysymbol "" >> return (\a b -> PyBinOp a PyBitAnd' b))

pyshift :: Parser PyExpr
pyshift = chainl1 pyarith ((pysymbol "<<" >> return (\a b -> PyBinOp a PyLShift' b))
                            <|> (pysymbol ">>" >> return (\a b -> PyBinOp a PyRShift' b)))

pyarith :: Parser PyExpr
pyarith = chainl1 pyterm ((pysymbol "+" >> return (\a b -> PyBinOp a PyAdd' b))
                          <|> (pysymbol "-" >> return (\a b -> PyBinOp a PySub' b)))

pyterm :: Parser PyExpr
pyterm = chainl1 pyfactor ((pysymbol "*" >> return (\a b -> PyBinOp a PyMult' b))
                           <|> (pysymbol "//" >> return (\a b -> PyBinOp a PyFloorDiv' b))
                           <|> (pysymbol "/" >> return (\a b -> PyBinOp a PyDiv' b))
                           <|> (pysymbol "%" >> return (\a b -> PyBinOp a PyMod' b))
                           <|> (pysymbol "@" >> return (\a b -> PyBinOp a PyMatMult' b)))

pyfactor :: Parser PyExpr
pyfactor =
      (do pysymbol "+"; e <- pyfactor; return (PyUnaryOp PyUAdd' e))
  <|> (do pysymbol "-"; e <- pyfactor; return (PyUnaryOp PyUSub' e))
  <|> (do pysymbol "~"; e <- pyfactor; return (PyUnaryOp PyInvert' e))
  <|> pypower

pypower :: Parser PyExpr
pypower = do
  e <- pycall_or_atom
  (do pysymbol "**"; e2 <- pyfactor; return (PyBinOp e PyPow' e2)) <|> return e

pycall_or_atom :: Parser PyExpr
pycall_or_atom = do
  e <- pyatom
  suffixes e
  where
    suffixes e =
         (do pysymbol "("; args <- pyargExprList; pysymbol ")"; suffixes (PyCall e args []))
      <|> (do pysymbol "["; s <- pysubscript; pysymbol "]"; suffixes (PySubscript e s))
      <|> (do pysymbol "."; n <- pyident'; suffixes (PyAttribute e n))
      <|> return e

pysubscript :: Parser PyExpr
pysubscript = do
  me <- optionMaybe pyexpr
  case me of
    Nothing -> do
      pysymbol ":"
      stop <- optionMaybe pyexpr
      step <- optionMaybe (pysymbol ":" >> optionMaybe pyexpr)
      return (PySlice Nothing stop (join step))
    Just e -> do
      (do pysymbol ":"; stop <- optionMaybe pyexpr; step <- optionMaybe (pysymbol ":" >> optionMaybe pyexpr)
          return (PySlice (Just e) stop (join step)))
       <|> return e
  where join (Just (Just e)) = Just e; join _ = Nothing

pyargExprList :: Parser [PyExpr]
pyargExprList = (do e <- pyexpr; es <- many (pysymbol "," >> pyexpr); return (e:es)) <|> return []

pyatom :: Parser PyExpr
pyatom =
     (do pysymbol "None"; return (PyConstant PyNone))
  <|> (do pysymbol "True"; return (PyConstant (PyBool True)))
  <|> (do pysymbol "False"; return (PyConstant (PyBool False)))
  <|> (do pysymbol "lambda"; args <- pyargList; pysymbol ":"; body <- pyexpr; return (PyLambda args body))
  <|> (do n <- intLit; return (PyConstant (PyInt n)))
  <|> (do f <- floatLit; return (PyConstant (PyFloat f)))
  <|> (do s <- strLit; return (PyConstant (PyStr s)))
  <|> (do pysymbol "["; es <- pyargExprList; pysymbol "]"; return (PyList es))
  <|> (do pysymbol "("; e <- pyexpr; pysymbol ")"; return e)
  <|> (do n <- pyident'; return (PyName n))

pyargList :: Parser [String]
pyargList = (do a <- pyident'; as <- many (pysymbol "," >> pyident'); return (a:as)) <|> return []

-- Python Statements
pybody :: Parser [PyStmt]
pybody = do
  pysymbol ":"
  pysymbol "{"
  ss <- many pystmt
  pysymbol "}"
  return ss

pystmt :: Parser PyStmt
pystmt = pystmt'

pystmt' :: Parser PyStmt
pystmt' =
     (do pysymbol "def"; n <- pyident'; pysymbol "("; args <- pyargList; pysymbol ")"; body <- pybody; return (PyFunctionDef n args body))
  <|> (do pysymbol "class"; n <- pyident'; bases <- optionMaybe (do pysymbol "("; es <- pyargExprList; pysymbol ")"; return es); pysymbol ":"; body <- pybody; return (PyClassDef n (maybe [] id bases) body))
  <|> (do pysymbol "return"; e <- optionMaybe pyexpr; return (PyReturn e))
  <|> (do pysymbol "if"; c <- pyexpr; t <- pybody; e <- optionMaybe (do pysymbol "else"; pybody); return (PyIf c t e))
  <|> (do pysymbol "while"; c <- pyexpr; body <- pybody; return (PyWhile c body))
  <|> (do pysymbol "for"; t <- pyexpr; pysymbol "in"; i <- pyexpr; body <- pybody; return (PyFor t i body))
  <|> (do pysymbol "pass"; return PyPass)
  <|> (do pysymbol "break"; return PyBreak)
  <|> (do pysymbol "continue"; return PyContinue)
  <|> (do e <- pyexpr; mae <- optionMaybe (do pysymbol "="; pyexpr); case mae of Nothing -> return (PyExprStmt e); Just rhs -> return (PyAssign [e] rhs))

-- Python AST to JSON
pyModuleToJSON :: PyModule -> JSON
pyModuleToJSON (PyModule stmts) = JObject [("_type", JString "Module"), ("body", JArray (map pyStmtToJSON stmts))]

pyStmtToJSON :: PyStmt -> JSON
pyStmtToJSON (PyFunctionDef n args body) = JObject [("_type", JString "FunctionDef"), ("name", JString n), ("args", JArray (map JString args)), ("body", JArray (map pyStmtToJSON body))]
pyStmtToJSON (PyClassDef n bases body) = JObject [("_type", JString "ClassDef"), ("name", JString n), ("bases", JArray (map pyExprToJSON bases)), ("body", JArray (map pyStmtToJSON body))]
pyStmtToJSON (PyReturn e) = JObject [("_type", JString "Return"), ("value", maybe JNull pyExprToJSON e)]
pyStmtToJSON (PyAssign targets value) = JObject [("_type", JString "Assign"), ("targets", JArray (map pyExprToJSON targets)), ("value", pyExprToJSON value)]
pyStmtToJSON (PyAugAssign target op value) = JObject [("_type", JString "AugAssign"), ("target", pyExprToJSON target), ("op", pyAugOpToJSON op), ("value", pyExprToJSON value)]
pyStmtToJSON (PyIf test body orelse) = JObject [("_type", JString "If"), ("test", pyExprToJSON test), ("body", JArray (map pyStmtToJSON body)), ("orelse", maybe (JArray []) (JArray . map pyStmtToJSON) orelse)]
pyStmtToJSON (PyWhile test body) = JObject [("_type", JString "While"), ("test", pyExprToJSON test), ("body", JArray (map pyStmtToJSON body))]
pyStmtToJSON (PyFor target iter body) = JObject [("_type", JString "For"), ("target", pyExprToJSON target), ("iter", pyExprToJSON iter), ("body", JArray (map pyStmtToJSON body))]
pyStmtToJSON (PyExprStmt e) = JObject [("_type", JString "Expr"), ("value", pyExprToJSON e)]
pyStmtToJSON PyPass = JObject [("_type", JString "Pass")]
pyStmtToJSON PyBreak = JObject [("_type", JString "Break")]
pyStmtToJSON PyContinue = JObject [("_type", JString "Continue")]

pyExprToJSON :: PyExpr -> JSON
pyExprToJSON (PyBoolOp op values) = JObject [("_type", JString "BoolOp"), ("op", pyBoolOpToJSON op), ("values", JArray (map pyExprToJSON values))]
pyExprToJSON (PyBinOp left op right) = JObject [("_type", JString "BinOp"), ("left", pyExprToJSON left), ("op", pyBinOpToJSON op), ("right", pyExprToJSON right)]
pyExprToJSON (PyUnaryOp op operand) = JObject [("_type", JString "UnaryOp"), ("op", pyUnaryOpToJSON op), ("operand", pyExprToJSON operand)]
pyExprToJSON (PyLambda args body) = JObject [("_type", JString "Lambda"), ("args", JArray (map JString args)), ("body", pyExprToJSON body)]
pyExprToJSON (PyIfExp test body orelse) = JObject [("_type", JString "IfExp"), ("test", pyExprToJSON test), ("body", pyExprToJSON body), ("orelse", pyExprToJSON orelse)]
pyExprToJSON (PyDict keys values) = JObject [("_type", JString "Dict"), ("keys", JArray (map pyExprToJSON keys)), ("values", JArray (map pyExprToJSON values))]
pyExprToJSON (PySet elts) = JObject [("_type", JString "Set"), ("elts", JArray (map pyExprToJSON elts))]
pyExprToJSON (PyCompare left ops comparators) = JObject [("_type", JString "Compare"), ("left", pyExprToJSON left), ("ops", JArray (map pyCmpOpToJSON ops)), ("comparators", JArray (map pyExprToJSON comparators))]
pyExprToJSON (PyCall func args keywords) = JObject [("_type", JString "Call"), ("func", pyExprToJSON func), ("args", JArray (map pyExprToJSON args)), ("keywords", JArray (map (\(k,v) -> JObject [("arg", JString k), ("value", pyExprToJSON v)]) keywords))]
pyExprToJSON (PyConstant value) = JObject [("_type", JString "Constant"), ("value", pyConstantToJSON value)]
pyExprToJSON (PyAttribute value attr) = JObject [("_type", JString "Attribute"), ("value", pyExprToJSON value), ("attr", JString attr)]
pyExprToJSON (PySubscript value slice) = JObject [("_type", JString "Subscript"), ("value", pyExprToJSON value), ("slice", pyExprToJSON slice)]
pyExprToJSON (PyStarred value) = JObject [("_type", JString "Starred"), ("value", pyExprToJSON value)]
pyExprToJSON (PyName name) = JObject [("_type", JString "Name"), ("id", JString name)]
pyExprToJSON (PyList elts) = JObject [("_type", JString "List"), ("elts", JArray (map pyExprToJSON elts))]
pyExprToJSON (PyTuple elts) = JObject [("_type", JString "Tuple"), ("elts", JArray (map pyExprToJSON elts))]
pyExprToJSON (PySlice lower upper step) = JObject [("_type", JString "Slice"), ("lower", maybe JNull pyExprToJSON lower), ("upper", maybe JNull pyExprToJSON upper), ("step", maybe JNull pyExprToJSON step)]

pyBoolOpToJSON :: PyBoolOp -> JSON
pyBoolOpToJSON PyAnd' = JString "And"
pyBoolOpToJSON PyOr' = JString "Or"

pyBinOpToJSON :: PyBinOp -> JSON
pyBinOpToJSON PyAdd' = JString "Add"
pyBinOpToJSON PySub' = JString "Sub"
pyBinOpToJSON PyMult' = JString "Mult"
pyBinOpToJSON PyDiv' = JString "Div"
pyBinOpToJSON PyFloorDiv' = JString "FloorDiv"
pyBinOpToJSON PyMod' = JString "Mod"
pyBinOpToJSON PyPow' = JString "Pow"
pyBinOpToJSON PyLShift' = JString "LShift"
pyBinOpToJSON PyRShift' = JString "RShift"
pyBinOpToJSON PyBitOr' = JString "BitOr"
pyBinOpToJSON PyBitXor' = JString "BitXor"
pyBinOpToJSON PyBitAnd' = JString "BitAnd"
pyBinOpToJSON PyMatMult' = JString "MatMult"

pyUnaryOpToJSON :: PyUnaryOp -> JSON
pyUnaryOpToJSON PyInvert' = JString "Invert"
pyUnaryOpToJSON PyNot' = JString "Not"
pyUnaryOpToJSON PyUAdd' = JString "UAdd"
pyUnaryOpToJSON PyUSub' = JString "USub"

pyCmpOpToJSON :: PyCmpOp -> JSON
pyCmpOpToJSON PyEq' = JString "Eq"
pyCmpOpToJSON PyNotEq' = JString "NotEq"
pyCmpOpToJSON PyLt' = JString "Lt"
pyCmpOpToJSON PyLtE' = JString "LtE"
pyCmpOpToJSON PyGt' = JString "Gt"
pyCmpOpToJSON PyGtE' = JString "GtE"
pyCmpOpToJSON PyIs' = JString "Is"
pyCmpOpToJSON PyIsNot' = JString "IsNot"
pyCmpOpToJSON PyIn' = JString "In"
pyCmpOpToJSON PyNotIn' = JString "NotIn"

pyConstantToJSON :: PyConstantValue -> JSON
pyConstantToJSON PyNone = JNull
pyConstantToJSON (PyBool b) = JBool b
pyConstantToJSON (PyInt n) = JNum (fromIntegral n)
pyConstantToJSON (PyFloat f) = JNum f
pyConstantToJSON (PyStr s) = JString s
pyConstantToJSON (PyBytes s) = JString s

pyAugOpToJSON :: PyAugOp -> JSON
pyAugOpToJSON PyAddAssign = JString "Add"
pyAugOpToJSON PySubAssign = JString "Sub"
pyAugOpToJSON PyMultAssign = JString "Mult"
pyAugOpToJSON PyDivAssign = JString "Div"
pyAugOpToJSON PyModAssign = JString "Mod"
pyAugOpToJSON PyLShiftAssign = JString "LShift"
pyAugOpToJSON PyRShiftAssign = JString "RShift"
pyAugOpToJSON PyBitOrAssign = JString "BitOr"
pyAugOpToJSON PyBitXorAssign = JString "BitXor"
pyAugOpToJSON PyBitAndAssign = JString "BitAnd"
pyAugOpToJSON PyFloorDivAssign = JString "FloorDiv"
pyAugOpToJSON PyPowAssign = JString "Pow"
pyAugOpToJSON PyMatMultAssign = JString "MatMult"

-- =====================================================================
-- JavaScript
-- =====================================================================

data JSProgram = JSProgram [JSStmt]
  deriving (Show, Eq)

data JSStmt =
    JSFunctionDecl (Maybe String) [String] [JSStmt]
  | JSVarDecl String (Maybe JSExpr)
  | JSExprStmt JSExpr
  | JSIf JSExpr JSStmt (Maybe JSStmt)
  | JSWhile JSExpr JSStmt
  | JSFor (Maybe JSExpr) (Maybe JSExpr) (Maybe JSExpr) JSStmt
  | JSReturn (Maybe JSExpr)
  | JSBreak
  | JSContinue
  | JSBlock [JSStmt]
  deriving (Show, Eq)

data JSExpr =
    JSIdent String
  | JSLit JSValue
  | JSBinOp JSExpr JSBinOp JSExpr
  | JSUnaryOp JSUnaryOp JSExpr
  | JSAssign JSExpr JSExpr
  | JSCall JSExpr [JSExpr]
  | JSMember JSExpr String
  | JSArray [JSExpr]
  | JSObject [(String, JSExpr)]
  | JSArrow [String] JSExpr
  | JSThis
  deriving (Show, Eq)

data JSValue = JSNum Double | JSStr String | JSBool Bool | JSNull | JSUndefined
  deriving (Show, Eq)

data JSBinOp = JSAdd | JSSub | JSMul | JSDiv | JSMod | JSEq | JSNeq | JSLt | JSGt | JSAnd | JSOr
  deriving (Show, Eq)

data JSUnaryOp = JSNeg | JSNot | JSInc | JSDec
  deriving (Show, Eq)

jskeywords :: [String]
jskeywords = ["break","case","catch","class","const","continue","debugger","default","delete",
              "do","else","export","extends","finally","for","function","if","import","in",
              "instanceof","new","return","super","switch","this","throw","try","typeof",
              "var","void","while","with","yield","let","static","await","async",
              "true","false","null","undefined"]

jsisKeyword :: String -> Bool
jsisKeyword = (`elem` jskeywords)

jsident :: Parser String
jsident = do
  x <- sat (\c -> isLetter c || c == '_' || c == '$')
  xs <- many (sat (\c -> isAlphaNum c || c == '_' || c == '$'))
  let name = x:xs
  if jsisKeyword name then empty else return name

jsskipWs :: Parser ()
jsskipWs = do
  many (sat isSpace <|> jscmt1 <|> jscmt2)
  return ()
  where
    jscmt1 = do string "//"; many (sat (/= '\n')); return ' '
    jscmt2 = do string "/*"; jscEnd; return ' '
    jscEnd = do c <- item; case c of '*' -> (char '/' >> return ()) <|> jscEnd; _ -> jscEnd

jstoken :: Parser a -> Parser a
jstoken p = do jsskipWs; v <- p; jsskipWs; return v

jssymbol :: String -> Parser String
jssymbol s = jstoken (string s)

jsident' :: Parser String
jsident' = jstoken jsident

jsexpr :: Parser JSExpr
jsexpr = jsassign

jsassign :: Parser JSExpr
jsassign = do
  e <- jslogic
  (do jssymbol "="; e2 <- jsassign; return (JSAssign e e2)) <|> return e

jslogic :: Parser JSExpr
jslogic = chainl1 jsand (jssymbol "||" >> return (\a b -> JSBinOp a JSOr b))

jsand :: Parser JSExpr
jsand = chainl1 jsequal (jssymbol "&&" >> return (\a b -> JSBinOp a JSAnd b))

jsequal :: Parser JSExpr
jsequal = chainl1 jsrel (jssymbol "==" >> return (\a b -> JSBinOp a JSEq b))
      <|> chainl1 jsrel (jssymbol "!=" >> return (\a b -> JSBinOp a JSNeq b))

jsrel :: Parser JSExpr
jsrel = chainl1 jsadd (jssymbol "<" >> return (\a b -> JSBinOp a JSLt b))
      <|> chainl1 jsadd (jssymbol ">" >> return (\a b -> JSBinOp a JSGt b))

jsadd :: Parser JSExpr
jsadd = chainl1 jsmul (jssymbol "+" >> return (\a b -> JSBinOp a JSAdd b))
      <|> chainl1 jsmul (jssymbol "-" >> return (\a b -> JSBinOp a JSSub b))

jsmul :: Parser JSExpr
jsmul = chainl1 jsunary (jssymbol "*" >> return (\a b -> JSBinOp a JSMul b))
      <|> chainl1 jsunary (jssymbol "/" >> return (\a b -> JSBinOp a JSDiv b))
      <|> chainl1 jsunary (jssymbol "%" >> return (\a b -> JSBinOp a JSMod b))

jsunary :: Parser JSExpr
jsunary =
      (do jssymbol "-"; e <- jsunary; return (JSUnaryOp JSNeg e))
  <|> (do jssymbol "!"; e <- jsunary; return (JSUnaryOp JSNot e))
  <|> jsprimary

jsprimary :: Parser JSExpr
jsprimary = do
  e <- jsatom
  suffixes e
  where
    suffixes e =
         (do jssymbol "("; args <- jsargList; jssymbol ")"; suffixes (JSCall e args))
      <|> (do jssymbol "."; n <- jsident'; suffixes (JSMember e n))
      <|> return e

jsatom :: Parser JSExpr
jsatom =
      (do jssymbol "true"; return (JSLit (JSBool True)))
  <|> (do jssymbol "false"; return (JSLit (JSBool False)))
  <|> (do jssymbol "null"; return (JSLit JSNull))
  <|> (do jssymbol "undefined"; return (JSLit JSUndefined))
  <|> (do jssymbol "this"; return JSThis)
  <|> (do n <- intLit; return (JSLit (JSNum (fromIntegral n))))
  <|> (do f <- floatLit; return (JSLit (JSNum f)))
  <|> (do s <- strLit; return (JSLit (JSStr s)))
  <|> (do n <- jsident'; return (JSIdent n))
  <|> (do jssymbol "("; e <- jsexpr; jssymbol ")"; return e)

jsargList :: Parser [JSExpr]
jsargList = (do e <- jsexpr; es <- many (jssymbol "," >> jsexpr); return (e:es)) <|> return []

jsstmt :: Parser JSStmt
jsstmt = do
  s <- jsstmt'
  optionMaybe (jssymbol ";")
  return s

jsstmt' :: Parser JSStmt
jsstmt' =
      (do jssymbol "{"; ss <- many jsstmt; jssymbol "}"; return (JSBlock ss))
  <|> (do jssymbol "function"; n <- optionMaybe jsident'; jssymbol "("; args <- jsargList'; jssymbol ")"; body <- jsblock; return (JSFunctionDecl n args body))
  <|> (do jssymbol "var"; (n, e) <- jsdecl; return (JSVarDecl n e))
  <|> (do jssymbol "let"; (n, e) <- jsdecl; return (JSVarDecl n e))
  <|> (do jssymbol "const"; (n, e) <- jsdecl; return (JSVarDecl n e))
  <|> (do jssymbol "if"; jssymbol "("; c <- jsexpr; jssymbol ")"; t <- jsstmt; e <- optionMaybe (do jssymbol "else"; jsstmt); return (JSIf c t e))
  <|> (do jssymbol "while"; jssymbol "("; c <- jsexpr; jssymbol ")"; b <- jsstmt; return (JSWhile c b))
  <|> (do jssymbol "return"; e <- optionMaybe jsexpr; return (JSReturn e))
  <|> (do jssymbol "break"; return JSBreak)
  <|> (do jssymbol "continue"; return JSContinue)
  <|> (do e <- jsexpr; return (JSExprStmt e))

jsdecl :: Parser (String, Maybe JSExpr)
jsdecl = do n <- jsident'; e <- optionMaybe (do jssymbol "="; jsexpr); return (n, e) -- Simplified

jsblock :: Parser [JSStmt]
jsblock = do
  jssymbol "{"
  ss <- many jsstmt
  jssymbol "}"
  return ss

jsargList' :: Parser [String]
jsargList' = (do a <- jsident'; as <- many (jssymbol "," >> jsident'); return (a:as)) <|> return []

-- JS to JSON
jsProgToJSON :: JSProgram -> JSON
jsProgToJSON (JSProgram ss) = JObject [("_type", JString "Program"), ("body", JArray (map jsStmtToJSON ss))]

jsStmtToJSON :: JSStmt -> JSON
jsStmtToJSON (JSFunctionDecl n ps b) = JObject [("_type", JString "FunctionDeclaration"), ("id", maybe JNull JString n), ("params", JArray (map JString ps)), ("body", JArray (map jsStmtToJSON b))]
jsStmtToJSON (JSVarDecl n e) = JObject [("_type", JString "VariableDeclaration"), ("id", JString n), ("init", maybe JNull jsExprToJSON e)]
jsStmtToJSON (JSExprStmt e) = JObject [("_type", JString "ExpressionStatement"), ("expression", jsExprToJSON e)]
jsStmtToJSON (JSIf c t e) = JObject [("_type", JString "IfStatement"), ("test", jsExprToJSON c), ("consequent", jsStmtToJSON t), ("alternate", maybe JNull jsStmtToJSON e)]
jsStmtToJSON (JSWhile c b) = JObject [("_type", JString "WhileStatement"), ("test", jsExprToJSON c), ("body", jsStmtToJSON b)]
jsStmtToJSON (JSReturn e) = JObject [("_type", JString "ReturnStatement"), ("argument", maybe JNull jsExprToJSON e)]
jsStmtToJSON JSBreak = JObject [("_type", JString "BreakStatement")]
jsStmtToJSON JSContinue = JObject [("_type", JString "ContinueStatement")]
jsStmtToJSON (JSBlock ss) = JObject [("_type", JString "BlockStatement"), ("body", JArray (map jsStmtToJSON ss))]

jsExprToJSON :: JSExpr -> JSON
jsExprToJSON (JSIdent n) = JObject [("_type", JString "Identifier"), ("name", JString n)]
jsExprToJSON (JSLit v) = JObject [("_type", JString "Literal"), ("value", jsValToJSON v)]
jsExprToJSON (JSBinOp l op r) = JObject [("_type", JString "BinaryExpression"), ("left", jsExprToJSON l), ("operator", jsBinOpToJSON op), ("right", jsExprToJSON r)]
jsExprToJSON (JSUnaryOp op e) = JObject [("_type", JString "UnaryExpression"), ("operator", jsUnaryOpToJSON op), ("argument", jsExprToJSON e)]
jsExprToJSON (JSAssign l r) = JObject [("_type", JString "AssignmentExpression"), ("left", jsExprToJSON l), ("right", jsExprToJSON r)]
jsExprToJSON (JSCall f as) = JObject [("_type", JString "CallExpression"), ("callee", jsExprToJSON f), ("arguments", JArray (map jsExprToJSON as))]
jsExprToJSON (JSMember o n) = JObject [("_type", JString "MemberExpression"), ("object", jsExprToJSON o), ("property", JString n)]
jsExprToJSON (JSArray es) = JObject [("_type", JString "ArrayExpression"), ("elements", JArray (map jsExprToJSON es))]
jsExprToJSON (JSObject ps) = JObject [("_type", JString "ObjectExpression"), ("properties", JArray (map (\(k,v) -> JObject [("key", JString k), ("value", jsExprToJSON v)]) ps))]
jsExprToJSON (JSArrow ps e) = JObject [("_type", JString "ArrowFunctionExpression"), ("params", JArray (map JString ps)), ("body", jsExprToJSON e)]
jsExprToJSON JSThis = JObject [("_type", JString "ThisExpression")]

jsValToJSON :: JSValue -> JSON
jsValToJSON (JSNum n) = JNum n
jsValToJSON (JSStr s) = JString s
jsValToJSON (JSBool b) = JBool b
jsValToJSON JSNull = JNull
jsValToJSON JSUndefined = JString "undefined"

jsBinOpToJSON :: JSBinOp -> JSON
jsBinOpToJSON JSAdd = JString "+"
jsBinOpToJSON JSSub = JString "-"
jsBinOpToJSON JSMul = JString "*"
jsBinOpToJSON JSDiv = JString "/"
jsBinOpToJSON JSMod = JString "%"
jsBinOpToJSON JSEq = JString "=="
jsBinOpToJSON JSNeq = JString "!="
jsBinOpToJSON JSLt = JString "<"
jsBinOpToJSON JSGt = JString ">"
jsBinOpToJSON JSAnd = JString "&&"
jsBinOpToJSON JSOr = JString "||"

jsUnaryOpToJSON :: JSUnaryOp -> JSON
jsUnaryOpToJSON JSNeg = JString "-"
jsUnaryOpToJSON JSNot = JString "!"
jsUnaryOpToJSON JSInc = JString "++"
jsUnaryOpToJSON JSDec = JString "--"

-- =====================================================================
-- NASM
-- =====================================================================

data NASMProgram = NASMProgram [NASMSection]
  deriving (Show, Eq)

data NASMSection = NASMSection String [NASMLine]
  deriving (Show, Eq)

data NASMLine =
    NASMLabel String
  | NASMDirective String String
  | NASMInstruction String [String]
  | NASMComment String
  deriving (Show, Eq)

nasmIdent :: Parser String
nasmIdent = do
  x <- sat (\c -> isLetter c || c == '_' || c == '.')
  xs <- many (sat (\c -> isAlphaNum c || c == '_' || c == '.' || c == '@' || c == '$'))
  return (x:xs)

nasmToken :: Parser a -> Parser a
nasmToken p = do space; v <- p; space; return v

nasmSymbol :: String -> Parser String
nasmSymbol s = nasmToken (string s)

nasmValue :: Parser String
nasmValue = nasmIdent <|> (do ds <- some digit; return ds)

nasmIdent' :: Parser String
nasmIdent' = nasmToken nasmValue

nasmLine :: Parser NASMLine
nasmLine =
      (do l <- nasmIdent; pysymbol ":"; return (NASMLabel l))
  <|> (do pysymbol "section"; name <- nasmIdent'; return (NASMDirective "section" name))
  <|> (do pysymbol "."; name <- nasmIdent'; args <- many (nasmIdent'); return (NASMDirective name (unwords args)))
  <|> (do m <- nasmIdent'; ops <- (do o <- nasmIdent'; os <- many (nasmSymbol "," >> nasmIdent'); return (o:os)) <|> return []; return (NASMInstruction m ops))
  <|> (do pysymbol ";"; c <- many (sat (/= '\n')); return (NASMComment c))

nasmParse :: Parser NASMProgram
nasmParse = do
  lines <- many (nasmLine <* space)
  -- Simple grouping into one section for now
  return (NASMProgram [NASMSection "text" lines])

nasmProgToJSON :: NASMProgram -> JSON
nasmProgToJSON (NASMProgram sections) = JObject [("_type", JString "NASMProgram"), ("sections", JArray (map nasmSectionToJSON sections))]

nasmSectionToJSON :: NASMSection -> JSON
nasmSectionToJSON (NASMSection name lines) = JObject [("_type", JString "Section"), ("name", JString name), ("body", JArray (map nasmLineToJSON lines))]

nasmLineToJSON :: NASMLine -> JSON
nasmLineToJSON (NASMLabel l) = JObject [("_type", JString "Label"), ("name", JString l)]
nasmLineToJSON (NASMDirective n a) = JObject [("_type", JString "Directive"), ("name", JString n), ("args", JString a)]
nasmLineToJSON (NASMInstruction m o) = JObject [("_type", JString "Instruction"), ("mnemonic", JString m), ("operands", JArray (map JString o))]
nasmLineToJSON (NASMComment c) = JObject [("_type", JString "Comment"), ("text", JString c)]

-- =====================================================================
-- Main
-- =====================================================================

main :: IO ()
main = do
  args <- getArgs
  case args of
    [file] -> do
      src <- readFile file
      let ext = reverse $ takeWhile (/= '.') $ reverse file
      case ext of
        "py" -> do
          let processed = preprocessPython src
          case parse pyModule processed of
            [] -> putStrLn "Python Parse Error"
            ((m, _):_) -> putStrLn (jsonToString (pyModuleToJSON m))
        "js" -> do
          case parse jsProgram src of
            [] -> putStrLn "JS Parse Error"
            ((p, _):_) -> putStrLn (jsonToString (jsProgToJSON p))
        "asm" -> do
          case parse nasmParse src of
            [] -> putStrLn "NASM Parse Error"
            ((p, _):_) -> putStrLn (jsonToString (nasmProgToJSON p))
        "nasm" -> do
          case parse nasmParse src of
            [] -> putStrLn "NASM Parse Error"
            ((p, _):_) -> putStrLn (jsonToString (nasmProgToJSON p))
        _ -> putStrLn "Unsupported file extension"
    _ -> putStrLn "Usage: AstGenerator <file.py|file.js|file.asm>"

pyModule :: Parser PyModule
pyModule = do
  ss <- many pystmt
  return (PyModule ss)

jsProgram :: Parser JSProgram
jsProgram = do
  ss <- many jsstmt
  return (JSProgram ss)
