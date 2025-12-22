
package jx.compiler.backend;

import jx.compiler.imcode.*;

/**
 * X86-Register Class
 */
public interface RegObj {
    public int getDatatype();
    public void push(MethodStackFrame frame);
}
