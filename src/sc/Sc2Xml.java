package sc;

import java.io.*;
import lParser.analysis.*;
import lParser.node.*;

public class Sc2Xml extends DepthFirstAdapter
{
    private int indentation;
    private String baseFileName;
    private String fileName;
    private PrintStream out;
    
    public Sc2Xml(String baseFileName)
    {

	if (baseFileName == null){
	    this.out = System.out;
	    
	}
	else{
	    try {
		this.baseFileName = baseFileName;
		this.fileName = baseFileName + ".sc";
		this.out = new PrintStream(this.fileName);
	    }
	    
	    catch (IOException e) {
		System.err.println("Error: " + e.getMessage());
	    }
	}
    }
    
    public void defaultIn(@SuppressWarnings("unused") Node node)
    {
	for(int i = 0; i < this.indentation; i++){this.out.print(" ");}
	this.indentation++;
	this.out.println("<" + node.getClass().getSimpleName() + ">");
    }

    public void defaultOut(@SuppressWarnings("unused") Node node)
    {
	this.indentation--;
	for(int i = 0; i < this.indentation; i++){this.out.print(" ");}
	this.out.println("</" + node.getClass().getSimpleName() + ">");
    }

}
