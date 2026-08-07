package jx.zero;

public class VMClass {
    private final String className;
    
    public VMClass(String className) {
        this.className = className;
    }
    
    public String getName() {
        return className;
    }
}