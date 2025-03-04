package test;
        
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

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.net.JarURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.net.URLConnection;
import java.nio.file.Paths;
import java.util.Arrays;

import java.util.Enumeration;
import java.util.List;
import java.util.jar.JarEntry;
import java.util.jar.JarFile;
import java.util.logging.Level;
import java.util.logging.Logger;
import java.util.zip.GZIPOutputStream;
import java.util.zip.ZipEntry;
import java.util.zip.ZipOutputStream;
import net.lingala.zip4j.ZipFile;
import org.junit.*;
import static org.junit.Assert.assertEquals;

/*
 * Copyright (C) 2023 spy
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

/**
 *
 * @author spy
 */
public class testClass {
    @Test
    public void testJar(){
        try {
            URL obj = new URL("jar:https://github.com/sPyOpenSource/zero/raw/jar/dist/Zero.jar!/");
            URLConnection con = obj.openConnection();
            assertEquals (con instanceof JarURLConnection, true);
            JarURLConnection juc = (JarURLConnection)con;
            JarFile jar = juc.getJarFile();
            Enumeration<JarEntry> entry = jar.entries();
            assertEquals(entry.hasMoreElements(), true);
        } catch (MalformedURLException ex) {
            Logger.getLogger(testClass.class.getName()).log(Level.SEVERE, null, ex);
        } catch (IOException ex) {
            Logger.getLogger(testClass.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    @Test
    public void testZip() throws FileNotFoundException {
        String file2 = "app/isodir/code/init2.jll";
        String file3 = "app/isodir/code/jdk0.jll";
        String file4 = "app/isodir/code/zero.jll";
        String file5 = "app/isodir/code/realmode";
        final List<String> srcFiles = Arrays.asList(file2, file3, file4, file5);

        final FileOutputStream fos = new FileOutputStream(Paths.get(file2).getParent().toAbsolutePath() + "/compressed.zip");
        ZipOutputStream zipOut = new ZipOutputStream(fos);
        try {
            ZipFile zipFile = new ZipFile("app/isodir/code/uncompressed.zip");
            for (String srcFile : srcFiles) {
                File fileToZip = new File(srcFile);
                zipFile.addFile(fileToZip);
                FileInputStream fis = new FileInputStream(fileToZip);
                ZipEntry zipEntry = new ZipEntry(fileToZip.getName());
                zipOut.putNextEntry(zipEntry);

                byte[] bytes = new byte[1024];
                int length;
                while((length = fis.read(bytes)) >= 0) {
                    zipOut.write(bytes, 0, length);
                }
                fis.close();
            }

            zipOut.close();
            fos.close();
        } catch (IOException e){}
    }
    
    @Test
    public void testGzipFile() {
        try {
            FileInputStream fis = new FileInputStream("app/isodir/code/uncompressed.zip");
            FileOutputStream fos = new FileOutputStream("app/isodir/code/code.zip");
            GZIPOutputStream gzipOS = new GZIPOutputStream(fos);
            byte[] buffer = new byte[1024];
            int len;
            while((len=fis.read(buffer)) != -1){
                gzipOS.write(buffer, 0, len);
            }
            //close resources
            gzipOS.close();
            fos.close();
            fis.close();
        } catch (IOException ex) {
            Logger.getLogger(testClass.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    @Test
    public void testISO() {
        System.out.println("Start");

        // Output file
        File outfile = new File("ISOTest6.iso");

        // Directory hierarchy, starting from the root
        ISO9660RootDirectory.MOVED_DIRECTORIES_STORE_NAME = "rr_moved";
        ISO9660RootDirectory root = new ISO9660RootDirectory();
        try {
            // Files with different versions
            // (to appear in descending order, pointing to same LSN)
            ISO9660File file1 = new ISO9660File("app/isodir/code/code.zip");
            root.addFile(file1);
            ISO9660File file2 = new ISO9660File("app/isodir/jxcore");
            root.addFile(file2);
            ISO9660File file3 = new ISO9660File("app/isodir/boot/grub/grub.cfg");
            root.addFile(file3);

            // ISO9660 support
            System.out.println("ISO9660 support");
            ISO9660Config iso9660Config = new ISO9660Config();
            //iso9660Config.allowASCII(false);
            iso9660Config.setInterchangeLevel(1);
            iso9660Config.restrictDirDepthTo8(true);
            iso9660Config.setPublisher("Name Nickname");
            iso9660Config.setVolumeID("ISO Test Jiic");
            iso9660Config.setDataPreparer("Name Nickname");

            //iso9660Config.setCopyrightFile(new File("Copyright.txt"));
            //iso9660Config.forceDotDelimiter(true);

            RockRidgeConfig rrConfig = new RockRidgeConfig();
            File boot = new File("app/efi.img");
            ElToritoConfig elToritoConfig = new ElToritoConfig(boot, ElToritoConfig.BOOT_MEDIA_TYPE_2_88MEG_DISKETTE,
				ElToritoConfig.PLATFORM_ID_X86, "isoTest", 4,
				ElToritoConfig.LOAD_SEGMENT_7C0);

            // Joliet support
            System.out.println("Joliet support");
            JolietConfig jolietConfig = new JolietConfig();
            jolietConfig.setPublisher("Test 2");
            jolietConfig.setVolumeID("Joliet Test");
            jolietConfig.setDataPreparer("Jens Hatlak");
            //jolietConfig.setCopyrightFile(new File("Copyright.txt"));
            //jolietConfig.forceDotDelimiter(true);


            System.out.println("Create ISO");
            ISOImageFileHandler streamHandler = new ISOImageFileHandler(outfile);
            CreateISO iso = new CreateISO(streamHandler, root);
            iso.process(iso9660Config, rrConfig, jolietConfig, elToritoConfig);
            System.out.println("Done. File is: " + outfile);
        } catch (ConfigException | HandlerException | FileNotFoundException ex){
            Logger.getLogger(testClass.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
}
