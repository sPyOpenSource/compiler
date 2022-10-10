package jx.compiler.symbols;

import java.io.IOException;
import jx.zero.Debug;

import jx.compiler.imcode.MethodStackFrame;
import jx.compiler.imcode.graph.IMNode;
import jx.compiler.execenv.ExtendedDataOutputStream;
import jx.compiler.execenv.TypeMap;

public class StackMapSTEntry extends SymbolTableEntryBase {

    private final MethodStackFrame frame;  

    private final boolean[] lvars;
    private final boolean[] vars;
    private final boolean[] oprs;
    private final int       immediateNCIndexPre;
    private final IMNode    node;

    public StackMapSTEntry(IMNode node,int preIP,MethodStackFrame frame) {
	this.frame     = frame;
	this.vars      = frame.getVarMap();
	this.lvars     = node.getVarStackMap();
        this.node      = node;
	this.oprs      = frame.getOprMap();
	this.immediateNCIndexPre = preIP;
    }

    @Override
    public String getDescription() {
	return super.getDescription()+",symbols.StackMapSTEntry";
    }
    
    @Override
    public boolean isResolved() {
	return false;
    }

    @Override
    public int getValue() {
	Debug.throwError();
	return 0;
    }

    @Override
    public void apply(byte[] code, int codeBase) {
	Debug.throwError();
    }

    @Override
    public void writeEntry(ExtendedDataOutputStream out) throws IOException {
	super.writeEntry(out);
	out.writeInt(immediateNCIndexPre);      
	TypeMap.writeMap(out, stackMap(), true);
    }    

    private boolean[] stackMap() {
	int extraSpace = (frame.getExtraSpace()-4)/4;
	int lvarSize   = frame.getLVarMapSize();
	int varSize    = frame.getVarMapSize();
	int m;

	boolean[] currStackMap = new boolean[extraSpace + lvarSize + varSize + oprs.length];

	for (int i=0;i<extraSpace;i++) {
	    currStackMap[i] = false;
	}

	m=extraSpace;
	if (lvars!=null) {
            System.arraycopy(lvars, 0, currStackMap, m, lvars.length);
	}

	m+=lvarSize;
        System.arraycopy(vars, 0, currStackMap, m, vars.length);

	m+=varSize;
        System.arraycopy(oprs, 0, currStackMap, m, oprs.length);

	if (node.getCompilerOptions().isOption("dumpStackMaps")) {Debug.out.println(toString(currStackMap));}
	    
	return currStackMap;
    }

    public String toString(boolean[] map) {
        String ret="StackMapSTEntry:"+node.getLineInfo();
        for (int i=0;i<map.length;i++) {
           if (map[i]) ret+="R"; else ret+=".";
        } 
	return ret + " " + node.toString();
    }
}
