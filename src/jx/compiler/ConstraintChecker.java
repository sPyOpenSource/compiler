package jx.compiler;

import jx.classfile.ClassSource;
import jx.collections.Iterator;
import java.util.Arrays;

class ForbiddenInterfaceImplementedException extends Exception {
    public ForbiddenInterfaceImplementedException() {super();}
    public ForbiddenInterfaceImplementedException(String s) {super(s);}
}

public class ConstraintChecker {
    final static String[] forbiddenInterfaces = {
	"jx/zero/AtomicVariable",
	"jx/zero/IRQ",
	"jx/zero/Mutex",
	"jx/zero/BootFS",
	"jx/zero/ChildDomain",
	"jx/zero/DeviceMemory",
	"jx/zero/Ports",
	"jx/zero/Domain",
	"jx/zero/Profiler",
	"jx/zero/CPU",
	"jx/zero/ReadOnlyMemory",
	"jx/zero/CPUInfo",
	"jx/zero/DomainZero",
	"jx/zero/CPUState",
	"jx/zero/InitialNaming",
	"jx/zero/VMClass",
	"jx/zero/VMObject",
	"jx/zero/Credential",
	"jx/zero/Memory",
	"jx/zero/MemoryManager",
	"jx/zero/InterceptOutboundInfo",
	"jx/zero/InterceptInboundInfo",
	"jx/zero/CAS",
    };

    public static void check(Iterator classFactory) throws Exception {
	while(classFactory.hasNext()) {
	    ClassSource source = (ClassSource)classFactory.next();
	    if (source.getClassName().startsWith("jx/zero/")) {
		continue;
	    }
	    String[] ifs = source.getInterfaceNames();
            for (String itf : ifs) {
                if (Arrays.asList(forbiddenInterfaces).contains(itf)) {
                    throw new ForbiddenInterfaceImplementedException("Class " + source.getClassName() + " is not allowed to implement " + itf);
                }
            }
	}
    }
}
