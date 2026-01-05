package sa;

import saParser.analysis.DepthFirstAdapter;
import saParser.lexer.Lexer;
import saParser.lexer.LexerException;
import saParser.node.*;
import saParser.parser.Parser;
import saParser.parser.ParserException;
import util.Error;
import util.Type;

import java.io.FileReader;
import java.io.IOException;
import java.io.PushbackReader;

public class LoadSa extends DepthFirstAdapter {
    private SaProg root;
    private SaNode returnValue;
    private Type returnType;

    public LoadSa(String saFileName) {
        PushbackReader fileReader = null;
        Parser parser = null;
        Start root = null;
        try {
            fileReader = new PushbackReader(new FileReader(saFileName));
        } catch (IOException e) {
            System.err.println("cannot open input file");
            e.printStackTrace();
        }
        try {
            parser = new Parser(new Lexer(fileReader));
            root = parser.parse();
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
        root.apply(this);
    }

    public void defaultIn(Node node)
    {
        //System.out.println("<" + node.getClass().getSimpleName() + ">");
    }

    public void defaultOut(Node node)
    {
        //System.out.println("</" + node.getClass().getSimpleName() + ">");
    }

    public SaProg getRoot(){return root;}




    
// prog =         po saprog ldecvar ldecfonc pf
    @Override
    public void caseAProg(AProg node)
    {
        inAProg(node);
	SaLDecVar ldecVar = null;
	SaLDecFonc ldecFonc = null;
        if(node.getLdecvar() != null)
        {
            node.getLdecvar().apply(this);
	    ldecVar = (SaLDecVar) returnValue;
        }
        if(node.getLdecfonc() != null)
        {
            node.getLdecfonc().apply(this);
	    ldecFonc  = (SaLDecFonc) returnValue;
        }
	root = new SaProg(ldecVar, ldecFonc);
        outAProg(node);
    }

// exp = {add}       po saexpadd   [op1]:exp [op2]:exp pf
    @Override
    public void caseAAddExp(AAddExp node)
    {
        inAAddExp(node);
	node.getOp1().apply(this);
	SaExp op1 = (SaExp) returnValue;
	node.getOp2().apply(this);
	SaExp op2 = (SaExp) returnValue;
	returnValue = new SaExpAdd(op1,op2);
        outAAddExp(node);
    }

// exp = {and}       po saexpand   [op1]:exp [op2]:exp pf
    @Override
    public void caseAAndExp(AAndExp node)
    {
        inAAndExp(node);
	node.getOp1().apply(this);
	SaExp op1 = (SaExp) returnValue;
	node.getOp2().apply(this);
	SaExp op2 = (SaExp) returnValue;
	returnValue = new SaExpAnd(op1,op2);
        outAAndExp(node);
    }

// exp = {div}       po saexpdiv   [op1]:exp [op2]:exp pf
    @Override
    public void caseADivExp(ADivExp node)
    {
        inADivExp(node);
	node.getOp1().apply(this);
	SaExp op1 = (SaExp) returnValue;
	node.getOp2().apply(this);
	SaExp op2 = (SaExp) returnValue;
	returnValue = new SaExpDiv(op1,op2);
        outADivExp(node);
    }

// exp = {equal}     po saexpequal [op1]:exp [op2]:exp pf
    @Override
    public void caseAEqualExp(AEqualExp node)
    {
        inAEqualExp(node);
	node.getOp1().apply(this);
	SaExp op1 = (SaExp) returnValue;
	node.getOp2().apply(this);
	SaExp op2 = (SaExp) returnValue;
	returnValue = new SaExpEqual(op1,op2);
        outAEqualExp(node);
    }

// exp = {inf}       po saexpinf   [op1]:exp [op2]:exp pf
    @Override
    public void caseAInfExp(AInfExp node)
    {
        inAInfExp(node);
	node.getOp1().apply(this);
	SaExp op1 = (SaExp) returnValue;
	node.getOp2().apply(this);
	SaExp op2 = (SaExp) returnValue;
	returnValue = new SaExpInf(op1,op2);
        outAInfExp(node);
    }

// exp = {mult}      po saexpmult  [op1]:exp [op2]:exp pf
    @Override
    public void caseAMultExp(AMultExp node)
    {
        inAMultExp(node);
	node.getOp1().apply(this);
	SaExp op1 = (SaExp) returnValue;
	node.getOp2().apply(this);
	SaExp op2 = (SaExp) returnValue;
	returnValue = new SaExpMult(op1,op2);
        outAMultExp(node);
    }

    @Override
    public void caseAModuloExp(AModuloExp node)
    {
        inAModuloExp(node);
        node.getOp1().apply(this);
        SaExp op1 = (SaExp) returnValue;
        node.getOp2().apply(this);
        SaExp op2 = (SaExp) returnValue;
        returnValue = new SaExpModulo(op1,op2);
        outAModuloExp(node);
    }


    // exp = {or}        po saexpor    [op1]:exp [op2]:exp pf
    @Override
    public void caseAOrExp(AOrExp node)
    {
        inAOrExp(node);
	node.getOp1().apply(this);
	SaExp op1 = (SaExp) returnValue;
	node.getOp2().apply(this);
	SaExp op2 = (SaExp) returnValue;
	returnValue = new SaExpOr(op1,op2);
    }

// exp = {sub}       po saexpsub   [op1]:exp [op2]:exp pf
    @Override
    public void caseASubExp(ASubExp node)
    {
        inASubExp(node);
	node.getOp1().apply(this);
	SaExp op1 = (SaExp) returnValue;
	node.getOp2().apply(this);
	SaExp op2 = (SaExp) returnValue;
	returnValue = new SaExpSub(op1,op2);
        outASubExp(node);
    }

// exp = {not}       po saexpnot         exp pf
    @Override
    public void caseANotExp(ANotExp node)
    {
        inANotExp(node);
	node.getExp().apply(this);
	SaExp exp = (SaExp) returnValue;
	returnValue = new SaExpNot(exp);
        outANotExp(node);
    }

// exp = {appel}     po saexpappel appel pf
    @Override
    public void caseAAppelExp(AAppelExp node)
    {
        inAAppelExp(node);
	node.getAppel().apply(this);
	SaAppel appel = (SaAppel) returnValue;
	returnValue = new SaExpAppel(appel);
        outAAppelExp(node);
    }

// exp = {var}       po saexpvar var pf
    @Override
    public void caseAVarExp(AVarExp node)
    {
        inAVarExp(node);
	node.getVar().apply(this);
	SaVar var = (SaVar) returnValue;
	returnValue = new SaExpVar(var);
        outAVarExp(node);
    }

// exp = {faux}      faux
    @Override
    public void caseAFauxExp(AFauxExp node)
    {
        inAFauxExp(node);
	returnValue = new SaExpFaux();
        outAFauxExp(node);
    }

// exp = {vrai}      vrai
    @Override
    public void caseAVraiExp(AVraiExp node)
    {
        inAVraiExp(node);
	returnValue = new SaExpVrai();
        outAVraiExp(node);
    }

// exp = {int}       integer
    @Override
    public void caseAIntExp(AIntExp node)
    {
        inAIntExp(node);
	int value = Integer.parseInt(node.getInteger().getText());
	returnValue = new SaExpInt(value);
        outAIntExp(node);
    }

// exp = {lire}      lire
    @Override
    public void caseALireExp(ALireExp node)
    {
        inALireExp(node);
	returnValue = new SaExpLire();
        outALireExp(node);
    }

// inst = {affect}   po sainstaffect   var exp pf
    @Override
    public void caseAAffectInst(AAffectInst node)
    {
        inAAffectInst(node);
	node.getVar().apply(this);
	SaVar var = (SaVar) returnValue;
	node.getExp().apply(this);
	SaExp exp = (SaExp) returnValue;
	returnValue = new SaInstAffect(var, exp);
        outAAffectInst(node);
    }

    @Override
    public void caseAIncrInst(AIncrInst node)
    {
        inAIncrInst(node);
        node.getVar().apply(this);
        SaVar var = (SaVar) returnValue;
        node.getExp().apply(this);
        SaExp exp = (SaExp) returnValue;
        returnValue = new SaIncr(var, exp);
        outAIncrInst(node);
    }



// inst = {bloc}     po sainstbloc     linst pf
    @Override
    public void caseABlocInst(ABlocInst node)
    {
        inABlocInst(node);
	node.getLinst().apply(this);
	SaLInst linst = (SaLInst) returnValue;
	returnValue = new SaInstBloc(linst);
        outABlocInst(node);
    }

// inst = {ecriture} po sainstecriture exp pf
    @Override
    public void caseAEcritureInst(AEcritureInst node)
    {
        inAEcritureInst(node);
	node.getExp().apply(this);
	SaExp exp = (SaExp) returnValue;
	returnValue = new SaInstEcriture(exp);
        outAEcritureInst(node);
    }

// inst = {retour}   po sainstretour   exp pf
    @Override
    public void caseARetourInst(ARetourInst node)
    {
        inARetourInst(node);
	node.getExp().apply(this);
	SaExp exp = (SaExp) returnValue;
	returnValue = new SaInstRetour(exp);
        outARetourInst(node);
    }

// inst = {si}       po sainstsi       exp [alors]:inst [sinon]:inst pf
    @Override
    public void caseASiInst(ASiInst node)
    {
        inASiInst(node);
	node.getExp().apply(this);
	SaExp si = (SaExp) returnValue;
	node.getAlors().apply(this);
	SaInst alors = (SaInst) returnValue;
	SaInst sinon = null;
        if(node.getSinon() != null)
        {
            node.getSinon().apply(this);
	    sinon = (SaInst) returnValue;
        }
	returnValue = new SaInstSi(si, alors, sinon);
        outASiInst(node);
    }

    // inst = {si2}      po sainstsi       exp [alors]:inst null pf

    @Override
    public void caseASi2Inst(ASi2Inst node)
    {
        inASi2Inst(node);
        node.getExp().apply(this);
        SaExp si = (SaExp) returnValue;
        node.getAlors().apply(this);
        SaInst alors = (SaInst) returnValue;
        returnValue = new SaInstSi(si, alors, null);
        outASi2Inst(node);
    }


    // inst = {tantque}  po sainsttantque  exp inst pf
   @Override
    public void caseATantqueInst(ATantqueInst node)
    {
        inATantqueInst(node);
	node.getExp().apply(this);
	SaExp test = (SaExp) returnValue;
	node.getInst().apply(this);
	SaInst bloc = (SaInst) returnValue;
	returnValue = new SaInstTantQue(test, bloc);
        outATantqueInst(node);
    }

// ldecfonc = {rec} po saldecfonc decfonc ldecfonc pf
    @Override
    public void caseARecLdecfonc(ARecLdecfonc node)
    {
        inARecLdecfonc(node);
	node.getDecfonc().apply(this);
	SaDecFonc dec = (SaDecFonc) returnValue;
	node.getLdecfonc().apply(this);
	SaLDecFonc ldec = (SaLDecFonc) returnValue; 
        returnValue = new SaLDecFonc(dec, ldec);
        outARecLdecfonc(node);
    }

// ldecfonc = {fin} null
    @Override
    public void caseAFinLdecfonc(AFinLdecfonc node)
    {
        inAFinLdecfonc(node);
	returnValue = null;
        outAFinLdecfonc(node);
    }

// ldecvar = {rec} po saldecvar decvar ldecvar pf
    @Override
    public void caseARecLdecvar(ARecLdecvar node)
    {
        inARecLdecvar(node);
	node.getDecvar().apply(this);
	SaDecVar dec = (SaDecVar) returnValue;
	node.getLdecvar().apply(this);
	SaLDecVar ldec = (SaLDecVar) returnValue;
	returnValue = new SaLDecVar(dec, ldec);
        outARecLdecvar(node);
    }

// ldecvar = {fin} null
    @Override
    public void caseAFinLdecvar(AFinLdecvar node)
    {
        inAFinLdecvar(node);
	returnValue = null;
        outAFinLdecvar(node);
    }

// lexp = {rec} po salexp exp lexp pf
    @Override
    public void caseARecLexp(ARecLexp node)
    {
        inARecLexp(node);
	node.getExp().apply(this);
	SaExp exp = (SaExp) returnValue;
	node.getLexp().apply(this);
	SaLExp lexp = (SaLExp) returnValue;
	returnValue = new SaLExp(exp, lexp);
        outARecLexp(node);
    }

// lexp = {fin} null
    @Override
    public void caseAFinLexp(AFinLexp node)
    {
        inAFinLexp(node);
	returnValue = null;
        outAFinLexp(node);
    }

// linst = {rec} po salinst inst linst pf
    @Override
    public void caseARecLinst(ARecLinst node)
    {
        inARecLinst(node);
	node.getInst().apply(this);
	SaInst inst = (SaInst) returnValue;
	node.getLinst().apply(this);
	SaLInst linst = (SaLInst) returnValue;
	returnValue = new SaLInst(inst, linst);
        outARecLinst(node);
    }

// linst = {fin} null
    @Override
    public void caseAFinLinst(AFinLinst node)
    {
        inAFinLinst(node);
	returnValue = null;
        outAFinLinst(node);
    }

// decfonc =      po sadecfonc id [param]:ldecvar [variables]:ldecvar inst type pf
    @Override
    public void caseADecfonc(ADecfonc node)
    {
        inADecfonc(node);
	String foncName = node.getId().getText();
	node.getParam().apply(this);
	SaLDecVar params = (SaLDecVar) returnValue;
	node.getVariables().apply(this);
	SaLDecVar variables = (SaLDecVar) returnValue;
	node.getInst().apply(this);
	SaInst corps = (SaInst) returnValue;
	node.getType().apply(this);
	Type type = returnType;
	returnValue = new SaDecFonc(foncName, type, params, variables, corps);
        outADecfonc(node);
    }

// decvar =  {tab}    po sadectab id integer type pf
    @Override
    public void caseATabDecvar(ATabDecvar node)
    {
        inATabDecvar(node);
	String nom = node.getId().getText();
	int taille = Integer.parseInt(node.getInteger().getText());
	node.getType().apply(this);
	Type type = returnType;
	returnValue = new SaDecTab(nom, type, taille);
        outATabDecvar(node);
    }

// decvar =  {simple} po sadecvarsimple id type pf
    @Override
    public void caseASimpleDecvar(ASimpleDecvar node)
    {
        inASimpleDecvar(node);
	String nom = node.getId().getText();
	node.getType().apply(this);
	Type type = returnType;
	returnValue = new SaDecVarSimple(nom, type);
        outASimpleDecvar(node);
    }

    // var = {indicee} po savarindicee id exp pf
    @Override
    public void caseAIndiceeVar(AIndiceeVar node)
    {
        inAIndiceeVar(node);
	String nom = node.getId().getText();
	node.getExp().apply(this);
	SaExp indice = (SaExp) returnValue;
	returnValue = new SaVarIndicee(nom, indice);
        outAIndiceeVar(node);
    }

    // var = {simple} po savarsimple id pf
    @Override
    public void caseASimpleVar(ASimpleVar node)
    {
        inASimpleVar(node);
	String nom = node.getId().getText();
	returnValue = new SaVarSimple(nom);
        outASimpleVar(node);
    }

// appel = po saappel id lexp pf
    @Override
    public void caseAAppel(AAppel node)
    {
        inAAppel(node);
	String nom = node.getId().getText();
	node.getLexp().apply(this);
	SaLExp arguments = (SaLExp) returnValue;
	returnValue = new SaAppel(nom, arguments);
        outAAppel(node);
    }

// type = {entier} entier
    @Override
    public void caseAEntierType(AEntierType node)
    {
        inAEntierType(node);
	returnType = Type.ENTIER;
        outAEntierType(node);
    }

// type = {bool} bool
    @Override
    public void caseABoolType(ABoolType node)
    {
        inABoolType(node);
	returnType = Type.BOOL;
        outABoolType(node);
    }

// type = {null} nul
    @Override
    public void caseANullType(ANullType node)
    {
        inANullType(node);
	returnType = Type.NUL;
        outANullType(node);
    }
}
