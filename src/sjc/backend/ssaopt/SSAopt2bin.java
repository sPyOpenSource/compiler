/* Copyright (C) 2010 Stefan Frenz, Florian Hercher
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

package sjc.backend.ssaopt;

import sjc.compbase.*;
import sjc.memory.MemoryImage;

/**
 * SSAopt2bin: interface required for SSA based optimizer
 * 
 * @author F. Hercher
 * @version 100923 initial version
 */

public interface SSAopt2bin {
	/*
	 * facility management
	 */
	public void doInit(MemoryImage imem, int ilev, Context ictx);
	public void doPrepareMethod(Mthd mthd);
	public int doMethodSize();
	public void doPutRef(Object loc, int offset, Object ptr, int ptrOff);
	public void doPutCodeRef(Object loc, int offset, Object ptr, int ptrOff);
	public void doCopyMethod(Mthd generatingMthd, Object loc, int offset);
	public void doEnumerate();
	public void doFinalizeMethod();
}