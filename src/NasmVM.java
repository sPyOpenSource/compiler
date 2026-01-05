import nasm.NasmEval;
import nasm.Nasm;
import nasm.LoadNasm;
import java.io.IOException;

public class NasmVM {
    private final int verboseLevel;
    private final int stackSize;
    private Nasm code;
    private final String nasmFileName;

    public NasmVM(String nasmFileName, int stackSize, int verboseLevel){
	this.nasmFileName = nasmFileName;
	this.stackSize = stackSize;
	this.verboseLevel = verboseLevel;
    }
    
    public void run() throws IOException {
	LoadNasm loadNasm = new LoadNasm(nasmFileName);
	this.code = loadNasm.getNasm();

	if(verboseLevel > 0)
       		code.afficheNasm(null);
	
        NasmEval eval = new NasmEval(code, stackSize, verboseLevel);
	eval.displayOutput();
    }

    public static void main(String[] args){
	int verboseLevel = 0;
	int stackSize = 10000;
	String nasmFileName = "/Users/xuyi/Source/Java/picos/bts_dsk.yasm";

        try {
	    for (int i = 0; i < args.length; i++) {
                switch (args[i]) {
                    case "-v":
                        verboseLevel = Integer.parseInt(args[++i]);
                        break;
                    case "-s":
                        stackSize = Integer.parseInt(args[++i]);
                        break;
                    case "-nasm":
                        nasmFileName = args[++i];
                        break;
                    default:
                        break;
                }
	    }
	    if(nasmFileName == null){
		System.out.println("java NasmVM -nasm nasmFile -s stackSize -v verboseLevel");
		System.exit(1);
	    }
	    var vm = new NasmVM(nasmFileName, stackSize, verboseLevel);
	    vm.run();
	}catch(IOException e){
            e.printStackTrace();
        }
    }
}

/*
        else{
            var pathTab = preNasmFilePath.split("/");
            var fileNamePreNasm = pathTab[pathTab.length - 1];
            var fileName =  outputPath + fileNamePreNasm.substring(0, fileNamePreNasm.length()-3)+ ".out";
            vm.displayOutput(fileName);
        }
    }
*/
