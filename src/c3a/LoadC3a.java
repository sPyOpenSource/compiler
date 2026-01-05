package c3a;
import c3aParser.analysis.DepthFirstAdapter;
import ts.*;
import c3aParser.lexer.Lexer;
import c3aParser.lexer.LexerException;
import c3aParser.node.*;
import c3aParser.parser.Parser;
import c3aParser.parser.ParserException;
import util.Error;

import java.io.FileReader;
import java.io.IOException;
import java.io.PushbackReader;

public class LoadC3a extends DepthFirstAdapter {
    private C3a c3a;
    private C3aInst inst;
    private C3aOperand operand;
    private C3aLabel label;
    private Ts tableGlobale;
    private Ts tableLocale = null;

    public LoadC3a(String c3aFileName, Ts tableGlobale) {
        this.tableGlobale = tableGlobale;
        PushbackReader fileReader = null;
        Parser parser = null;
        Start root = null;
        try {
            fileReader = new PushbackReader(new FileReader(c3aFileName));
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

    public C3a getC3a(){return c3a;}
    //prog = listeinst;
    @Override
    public void caseAProg(AProg node)
    {
        inAProg(node);
        c3a = new C3a();
        if(node.getListeinst() != null)
        {
            node.getListeinst().apply(this);
        }
        outAProg(node);
    }
//listeinst = {recursif} inst listeinst
    @Override
    public void caseARecursifListeinst(ARecursifListeinst node)
    {
        inARecursifListeinst(node);
        node.getInst().apply(this);
        c3a.ajouteInst(inst);
        label = null;
        node.getListeinst().apply(this);
        outARecursifListeinst(node);
    }

//    listeinst = {final} inst
    @Override
    public void caseAFinalListeinst(AFinalListeinst node)
    {
        inAFinalListeinst(node);
        node.getInst().apply(this);
        c3a.ajouteInst(inst);
        label = null;
        outAFinalListeinst(node);
    }

    //add      = etiqop [result]:tv aff [op1]:ctv plus   [op2]:ctv;
    @Override
    public void caseAAdd(AAdd node)
    {
        inAAdd(node);
        if(node.getEtiqop() != null)
        {
            node.getEtiqop().apply(this);
            c3a.addLabelToNextInst(label);
        }
        node.getResult().apply(this);
        C3aOperand result = operand;
        node.getOp1().apply(this);
        C3aOperand op1 = operand;
        node.getOp2().apply(this);
        C3aOperand op2 = operand;
        inst = new C3aInstAdd(op1, op2, result, "");
        outAAdd(node);
    }

    //sub      = etiqop [result]:tv aff [op1]:ctv moins  [op2]:ctv;
    @Override
    public void caseASub(ASub node)
    {
        inASub(node);
        node.getEtiqop().apply(this);
        c3a.addLabelToNextInst(label);

        node.getResult().apply(this);
        C3aOperand result = operand;

        node.getOp1().apply(this);
        C3aOperand op1 = operand;

        node.getOp2().apply(this);
        C3aOperand op2 = operand;

        inst = new C3aInstSub(op1, op2, result, "");
        outASub(node);
    }

    //mul      = etiqop [result]:tv aff [op1]:ctv fois   [op2]:ctv;
    @Override
    public void caseAMul(AMul node)
    {
        inAMul(node);
        node.getEtiqop().apply(this);
        c3a.addLabelToNextInst(label);

        node.getResult().apply(this);
        C3aOperand result = operand;

        node.getOp1().apply(this);
        C3aOperand op1 = operand;

        node.getOp2().apply(this);
        C3aOperand op2 = operand;

        inst = new C3aInstMult(op1,op2, result, "");
        outAMul(node);
    }

    //div      = etiqop [result]:tv aff [op1]:ctv divise [op2]:ctv;
    @Override
    public void caseADiv(ADiv node)
    {
        inADiv(node);
        node.getEtiqop().apply(this);
        c3a.addLabelToNextInst(label);

        node.getResult().apply(this);
        C3aOperand result = operand;

        node.getOp1().apply(this);
        C3aOperand op1 = operand;

        node.getOp2().apply(this);
        C3aOperand op2 = operand;

        inst = new C3aInstDiv(op1,op2, result, "");
        outADiv(node);
    }


    //istop    = etiqop stop ctv;
    @Override
    public void caseAIstop(AIstop node)
    {
        inAIstop(node);
        node.getEtiqop().apply(this);
        c3a.addLabelToNextInst(label);

        node.getCtv().apply(this);
        C3aOperand op1 = operand;

        inst = new C3aInstStop(op1, "");
        outAIstop(node);
    }

//    iwrite   = etiqop write ctv;

    @Override
    public void caseAIwrite(AIwrite node)
    {
        inAIwrite(node);
        node.getEtiqop().apply(this);
        c3a.addLabelToNextInst(label);

        node.getCtv().apply(this);
        C3aOperand op = operand;

        inst = new C3aInstWrite(op, "");
        outAIwrite(node);
    }

    // iread    = etiqop [result]:tv aff read;

    @Override
    public void caseAIread(AIread node)
    {
        inAIread(node);
        node.getEtiqop().apply(this);
        c3a.addLabelToNextInst(label);

        node.getResult().apply(this);
        C3aOperand result = operand;

        inst = new C3aInstRead(result, "");
        outAIread(node);
    }

    //    end      = etiqop fend;
@Override
public void caseAEnd(AEnd node)
{
    inAEnd(node);
    if(node.getEtiqop() != null)
    {
        node.getEtiqop().apply(this);
        c3a.addLabelToNextInst(label);
    }
    inst = new C3aInstFEnd("");
    outAEnd(node);
}

//    affect   = etiqop [result]:tv aff [op1]:ctv;

    @Override
    public void caseAAffect(AAffect node)
    {
        inAAffect(node);
        if(node.getEtiqop() != null)
        {
            node.getEtiqop().apply(this);
            c3a.addLabelToNextInst(label);
        }
            node.getResult().apply(this);
            C3aOperand result = operand;

            node.getOp1().apply(this);
            C3aOperand op1 = operand;
            inst = new C3aInstAffect(op1, result, "");
        outAAffect(node);
    }

//    jmpeg    = etiqop if [op1]:ctv aff  [op2]:ctv goto [result]:constante;
@Override
public void caseAJmpeg(AJmpeg node)
{
    inAJmpeg(node);
    node.getEtiqop().apply(this);
    c3a.addLabelToNextInst(label);

    node.getOp1().apply(this);
    C3aOperand op1 = operand;

    node.getOp2().apply(this);
    C3aOperand op2 = operand;

    node.getResult().apply(this);
    C3aOperand result = operand;

    inst = new C3aInstJumpIfEqual(op1, op2, result, "");
    outAJmpeg(node);
}

//    jmpinf   = etiqop if [op1]:ctv inf   [op2]:ctv goto [result]:constante;
@Override
public void caseAJmpinf(AJmpinf node)
{
    inAJmpinf(node);
    node.getEtiqop().apply(this);
    c3a.addLabelToNextInst(label);

    node.getOp1().apply(this);
    C3aOperand op1 = operand;

    node.getOp2().apply(this);
    C3aOperand op2 = operand;

    node.getResult().apply(this);
    C3aOperand result = operand;

    inst = new C3aInstJumpIfLess(op1, op2, result, "");
    outAJmpinf(node);
}

//    jmpneg = etiqop if [op1]:ctv noteg [op2]:ctv goto [result]:constante;
@Override
public void caseAJmpneg(AJmpneg node)
{
    inAJmpneg(node);
    node.getEtiqop().apply(this);
    c3a.addLabelToNextInst(label);

    node.getOp1().apply(this);
    C3aOperand op1 = operand;

    node.getOp2().apply(this);
    C3aOperand op2 = operand;

    node.getResult().apply(this);
    C3aOperand result = operand;

    inst = new C3aInstJumpIfNotEqual(op1, op2, result, "");
    outAJmpneg(node);
}

    @Override
    public void caseAJmp(AJmp node)
    {
        inAJmp(node);
        node.getEtiqop().apply(this);
        c3a.addLabelToNextInst(label);

        node.getResult().apply(this);
        C3aOperand result = operand;

        inst = new C3aInstJump(result, "");
        outAJmp(node);
    }


    //arg      = etiqop param ctv;
    @Override
    public void caseAArg(AArg node)
    {
        inAArg(node);
        node.getEtiqop().apply(this);
        c3a.addLabelToNextInst(label);

        node.getCtv().apply(this);
        C3aOperand op1 = operand;
        inst = new C3aInstParam(op1, "");
        outAArg(node);
    }
//return   = etiqop ret ctv;

    @Override
    public void caseAReturn(AReturn node)
    {
        inAReturn(node);
        node.getEtiqop().apply(this);
        c3a.addLabelToNextInst(label);
        node.getCtv().apply(this);
        C3aOperand op1 = operand;
        inst = new C3aInstReturn(op1, "");
        outAReturn(node);
    }

//temporaire = prefixe_temp constante;
    @Override
    public void caseATemporaire(ATemporaire node)
    {
        inATemporaire(node);
        int num = Integer.parseInt(node.getNombre().getText());
        if(num >= c3a.getTempCounter())
            c3a.setTempCounter(num + 1);
        operand = new C3aTemp(num);
        outATemporaire(node);
    }

//constante = nombre;
@Override
public void caseAConstante(AConstante node) {
    inAConstante(node);
    int num = Integer.parseInt(node.getNombre().getText());
    operand = new C3aConstant(num);
    outAConstante(node);
}

@Override
    public void caseAVideEtiqop(AVideEtiqop node)
    {
        inAVideEtiqop(node);
        outAVideEtiqop(node);
    }
    //etiqop = {cte} constante;
    @Override
    public void caseACteEtiqop(ACteEtiqop node)
    {
        inACteEtiqop(node);
        int num = Integer.parseInt(node.getNombre().getText());
        this.label = new C3aLabel(num);
        if (num >= c3a.getLabelCounter())
            c3a.setLableCounter(num + 1);
        outACteEtiqop(node);
    }

//    variable = {scalaire} identif
    @Override
    public void caseAScalaireVariable(AScalaireVariable node)
    {
        inAScalaireVariable(node);
        String identif = node.getIdentif().getText();
        TsItemVarSimple tsItemVarSimple = null;
        if(tableLocale != null)
            tsItemVarSimple = (TsItemVarSimple) tableLocale.getVar(identif);
        if(tsItemVarSimple == null)
            tsItemVarSimple = (TsItemVarSimple) tableGlobale.getVar(identif);
        operand = new C3aVar(tsItemVarSimple, null);
        outAScalaireVariable(node);
    }

//    variable = {tab} identif co ctv cf
    @Override
    public void caseATabVariable(ATabVariable node)
    {
        inATabVariable(node);
        String identif = node.getIdentif().getText();
        TsItemVarTab tsItemVarTab = null;
        if(tableLocale != null)
            tsItemVarTab = (TsItemVarTab) tableLocale.getVar(identif);
        if(tsItemVarTab == null)
            tsItemVarTab = (TsItemVarTab) tableGlobale.getVar(identif);
        node.getCtv().apply(this);
        C3aOperand index = operand;
        operand = new C3aVar(tsItemVarTab, index);
        outATabVariable(node);
    }


    @Override
    public void caseABegin(ABegin node)
    {
        inABegin(node);

        String functionName = node.getIdentif().getText();
        TsItemFct tsItemFct = tableGlobale.getFct(functionName);
        tableLocale = tsItemFct.getTable();
        inst = new C3aInstFBegin(tsItemFct, "");
        outABegin(node);
    }

    //fcall    = etiqop [result]:tv aff call identif;
    @Override
    public void caseAFcall(AFcall node)
    {
        inAFcall(node);
        if(node.getEtiqop() != null)
        {
            node.getEtiqop().apply(this);
        }
        node.getResult().apply(this);
        C3aOperand result = operand;

        C3aFunction op1 = new C3aFunction(tableGlobale.getFct(node.getIdentif().getText()));
        inst = new C3aInstCall(op1, result, "");

        outAFcall(node);
    }
}
