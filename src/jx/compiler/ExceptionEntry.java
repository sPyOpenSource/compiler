
package jx.compiler;

import jx.compiler.symbols.UnresolvedJump;

/**
 *
 * @author xuyi
 */
public class ExceptionEntry {
    int type;
    int bcPosition;
    UnresolvedJump jump;
    UnresolvedJump back_jump;
}
