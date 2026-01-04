/* Copyright (C) 2012 Stefan Frenz
 * 
 * This file is part of SJC, the Small Java Compiler written by Stefan Frenz.
 * 
 * SJC is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * SJC is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with SJC. If not, see <http://www.gnu.org/licenses/>.
 */

package sjc.debug;

import sjc.compbase.variable.AccVar;
import sjc.compbase.expr.ExConstStruct;
import sjc.compbase.expr.Expression;
import sjc.compbase.FilledParam;
import sjc.compbase.Mthd;
import sjc.compbase.Token;
import sjc.compbase.TokenAbstrPrintable;
import sjc.compbase.TypeRef;
import sjc.compbase.Unit;
import sjc.compbase.variable.Vrbl;

/**
 * CodePrinter: print supported statements and expressions
 * 
 * @author S. Frenz
 * @version 121029 added support for multiple init-/lupd-statements in for-loop
 *  version 121020 added "report block end" return value to stmtBlockStart
 *  version 121014 added support for assert statement
 *  version 120924 added support for expressions
 *  version 120923 initial version
 */

public abstract class CodePrinter {
  //error messages
  public abstract void reportError(Token token, String error);
  
  //statements
  public abstract void stmtAssert(Expression cond, Expression msg);
  public abstract void blockLabel(String name);
  public abstract boolean stmtBlockStart(); //returns "report block end"
  public abstract void stmtBlockEnd();
  public abstract void stmtEmpty();
  public abstract void stmtEndLoop(boolean contNotBreak, String labelToEnd);
  public abstract void stmtExpr(Expression ex);
  public abstract void stmtFor(TokenAbstrPrintable init, TokenAbstrPrintable[] furtherInit,
      TokenAbstrPrintable lupd, TokenAbstrPrintable[] furtherLupd, Expression cond, TokenAbstrPrintable loStmt);
  public abstract void stmtForEnh(TokenAbstrPrintable var, Expression iter, TokenAbstrPrintable loStmt);
  public abstract void stmtIf(Expression cond, TokenAbstrPrintable trStmt, TokenAbstrPrintable faStmt);
  public abstract void stmtReturn(Expression retVal);
  public abstract void stmtReturnMissing();
  public abstract void stmtSwitchStart(Expression cond);
  public abstract void stmtSwitchCase(Expression cond);
  public abstract void stmtSwitchEnd();
  public abstract void stmtSync(Expression syncObj, TokenAbstrPrintable syncBlock);
  public abstract void stmtThrow(Expression throwVal);
  public abstract void stmtTryStart(TokenAbstrPrintable tryBlock);
  public abstract void stmtTryCatch(Vrbl catchVar, TokenAbstrPrintable catchBlock);
  public abstract void stmtTryFinally(TokenAbstrPrintable finallyBlock);
  public abstract void stmtVrbl(Vrbl varList, int varCount);
  public abstract void stmtWhile(Expression cond, boolean inclusiveWhile, TokenAbstrPrintable loStmt);
  
  //expressions
  public abstract void exprArrayInit(TypeRef type, FilledParam par);
  public abstract void exprBin(Expression le, Expression ri, int opType, int opPar, int rank);
  public abstract void exprCall(Mthd dest, FilledParam par);
  public abstract void exprNew(TypeRef type, boolean asArray, boolean multArray,
      boolean callExplicitConstr, Unit destTypeUnit, Mthd dest, FilledParam par);
  public abstract void exprChoose(Expression le, Expression ce, Expression ri);
  public abstract void exprClssName(TypeRef destType);
  public abstract void exprConstStruct(ExConstStruct constStruct);
  public abstract void exprDeArray(Expression le, Expression ind);
  public abstract void exprEnc(TypeRef convertTo, Expression ex);
  public abstract void exprPrePst(Expression ex, int opPar, boolean pre);
  public abstract void exprString(String value);
  public abstract void exprSuper(Expression ri);
  public abstract void exprUna(Expression ex, int opType, int opPar);
  public abstract void exprVar(AccVar dest, String id, boolean isThis);
  public abstract void exprVal(TypeRef type, int intValue, long longValue);
  public abstract void exprDeref(Expression le, Expression ri, boolean leftStatic);
  
  //magic expressions
  public abstract void magcVar(AccVar dest);
  public abstract void magcCall(String id, FilledParam par);
  public abstract void magcClssMthdName(Unit unit, Mthd mthd);
}
