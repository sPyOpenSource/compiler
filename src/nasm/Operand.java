package nasm;

public abstract class Operand {

    public static boolean REG;

    public int value;
    public boolean tag;
    public boolean isGeneralRegister(){
	return false;
    }
    public  abstract <T> T accept(NasmVisitor <T> visitor);
}
