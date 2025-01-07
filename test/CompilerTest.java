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

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.logging.Level;
import java.util.logging.Logger;

import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;
import static org.junit.Assert.*;
import sjc.ui.SC;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/**
 *
 * @author xuyi
 */
public class CompilerTest {

    @Test
    public void hello() {
        //SC.main(new String[]{"-t", "atmega", "-L", "-P", "batmel32.bin", "-y", "-e", "0x60", "-E", "-a", "0", "-o", "boot", "-B", "-C", "-k", "/Users/xuyi/Source/Java/atbasenw/src"});
    }
    
    @Test
    public void nasm() {
        ArrayList<String> comments = new ArrayList<>();
        String code = "global _start\nsection .text\n_start:\nmov eax, 4 ; write\nmov ebx, 1 ; stdout\nmov ecx, msg\nmov edx, msg.len\nint 0x80 ; write(stdout, msg, strlen(msg));\nmov eax, 1 ; exit\nmov ebx, 0\nint 0x80 ; exit(0)\nsection .data\nmsg: db \"Hello, world!\", 10\n.len: equ $ - msg \n";
        String rootpath = "/Users/xuyi/Downloads/";
        Path filePath = Paths.get(rootpath + "bts_dsk.yasm");
        try {
            code = "{" + Files.readString(filePath);
        } catch (IOException ex) {
            Logger.getLogger(CompilerTest.class.getName()).log(Level.SEVERE, null, ex);
        }
        //System.out.println(code);
        String[] cms = code.split(";");
        for(int i = 1; i < cms.length; i++){
            String[] cms0 = cms[i].split("\n");
            //System.out.println(cms0[0]);
            comments.add(cms0[0]);
            cms[i] = cms[i].replace(cms0[0], "\"},{comment: " + comments.size() + "\n");
        }
        code = Arrays.toString(cms);
        //System.out.println(code);
        code = code.replace("EQU", ":");
        code = code.replace("ORG", "ORG:");
        code = code.replace("BITS", "BITS:");
        code = code.replace("ALIGN", "ALIGN:");
        code = code.replace(":\n", ": label\"},{");
        code = code.replace("global", "{global:");
        code = code.replace("section", "section:");
        code = code.replace("mov", "mov:");
        code = code.replace("int ", "int: ");
        code = code.replace("jmp", "jmp:");
        code = code.replace("times", "times:");
        code = code.replace("dw ", ",{dw: ");
        code = code.replace(" dd ", " ,{dd: ");
        code = code.replace("add ", "add: ");
        code = code.replace(": ,{", ": label\"},{");
        code = code.replace("push ", "push: ");
        code = code.replace("pop ", "pop: ");
        code = code.replace("xor", "xor:");
        code = code.replace(" or ", " or: ");
        code = code.replace(" dec ", "dec: ");
        code = code.replace("test", "test:");
        code = code.replace("shr", "shr:");
        code = code.replace("jz ", "jz: ");
        code = code.replace("jc ", "jc: ");
        code = code.replace("je ", "je: ");
        code = code.replace("jnz", "jnz:");
        code = code.replace("cmp", "cmp:");
        code = code.replace(" loop", "loop:");
        code = code.replace("call", "call:");
        code = code.replace("out", "out:");
        code = code.replace(" lgdt ", "lgdt: ");
        code = code.replace("and", "and:");
        code = code.replace("in ", "in: ");
        code = code.replace("inc", "inc:");
        code = code.replace("\n db", "\"},{db:");
        code = code.replace("\n", "\"},{");
        code = code.replace(": ", ":\"");
        code = code.replace(",{]", "]");
        code = code.replace(", \"}", "\"}");
        code = code.replace(",{\"}", "");
        code = code.replace(",{ ,{", ",{");
        code = code.replace(":\"\"},{", ":\"lable\"},{");
        code = code.replace("{ ret \"}", "ret");
        code = code.replace("{ ret\"}", "ret");
        code = code.replace("{ cli \"}", "cli");
        code = code.replace("{ sti\"}", "sti");
        code = code.replace("{ sti \"", "sti");
        code = code.replace("{ stc \"}", "stc");
        code = code.replace("{ pushf \"}", "pushf");
        code = code.replace("{ popf \"}", "popf");
        code = code.replace(",sti},", ",sti,");
        code = code.replace("end]", "end:label}]");
        //System.out.println(code);
        JSONArray object = new JSONArray(code);
        System.out.println(object.toString(4));
        for(Object funct:object){
            try{
                JSONObject f = (JSONObject)funct;
                if (f.has("mov")){
                    String line = "{target:" + f.getString("mov") + "}";
                    line = line.replace(",", ",source:");
                    System.out.println(line);
                }
            } catch (Exception e){
            }
        }
    }
    
}
