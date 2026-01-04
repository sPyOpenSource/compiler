package lang.rust;

import norswap.autumn.AutumnTestFixture;
import norswap.lang.rust.RustGrammar;
import norswap.lang.rust.ast.*;

import static java.util.Arrays.asList;
import static norswap.lang.rust.ast.BinaryOperator.*;
import norswap.lang.rust.ast.expr.*;
import org.junit.Test;

public class GrammarTests extends AutumnTestFixture {
    // ---------------------------------------------------------------------------------------------

    private final RustGrammar grammar = new RustGrammar();
    private final Class<?> grammarClass = grammar.getClass();

    // ---------------------------------------------------------------------------------------------

    private static IntLiteral intlit (long i) {
        return new IntLiteral(null, i);
    }

    private static FloatLiteral floatlit (double d) {
        return new FloatLiteral(null, d);
    }

    // ---------------------------------------------------------------------------------------------

    @Test
    public void testLiteralsAndUnary () {
        rule = grammar.expression;

        successExpect("42", intlit(42));
        successExpect("42.0", floatlit(42d));
        successExpect("\"hello\"", new StringLiteral(null, "hello"));
        successExpect("(42)", new Parenthesized(null, intlit(42)));
        successExpect("[1, 2, 3]", new ArrayLiteral(null, asList(intlit(1), intlit(2), intlit(3))));
        successExpect("true", new Reference(null, "true"));
        successExpect("false", new Reference(null, "false"));
        successExpect("null", new Reference(null, "null"));
        successExpect("!false", new UnaryExpression(null, UnaryOperator.NOT, new Reference(null, "false")));
    }

    // ---------------------------------------------------------------------------------------------

    @Test
    public void testNumericBinary () {
        successExpect("1 + 2", new BinaryExpression(null, intlit(1), ADD, intlit(2)));
        successExpect("2 - 1", new BinaryExpression(null, intlit(2), SUBTRACT,  intlit(1)));
        successExpect("2 * 3", new BinaryExpression(null, intlit(2), MULTIPLY, intlit(3)));
        successExpect("2 / 3", new BinaryExpression(null, intlit(2), DIVIDE, intlit(3)));
        successExpect("2 % 3", new BinaryExpression(null, intlit(2), REMAINDER, intlit(3)));

        successExpect("1.0 + 2.0", new BinaryExpression(null, floatlit(1), ADD, floatlit(2)));
        successExpect("2.0 - 1.0", new BinaryExpression(null, floatlit(2), SUBTRACT, floatlit(1)));
        successExpect("2.0 * 3.0", new BinaryExpression(null, floatlit(2), MULTIPLY, floatlit(3)));
        successExpect("2.0 / 3.0", new BinaryExpression(null, floatlit(2), DIVIDE, floatlit(3)));
        successExpect("2.0 % 3.0", new BinaryExpression(null, floatlit(2), REMAINDER, floatlit(3)));

        successExpect("2 * (4-1) * 4.0 / 6 % (2+1)", new BinaryExpression(null,
            new BinaryExpression(null,
                new BinaryExpression(null,
                    new BinaryExpression(null,
                        intlit(2),
                        MULTIPLY,
                        new Parenthesized(null, new BinaryExpression(null,
                            intlit(4),
                            SUBTRACT,
                            intlit(1)))),
                    MULTIPLY,
                    floatlit(4d)),
                DIVIDE,
                intlit(6)),
            REMAINDER,
            new Parenthesized(null, new BinaryExpression(null,
                intlit(2),
                ADD,
                intlit(1)))));
    }

    // ---------------------------------------------------------------------------------------------

    @Test public void testArrayStructAccess () {
        rule = grammar.expression;
        successExpect("[1][0]", new ArrayAccess(null,
            new ArrayLiteral(null, asList(intlit(1))), intlit(0)));
        successExpect("[1].length", new FieldAccess(null,
            new ArrayLiteral(null, asList(intlit(1))), "length"));
        successExpect("p.x", new FieldAccess(null, new Reference(null, "p"), "x"));
    }

    // ---------------------------------------------------------------------------------------------

    @Test public void testDeclarations() {
        rule = grammar.statement;

        successExpect("let x: i32 = 1", new VarDeclaration(null,
            "x", new SimpleType(null, "i32"), intlit(1)));

        successExpect("struct P {}", new StructDeclaration(null, "P", asList()));

        successExpect("struct P { let x: i32; let y: i32 }",
            new StructDeclaration(null, "P", asList(
                new FieldDeclaration(null, "x", new SimpleType(null, "i32")),
                new FieldDeclaration(null, "y", new SimpleType(null, "i32")))));

        successExpect("fn f (x: i32): i32 { return 1 }",
            new FunDeclaration(null, "f",
                asList(new ParameterNode(null, "x", new SimpleType(null, "i32"))),
                new SimpleType(null, "i32"),
                new Block(null, asList(new StReturn(null, intlit(1))))));
    }

    // ---------------------------------------------------------------------------------------------

    @Test public void testStatements() {
        rule = grammar.statement;

        successExpect("return", new StReturn(null, null));
        successExpect("return 1", new StReturn(null, intlit(1)));
        successExpect("print(1)", new StExpr(null,
            new MethodCall(null, new Reference(null, "print"), asList(intlit(1)))));
        successExpect("{ return }", new Block(null, asList(new StReturn(null, null))));


        successExpect("if true return 1 else return 2", new StIf(null, new Reference(null, "true"),
            new StReturn(null, intlit(1)),
            new StReturn(null, intlit(2))));

        successExpect("if false return 1 else if true return 2 else return 3 ",
            new StIf(null, new Reference(null, "false"),
                new StReturn(null, intlit(1)),
                new StIf(null, new Reference(null, "true"),
                    new StReturn(null, intlit(2)),
                    new StReturn(null, intlit(3)))));

        successExpect("while 1 < 2 { return } ", new StWhile(null,
            new BinaryExpression(null, intlit(1), LOWER, intlit(2)),
            new Block(null, asList(new StReturn(null, null)))));
    }

    // ---------------------------------------------------------------------------------------------
}
