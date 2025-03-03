
package j2ll;

import compiler.Compiler;
import j2ll.utils.Statistics;
import j2ll.utils.StatisticsCollector;
import j2ll.utils.Util;
import org.objectweb.asm.ClassReader;

import java.io.*;
import java.util.ArrayList;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;
import org.objectweb.asm.Attribute;
import org.objectweb.asm.tree.ClassNode;

/**
 *
 */
public class Main {

    public static void main(String[] args) throws IOException {
        String llvmPath = "./app/ir/";

        System.out.println("llvm *.ll output path: " + llvmPath);

        //javaSrc2class(srcPath, classesPath);
        Util.helper = new ClassHelper();
        Util.helper.openClasses();
        
        class2ll(llvmPath);

//        conv("java.lang.Object", classesPath, llvmPath);
//        conv("java.io.PrintStream", classesPath, llvmPath);
//        conv("java.lang.System", classesPath, llvmPath);
//        conv("java.lang.Throwable", classesPath, llvmPath);
//        conv("java.lang.NullPointerException", classesPath, llvmPath);
//        conv("java.lang.String", classesPath, llvmPath);
//        conv("java.lang.StringBuilder", classesPath, llvmPath);
//        conv("test.Test", classesPath, llvmPath);
//        conv("test.TestParent", classesPath, llvmPath);

        //gen clinit call
        AssistLLVM.genClinits(llvmPath);
    }

    static void javaSrc2class(String srcPath, String classesPath) throws IOException {

        File f = new File(classesPath);
        if (!f.exists()) {
            f.mkdirs();
        }
        compiler.Compiler.compile(srcPath, classesPath);
        List<String> files = new ArrayList<>();
        Compiler.find(classesPath, files, null, ".class");

        Util.helper = new ClassHelper("", files.toArray(new String[files.size()]));
        Util.helper.openClasses();

    }

    static void class2ll(String llvmPath) throws IOException {
        for (String key:Util.helper.getAllClass()) {
            try {
                conv(Util.helper.getClassFileStream(key), key, llvmPath);
            } catch (IOException ex) {
                Logger.getLogger(Main.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }

    public static void conv(byte[] is, String name, String llvmPath) throws IOException {
        String outFileName = name.replaceAll(".class", ".ll").replaceAll("/", ".");
        //System.out.println(outFileName);
        PrintStream ps = new PrintStream(new File(llvmPath, outFileName));

        Statistics statistics = new Statistics();
        StatisticsCollector sc = new StatisticsCollector(statistics);
        CV cv = new CV(ps, statistics);

        // read class
        ClassReader cr = new ClassReader(is);
        Attribute[] attrs = new Attribute[0];
        cr.accept(sc, attrs, 0);
/*for(Attribute attr:attrs){
    System.out.println(attr.type);
}*/
        cr.accept(cv, 0);
        ClassNode cn = new ClassNode();
        cr.accept(cn, ClassReader.EXPAND_FRAMES);
        if(cn.attrs != null){
            for(Attribute attr:cn.attrs){
                System.out.println(attr.type);
            }
        }
        ps.flush();
    }

}
