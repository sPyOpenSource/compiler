
package test;

import j2ll.ClassHelper;
import java.io.DataInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.util.logging.Level;
import java.util.logging.Logger;
import jx.classfile.ClassData;
import jx.classfile.MethodData;
import jx.classfile.MethodSource;
import org.junit.Test;
import org.objectweb.asm.Attribute;
import org.objectweb.asm.ClassReader;
import org.objectweb.asm.tree.ClassNode;

/**
 *
 * @author xuyi
 */
public class JUnitTest {
    @Test
    public void testLLVM(){
        ClassHelper ch = new ClassHelper();
        ch.openClasses();
        for(String nam:ch.getAllClass()){
            if(nam.endsWith(".class")){
                byte[] is = ch.getClassFileStream(nam);
                ClassReader cr = new ClassReader(is);
                ClassNode cn = new ClassNode();
                //Attribute[] attrs = new Attribute[]{new Attribute("SourceFile")};
                cr.accept(cn, 0);
                //System.out.println(cn.name);
                /*for(MethodNode method: cn.methods){
                    System.out.println(method.name);
                }*/
                if(cn.attrs!=null)
                for(Attribute attr:cn.attrs){
                    System.out.println(attr.type);
                }
            }
        }
    }
    
    @Test
    public void testIM(){
        File file = new File("/Users/xuyi/Source/Java/V0191/src/sjc/ui/Boot.class");
        InputStream is;
        try {
            is = new FileInputStream(file);
            ClassData data;
            data = new ClassData(new DataInputStream(is));
            for (MethodData method:data.getMethodData()){
                method.getCode();
                System.out.println(method.getMethodName());
            }
        } catch (IOException ex) {
            Logger.getLogger(JUnitTest.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    @Test
    public void testIR(){
        
    }
    
    @Test
    public void testIA32(){
        
    }
}
