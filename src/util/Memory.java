package util;

/* Big Endian */

public class Memory{
    /* stack segment */
    private final int ss;

    /* data segment */
    private final int ds;

    public int esp; // adresse du sommet de la pile en octets
    private final int memSize;
    private final int dataSize;
    private final int stackSize;
    private final byte[] mem;

    public Memory(int dataSize, int stackSize){
	this.dataSize = dataSize;
	this.stackSize = stackSize;
	this.memSize = dataSize + stackSize;
	mem = new byte[memSize];
	ss = memSize - 1;
	esp = ss;
	ds = 0;
    }

    public void printStack(){
	for(int adr = ss - 3; adr > esp; adr = adr - 4){
	    System.out.print(readInt(adr) + "\t");
	}
	System.out.println();
    }
    
    public int readInt(int address){
	if((address < 0) || (address + 3 > ss))
            throw new RuntimeException("segmentation fault");
	return bytesToInt(mem[address], mem[address + 1], mem[address + 2], mem[address + 3]);
    }

   
    public boolean readBoolean(int address){
	if((address < 0) || (address > ss))
            throw new RuntimeException("segmentation fault");
	return byteToBoolean(mem[address]);
    }

    public byte readByte(int address){
	if((address < 0) || (address > ss))
            throw new RuntimeException("segmentation fault");
	return mem[address];
    }

    public void writeInt(int address, int value){
	if((address < 0) || (address + 3 > ss))
            throw new RuntimeException("segmentation fault");

	byte[] fourBytes = intToBytes(value);
	mem[address] = fourBytes[0];
	mem[address + 1] = fourBytes[1];
	mem[address + 2] = fourBytes[2];
	mem[address + 3] = fourBytes[3];
    }

    public void writeToMemory(int address, int value){
	if((address < 0) || (address + 3 > ss))
            throw new RuntimeException("segmentation fault");
	
	byte[] fourBytes = intToBytes(value);
	mem[address] = fourBytes[0];
	mem[address + 1] = fourBytes[1];
	mem[address + 2] = fourBytes[2];
	mem[address + 3] = fourBytes[3];
    }

    /*    public void writeToMemory(int address, boolean value)
    {
	if((address < 0) || (address > ss))
            throw new RuntimeException("segmentation fault");
	mem[address] = booleanToByte(value);
	}*/


    /* revoir c'est quoi cette affaire */
        public int readNBytes(int address, int n){
	//	System.out.println("read memory at address " + address);
	if((address < 0) || (address + n - 1 > ss))
            throw new RuntimeException("segmentation fault");
	if(n == 1)
	    return (int)mem[address];
	//	if(n == 4) revoir pourquoi c'est commenté !!
	return bytesToInt(mem[address], mem[address + 1], mem[address + 2], mem[address + 3]);
	
	}

    /*    public void writeNBytes(int address, int value){
	if((address < 0) || (address + n - 1 > ss))
            throw new RuntimeException("segmentation fault");

	byte[] fourBytes = intToBytes(value);
	mem[address] = fourBytes[0];
	mem[address + 1] = fourBytes[1];
	mem[address + 2] = fourBytes[2];
	mem[address + 3] = fourBytes[3];
	}*/


    
       public void writeBoolean(int address, boolean value)
    {
	if((address < 0) || (address > ss))
            throw new RuntimeException("segmentation fault");
	mem[address] = booleanToByte(value);
	}
    
    public void pushInt(int value){
	if(esp - 3 < dataSize)
            throw new RuntimeException("stack overflow");

	byte[] fourBytes = intToBytes(value);
	mem[--esp] = fourBytes[3];
	mem[--esp] = fourBytes[2];
	mem[--esp] = fourBytes[1];
	mem[--esp] = fourBytes[0];


    }
    /*
    public void pushBoolean(boolean value){
	if(esp == dataSize)
            throw new RuntimeException("stack overflow");
	mem[esp] = booleanToByte(value);
	esp--;

	}*/

    public int getTopInt(){
	//	if(esp == ss)
	//  throw new RuntimeException("empty stack");
	byte byte0 = mem[esp];
	byte byte1 = mem[esp-1];
	byte byte2 = mem[esp-2];
	byte byte3 = mem[esp-3];
	return bytesToInt(byte0, byte1, byte2, byte3);
    }
    
    public int popInt(){
	if(esp + 3 >= ss)
            throw new RuntimeException("stack underflow");
       	byte byte0 = mem[esp++];
	byte byte1 = mem[esp++];
	byte byte2 = mem[esp++];
	byte byte3 = mem[esp++];
	
	return bytesToInt(byte0, byte1, byte2, byte3);
    }

    /*    public boolean popBoolean()
    {
	if(esp == ss)
	    throw new RuntimeException("stack underflow");
	byte byte0 = mem[esp];
	esp++;
	return byteToBoolean(byte0);
	}*/

    public int bytesToInt(byte byte0, byte byte1, byte byte2, byte byte3){
        return  ((byte0 & 0xFF) << 24) |
                ((byte1 & 0xFF) << 16) |
                ((byte2 & 0xFF) << 8) |
                ((byte3 & 0xFF));
    }
    
    public byte[] intToBytes2( int data ) {    
    byte[] result = new byte[4];
    result[0] = (byte) ((data & 0xFF000000) >> 24);
    result[1] = (byte) ((data & 0x00FF0000) >> 16);
    result[2] = (byte) ((data & 0x0000FF00) >> 8);
    result[3] = (byte) ((data & 0x000000FF));
    return result;        
}
    public byte[] intToBytes(int i)
    {
	byte[] result = new byte[4];
	
	result[0] = (byte) (i >> 24);
	result[1] = (byte) (i >> 16);
	result[2] = (byte) (i >> 8);
	result[3] = (byte) (i /*>> 0*/);
	
	return result;
    }
    
    public byte booleanToByte(boolean value)
    {
	return (value == true)? (byte) 1 : (byte) 0; 
	}

    public boolean byteToBoolean(byte value)
    {
	return (value == 1)? true : false;
    }

    
    /*        public static void main(String[] args){
	Memory mem = new Memory(100, 100);
	mem.pushInt(3467);
	int v = mem.popInt();
	System.out.println("val =" + v);
	mem.pushInt(3468);
	v = mem.popInt();
	System.out.println("val =" + v);

	mem.writeInt(96, 234);
	int val = mem.readInt(96);
	System.out.println("val =" + val);
	
	mem.writeInt(150, 23);
	val = mem.readInt(250);
	System.out.println("val =" + val);
	
	}*/
    
}
