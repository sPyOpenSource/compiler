package jx.compiler;

import jx.classfile.ClassSource;
import jx.collections.Iterator;

import java.util.HashMap;
import java.util.ArrayList;

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

    public ConstraintChecker(Iterator classFactory) throws Exception {
	HashMap classFinder = new HashMap();
	ArrayList all = new ArrayList();	
	while(classFactory.hasNext()) {
	    ClassSource source = (ClassSource)classFactory.next();
	    //Debug.out.println(source.getClassName());
	    if (source.getClassName().startsWith("jx/zero/")) {
		// TODO: use a different way to find out whether this is lib zero
		return;
	    }
	    String[] ifs = source.getInterfaceNames();
            for (String if1 : ifs) {
                for (String forbiddenInterface : forbiddenInterfaces) {
                    if (if1.equals(forbiddenInterface)) {
                        throw new ForbiddenInterfaceImplementedException("Class "+source.getClassName()+" is not allowed to implement " + if1);
                    }
                }
            }
	}
    }
}
