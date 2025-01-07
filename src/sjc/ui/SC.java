/* Copyright (C) 2005, 2006, 2007, 2008, 2009, 2010 Stefan Frenz
 * 
 * This file is part of SJC, the Small Java Compiler written by Stefan Frenz.
 * 
 * SJC is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * SJC is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with SJC. If not, see <http://www.gnu.org/licenses/>.
 */

package sjc.ui;

import sjc.compbase.Context;
import sjc.osio.sun.ReflectionSymbols;
import sjc.osio.sun.SunOS;
import sjc.symbols.SymbolFactory;

/**
 * SC: manage a compilation
 * 
 * @author S. Frenz
 * @version 100422 adopted changed SunOS
 *  version 091009 added support for os-dependent symbol informer
 *  version 090303 adopted changed osio package sjc.structure
 *  version 090227 adopted changed compile-interface
 *  version 090207 added copyright notice
 *  version 080712 adopted changed compile-interface
 *  version 080702 adopted changed symInfo-debug-interface
 *  version 060720 moved functionallity to Context
 *  version 060714 added support for runtime call on bound exception
 *  version 060628 added support for static compilation
 *  version 060607 initial version
 */

public class SC {
    public static void main(String argv[]) {
        argv = new String[]{"-t", "atmega", "-L", "-P", "batmel32.bin", "-y", "-e", "0x60", "-E", "-a", "0", "-o", "boot", "-B", "-C", "-k", "/Users/xuyi/Source/Java/atbasenw/src"};
        //argv = new String[]{"-t", "amd64", "-o", "boot", "-O", "bootconf.txt#floppy64", "/Users/xuyi/Source/Java/picos/src"};
        int res;
        Context ctx = new Context(new SunOS(System.out));
        SymbolFactory.preparedReflectionSymbols = new ReflectionSymbols();
        if ((res = ctx.compile(argv, "vJRE")) == 0) ctx.writeSymInfo();
            System.exit(res);
    }
}
