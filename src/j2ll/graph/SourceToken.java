
package j2ll.graph;

import java.util.ArrayList;
import java.util.List;

public class SourceToken {
    public SourceToken(String[] strs) {
        for (String str : strs) {
            IrSentence irs = IrSentence.parseInst(str);
            code.add(irs);
        }
    }

    List<IrSentence> code = new ArrayList<>();
    public int pos;
}
