import lParser.parser.*;
import lParser.lexer.*;
import lParser.node.*;
import java.io.*;
import sc.*;
import sa.*;
import ts.*;
import c3a.*;
import nasm.*;
import fg.*;
import ig.*;
import util.Error;

public class Compiler
{
	private static String baseName = null;
	private static String inputFileName = null;
	private static int verboseLevel = 0;
	private static Start scRoot = null;
	private static SaProg saRoot = null;
	private static Ts tableGlobale = null;
	private static C3a c3a = null;
	private static Nasm nasm = null;
	private static Fg flowGraph = null;
	private static FgSolution flowGraphSolution = null;
	private static Ig interferenceGraph = null;


	public static void main(String[] args) {
		processCommandLine(args);
		System.out.println("[BUILD SC] ");
		buildSc();
		/*		System.out.println("[BUILD SA] ");
		buildSa();
		System.out.println("[BUILD TS] ");
		buildTs();
		System.out.println("[TYPE CHECKING]");
		typeCheck();
		System.out.println("[BUILD C3A] ");
		buildC3a();
		System.out.println("[BUILD PRE NASM] ");
		buildPreNasm();
		System.out.println("[BUILD FLOW GRAPH] ");
		buildFg();
		System.out.println("[SOLVE FLOW GRAPH]");
		solveFg();
		System.out.println("[BUILD INTERFERENCE GRAPH] ");
		buildIg();
		System.out.println("[ALLOCATE REGISTERS]");
		interferenceGraph.allocateRegisters();
		System.out.println("[PRINT NASM]");
		nasm.afficheNasm(baseName);
		System.exit(Error.NOERROR.code());*/
	}

	private static void processCommandLine(String[] args) {
		for (int i = 0; i < args.length; i++) {
			if (args[i].equals("-v")) {
				verboseLevel = Integer.parseInt(args[++i]);
			} else {
				inputFileName = args[i];
				baseName = removeSuffix(inputFileName, ".l");
			}
		}
		if (inputFileName == null) {
			System.out.println("java Compiler input_file -v verbose_level");
			System.exit(1);
		}
	}

	private static void buildSc() {
		PushbackReader fileReader = null;
		Parser parser = null;
		try {
			fileReader = new PushbackReader(new FileReader(inputFileName));
		} catch (IOException e) {
			System.err.println("cannot open input file");
			e.printStackTrace();
		}
		try {
			parser = new Parser(new Lexer(fileReader));
			scRoot = parser.parse();
		} catch (ParserException e) {
			System.err.println("syntax error");
			e.printStackTrace();
			System.exit(Error.SYNT.code());
		} catch (LexerException e) {
			System.err.println("lexical error");
			e.printStackTrace();
			System.exit(Error.LEX.code());
		} catch (IOException e) {
			e.printStackTrace();
		}
		if (verboseLevel > 1) {
			System.out.println("[PRINT SC]");
			scRoot.apply(new Sc2Xml(baseName));
		}
	}

	private static void buildSa() {
		try {
			Sc2sa sc2sa = new Sc2sa();
			scRoot.apply(sc2sa);
			saRoot = sc2sa.getRoot();
		} catch (Exception ignored) {
		    System.out.println("exception construction arbre abstrait");
		    ignored.printStackTrace();
		}
		PrintStream out = System.out;
		if (verboseLevel > 1) {
			System.out.println("[PRINT SA]");
			try {
				out = new PrintStream(baseName + ".sa");
			}
			catch (IOException e) {
				System.err.println("Error: " + e.getMessage());
			}
			out.println(saRoot);
			//new Sa2Xml(saRoot, baseName);
		}
	}

	private static void buildTs() {
		try {
			Sa2ts sa2ts = new Sa2ts();
			saRoot.accept(sa2ts);
			tableGlobale = sa2ts.getTableGlobale();
			SaCheckLinkage saCheckLinkage = new SaCheckLinkage();
			saCheckLinkage.visit(saRoot);
			if (tableGlobale.getFct("main") == null)
				throw new ErrorException(Error.TS, "la fonction main n'est pas définie");
		} catch (ErrorException e) {
			System.err.print("ERREUR TABLE DES SYMBOLES : ");
			System.err.println(e.getMessage());
			System.exit(e.getCode());
		} catch (Exception e) {
		    e.printStackTrace();
		}
		if (verboseLevel > 1) {
			System.out.println("[PRINT TS]");
			tableGlobale.afficheTout(baseName);
		}
	}

	private static void typeCheck() {
		new SaTypeCheck(saRoot);
	}

	private static void buildC3a() {
		try{
			Sa2c3a sa2c3a = new Sa2c3a(saRoot, tableGlobale);
			saRoot.accept(sa2c3a);
			c3a = sa2c3a.getC3a();
		}
		catch(Exception e){}

		if (verboseLevel > 1) {
			System.out.println("[PRINT C3A] ");
			c3a.affiche(baseName);
		}
	}

	private static void buildPreNasm() {
		C3a2nasm c3a2nasm = new C3a2nasm(c3a, tableGlobale);
		c3a.accept(c3a2nasm);
		nasm = c3a2nasm.getNasm();
		if (verboseLevel > 1) {
			System.out.println("[PRINT PRE NASM] ");
			nasm.affichePreNasm(baseName);
		}
	}


	private static void buildFg() {
		flowGraph = new Fg(nasm);
		if (verboseLevel > 1) {
			System.out.println("[PRINT FLOW GRAPH] ");
			flowGraph.affiche(baseName);
		}
	}

	private static void solveFg() {
		flowGraphSolution = new FgSolution(nasm, flowGraph);
		if (verboseLevel > 1) {
			System.out.println("[PRINT FLOW GRAPH SOLUTION] ");
			flowGraphSolution.affiche(baseName);
		}
	}

	private static void buildIg() {
		interferenceGraph = new Ig(flowGraphSolution);
		if (verboseLevel > 1) {
			System.out.println("[PRINT INTERFERENCE GRAPH] ");
			interferenceGraph.affiche(baseName);
		}
	}

	/*catch (Exception e)
	{
		e.printStackTrace();
		System.out.println(e.getMessage());
		System.exit(1);
	}
    }*/

    public static String removeSuffix(final String s, final String suffix)
    {
		if (s != null && suffix != null && s.endsWith(suffix)){
			return s.substring(0, s.length() - suffix.length());
		}
		return s;
    }

}
