package j2ll;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.List;

public class AssistLLVM {

    static final String declares = """
                                   declare noalias i8* @malloc(i32)
                                   declare void @free(i8*)
                                   declare void @print_debug(i32)
                                   declare void @print_ptr(i64)
                                   declare i32 @ptr_size()
                                   """;

    static final String CHAR_ARR = "[C";

    static Resolver resolver = new Resolver();
    static List<String> clinitMethods = new ArrayList<>();

    static public void genClinits(String outpath) {
        try {
            File f = new File(outpath + "/clinits.ll");
            FileOutputStream fos = new FileOutputStream(f);
            PrintStream ps = new PrintStream(fos);

            //declare
            ps.println(getAssistFuncDeclare());
            String carrIRtype = Util.javaSignature2irType(resolver, CHAR_ARR);
            ps.println("declare void @java_lang_String__init___C(%java_lang_String* %s0, " + carrIRtype + " %s1)");
            for (String s : clinitMethods) {
                if (s != null) ps.println("declare " + s);
            }
            ps.println("\n");

            ps.println(Util.class2struct(resolver, "java/lang/String"));
            ps.println(Util.class2struct(resolver, CHAR_ARR));
            ps.println("\n");

            //call
            ps.println("define void @classes_clinit(){");
            for (String s : clinitMethods) {
                if (s != null) ps.println("    call " + s);
            }
            ps.println("    ret void");
            ps.println("}");
            ps.println("\n");


            String funcName = getConstStringFuncName();
            String extFunc = "define " + funcName + "  {\n"
                    + "    %tmps0 = alloca " + carrIRtype + "\n"
                    + "    store " + carrIRtype + " %s0, " + carrIRtype + "* %tmps0\n"
                    + "    %stack0 = load " + carrIRtype + ", " + carrIRtype + "* %tmps0             \n"
                    + "    ; new %java_lang_String\n"
                    + "    %__objptr = getelementptr %java_lang_String, %java_lang_String* null, i32 1\n"
                    + "    %__memsize = ptrtoint %java_lang_String* %__objptr to i32 \n"
                    + "    ;call void @print_debug(i32 %__memsize) \n"
                    + "    %__tmp0 = call i8* @malloc(i32 %__memsize)\n"
                    + "    %stack1 = bitcast i8* %__tmp0 to %java_lang_String*\n"
                    + "    ;              \n"
                    + "    call void @java_lang_String__init___C(%java_lang_String* %stack1, " + carrIRtype + " %stack0) \n"
                    + "    ret %java_lang_String* %stack1\n"
                    + "}                  \n";
            ps.println(extFunc);
            ps.println("\n");

            ps.close();
            fos.close();
        } catch (IOException e) {
            throw new RuntimeException("generate clinits.ll error");
        }
    }

    static public void addClinit(String s) {
        clinitMethods.add(s);
    }


    static public String getConstStringFuncName() {
        String ty = Util.javaSignature2irType(resolver, "Ljava/lang/String;"); //for add class java.lang.String declare
        String carrIRtype = Util.javaSignature2irType(resolver, CHAR_ARR);
        String funcName = ty + " @construct_string_with_char_arr_(" + carrIRtype + " %s0)";
        return funcName;
    }

    static public String getAssistFuncDeclare() {
        return declares;
    }
}
