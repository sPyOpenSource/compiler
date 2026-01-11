/*
 * Copyright (C) 2024 xuyi
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

import compiler.Compiler;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;

import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;

import org.junit.Test;
import org.objectweb.asm.ClassReader;
import org.objectweb.asm.tree.ClassNode;
import sjc.output.HexOut;

/**
 *
 * @author xuyi
 */
public class CompilerTest {
    @Test
    public void hello() {
        //SC.main(new String[]{"-t", "atmega", "-L", "-P", "batmel32.bin", "-y", "-e", "0x60", "-E", "-a", "0", "-o", "boot", "-B", "-C", "-k", "/Users/xuyi/Source/Java/atbasenw/src"});
        List<File> list = new ArrayList();
        list.add(new File("app/demo.java"));
        Compiler.compile(list, "app");
        //SC.main(new String[]{"-t", "jvm", "-k", "./"});
    }
    
    @Test
    public void hex(){
        byte[] what = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
        HexOut out = new HexOut(null, null);
        out.setAddress(0);
        out.write(what, 0, what.length);
        System.out.println(out);
    }
    
    @Test
    public void testASM(){
        try {
            byte[] fileContent = Files.readAllBytes(Paths.get("app/demo.class"));
            byte[] magic_number = new byte[]{fileContent[0], fileContent[1], fileContent[2], fileContent[3]};
            int minor_version = fileContent[4] << 8 | fileContent[5];
            int major_version = fileContent[6] << 8 | fileContent[7];
            for(byte b : magic_number){
                System.out.printf("%X", b);
            }
            System.out.println(minor_version);
            System.out.println(major_version);
            //VmCP cp = new VmCP((fileContent[8] & 0xff) << 8 | (fileContent[9] & 0xff), fileContent);

            //System.out.println(cp.getLength());
            File file = new File("build/classes/compiler/Compiler.class");
            InputStream is = new FileInputStream(file);
            /*ClassData data = new ClassData(new DataInputStream(is));
            ConstantPool cp = data.getConstantPool();
            MethodData[] methods = data.getMethodData();
            for(MethodData method:methods){
                System.out.println(method.getName());
            }*/
            ClassReader cr = new ClassReader(is);
            ClassNode cn = new ClassNode();
            //Attribute[] attrs = new Attribute[]{new Attribute("SourceFile")};
            cr.accept(cn, ClassReader.EXPAND_FRAMES);
            System.out.println(cn.name);
            /*for(MethodNode method: cn.methods){
                System.out.println(method.name);
            }*/
            /*for(Attribute attr : cn.attrs){
                System.out.println(attr.type);
            }*/
        } catch (IOException ex) {
            Logger.getLogger(CompilerTest.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
}
