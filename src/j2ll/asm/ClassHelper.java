
package j2ll.asm;

import jx.classfile.ClassData;
import java.io.FileNotFoundException;
import java.io.IOException;

import java.util.Enumeration;
import java.util.HashMap;
import java.util.Set;
import java.util.jar.JarEntry;
import java.util.jar.JarFile;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author xuyi
 */
public class ClassHelper {
    private String path;
    private String[] classes;
    private HashMap<String, ClassData> map = new HashMap<>();
    private JarFile[] files;
    
    public ClassHelper(String string, String[] toArray) {
        path = string;
        classes = toArray;
    }

    public ClassHelper() {
        try {
            files = new JarFile[]{
                new JarFile("../Zero/dist/Zero.jar"),
                new JarFile("../OS/dist/OS.jar"),
                //new JarFile("../AIZero/dist/AIZero.jar"),
                new JarFile("../test/ifOS/dist/ifOS.jar"),
                //new JarFile("/Users/xuyi/Source/Java/lib/jSerialComm-2.7.0.jar")
            };
        } catch (IOException ex) {
            Logger.getLogger(ClassHelper.class.getName()).log(Level.SEVERE, null, ex);
        }
    }

    public void openClasses() {
        try {
            for(JarFile file : files){
                Enumeration<JarEntry> entries = file.entries();
                while(entries.hasMoreElements()){
                    JarEntry entry = entries.nextElement();
                    String name = entry.getName();
                    if (name.endsWith(".class")){
                        map.put(name, new ClassData(file.getInputStream(entry).readAllBytes()));
                    }
                }
            }
        } catch (FileNotFoundException ex) {
            //Logger.getLogger(ClassHelper.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            //Logger.getLogger(ClassHelper.class.getName()).log(Level.SEVERE, null, ex);
        }
    }

    public ClassData getClassFile(String className) {
        if(className == null) return null;
        if(className.endsWith(".class")){
            //System.out.println(className);
            return map.get(className);
        } else return map.get(className + ".class");
    }
    
    public Set<String> getAllClass(){
        return map.keySet();
    }
}
