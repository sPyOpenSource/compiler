// -*-Java-*-

// COMMON_HEADER: package jx.compiler.nativecode; 
package jx.compiler.nativecode;

// COMMON_HEADER: import jx.classfile.datatypes.*; 

public class IA32Node {
    public int size() {return -1;}
    public int translate(int ip, byte[] code) {return ip;}
}
