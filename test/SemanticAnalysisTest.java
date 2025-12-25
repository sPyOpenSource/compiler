import norswap.autumn.AutumnTestFixture;
import norswap.autumn.positions.LineMapString;
import norswap.lang.rust.SemanticAnalysis;
import norswap.lang.rust.RustGrammar;
import norswap.lang.rust.ast.Node;
import norswap.uranium.Reactor;
import norswap.uranium.UraniumTestFixture;
import norswap.utils.visitors.Walker;
import org.junit.Test;

/**
 * NOTE(norswap): These tests were derived from the {@link InterpreterTests} and don't test anything
 * more, but show how to idiomatically test semantic analysis. using {@link UraniumTestFixture}.
 */
public final class SemanticAnalysisTest extends UraniumTestFixture
{
    // ---------------------------------------------------------------------------------------------

    private final RustGrammar grammar = new RustGrammar();
    private final AutumnTestFixture autumnFixture = new AutumnTestFixture();

    {
        autumnFixture.rule = grammar.root();
        autumnFixture.runTwice = false;
        autumnFixture.bottomClass = this.getClass();
    }

    private String input;

    @Override protected Object parse (String input) {
        this.input = input;
        return autumnFixture.success(input).topValue();
    }

    @Override protected String astNodeToString (Object ast) {
        LineMapString map = new LineMapString("<test>", input);
        return ast.toString() + " (" + ((Node) ast).span.startString(map) + ")";
    }

    // ---------------------------------------------------------------------------------------------

    @Override protected void configureSemanticAnalysis (Reactor reactor, Object ast) {
        Walker<Node> walker = SemanticAnalysis.createWalker(reactor);
        walker.walk(((Node) ast));
    }

    // ---------------------------------------------------------------------------------------------

    @Test public void testLiteralsAndUnary() {
        successInput("return 42");
        successInput("return 42.0");
        successInput("return \"hello\"");
        successInput("return (42)");
        successInput("return [1, 2, 3]");
        successInput("return true");
        successInput("return false");
        successInput("return null");
        successInput("return !false");
        successInput("return !true");
        successInput("return !!true");
    }

    // ---------------------------------------------------------------------------------------------

    @Test public void testNumericBinary() {
        successInput("return 1 + 2");
        successInput("return 2 - 1");
        successInput("return 2 * 3");
        successInput("return 2 / 3");
        successInput("return 3 / 2");
        successInput("return 2 % 3");
        successInput("return 3 % 2");

        successInput("return 1.0 + 2.0");
        successInput("return 2.0 - 1.0");
        successInput("return 2.0 * 3.0");
        successInput("return 2.0 / 3.0");
        successInput("return 3.0 / 2.0");
        successInput("return 2.0 % 3.0");
        successInput("return 3.0 % 2.0");

        successInput("return 1 + 2.0");
        successInput("return 2 - 1.0");
        successInput("return 2 * 3.0");
        successInput("return 2 / 3.0");
        successInput("return 3 / 2.0");
        successInput("return 2 % 3.0");
        successInput("return 3 % 2.0");

        successInput("return 1.0 + 2");
        successInput("return 2.0 - 1");
        successInput("return 2.0 * 3");
        successInput("return 2.0 / 3");
        successInput("return 3.0 / 2");
        successInput("return 2.0 % 3");
        successInput("return 3.0 % 2");

        failureInputWith("return 2 + true", "Trying to add i32 with Bool");
        failureInputWith("return true + 2", "Trying to add Bool with i32");
        failureInputWith("return 2 + [1]", "Trying to add i32 with i32[]");
        failureInputWith("return [1] + 2", "Trying to add i32[] with i32");
    }

    // ---------------------------------------------------------------------------------------------

    @Test public void testOtherBinary() {
        successInput("return true && false");
        successInput("return false && true");
        successInput("return true && true");
        successInput("return true || false");
        successInput("return false || true");
        successInput("return false || false");

        failureInputWith("return false || 1",
            "Attempting to perform binary logic on non-boolean type: i32");
        failureInputWith("return 2 || true",
            "Attempting to perform binary logic on non-boolean type: i32");

        successInput("return 1 + \"a\"");
        successInput("return \"a\" + 1");
        successInput("return \"a\" + true");

        successInput("return 1 == 1");
        successInput("return 1 == 2");
        successInput("return 1.0 == 1.0");
        successInput("return 1.0 == 2.0");
        successInput("return true == true");
        successInput("return false == false");
        successInput("return true == false");
        successInput("return 1 == 1.0");

        failureInputWith("return true == 1", "Trying to compare incomparable types Bool and i32");
        failureInputWith("return 2 == false", "Trying to compare incomparable types i32 and Bool");

        successInput("return \"hi\" == \"hi\"");
        successInput("return [1] == [1]");

        successInput("return 1 != 1");
        successInput("return 1 != 2");
        successInput("return 1.0 != 1.0");
        successInput("return 1.0 != 2.0");
        successInput("return true != true");
        successInput("return false != false");
        successInput("return true != false");
        successInput("return 1 != 1.0");

        failureInputWith("return true != 1", "Trying to compare incomparable types Bool and i32");
        failureInputWith("return 2 != false", "Trying to compare incomparable types i32 and Bool");

        successInput("return \"hi\" != \"hi\"");
        successInput("return [1] != [1]");
    }

    // ---------------------------------------------------------------------------------------------

    @Test public void testVarDecl() {
        successInput("let x: i32 = 1; return x");
        successInput("let x: f32 = 2.0; return x");

        successInput("let x: i32 = 0; return x = 3");
        successInput("let x: String = \"0\"; return x = \"S\"");

        failureInputWith("let x: i32 = true", "expected i32 but got Bool");
        failureInputWith("return x + 1", "Could not resolve: x");
        failureInputWith("return x + 1; let x: i32 = 2", "Variable used before declaration: x");

        // implicit conversions
        successInput("let x: f32 = 1 ; x = 2");
    }

    // ---------------------------------------------------------------------------------------------

    @Test public void testRootAndBlock () {
        successInput("return");
        successInput("return 1");
        successInput("return 1; return 2");

        successInput("print(\"a\")");
        successInput("print(\"a\" + 1)");
        successInput("print(\"a\"); print(\"b\")");

        successInput("{ print(\"a\"); print(\"b\") }");

        successInput(
            "let x: i32 = 1;" +
            "{ print(\"\" + x); let x: i32 = 2; print(\"\" + x) }" +
            "print(\"\" + x)");
    }

    // ---------------------------------------------------------------------------------------------

    @Test public void testCalls() {
        successInput(
            "fn add (a: i32, b: i32): i32 { return a + b } " +
            "return add(4, 7)");

        successInput(
            "struct Point { let x: i32; let y: i32 }" +
            "return $Point(1, 2)");

        successInput("let str: String = null; return print(str + 1)");

        failureInputWith("return print(1)", "argument 0: expected String but got i32");
    }

    // ---------------------------------------------------------------------------------------------

    @Test public void testArrayStructAccess() {
        successInput("return [1][0]");
        successInput("return [1.0][0]");
        successInput("return [1, 2][1]");

        failureInputWith("return [1][true]", "Indexing an array using a non-Int-valued expression");

        // TODO make this legal?
        // successInput("[].length", 0L);

        successInput("return [1].length");
        successInput("return [1, 2].length");

        successInput("let array: i32[] = null; return array[0]");
        successInput("let array: i32[] = null; return array.length");

        successInput("let x: i32[] = [0, 1]; x[0] = 3; return x[0]");
        successInput("let x: i32[] = []; x[0] = 3; return x[0]");
        successInput("let x: i32[] = null; x[0] = 3");

        successInput(
            "struct P { let x: i32; let y: i32 }" +
            "return $P(1, 2).y");

        successInput(
            "struct P { let x: i32; let y: i32 }" +
            "let p: P = null;" +
            "return p.y");

        successInput(
            "struct P { let x: i32; let y: i32 }" +
            "let p: P = $P(1, 2);" +
            "p.y = 42;" +
            "return p.y");

        successInput(
            "struct P { let x: i32; let y: i32 }" +
            "let p: P = null;" +
            "p.y = 42");

        failureInputWith(
            "struct P { let x: i32; let y: i32 }" +
            "return $P(1, true)",
            "argument 1: expected i32 but got Bool");

        failureInputWith(
            "struct P { let x: i32; let y: i32 }" +
            "return $P(1, 2).z",
            "Trying to access missing field z on struct P");
    }

    // ---------------------------------------------------------------------------------------------

    @Test
    public void testIfWhile () {
        successInput("if (true) return 1 else return 2");
        successInput("if (false) return 1 else return 2");
        successInput("if (false) return 1 else if (true) return 2 else return 3 ");
        successInput("if (false) return 1 else if (false) return 2 else return 3 ");

        successInput("let i: i32 = 0; while (i < 3) { print(\"\" + i); i = i + 1 } ");

        failureInputWith("if 1 return 1",
            "If statement with a non-boolean condition of type: i32");
        failureInputWith("while 1 return 1",
            "While statement with a non-boolean condition of type: i32");
    }

    // ---------------------------------------------------------------------------------------------

    @Test public void testInference() {
        successInput("let array: i32[] = []");
        successInput("let array: String[] = []");
        successInput("fn use_array (array: i32[]) {} ; use_array([])");
    }

    // ---------------------------------------------------------------------------------------------

    @Test public void testTypeAsValues() {
        successInput("struct S{} ; return \"\"+ S");
        successInput("struct S{} ; let type: Type = S ; return \"\"+ type");
    }

    // ---------------------------------------------------------------------------------------------

    @Test public void testUnconditionalReturn()
    {
        successInput("fn f(): i32 { if (true) return 1 else return 2 } ; return f()");

        // TODO: would be nice if this pinpointed the if-statement as missing the return,
        //   not the whole function declaration
        failureInputWith("fn f(): i32 { if (true) return 1 } ; return f()",
            "Missing return in function");
    }

    // ---------------------------------------------------------------------------------------------
}
