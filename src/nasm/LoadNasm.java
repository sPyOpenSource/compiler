package nasm;

import nasmParser.analysis.DepthFirstAdapter;
import nasmParser.lexer.Lexer;
import nasmParser.lexer.LexerException;
import nasmParser.node.*;
import nasmParser.parser.Parser;
import nasmParser.parser.ParserException;

//import sc.analysis.DepthFirstAdapter;
import util.Error;
import java.io.FileReader;
import java.io.IOException;
import java.io.PushbackReader;

import nasm.expr.*;
import nasm.expr.NasmLabel;
import nasm.inst.NasmInst;
import nasm.inst.PseudoInst;
import nasm.inst.*;

public class LoadNasm extends DepthFirstAdapter {
    private Nasm nasm;
    private NasmInst inst;
    private PseudoInst pseudoInst;
    private Operand operand;
    private NasmLabel label;
    private NasmExp exp;
    private NasmSize size;
    
    public LoadNasm(String nasmFileName) {
        nasm = new Nasm();
        PushbackReader fileReader = null;
        Parser parser = null;
        Start root = null;
        try {
            fileReader = new PushbackReader(new FileReader(nasmFileName));
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

    @Override
    public void defaultIn(Node node)
    {
	//        System.out.println("<" + node.getClass().getSimpleName() + ">");
    }

    @Override
    public void defaultOut(Node node)
    {
	//        System.out.println("</" + node.getClass().getSimpleName() + ">");
    }

    public Nasm getNasm(){return nasm;}


    // prog = linclude secdata secbss sectext
    @Override
    public void caseAProg(AProg node)
    {
        inAProg(node);
        if(node.getLinclude() != null)
        {
            node.getLinclude().apply(this);
        }
        if(node.getSecdata() != null)
        {
            node.getSecdata().apply(this);
        }
        if(node.getSecbss() != null)
        {
            node.getSecbss().apply(this);
        }
        if(node.getSectext() != null)
        {
            node.getSectext().apply(this);
        }
        outAProg(node);
    }

    // linclude = {rec} include linclude 
    @Override
    public void caseARecLinclude(ARecLinclude node)
    {
        inARecLinclude(node);
        if(node.getInclude() != null)
        {
            node.getInclude().apply(this);
        }
        if(node.getLinclude() != null)
        {
            node.getLinclude().apply(this);
        }
        outARecLinclude(node);
    }

    // linclude = {empty}
    @Override
    public void caseAEmptyLinclude(AEmptyLinclude node)
    {
        inAEmptyLinclude(node);
        outAEmptyLinclude(node);
    }
    
    // include = percentage inc [open]: quote filename [close]: quote 
    @Override
    public void caseAInclude(AInclude node)
    {
        inAInclude(node);
        if(node.getPercentage() != null)
        {
            node.getPercentage().apply(this);
        }
        if(node.getInc() != null)
        {
            node.getInc().apply(this);
        }
        if(node.getOpen() != null)
        {
            node.getOpen().apply(this);
        }
        if(node.getFilename() != null)
        {
            node.getFilename().apply(this);
        }
        if(node.getClose() != null)
        {
            node.getClose().apply(this);
        }
        outAInclude(node);
    }

    // filename =  {simple} label 
    @Override
    public void caseASimpleFilename(ASimpleFilename node)
    {
        inASimpleFilename(node);
        if(node.getLabel() != null)
        {
            node.getLabel().apply(this);
        }
        outASimpleFilename(node);
    }

    // filename =  {complex} [prefix]: label dot [suffix]: label
    @Override
    public void caseAComplexFilename(AComplexFilename node)
    {
        inAComplexFilename(node);
        if(node.getPrefix() != null)
        {
            node.getPrefix().apply(this);
        }
        if(node.getDot() != null)
        {
            node.getDot().apply(this);
        }
        if(node.getSuffix() != null)
        {
            node.getSuffix().apply(this);
        }
        outAComplexFilename(node);
    }

    // secdata =   {nonempty} section data lconst
    @Override
    public void caseANonemptySecdata(ANonemptySecdata node)
    {
        inANonemptySecdata(node);
        if(node.getSection() != null)
        {
            node.getSection().apply(this);
        }
        if(node.getData() != null)
        {
            node.getData().apply(this);
        }
        if(node.getLconst() != null)
        {
            node.getLconst().apply(this);
        }
        outANonemptySecdata(node);
    }

    // secdata =   {empty}
    @Override
    public void caseAEmptySecdata(AEmptySecdata node)
    {
        inAEmptySecdata(node);
        outAEmptySecdata(node);
    }

    // lconst =   {rec} const lconst
    @Override
    public void caseARecLconst(ARecLconst node)
    {
        inARecLconst(node);
        if(node.getConst() != null)
        {
            node.getConst().apply(this);
        }
        if(node.getLconst() != null)
        {
            node.getLconst().apply(this);
        }
        outARecLconst(node);
    }


    // lconst =   {empty} 
    @Override
    public void caseAEmptyLconst(AEmptyLconst node)
    {
        inAEmptyLconst(node);
        outAEmptyLconst(node);
    }

    // const = {db} label definebyte numconst
    @Override
    public void caseADbConst(ADbConst node)
    {
        inADbConst(node);
        if(node.getLabel() != null)
        {
            node.getLabel().apply(this);
        }
        if(node.getDefinebyte() != null)
        {
            node.getDefinebyte().apply(this);
        }
        if(node.getNumconst() != null)
        {
            node.getNumconst().apply(this);
        }
        outADbConst(node);
    }

    // const = {dw} label defineword numconst
    @Override
    public void caseADwConst(ADwConst node)
    {
        inADwConst(node);
        if(node.getLabel() != null)
        {
            node.getLabel().apply(this);
        }
        if(node.getDefineword() != null)
        {
            node.getDefineword().apply(this);
        }
        if(node.getNumconst() != null)
        {
            node.getNumconst().apply(this);
        }
        outADwConst(node);
    }

    // const = {dd} label definedoubleword numconst
    @Override
    public void caseADdConst(ADdConst node)
    {
        inADdConst(node);
        if(node.getLabel() != null)
        {
            node.getLabel().apply(this);
        }
        if(node.getDefinedoubleword() != null)
        {
            node.getDefinedoubleword().apply(this);
        }
        if(node.getNumconst() != null)
        {
            node.getNumconst().apply(this);
        }
        outADdConst(node);
    }
    // const = {dq} label definequadword numconst
    @Override
    public void caseADqConst(ADqConst node)
    {
        inADqConst(node);
        if(node.getLabel() != null)
        {
            node.getLabel().apply(this);
        }
        if(node.getDefinequadword() != null)
        {
            node.getDefinequadword().apply(this);
        }
        if(node.getNumconst() != null)
        {
            node.getNumconst().apply(this);
        }
        outADqConst(node);
    }
    // const = {dt} label definetenbytes numconst
    @Override
    public void caseADtConst(ADtConst node)
    {
        inADtConst(node);
        if(node.getLabel() != null)
        {
            node.getLabel().apply(this);
        }
        if(node.getDefinetenbytes() != null)
        {
            node.getDefinetenbytes().apply(this);
        }
        if(node.getNumconst() != null)
        {
            node.getNumconst().apply(this);
        }
        outADtConst(node);
    }


    // secbss =   {nonempty} section bss lvar
    @Override
    public void caseANonemptySecbss(ANonemptySecbss node)
    {
        inANonemptySecbss(node);
        if(node.getSection() != null)
        {
            node.getSection().apply(this);
        }
        if(node.getBss() != null)
        {
            node.getBss().apply(this);
        }
        if(node.getLvar() != null)
        {
            node.getLvar().apply(this);
        }
        outANonemptySecbss(node);
    }
    // secbss =   {empty}
    @Override
    public void caseAEmptySecbss(AEmptySecbss node)
    {
        inAEmptySecbss(node);
        outAEmptySecbss(node);
    }

    // lvar =   {rec} var lvar
    @Override
    public void caseARecLvar(ARecLvar node)
    {
        inARecLvar(node);
        node.getVar().apply(this);
        nasm.ajoutePseudoInst(pseudoInst);
        node.getLvar().apply(this);
        outARecLvar(node);
    }
    // lvar =   {empty}
    @Override
    public void caseAEmptyLvar(AEmptyLvar node)
    {
        inAEmptyLvar(node);
        outAEmptyLvar(node);
    }

    // var = {resb} label reservebyte number
    @Override
    public void caseAResbVar(AResbVar node)
    {
        inAResbVar(node);
        node.getLabel().apply(this);

        int nb = Integer.parseInt(node.getNumber().getText());
        pseudoInst = new Resb(label,nb,"");
        outAResbVar(node);
    }
    // var = {resw} label reserveword number
    @Override
    public void caseAReswVar(AReswVar node)
    {
        inAReswVar(node);
        node.getLabel().apply(this);
        int nb = Integer.parseInt(node.getNumber().getText());
        pseudoInst = new Resw(label,nb,"");
        outAReswVar(node);
    }
    // var = {resd} label reservedoubleword number
    @Override
    public void caseAResdVar(AResdVar node)
    {
        inAResdVar(node);
        node.getLabel().apply(this);
        int nb = Integer.parseInt(node.getNumber().getText());
        pseudoInst = new Resd(label,nb,"");
        outAResdVar(node);
    }
    // var = {resq} label reservequadword number
    @Override
    public void caseAResqVar(AResqVar node)
    {
        inAResqVar(node);
        node.getLabel().apply(this);
        int nb = Integer.parseInt(node.getNumber().getText());
        pseudoInst = new Resq(label,nb,"");
        outAResqVar(node);
    }
    // var = {rest} label reservetenbytes number
    @Override
    public void caseARestVar(ARestVar node)
    {
        inARestVar(node);
        node.getLabel().apply(this);
        int nb = Integer.parseInt(node.getNumber().getText());
        pseudoInst = new Rest(label,nb,"");
        outARestVar(node);
    }

    // sectext = section text lglobal linst
    //////////////////////
    @Override
    public void caseASectext(ASectext node)
    {
        inASectext(node);
        if(node.getSection() != null)
        {
            node.getSection().apply(this);
        }
        if(node.getText() != null)
        {
            node.getText().apply(this);
        }
        if(node.getLglobal() != null)
        {
            node.getLglobal().apply(this);
        }
        if(node.getLinst() != null)
        {
            node.getLinst().apply(this);
        }
        outASectext(node);
    }

    // lglobal = {rec} global label lglobal
    @Override
    public void caseARecLglobal(ARecLglobal node)
    {
        inARecLglobal(node);
        if(node.getGlobal() != null)
        {
            node.getGlobal().apply(this);
        }
        if(node.getLabel() != null)
        {
            node.getLabel().apply(this);
        }
        if(node.getLglobal() != null)
        {
            node.getLglobal().apply(this);
        }
        outARecLglobal(node);
    }
    // lglobal = {empty}
    @Override
    public void caseAEmptyLglobal(AEmptyLglobal node)
    {
        inAEmptyLglobal(node);
        outAEmptyLglobal(node);
    }


    // linst = {rec} inst linst
    @Override
    public void caseARecLinst(ARecLinst node)
    {
        inARecLinst(node);
        node.getInst().apply(this);
        nasm.ajouteInst(inst);
        label = null;
        exp = null;
        size = null;
        operand = null;

        node.getLinst().apply(this);
        outARecLinst(node);
    }
    
    // linst = {last} inst
    @Override
    public void caseALastLinst(ALastLinst node)
    {
        inALastLinst(node);
        node.getInst().apply(this);
        nasm.ajouteInst(inst);
        label = null;
        exp = null;
        size = null;
        operand = null;
        outALastLinst(node);
    }


    // inst =  {mov}    oplabel mov  ar comma acr
    @Override
    public void caseAMovInst(AMovInst node)
    {
        inAMovInst(node);
        node.getOplabel().apply(this);
        NasmLabel lineLabel = label;
        node.getAr().apply(this);
        Operand destination = operand;

        node.getAcr().apply(this);
        Operand source = operand;

        inst = new Mov(lineLabel, destination, source, "");
        outAMovInst(node);
    }

    // inst =  {push}   oplabel push acr
    @Override
    public void caseAPushInst(APushInst node)
    {
        inAPushInst(node);
        node.getOplabel().apply(this);
        NasmLabel lineLabel = label;
        node.getAcr().apply(this);
        Operand source = operand;
        inst = new Push(lineLabel, source, "");
        outAPushInst(node);
    }

    // inst =  {pop}    oplabel pop  ar
    @Override
    public void caseAPopInst(APopInst node)
    {
        inAPopInst(node);
        node.getOplabel().apply(this);
	NasmLabel lineLabel = label;

        node.getAr().apply(this);
        Operand destination = operand;
        inst = new Pop(lineLabel, destination, "");
        outAPopInst(node);
    }

    // inst =  {add}    oplabel add  ar comma acr
    @Override
    public void caseAAddInst(AAddInst node)
    {
        inAAddInst(node);
        node.getOplabel().apply(this);
        NasmLabel lineLabel = label;
        node.getAr().apply(this);
        Operand destination = operand;
        node.getAcr().apply(this);
        Operand source = operand;
        inst = new Add(lineLabel, destination, source, "");
        outAAddInst(node);
    }

    // inst =  {sub}    oplabel sub  ar comma acr
    @Override
    public void caseASubInst(ASubInst node)
    {
        inASubInst(node);
        node.getOplabel().apply(this);
        NasmLabel lineLabel = label;
        node.getAr().apply(this);
        Operand destination = operand;
        node.getAcr().apply(this);
        Operand source = operand;
        inst = new Sub(lineLabel, destination, source, "");
        outASubInst(node);
    }

    // inst =  {imul}   oplabel imul ar comma acr
    @Override
    public void caseAImulInst(AImulInst node)
    {
        inAImulInst(node);
        node.getOplabel().apply(this);
	        NasmLabel lineLabel = label;

        node.getAr().apply(this);
        Operand destination = operand;
        node.getAcr().apply(this);
        Operand source = operand;
        inst = new Mul(lineLabel, destination, source, "");
        outAImulInst(node);
    }

    // inst =  {idiv}   oplabel idiv ar
    @Override
    public void caseAIdivInst(AIdivInst node)
    {
        inAIdivInst(node);
	node.getOplabel().apply(this);
        NasmLabel lineLabel = label;
        node.getAr().apply(this);
        Operand source = operand;
        inst = new Div(lineLabel, source, "");
        outAIdivInst(node);
    }

    // inst =  {and}    oplabel and  ar comma acr
    @Override
    public void caseAAndInst(AAndInst node)
    {
        inAAndInst(node);
	node.getOplabel().apply(this);
        NasmLabel lineLabel = label;
        node.getAr().apply(this);
        Operand destination = operand;
        node.getAcr().apply(this);
        Operand source = label;
        inst = new Or(lineLabel, destination, source, "");
        outAAndInst(node);
    }

    // inst =  {or}     oplabel or   ar comma acr
    @Override
    public void caseAOrInst(AOrInst node)
    {
        inAOrInst(node);
	node.getOplabel().apply(this);
        NasmLabel lineLabel = label;
        node.getAr().apply(this);
        Operand destination = operand;
        node.getAcr().apply(this);
        Operand source = operand;
        inst = new Or(lineLabel, destination, source, "");
        outAOrInst(node);
    }

    // inst =  {xor}    oplabel xor  ar comma acr
    @Override
    public void caseAXorInst(AXorInst node)
    {
        inAXorInst(node);
	node.getOplabel().apply(this);
        NasmLabel lineLabel = label;
        node.getAr().apply(this);
        Operand destination = operand;
        node.getAcr().apply(this);
        Operand source = operand;
        inst = new Xor(lineLabel, destination, source, "");
        outAXorInst(node);
    }

    // inst =  {not}    oplabel not  ar
    @Override
    public void caseANotInst(ANotInst node)
    {
        inANotInst(node);
	node.getOplabel().apply(this);
        NasmLabel lineLabel = label;
        node.getAr().apply(this);
        Operand destination = operand;
        inst = new Not(lineLabel, destination, "");
        outANotInst(node);
    }

    // inst =  {cmp}    oplabel cmp  ar comma acr
    @Override
    public void caseACmpInst(ACmpInst node)
    {
        inACmpInst(node);
	node.getOplabel().apply(this);
        NasmLabel lineLabel = label;
        node.getAr().apply(this);
        Operand destination = operand;
        node.getAcr().apply(this);
        Operand source = operand;
        inst = new Cmp(lineLabel, destination, source, "");
        outACmpInst(node);
    }

    // inst =  {jmp}    oplabel jmp  label
    @Override
    public void caseAJmpInst(AJmpInst node)
    {
        inAJmpInst(node);
	node.getOplabel().apply(this);
        Operand lineLabel = label;
        node.getLabel().apply(this);
        Operand jumpTo = label;
        inst = new Jmp(lineLabel, jumpTo, "");
        outAJmpInst(node);
    }

    // inst =  {je}     oplabel je   label
    @Override
    public void caseAJeInst(AJeInst node)
    {
        inAJeInst(node);
	node.getOplabel().apply(this);
        Operand lineLabel = label;
        node.getLabel().apply(this);
        Operand jumpTo = label;
        inst = new Je(lineLabel, jumpTo, "");
        outAJeInst(node);
    }

    // inst =  {jne}    oplabel jne  label
    @Override
    public void caseAJneInst(AJneInst node)
    {
        inAJneInst(node);
	node.getOplabel().apply(this);
        Operand lineLabel = label;
        node.getLabel().apply(this);
        Operand jumpTo = label;
        inst = new Jne(lineLabel, jumpTo, "");
   }

    // inst =  {jg}     oplabel jg   label
    @Override
    public void caseAJgInst(AJgInst node)
    {
        inAJgInst(node);
	node.getOplabel().apply(this);
	Operand lineLabel = label;

        node.getLabel().apply(this);
        Operand jumpTo = label;
        inst = new Jg(lineLabel, jumpTo, "");
        outAJgInst(node);
    }

    // inst =  {jge}    oplabel jge  label
    @Override
    public void caseAJgeInst(AJgeInst node)
    {
        inAJgeInst(node);
	node.getOplabel().apply(this);
        Operand lineLabel = label;
        node.getLabel().apply(this);
        Operand jumpTo = label;
        inst = new Jge(lineLabel, jumpTo, "");
        outAJgeInst(node);
    }

    // inst =  {jl}     oplabel jl   label
    @Override
    public void caseAJlInst(AJlInst node)
    {
        inAJlInst(node);
	node.getOplabel().apply(this);
        Operand lineLabel = label;
        node.getLabel().apply(this);
        Operand jumpTo = label;
        inst = new Jl(lineLabel, jumpTo, "");
        outAJlInst(node);
    }

    // inst =  {call}   oplabel call label
    @Override
    public void caseACallInst(ACallInst node)
    {
        inACallInst(node);
        node.getOplabel().apply(this);
        NasmLabel lineLabel = label;
        node.getLabel().apply(this);
        Operand jumpTo = label;
        inst = new Call(lineLabel, jumpTo, "");
        outACallInst(node);
    }

    // inst =  {ret}    oplabel ret
    @Override
    public void caseARetInst(ARetInst node)
    {
        inARetInst(node);
        node.getOplabel().apply(this);
        NasmLabel lineLabel = label;
        inst = new Ret(lineLabel, "");
        outARetInst(node);
    }

    // inst =  {inter}  oplabel int
    @Override
    public void caseAInterInst(AInterInst node)
    {
        inAInterInst(node);
        node.getOplabel().apply(this);
        NasmLabel lineLabel = label;
        inst = new Int(lineLabel, "");
        outAInterInst(node);
    }

    // acr = {address} address
    @Override
    public void caseAAddressAcr(AAddressAcr node)
    {
        inAAddressAcr(node);
        if(node.getAddress() != null)
        {
            node.getAddress().apply(this);
        }
        outAAddressAcr(node);
    }

    // acr = {numconst} numconst
    @Override
    public void caseANumconstAcr(ANumconstAcr node)
    {
        inANumconstAcr(node);
        if(node.getNumconst() != null)
        {
            node.getNumconst().apply(this);
        }
        outANumconstAcr(node);
    }

    // acr = {register} register
    @Override
    public void caseARegisterAcr(ARegisterAcr node)
    {
        inARegisterAcr(node);
        if(node.getRegister() != null)
        {
            node.getRegister().apply(this);
        }
        outARegisterAcr(node);
    }


    // ar = {address} address
    @Override
    public void caseAAddressAr(AAddressAr node)
    {
        inAAddressAr(node);
        if(node.getAddress() != null)
        {
            node.getAddress().apply(this);
        }
        outAAddressAr(node);
    }

    // ar = {register} register
    @Override
    public void caseARegisterAr(ARegisterAr node)
    {
        inARegisterAr(node);
        if(node.getRegister() != null)
        {
            node.getRegister().apply(this);
        }
        outARegisterAr(node);
    }
    
    // address = opsizeof brackopen exp brackclose
    @Override
    public void caseAAddress(AAddress node)
    {
        inAAddress(node);
        node.getOpsizeof().apply(this);
        NasmSize sizeof = size;
        node.getExp().apply(this);
        NasmExp val = exp;
        operand = new NasmAddress(val, sizeof);
        outAAddress(node);
    }


    // opsizeof = {byte} byte
    @Override
    public void caseAByteOpsizeof(AByteOpsizeof node)
    {
        inAByteOpsizeof(node);
        size = NasmSize.BYTE;
        outAByteOpsizeof(node);
    }

    // opsizeof = {word} word
    @Override
    public void caseAWordOpsizeof(AWordOpsizeof node)
    {
        inAWordOpsizeof(node);
        size = NasmSize.WORD;
        outAWordOpsizeof(node);
    }

    // opsizeof = {dword} dword
    @Override
    public void caseADwordOpsizeof(ADwordOpsizeof node)
    {
        inADwordOpsizeof(node);
        size = NasmSize.DWORD;
        outADwordOpsizeof(node);
    }

    // opsizeof = {empty}
    @Override
    public void caseAEmptyOpsizeof(AEmptyOpsizeof node)
    {
        inAEmptyOpsizeof(node);
        size = NasmSize.UNDEFINED;
        outAEmptyOpsizeof(node);
    }

    // exp = {plus}  exp plus exp1
    @Override
    public void caseAPlusExp(APlusExp node)
    {
        inAPlusExp(node);
        node.getExp().apply(this);
        NasmExp op1 = exp;
        node.getExp1().apply(this);
        NasmExp op2 = exp;
        exp = new ExpPlus(op1, op2);
        outAPlusExp(node);
    }

    // exp = {minus} exp minus exp1
    @Override
    public void caseAMinusExp(AMinusExp node)
    {
        inAMinusExp(node);
        node.getExp().apply(this);
        NasmExp op1 = exp;
        node.getExp1().apply(this);
        NasmExp op2 = exp;
        exp = new ExpMinus(op1, op2);
        outAMinusExp(node);
    }

    // exp = {next}  exp1
    @Override
    public void caseANextExp(ANextExp node)
    {
        inANextExp(node);
        if(node.getExp1() != null)
        {
            node.getExp1().apply(this);
        }
        outANextExp(node);
    }


    // exp1 = {times} exp1 times exp2
    @Override
    public void caseATimesExp1(ATimesExp1 node)
    {
        inATimesExp1(node);
        node.getExp1().apply(this);
        NasmExp op1 = exp;
        node.getExp2().apply(this);
        NasmExp op2 = exp;
        exp = new ExpTimes(op1, op2);
        outATimesExp1(node);
    }

    // exp1 = {next}  exp2
    @Override
    public void caseANextExp1(ANextExp1 node)
    {
        inANextExp1(node);
        if(node.getExp2() != null)
        {
            node.getExp2().apply(this);
        }
        outANextExp1(node);
    }


    // exp2 = {label} label
    @Override
    public void caseALabelExp2(ALabelExp2 node)
    {
        inALabelExp2(node);
        node.getLabel().apply(this);
        exp = label;
        outALabelExp2(node);
    }

    // exp2 = {numconst} numconst
    @Override
    public void caseANumconstExp2(ANumconstExp2 node)
    {
        inANumconstExp2(node);
        node.getNumconst().apply(this);
        exp = (NasmConstant)operand;
        outANumconstExp2(node);
    }

    // exp2 = {register} register
    @Override
    public void caseARegisterExp2(ARegisterExp2 node)
    {
        inARegisterExp2(node);
        node.getRegister().apply(this);
        exp = (NasmRegister) operand;
        outARegisterExp2(node);
    }

    // numconst = number
    @Override
    public void caseANumconst(ANumconst node)
    {
        inANumconst(node);
        operand = new NasmConstant(Integer.parseInt(node.getNumber().getText()));
        outANumconst(node);
    }

    // register = {temp} prefix_register number
    @Override
    public void caseATempRegister(ATempRegister node)
    {
        inATempRegister(node);
	int regNb = Integer.parseInt(node.getNumber().getText());
	if (regNb > nasm.getTempCounter())
	    nasm.setTempCounter(regNb);
        operand = new NasmRegister(regNb);
        outATempRegister(node);
    }

    // register = {eax} eax
    @Override
    public void caseAEaxRegister(AEaxRegister node)
    {
        inAEaxRegister(node);
        NasmRegister reg  = new NasmRegister(0);
        reg.colorRegister(Nasm.REG_EAX);
        operand = reg;
        outAEaxRegister(node);
    }

    // register = {ebx} ebx
    @Override
    public void caseAEbxRegister(AEbxRegister node)
    {
        inAEbxRegister(node);
        NasmRegister reg  = new NasmRegister(0);
        reg.colorRegister(Nasm.REG_EBX);
        operand = reg;
        outAEbxRegister(node);
    }

    // register = {ecx} ecx
    @Override
    public void caseAEcxRegister(AEcxRegister node)
    {
        inAEcxRegister(node);
        NasmRegister reg  = new NasmRegister(0);
        reg.colorRegister(Nasm.REG_ECX);
        operand = reg;
        outAEcxRegister(node);
    }

    // register = {edx} edx
    @Override
    public void caseAEdxRegister(AEdxRegister node)
    {
        inAEdxRegister(node);
        NasmRegister reg  = new NasmRegister(0);
        reg.colorRegister(Nasm.REG_EDX);
        operand = reg;
        outAEdxRegister(node);
    }

    // register = {ebp} ebp
    @Override
    public void caseAEbpRegister(AEbpRegister node)
    {
        inAEbpRegister(node);
        NasmRegister reg  = new NasmRegister(0);
        reg.colorRegister(Nasm.REG_EBP);
        operand = reg;
        outAEbpRegister(node);
    }

    // register = {esp} esp
    @Override
    public void caseAEspRegister(AEspRegister node)
    {
        inAEspRegister(node);
        NasmRegister reg  = new NasmRegister(0);
        reg.colorRegister(Nasm.REG_ESP);
        operand = reg;
        outAEspRegister(node);
    }


    // oplabel = {label} label semicol
    @Override
    public void caseALabelOplabel(ALabelOplabel node)
    {
        inALabelOplabel(node);
        node.getLabel().apply(this);
        outALabelOplabel(node);
    }

    // oplabel = {empty}
    @Override
    public void caseAEmptyOplabel(AEmptyOplabel node)
    {
        inAEmptyOplabel(node);
        label = null;
        outAEmptyOplabel(node);
    }

    // label = id
    @Override
    public void caseALabel(ALabel node)
    {
        inALabel(node);
        label = new NasmLabel(node.getId().getText());
        outALabel(node);
    }
}
