package jx.classfile; 

/** 
    This class contains all Java Virtual Machine Instruction.
    see http://java.sun.com/docs/books/vmspec/2nd-edition/html/Instructions.doc.html for details.
*/
final public class Opcodes {
    public static final int NOP = 0x00;
    
    // push int constant to operanten stack
    public static final int ACONST_NULL = 0x01;
    public static final int ICONST_M1 = 0x02; 
    public static final int ICONST_0 = 0x03;
    public static final int ICONST_1 = 0x04;
    public static final int ICONST_2 = 0x05;
    public static final int ICONST_3 = 0x06;
    public static final int ICONST_4 = 0x07;
    public static final int ICONST_5 = 0x08;
    public static final int LCONST_0 = 0x09;
    public static final int LCONST_1 = 0x0a;	    
    public static final int FCONST_0 = 0x0b;
    public static final int FCONST_1 = 0x0c;
    public static final int FCONST_2 = 0x0d;
    public static final int DCONST_0 = 0x0e;	    
    public static final int DCONST_1 = 0x0f;
    
    // push int constant to operanten stack [value 1-2]
    public static final int BIPUSH = 0x10; 
    public static final int SIPUSH = 0x11;
    
    // load constant from pool [index 1-2]
    public static final int LDC    = 0x12;
    public static final int LDC_W  = 0x13;
    public static final int LDC2_W = 0x14;
    
    // load int,long,float,double form local variable [index 1]
    public static final int ILOAD = 0x15;    
    public static final int LLOAD = 0x16;
    public static final int FLOAD = 0x17;    
    public static final int DLOAD = 0x18;
    
    // load reference from local variable [index 1]
    public static final int ALOAD = 0x19;
    
    // load int,long,float,double from local variable
    public static final int ILOAD_0 = 0x1a;
    public static final int ILOAD_1 = 0x1b;
    public static final int ILOAD_2 = 0x1c;
    public static final int ILOAD_3 = 0x1d;
    public static final int LLOAD_0 = 0x1e;
    public static final int LLOAD_1 = 0x1f;
    public static final int LLOAD_2 = 0x20;
    public static final int LLOAD_3 = 0x21;
    public static final int FLOAD_0 = 0x22;
    public static final int FLOAD_1 = 0x23;
    public static final int FLOAD_2 = 0x24;
    public static final int FLOAD_3 = 0x25;
    public static final int DLOAD_0 = 0x26;
    public static final int DLOAD_1 = 0x27;
    public static final int DLOAD_2 = 0x28;
    public static final int DLOAD_3 = 0x29;
    public static final int ALOAD_0 = 0x2a;
    public static final int ALOAD_1 = 0x2b;
    public static final int ALOAD_2 = 0x2c;
    public static final int ALOAD_3 = 0x2d;

    // load int,long,float,double,ref,(byte/boolean),char, short
    // from array (ref,index) to (value)
    public static final int IALOAD = 0x2e;
    public static final int LALOAD = 0x2f;
    public static final int FALOAD = 0x30;
    public static final int DALOAD = 0x31;
    public static final int AALOAD = 0x32;
    public static final int BALOAD = 0x33;
    public static final int CALOAD = 0x34;
    public static final int SALOAD = 0x35;

    // store int,long,float,double,ref into local variable [index]
    public static final int ISTORE = 0x36;
    public static final int LSTORE = 0x37;
    public static final int FSTORE = 0x38;
    public static final int DSTORE = 0x39;
    public static final int ASTORE = 0x3a;

    public static final int ISTORE_0 = 0x3b;
    public static final int ISTORE_1 = 0x3c;
    public static final int ISTORE_2 = 0x3d;
    public static final int ISTORE_3 = 0x3e;
    public static final int LSTORE_0 = 0x3f;
    public static final int LSTORE_1 = 0x40;
    public static final int LSTORE_2 = 0x41;
    public static final int LSTORE_3 = 0x42;
    public static final int FSTORE_0 = 0x43;
    public static final int FSTORE_1 = 0x44;
    public static final int FSTORE_2 = 0x45;
    public static final int FSTORE_3 = 0x46;
    public static final int DSTORE_0 = 0x47;
    public static final int DSTORE_1 = 0x48;
    public static final int DSTORE_2 = 0x49;
    public static final int DSTORE_3 = 0x4a;
    public static final int ASTORE_0 = 0x4b;
    public static final int ASTORE_1 = 0x4c;
    public static final int ASTORE_2 = 0x4d;
    public static final int ASTORE_3 = 0x4e;

    // store int,long,float,double,ref,(byte/boolean),
    // char, short into array (ref,index,value) to ...
    public static final int IASTORE = 0x4f;
    public static final int LASTORE = 0x50;
    public static final int FASTORE = 0x51;
    public static final int DASTORE = 0x52;
    public static final int AASTORE = 0x53;
    public static final int BASTORE = 0x54;
    public static final int CASTORE = 0x55;
    public static final int SASTORE = 0x56;

    
    public static final int POP  = 0x57;
    public static final int POP2 = 0x58;

    // Duplicate the top operand stack value
    // ..., value to ...,value, value
    public static final int DUP  = 0x59;
    
    // Duplicate the top operand stack value and insert two values down
    // ..., value2, value1 to ..., value1, value2, value1
    public static final int DUP_X1 = 0x5a;
    
    // Duplicate the top operand stack value and insert two or three values down
    // if value2==32bit : ...,value3,value2,value1 to ...,value1,value3,value2,value1
    // if value2==64bit : ...,value2,value1 to value1,value2,value1
    public static final int DUP_X2 = 0x5b;
    
    // Duplicate the top one or two operand stack values
    public static final int DUP2    = 0x5c;
    public static final int DUP2_X1 = 0x5d;
    public static final int DUP2_X2 = 0x5e;
    public static final int SWAP    = 0x5f;
    
    // add
    public static final int IADD = 0x60;
    public static final int LADD = 0x61;
    public static final int FADD = 0x62;
    public static final int DADD = 0x63;
    
    // sub
    public static final int ISUB = 0x64;
    public static final int LSUB = 0x65;
    public static final int FSUB = 0x66;
    public static final int DSUB = 0x67;
    
    // mul
    public static final int IMUL = 0x68;
    public static final int LMUL = 0x69;
    public static final int FMUL = 0x6a;
    public static final int DMUL = 0x6b;
    
    // div
    public static final int IDIV = 0x6c;
    public static final int LDIV = 0x6d;
    public static final int FDIV = 0x6e;
    public static final int DDIV = 0x6f;
    
    // rem value1,value2 to value1-(value1/value2)*value2
    public static final int IREM = 0x70;
    public static final int LREM = 0x71;
    public static final int FREM = 0x72;
    public static final int DREM = 0x73;

    public static final int INEG = 0x74;
    public static final int LNEG = 0x75;
    public static final int FNEG = 0x76;
    public static final int DNEG = 0x77;

    public static final int ISHL = 0x78;
    public static final int LSHL = 0x79;

    public static final int ISHR = 0x7a;
    public static final int LSHR = 0x7b;

    public static final int IUSHR = 0x7c;
    public static final int LUSHR = 0x7d;

    public static final int IAND = 0x7e;
    public static final int LAND = 0x7f;

    public static final int IOR = 0x80;
    public static final int LOR = 0x81;
    
    public static final int IXOR = 0x82;
    public static final int LXOR = 0x83;

    public static final int IINC = 0x84;

    public static final int I2L = 0x85;
    public static final int I2F = 0x86;
    public static final int I2D = 0x87;

    public static final int L2I = 0x88;
    public static final int L2F = 0x89;
    public static final int L2D = 0x8a;

    public static final int F2I = 0x8b;
    public static final int F2L = 0x8c;
    public static final int F2D = 0x8d;

    public static final int D2I = 0x8e;
    public static final int D2L = 0x8f;
    public static final int D2F = 0x90;

    public static final int I2B = 0x91;
    public static final int I2C = 0x92;
    public static final int I2S = 0x93;

    public static final int LCMP  = 0x94;
    public static final int FCMPL = 0x95;
    public static final int FCMPG = 0x96;
    public static final int DCMPL = 0x97;
    public static final int DCMPG = 0x98;

    // if [offset 2]
    public static final int IFEQ = 0x99;
    public static final int IFNE = 0x9a;
    public static final int IFLT = 0x9b;
    public static final int IFGE = 0x9c;
    public static final int IFGT = 0x9d;
    public static final int IFLE = 0x9e;

    // if [offset 2]
    public static final int IF_ICMPEQ = 0x9f;
    public static final int IF_ICMPNE = 0xa0;
    public static final int IF_ICMPLT = 0xa1;
    public static final int IF_ICMPGE = 0xa2;
    public static final int IF_ICMPGT = 0xa3;
    public static final int IF_ICMPLE = 0xa4;
    public static final int IF_ACMPEQ = 0xa5;
    public static final int IF_ACMPNE = 0xa6;

    // branch [offset 2]
    public static final int GOTO = 0xa7;
    
    // jump subroutine with in a method [offset 2]
    public static final int JSR  = 0xa8;
    
    // return from subroutine
    public static final int RET  = 0xa9; //ret

    public static final int TABLESWITCH = 0xaa;
    public static final int LOOKUPSWITCH = 0xab;

    // return from method
    public static final int IRETURN = 0xac;
    public static final int LRETURN = 0xad;
    public static final int FRETURN = 0xae;
    public static final int DRETURN = 0xaf;
    public static final int ARETURN = 0xb0;
    public static final int RETURN  = 0xb1;

    public static final int GETSTATIC = 0xb2;
    public static final int PUTSTATIC = 0xb3;

    public static final int GETFIELD = 0xb4;
    public static final int PUTFIELD = 0xb5;

    // invoke method
    public static final int INVOKEVIRTUAL = 0xb6;
    public static final int INVOKESPECIAL = 0xb7;
    public static final int INVOKESTATIC  = 0xb8;
    public static final int INVOKEINTERFACE = 0xb9;

    public static final int UNUSED = 0xba;

    public static final int NEW = 0xbb;
    public static final int NEWARRAY = 0xbc;
    public static final int ANEWARRAY = 0xbd;
    public static final int ARRAYLENGTH = 0xbe;
    public static final int ATHROW = 0xbf;
    public static final int CHECKCAST = 0xc0;
    public static final int INSTANCEOF = 0xc1;
    public static final int MONITORENTER = 0xc2;
    public static final int MONITOREXIT = 0xc3;

    public static final int WIDE = 0xc4;

    public static final int MULTIANEWARRAY = 0xc5;
    public static final int IFNULL = 0xc6;
    public static final int IFNONNULL = 0xc7;
    public static final int GOTO_W = 0xc8;
    public static final int JSR_W = 0xc9;

    // Reserved opcodes:
    public static final int BREAKPOINT = 0xca;
    public static final int IMPDEP1 = 0xfe;
    public static final int IMPDEP2 = 0xff;
}
