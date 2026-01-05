import sa.*;
import ts.*;

public class SaVM {

  public static void main(String[] args) {
    int verboseLevel = 0;
    String saFileName = null;

    try {
        
		for (int i = 0; i < args.length; i++) {
			if(args[i].equals("-v"))
				verboseLevel = Integer.parseInt(args[++i]);
			else if(args[i].equals("-sa"))
				saFileName = args[++i];
		}
		if(saFileName == null){
			System.out.println("java SaVM -sa saFile -v verboseLevel");
			System.exit(1);
		}

      if(verboseLevel > 0)
		  System.err.println("parsing xml document");
      if(verboseLevel > 0)
		  System.err.println("building sa tree");
      
	  SaProg prog = new LoadSa(saFileName).getRoot();
      if(verboseLevel > 0)
		  System.out.println(prog);
      
      if(verboseLevel > 0)
	  	System.err.println("building symbol table");
        Sa2ts sa2ts = new Sa2ts();
        prog.accept(sa2ts);
        Ts tableGlobale = sa2ts.getTableGlobale();

      if(verboseLevel > 0)
		  System.err.println("evaluating sa tree");
      SaEval saEval = new SaEval(prog, tableGlobale);
      saEval.affiche(null);
      
    } catch (Exception e) {
      e.printStackTrace();
    }
  }
  
}
