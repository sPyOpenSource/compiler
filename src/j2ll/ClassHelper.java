
package j2ll;

import java.io.DataInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;

import java.util.Enumeration;
import java.util.HashMap;
import java.util.Set;
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
    private HashMap<String,InputStream> map = new HashMap<>();
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
                new JarFile("../AIZero/dist/AIZero.jar"),
                new JarFile("../test/ifOS/dist/ifOS.jar")
            };
        } catch (IOException ex) {
            Logger.getLogger(ClassHelper.class.getName()).log(Level.SEVERE, null, ex);
        }
    }

    void openClasses() {
        try {
            for(JarFile file : files){
                Enumeration<JarEntry> entries = file.entries();
                while(entries.hasMoreElements()){
                    JarEntry entry = entries.nextElement();
                    String name = entry.getName();
                    if (name.endsWith(".class")){
                        map.put(name, file.getInputStream(entry));
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
        openClasses();
        try {
            return new ClassData(new DataInputStream(getClassFileStream(className)));
        } catch (IOException ex) {
            Logger.getLogger(ClassHelper.class.getName()).log(Level.SEVERE, null, ex);
        }
        return null;
    }
    
    InputStream getClassFileStream(String className){
        InputStream is = map.get(className);
        return is;
    }
    
    Set<String> getAllClass(){
        return map.keySet();
    }
}
