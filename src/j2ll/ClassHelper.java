
package j2ll;

import java.io.DataInputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Enumeration;
import java.util.HashMap;
import java.util.jar.JarEntry;
import java.util.jar.JarFile;
import java.util.logging.Level;
import java.util.logging.Logger;
import jx.classfile.ClassData;

/**
 *
 * @author xuyi
 */
public class ClassHelper {
private String path;
private String[] classes;
private HashMap<String,ClassData> map = new HashMap<>();
private JarFile[] files;
    public ClassHelper(String string, String[] toArray) {
        path = string;
        classes = toArray;
    }

    ClassHelper() {
    try {
        files = new JarFile[]{
            new JarFile("../Zero/dist/Zero.jar"),
            new JarFile("../OS/dist/OS.jar"),
            new JarFile("../AIZero/dist/AIZero.jar")
        };
    } catch (IOException ex) {
        Logger.getLogger(ClassHelper.class.getName()).log(Level.SEVERE, null, ex);
    }
    }

    void openClasses() {
        try {
            for(JarFile file:files ){
                Enumeration<JarEntry> entries = file.entries();
                while(entries.hasMoreElements()){
                    JarEntry entry = entries.nextElement();
                    String name = entry.getName();
                    if (name.endsWith(".class")){
                        ClassData data = new ClassData(new DataInputStream(file.getInputStream(entry)));
                        map.put(name, data);
                    }
                }
            }
        } catch (FileNotFoundException ex) {
            Logger.getLogger(ClassHelper.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(ClassHelper.class.getName()).log(Level.SEVERE, null, ex);
        }
    }

    ClassData getClassFile(String className) {
        return map.get(className+".class");
    }
    
}
