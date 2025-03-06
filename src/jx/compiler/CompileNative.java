
package jx.compiler;

import de.tu_darmstadt.informatik.rbg.hatlak.eltorito.impl.ElToritoConfig;
import de.tu_darmstadt.informatik.rbg.hatlak.iso9660.ConfigException;
import de.tu_darmstadt.informatik.rbg.hatlak.iso9660.ISO9660File;
import de.tu_darmstadt.informatik.rbg.hatlak.iso9660.ISO9660RootDirectory;
import de.tu_darmstadt.informatik.rbg.hatlak.iso9660.impl.CreateISO;
import de.tu_darmstadt.informatik.rbg.hatlak.iso9660.impl.ISO9660Config;
import de.tu_darmstadt.informatik.rbg.hatlak.iso9660.impl.ISOImageFileHandler;
import de.tu_darmstadt.informatik.rbg.hatlak.joliet.impl.JolietConfig;
import de.tu_darmstadt.informatik.rbg.hatlak.rockridge.impl.RockRidgeConfig;
import de.tu_darmstadt.informatik.rbg.mhartle.sabre.HandlerException;

import static jx.compspec.StartBuilder.getCompilerOptions;
import jx.compiler.persistent.*;
import jx.compiler.execenv.IOSystem;
import jx.zero.Debug;
import net.lingala.zip4j.ZipFile;

import java.io.*;
import java.net.URL;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.zip.GZIPOutputStream;
import java.util.logging.Level;
import java.util.logging.Logger;

public class CompileNative {
    public static void main(String[] args) throws Exception {
	String libdir = "app/isodir/code";
	if (!libdir.endsWith("/")) libdir = libdir + "/";

	String jllname = libdir + "zero.jll";

	ArrayList jlns = new ArrayList();
        
	String jlnname = libdir + "zero.jln";
        
        CompilerOptions opts = getCompilerOptions(null, jlns, null, jlnname, jllname, "JC_CONFIG");
        compile("zero", opts);
        
	jllname = libdir + "jdk0.jll";
        jlnname = libdir + "jdk0.jln";
        String[] neededLibs = new String[]{
            "zero"
        };
        for (String neededLib : neededLibs) {
            jlns.add(libdir + neededLib + ".jln");
        }
        opts = getCompilerOptions(null, jlns, null, jlnname, jllname, "JC_CONFIG");
	compile("os", opts);
        
	jllname = libdir + "init2.jll";
        jlnname = libdir + "init2.jln";
        neededLibs = new String[]{
            "zero", "jdk0"
        };
        for (String neededLib : neededLibs) {
            jlns.add(libdir + neededLib + ".jln");
        }
        opts = getCompilerOptions(null, jlns, null, jlnname, jllname, "JC_CONFIG");
	compile("init2", opts);
        
        jllname = libdir + "wm.jll";
        jlnname = libdir + "wm.jln";
        neededLibs = new String[]{
            "zero", "jdk0", "init2"
        };
        for (String neededLib : neededLibs) {
            jlns.add(libdir + neededLib + ".jln");
        }
        opts = getCompilerOptions(null, jlns, null, jlnname, jllname, "JC_CONFIG");
	//compile("wm", opts);
        
        createISO();
    }

    final public static void compile(CompilerOptions opts) throws Exception {
        compile(null, opts);
    }

    public static void compile(String path, CompilerOptions opts) throws Exception {
	System.out.println("Native code compiler version 0.7.10-" + StaticCompiler.version());

	ExtendedDataOutputStream codeFile;
	ExtendedDataOutputStream tableOut;
	if (opts.doDebug()) Debug.out.println("Compiling domain to " + opts.getOutputFile());       
	if (opts.doDebug()) Debug.out.println("Writing linker output to " + opts.getLinkerOutputFile());	    
	codeFile = new ExtendedDataOutputStream(opts.getOutputFile());
	tableOut = new ExtendedDataOutputStream(opts.getLinkerOutputFile());
	
	if (opts.doDebug()) Debug.out.println("Reading domain classes from " + opts.getClassFile());


	String[] domClasses = new String[]{
            new URL("jar:https://github.com/sPyOpenSource/zero/raw/jar/dist/Zero.jar!/").toString()
        };
        String[] libClasses = new String[0];
        if(path.endsWith("init2")){
            domClasses = new String[]{
                new URL("jar:https://github.com/sPyOpenSource/applications/raw/simulator/APP/dist/testOS.jar!/").toString(),
                new URL("jar:https://github.com/sPyOpenSource/applications/raw/simulator/FS/dist/testFS.jar!/").toString(),
                new URL("jar:https://github.com/sPyOpenSource/applications/raw/simulator/HCI/dist/testHCI.jar!/").toString(),
                new URL("jar:https://github.com/sPyOpenSource/applications/raw/simulator/NET/dist/testNET.jar!/").toString(),
                new URL("jar:https://github.com/sPyOpenSource/applications/raw/simulator/WM/dist/JavaWM.jar!/").toString(),
                new URL("https://github.com/sPyOpenSource/applications/raw/simulator/APP/META").toString()
            };
            libClasses = new String[]{
                new URL("jar:https://github.com/sPyOpenSource/zero/raw/jar/dist/Zero.jar!/").toString(), 
                new URL("jar:https://github.com/sPyOpenSource/os/raw/dev/dist/OS.jar!/").toString(), 
                new URL("jar:https://github.com/sPyOpenSource/AIZero/raw/master/dist/AIZero.jar!/").toString(),
                new URL("jar:https://github.com/sPyOpenSource/applications/raw/simulator/ifOS/dist/ifOS.jar!/").toString()
            };
        } else if(path.endsWith("wm")){
            domClasses = new String[]{
                new URL("jar:https://github.com/sPyOpenSource/applications/raw/simulator/WM/dist/JavaWM.jar!/").toString()
            };
            libClasses = new String[]{
                new URL("jar:https://github.com/sPyOpenSource/zero/raw/jar/dist/Zero.jar!/").toString(),
                new URL("jar:https://github.com/sPyOpenSource/os/raw/dev/dist/OS.jar!/").toString(),
                new URL("jar:https://github.com/sPyOpenSource/applications/raw/simulator/ifOS/dist/ifOS.jar!/").toString(),
                new URL("jar:https://github.com/sPyOpenSource/applications/raw/simulator/HCI/dist/testHCI.jar!/").toString(),
                new URL("jar:https://github.com/sPyOpenSource/applications/raw/simulator/APP/dist/testOS.jar!/").toString()
            };
        } else if(path.endsWith("os")){
            domClasses = new String[]{
                new URL("jar:https://github.com/sPyOpenSource/os/raw/dev/dist/OS.jar!/").toString(),
                new URL("jar:https://github.com/sPyOpenSource/applications/raw/simulator/ifOS/dist/ifOS.jar!/").toString(),
                new URL("jar:https://github.com/sPyOpenSource/AIZero/raw/master/dist/AIZero.jar!/").toString(),
                new URL("https://github.com/sPyOpenSource/os/raw/dev/META").toString()
            };
            libClasses = new String[]{
                new URL("jar:https://github.com/sPyOpenSource/zero/raw/jar/dist/Zero.jar!/").toString()
            };
        }
        
        /*domClasses = new String[]{
            "../Zero/dist/Zero.jar"
        };*/
        libClasses = new String[0];
        if(path.endsWith("init2")){
            domClasses = new String[]{
                "../test/APP/dist/testOS.jar",
                "../test/FS/dist/testFS.jar",
                "../test/HCI/dist/testHCI.jar",
                "../test/NET/dist/testNET.jar",
                //"../test/WM/dist/JavaWM.jar",
                new URL("https://github.com/sPyOpenSource/applications/raw/simulator/APP/META").toString()
            };
            libClasses = new String[]{
                "../Zero/dist/Zero.jar", 
                "../OS/dist/OS.jar", 
                "../AIZero/dist/AIZero.jar",
                "../test/ifOS/dist/ifOS.jar"
            };
        } else if(path.endsWith("wm")){
            domClasses = new String[]{
                "../test/WM/dist/JavaWM.jar",
                new URL("https://github.com/sPyOpenSource/applications/raw/simulator/WM/META").toString()
            };
            libClasses = new String[]{
                "../Zero/dist/Zero.jar",
                "../OS/dist/OS.jar",
                "../test/ifOS/dist/ifOS.jar",
                "../test/APP/dist/testOS.jar",
                "../test/HCI/dist/testHCI.jar",
                "../AIZero/dist/AIZero.jar"
            };
        } else if(path.endsWith("os")){
            domClasses = new String[]{
                "../OS/dist/OS.jar",
                "../test/ifOS/dist/ifOS.jar",
                "../AIZero/dist/AIZero.jar",
                new URL("https://github.com/sPyOpenSource/os/raw/dev/META").toString()
            };
            libClasses = new String[]{
                "../Zero/dist/Zero.jar"
            };
        }
        
        ExtendedDataInputStream[] tableIn;
        ArrayList links = opts.getLibsLinkerInfo();
        if (links != null) {
           tableIn = new ExtendedDataInputStream[links.size()];
           for(int i = 0; i < links.size(); i++) {
               if (opts.doDebug()) Debug.out.println("Reading lib linkerinfo from " + (String)links.get(i));
               tableIn[i] = new ExtendedDataInputStream(new BufferedInputStream(new FileInputStream((String)links.get(i))));
           }
        } else {
            tableIn = new ExtendedDataInputStream[0];
        }
    
        IOSystem io = new IOSystem() {
            private String path;
            @Override
            public OutputStream getOutputStream(String filename) throws IOException {
                return new FileOutputStream(path + "/" + filename);
            }
            @Override
            public void set(String path) {this.path = path;}
        };

        io.set("./app/ir");
        StaticCompiler compiler = new StaticCompiler(codeFile, tableOut,
                                 domClasses,
                                 libClasses, tableIn,
                                 opts, io);

        // release resources
        for (ExtendedDataInputStream table : tableIn)
            table.close();
        codeFile.close();
        tableOut.close();
    }
    
    static void createISO(){
        String file1 = "app/isodir/code/wm.jll";
        String file2 = "app/isodir/code/init2.jll";
        String file3 = "app/isodir/code/jdk0.jll";
        String file4 = "app/isodir/code/zero.jll";
        String file5 = "app/isodir/code/realmode";
        String file6 = "app/isodir/code/boot.rc";
        //String file7 = "app/isodir/code/wm_impl.jll";
        
        final List<String> srcFiles = Arrays.asList(file1, file2, file3, file4, file5, file6);

        try {
            ZipFile zipFile = new ZipFile("app/isodir/code/uncompressed.zip");
            for (String srcFile : srcFiles) {
                File fileToZip = new File(srcFile);
                zipFile.addFile(fileToZip);
            }
            FileInputStream fis = new FileInputStream("app/isodir/code/uncompressed.zip");
            FileOutputStream fos = new FileOutputStream("app/isodir/code/code.zip");
            GZIPOutputStream gzipOS = new GZIPOutputStream(fos);
            byte[] buffer = new byte[1024];
            int len;
            while((len = fis.read(buffer)) != -1){
                gzipOS.write(buffer, 0, len);
            }
            
            //close resources
            gzipOS.close();
            fos.close();
            fis.close();
            
            File outfile = new File("ISOTest6.iso");
            
            // Directory hierarchy, starting from the root
            ISO9660RootDirectory.MOVED_DIRECTORIES_STORE_NAME = "rr_moved";
            ISO9660RootDirectory root = new ISO9660RootDirectory();
            ISO9660File f1 = new ISO9660File("app/isodir/code/code.zip");
            root.addFile(f1);
            ISO9660File f2 = new ISO9660File("app/isodir/jxcore");
            root.addFile(f2);
            ISO9660File f3 = new ISO9660File("app/isodir/boot/grub/grub.cfg");
            root.addFile(f3);

            // ISO9660 support
            System.out.println("ISO9660 support");
            ISO9660Config iso9660Config = new ISO9660Config();
            iso9660Config.setInterchangeLevel(1);
            iso9660Config.restrictDirDepthTo8(true);
            iso9660Config.setPublisher("X. Wang");
            iso9660Config.setVolumeID("JX");
            iso9660Config.setDataPreparer("X. Wang");

            RockRidgeConfig rrConfig = new RockRidgeConfig();
            File boot = new File("app/efi.img");
            ElToritoConfig elToritoConfig = new ElToritoConfig(boot, ElToritoConfig.BOOT_MEDIA_TYPE_2_88MEG_DISKETTE,
				ElToritoConfig.PLATFORM_ID_X86, "isoTest", 4,
				ElToritoConfig.LOAD_SEGMENT_7C0);

            // Joliet support
            System.out.println("Joliet support");
            JolietConfig jolietConfig = new JolietConfig();
            jolietConfig.setPublisher("X. Wang");
            jolietConfig.setVolumeID("JX");
            jolietConfig.setDataPreparer("X. Wang");

            System.out.println("Create ISO");
            ISOImageFileHandler streamHandler = new ISOImageFileHandler(outfile);
            CreateISO iso = new CreateISO(streamHandler, root);
            iso.process(iso9660Config, rrConfig, jolietConfig, elToritoConfig);
            System.out.println("Done. File is: " + outfile);
        } catch (IOException | ConfigException | HandlerException ex){
            Logger.getLogger(CompileNative.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
}
