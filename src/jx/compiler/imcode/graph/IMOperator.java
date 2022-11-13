
package jx.compiler.imcode.graph; 

import jx.compiler.imcode.CodeContainer;

public class IMOperator extends IMOperant {

    public IMOperator(CodeContainer container) {
	super(container);
	tag = tag | OPERATOR;
    }

    @Override
    public String toString() {
	return "<operator>";
    }
}
