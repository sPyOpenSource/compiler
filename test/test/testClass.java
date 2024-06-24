package test;
        
import java.io.IOException;
import java.net.JarURLConnection;
import java.net.MalformedURLException;
import java.net.URL;
import java.net.URLConnection;

import java.util.Enumeration;
import java.util.jar.JarEntry;
import java.util.jar.JarFile;
import java.util.logging.Level;
import java.util.logging.Logger;
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
}
