
package jx.compiler.imcode; 

public class IMOperator extends IMOperant {

    public IMOperator(CodeContainer container) {
	super(container);
	tag = tag | OPERATOR;
    }

    @Override
    public String toReadableString() {
	return "<operator>";
    }
}
