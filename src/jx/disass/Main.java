package jx.disass;


public class Main {
    public static void main(String [] args){
        byte[] code = {1, 2, 3, 4, 5, 6, 7, 7, 8, 9, 10, 10, 33, 44, 79, 10};
        Disassembler dis = new Disassembler("/home/spy/Source/RiscV/hello", 20, 0);
        for(int i = 0; i < 5; i++)
            System.out.println(dis.disasmInstr());
    }
}
