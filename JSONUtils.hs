module JSONUtils where

import Data.List (intercalate)

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
