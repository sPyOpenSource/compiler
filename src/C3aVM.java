import java.io.IOException;
import c3a.C3a;
import c3a.C3aEval;
import c3a.LoadC3a;
import ts.Ts;
import ts.TsParser;

public class C3aVM {
    private int verboseLevel = 0;
    private final TsParser stParser;
    private final String symbolsTableFileName;
    private final String C3AFileName;
    private final int stackSize;
    private final C3a code;
    private final Ts globalTable;
    private final LoadC3a loadC3a;
    
    public C3aVM(String symbolsTableFileName, String C3AFileName, int stackSize, int verboseLevel){
	this.stackSize = stackSize;
	this.verboseLevel = verboseLevel;
	this.symbolsTableFileName = symbolsTableFileName;
	this.C3AFileName = C3AFileName;
	stParser = new TsParser();
	this.globalTable = stParser.parse(symbolsTableFileName);
	loadC3a = new LoadC3a(C3AFileName, this.globalTable);
	this.code = loadC3a.getC3a();
    }
    
    public void run() throws IOException {
	if(verboseLevel > 0)
	    code.affiche(null);
	C3aEval c3aEval = new C3aEval(code, globalTable, stackSize, verboseLevel);
	code.accept(c3aEval);
	c3aEval.affiche(null);
	//        eval.affiche(C3AFileName.substring(0, C3AFileName.length() - 4));

    }

    public static void main(String[] args){
	int verboseLevel = 0;
	String symbolsTableFileName = null;
	String C3AFileName = null;
	int stackSize = 10000;

        try {
	    for (int i = 0; i < args.length; i++) {
                switch (args[i]) {
                    case "-v":
                        verboseLevel = Integer.parseInt(args[++i]);
                        break;
                    case "-s":
                        stackSize = Integer.parseInt(args[++i]);
                        break;
                    case "-c3a":
                        C3AFileName = args[++i];
                        break;
                    case "-ts":
                        symbolsTableFileName = args[++i];
                        break;
                    default:
                        break;
                }
	    }
	    if(C3AFileName == null || symbolsTableFileName == null){
		System.out.println("java C3aVM -c3a C3AFile -ts TSFile -s stackSize -v verboseLevel");
		System.exit(1);
	    }
	    C3aVM vm = new C3aVM(symbolsTableFileName, C3AFileName, stackSize, verboseLevel);
	    vm.run();
	}catch(IOException e){
            e.printStackTrace();
        }
    }
}
