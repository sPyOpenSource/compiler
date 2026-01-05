
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.logging.Level;
import java.util.logging.Logger;
import org.json.JSONObject;
import org.junit.Test;

/**
 *
 * @author xuyi
 */
public class ClassTest {
    @Test
    public void nasm2json() {
        ArrayList<String> comments = new ArrayList<>();
        String rootpath = "/Users/xuyi/Source/OS/armOS/lib/jcore/src/Assembly/";
        Path filePath = Paths.get(rootpath + "asm.S");
        String code = "";
        try {
            code = "{" + Files.readString(filePath);
        } catch (IOException ex) {
            Logger.getLogger(ClassTest.class.getName()).log(Level.SEVERE, null, ex);
        }
        //System.out.println(code);
        code = code.replace("/*", "'''");
        code = code.replace("*/", "'''");
        String[] comment = code.split("'''");
        for(int i = 0; i < comment.length; i++){
            String cm = comment[i];
            if(i % 2 == 1) {
                comments.add(cm);
                comment[i] = "\"},{comment: " + comments.size() + "\n";
                continue;
            }
            String[] cms = cm.split("#");
            for(int j = 1; j < cms.length; j++){
                String[] cms0 = cms[j].split("\n");
                //System.out.println(cms0[0]);
                comments.add(cms0[0]);
                cm = cm.replace(";" + cms0[0], "\"},{comment: " + comments.size() + "\n");
            }
            comment[i] = cm;
        }
        code = Arrays.toString(comment);
        //System.out.println(code);
        code = code.replace("#define", "define: ");
        code = code.replace("#if ", "if: ");
        code = code.replace("#ifdef", "if:");
        code = code.replace("#endif", "endif: ");
        //code = code.replace("(", ": (");
        code = code.replace("\\\n", "");
        code = code.replace("        ", " ");
        code = code.replace("       ", " ");
        code = code.replace("    ", " ");
        code = code.replace("	", " ");
        code = code.replace("  ", " ");
        //code = code.replace("; \\", "");
        code = code.replace("EQU", ":");
        code = code.replace("ORG", "ORG:");
        code = code.replace("BITS", "BITS:");
        code = code.replace("ALIGN", "ALIGN:");
        code = code.replace(":\n", ": label\"},{");
        code = code.replace("global", "{global:");
        code = code.replace("section", "section:");
        code = code.replace(".p2align", "p2align:");
        code = code.replace(".type ", "type:");
        code = code.replace(".globl ", "globl:");
        code = code.replace(".long", "long:");
        code = code.replace(".word", "word:");
        code = code.replace(".byte", "byte:");
        //code = code.replace(";", ",");
        code = code.replace("mov ", "mov: ");
        code = code.replace("movw", "movw:");
        code = code.replace("movl", "movl:");
        code = code.replace("int ", "int: ");
        code = code.replace("jmp", "jmp:");
        code = code.replace("times", "times:");
        code = code.replace("dw ", ",{dw: ");
        code = code.replace(" dd ", " ,{dd: ");
        code = code.replace("add ", "add: ");
        code = code.replace(": ,{", ": label\"},{");
        code = code.replace("push ", "push: ");
        code = code.replace("pushl ", "pushl: ");
        code = code.replace("pop ", "pop: ");
        code = code.replace("popl ", "popl: ");
        code = code.replace("xor ", "xor: ");
        code = code.replace("xorw", "xorw:");
        code = code.replace(" or ", " or: ");
        code = code.replace("orl", "orl:");
        code = code.replace(" dec ", "dec: ");
        code = code.replace("test ", "test: ");
        code = code.replace("shr ", "shr: ");
        code = code.replace("shrl", "shrl:");
        code = code.replace("jz ", "jz: ");
        code = code.replace("jc ", "jc: ");
        code = code.replace("je ", "je: ");
        code = code.replace("jl", "jl:");
        code = code.replace("jnz", "jnz:");
        code = code.replace("jne", "jne:");
        code = code.replace("cmp ", "cmp: ");
        code = code.replace("cmpb", "cmpb:");
        code = code.replace("cmpw", "cmpw:");
        code = code.replace(" loop", "loop:");
        code = code.replace("call", "call:");
        code = code.replace("out", "out:");
        code = code.replace(" lgdt ", "lgdt: ");
        code = code.replace("and ", "and: ");
        code = code.replace("andl", "andl:");
        code = code.replace("in ", "in: ");
        code = code.replace("inc", "inc:");
        code = code.replace("\n db", "\"},{db:");
        code = code.replace("\n", "\"},{");
        code = code.replace("data32", "data:32,");
        code = code.replace(": ", ":\"");
        code = code.replace("\"in:\"", "\"in ");
        code = code.replace("\" popl:\"", "\"popl ");
        code = code.replace(") mov:\"", ") mov ");
        code = code.replace("; mov:\"", "; mov ");
        code = code.replace("; and:\"", "; and ");
        code = code.replace("; out:\"", "; out ");
        code = code.replace("; je:\"", "; je ");
        code = code.replace(",{]", "]");
        code = code.replace(", \"}", "\"}");
        code = code.replace(",{\"}", "");
        code = code.replace(",{ ,{", ",{");
        code = code.replace(":\"\"},{", ":\"lable\"},{");
        code = code.replace("{ ret \"}", "ret");
        code = code.replace("{ ret\"}", "ret");
        code = code.replace("{ cli \"}", "cli");
        code = code.replace("{ cli\"}", "cli");
        code = code.replace("{ sti\"}", "sti");
        code = code.replace("{ sti \"", "sti");
        code = code.replace("{ stc \"}", "stc");
        code = code.replace("{ pushf \"}", "pushf");
        code = code.replace("{ popf \"}", "popf");
        code = code.replace("{ .code32\"}", "code32");
        code = code.replace("{ .code16\"}", "code16");
        code = code.replace("{ .text\"}", "text");
        code = code.replace(",sti},", ",sti,");
        code = code.replace(",{ \"}", "");
        code = code.replace(", \",", ",");
        code = code.replace("end]", "end:label}]");
        String[] lines = code.split("},");
        for (int i = 0; i < lines.length - 1; i++){
            String[] count = lines[i].split("\"");
            if (count.length == 1){
                lines[i] = lines[i].replace("{", "{type:\"");
            }
            if(count.length == 3){
                lines[i] = count[0] + "\"" + count[1] + count[2] + "\"";
            }
            lines[i] = lines[i] + "}";
        }
        code = Arrays.toString(lines).replace("[[", "[");
        code = code.replace("]]", "]");
        code = "{language:" + filePath.toString().split("\\.")[1] + ", code:" + code + "}";
        JSONObject object = new JSONObject(code);
        System.out.println(object.toString(4));
        for(Object funct:object.getJSONArray("code")){
            try{
                JSONObject f = (JSONObject)funct;
                if (f.has("mov")){
                    String line = "{target:" + f.getString("mov") + "}";
                    line = line.replace(",", ",source:");
                    System.out.println(line);
                }
            } catch (Exception e){
            }
        }
    }
}
