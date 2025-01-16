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
package sjc.frontend.sjava;

import java.io.FileWriter;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Arrays;
import org.json.JSONArray;
import org.json.JSONObject;

/**
 *
 * @author xuyi
 */
public class J2JSON {
    static ArrayList<String> comments = new ArrayList<>();
    ArrayList<String> string = new ArrayList<>();
    public static void J2J(String path) {
        String rootpath = "/Users/xuyi/Source/OS/armOS/lib/jcore/Zero/src/";
        Path filePath = Paths.get(rootpath + path);
        try {
            String java = Files.readString(filePath);
            //System.out.println(java);
            java = java.replace("/*", "'''");
            java = java.replace("*/", "'''");
            String[] comment = java.split("'''");
            for(int i = 0; i < comment.length; i++){
                String cm = comment[i];
                if(i % 2 == 1) {
                    comments.add(cm);
                    comment[i] = "comment:'" + comments.size() + ";";
                    continue;
                }
                cm = cm.replace("//", "'''");
                cm = cm.replace("\n", ";");
                String[] cms = cm.split("'''");
                for(int j = 1; j < cms.length; j++){
                    String[] cms0 = cms[j].split(";");
                    comments.add(cms0[0]);
                    cm = cm.replace(cms0[0], "comment:'" + comments.size() + ";");
                }
                comment[i] = cm;
            }
            java = Arrays.toString(comment);
            //System.out.println(java);
            java = java.replace(";,", ";");
            java = java.replace(",;", ", ");
            java = java.replace(",", ", ");
            java = java.replace("        ", " ");
            java = java.replace("	", " ");
            java = java.replace("     ", " ");
            java = java.replace("    ", " ");
            java = java.replace("   ", " ");
            java = java.replace("  ", " ");
            java = java.replace(", ;", ", ");
            java = java.replace("public", "{modifier:[public],type:'");
            java = java.replace("private", "{modifier:[private],type:'");
            java = java.replace("],type:' static", ",static],type:'");
            java = java.replace("],type:' native", ",native],type:'");
            
            java = java.replace("class ", "class', name:'");
            java = java.replace("interface", "interface', name:'");
            java = java.replace("extends", "',extends:'");
            
            java = java.replace(";;;", ";");
            java = java.replace(";;", ";");
            java = java.replace("; ;", ";");
            java = java.replace("} ", "};");
            java = java.replace("};", "]},{type:'");
            java = java.replace("{ ", "{;");
            java = java.replace("{;", "', children:[{type:'");
            java = java.replace(";", "'},{type:'");

            java = java.replace("package", "{package:'");
            
            java = java.replace("@Override", "");

            java = java.replace(",{type:']", "]");
            java = java.replace(",{type:' ]", "]");
            java = java.replace("{type:'{", "{");
            java = java.replace("{type:' {", "{");
            java = java.replace(", ]", "}]");
            //java = java.replace("'} ]", "']");
            java = java.replace("['}", "[");
            java = java.replace("{type:' , comment", "{comment");
            java = java.replace("{type:' comment", "{comment");
            java = java.replace("' '''", "''''");
            java = java.replace("{type:''''comment", "{comment");
            java = java.replace("{type:' '},", "");
            java = java.replace("{type:''}", "");
            java = java.replace("{type:' static", "{modifier:[static],type:'");
            java = java.replace("],type:' final", ",final],type: '");
            java = java.replace(", children:[{type:''}]},]", "}]");
            java = java.replace(", children:[{type:']", "");
            java = java.replace("'},{type:' ', children", "', children");
            java = java.replace(", comment", "', comment");
            java = java.replace("type:'',", "");
            java = java.replace("[,{", "[{");
            java = java.replace(",,", ",");
            //java = java.replace(" ", "");
            //System.out.println(java);
            //System.out.println(java.length());
            JSONArray object = new JSONArray(java);
            //System.out.println(object.toString(4));
            for(Object funct:object){
                JSONObject f = (JSONObject)funct;
                if(!f.has("children")) continue;
                JSONArray functions = f.getJSONArray("children");
                //System.out.print(functions.toString(4));
                for(int i = 0; i < functions.length(); i++){
                    JSONObject function = functions.getJSONObject(i);
                    if (!function.has("type")) continue;
                    String name = (String)function.get("type");
                    //System.out.println(name);
                    name = name.strip();
                    String[] values = name.split("=");
                    if(values.length > 1){
                        name = values[0].strip();
                    }
                    name = name.replace(" (", "(");
                    name = name.replace("()", "'");
                    name = name.replace(" []", "[]");
                    name = name.replace("  ", " ");
                    name = name.replace(", ", "'},{type:'");
                    //System.out.println(name);
                    name = name.strip().replace(" ", "', name:'");
                    name = name.replace("(", "',arguments:[{type:'");
                    name = name.replace(")", "'}]");
                    
                    name = "{type:'" + name + "'}";
                    name = name.replace("]'}", "]}");
                    name = name.replace("''", "'");
                    
                    //System.out.println(name);

                    JSONObject newfunction = new JSONObject(name);
                    if(values.length > 1){
                        function.put("value", values[1]);
                    }
                    if(function.has("children")){
                        newfunction.put("children", function.get("children"));
                    }
                    functions.put(i, newfunction);
                }
            }
            
            ((JSONObject)object.get(0)).put("language", filePath.toString().split("\\.")[1]);
            //System.out.println(object.toString(4));
        
            FileWriter f = new FileWriter(filePath.toString().replace(".java", ".json"));
            f.write(object.toString(4));
            f.close();
        } catch (IOException ex) {
            //System.out.format("I/O error: %s%n", ex);
        }
    }
}
