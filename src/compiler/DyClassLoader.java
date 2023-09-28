
package compiler;

import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.StringTokenizer;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Gust
 */
public class DyClassLoader extends ClassLoader {
    ArrayList<String> classpath = new ArrayList<>();

    /**
     * 
     */
    public DyClassLoader() {
        super(DyClassLoader.class.getClassLoader());
    }

    /**
     * added class path
     * @param s
     */
    public void addClassPath(String s) {
        classpath.add(s);
        File f = new File(s);
        find(f.getAbsolutePath(),s);
    }

    private void find(String root,String path) {
        try {
            File dir = new File(path);

            if (dir.exists()) {
                File[] files = dir.listFiles();

                if (files != null) {
                    for (File f : files) {
                        if (f.isFile() && f.getName().endsWith(".class")) {
                            String className = f.getAbsolutePath();
                            className = className.substring(root.length() + 1, className.lastIndexOf(".class"));
                            loadFromCustomRepository(f, className);
                        } else {
                            find(root, f.getAbsolutePath());
                        }
                    }
                }
            }
        } catch (Exception ex) {
            System.out.println("clear jhtml output dir error ");
            Logger.getLogger(DyClassLoader.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    /**
     * load from custom respository
     * @param className
     * @return
     */
    public Class loadFromCustomRepository(File file, String className) {
        try {
            Class cls = this.findLoadedClass(className);
            if (cls != null) {
                return cls;
            }
            byte[] classBytes = null;

            //replace '.' in the class name with File.separatorChar & append .class to the name
            String classFileName = className.replace('.', File.separatorChar);
            try {

                if (file.exists()) {
                    InputStream is = new FileInputStream(file);
                    /**read bytes from the file*/
                    classBytes = new byte[is.available()];
                    for (int read = 0; read < classBytes.length; ) {
                        read+=is.read(classBytes);
                    }
                    is.close();

                }
            } catch (IOException ex) {
                System.out.println("IOException raised while reading class file data");
                Logger.getLogger(DyClassLoader.class.getName()).log(Level.SEVERE, null, ex);
                return null;
            }

            className = className.replace('/', '.');
            className = className.replace('\\', '.');
            return this.defineClass(className, classBytes, 0, classBytes.length); //load the class
        } catch (Exception ex) {
            System.out.println("ClassNotFoundException load class : " + className);
            Logger.getLogger(DyClassLoader.class.getName()).log(Level.SEVERE, null, ex);
        }
        return null;

    }

    /**
     * 
     * @param className
     * @return
     */
    public Class loadFromSysAndCustomRepository(String className) {
        /**read enviroment path*/
        String classPath = System.getProperty("java.class.path");
        List classRepository = new ArrayList();
        /**read all the folders*/
        if ((classPath != null) && !(classPath.equals(""))) {
            StringTokenizer tokenizer = new StringTokenizer(classPath,
                    File.pathSeparator);
            while (tokenizer.hasMoreTokens()) {
                classRepository.add(tokenizer.nextToken());
            }
        }
        Iterator dirs = classRepository.iterator();
        byte[] classBytes = null;
        /**found all the classes from the (sub)folders*/
        while (dirs.hasNext()) {
            String dir = (String) dirs.next();
            //replace '.' in the class name with File.separatorChar & append .class to the name
            String classFileName = className.replace('.', File.separatorChar);
            classFileName += ".class";
            try {
                File file = new File(dir + File.separatorChar + classFileName);
                if (file.exists()) {
                    InputStream is = new FileInputStream(file);
                    /**read the bytes*/
                    classBytes = new byte[is.available()];
                    is.read(classBytes);
                    break;
                }
            } catch (IOException ex) {
                System.out.println("IOException raised while reading class file data");
                Logger.getLogger(DyClassLoader.class.getName()).log(Level.SEVERE, null, ex);
                return null;
            }
        }
        return this.defineClass(className, classBytes, 0, classBytes.length); //load the class
    }
}
