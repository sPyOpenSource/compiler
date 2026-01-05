package sa;

import lParser.analysis.*;
import lParser.node.*;
import util.Type;

public class Sc2sa extends DepthFirstAdapter
{
    private SaNode returnValue;
    private Type returnType;
    private SaProg saRoot = null;

    public void defaultIn(@SuppressWarnings("unused") Node node)
    {
	//System.out.println("<" + node.getClass().getSimpleName() + ">");
    }

    public void defaultOut(@SuppressWarnings("unused") Node node)
    {
	//System.out.println("</" + node.getClass().getSimpleName() + ">");
    }
    
    public SaProg getRoot()
    {
	return this.saRoot;
    }


    // exp3 = {plus} exp3 plus exp4 
    /*    @Override
    public void caseAPlusExp3(APlusExp3 node)
    {
	SaExp op1 = null;
	SaExp op2 = null;
        inAPlusExp3(node);
	node.getExp3().apply(this);
	op1 = (SaExp) this.returnValue;
	node.getExp4().apply(this);
	op2 = (SaExp) this.returnValue;
	this.returnValue = new SaExpAdd(op1, op2);
        outAPlusExp3(node);
	}*/
}
