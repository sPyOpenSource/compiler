
package jx.compiler.imcode.graph;

public class IMCodeVector {

    private int size;
    private IMNode[] code;

    public IMCodeVector() {
    size = 0;
    code = new IMNode[5];
    }

    public IMNode element(int i) {
    return code[i];
    }

    public void add(IMNode aCode) {
    if (aCode == null) return;
    realloc(size);
    code[size++] = aCode;
    }

    public int size() {
    return size;
    }

    private void realloc(int nSize) {
    if (nSize > code.length) {
        IMNode[] newArray = new IMNode[code.length + 5];
        System.arraycopy(code, 0, newArray, 0, code.length);
        code = newArray;
    }
    }
    
}
