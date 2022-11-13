package j2ll.graph;

public class IrVariable {
    
    public String type, name;

    public IrVariable(String type, String name) {
        this.type = type;
        this.name = name;
    }

    @Override
    public int hashCode() {
        return this.name.hashCode();
    }

    @Override
    public boolean equals(Object o) {
        if (o instanceof IrVariable) {
            IrVariable irv = (IrVariable) o;
            return irv.name.equals(this.name);
        }
        return false;
    }

    @Override
    public String toString() {
        return type + " " + name;
    }

}
