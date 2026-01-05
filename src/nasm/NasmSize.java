package nasm;

public enum NasmSize {

    BYTE(1, "byte"),
    WORD(2, "word"),
    DWORD(4, "dword"),
    UNDEFINED(0, "");
    private final String name;
    private final int value;

    NasmSize(int value, String name) {
        this.value = value;
        this.name = name;
    }

    @Override
    public String toString(){return name;}
    public String getName(){return this.name;}
    public int getValue(){return value;}
    
}