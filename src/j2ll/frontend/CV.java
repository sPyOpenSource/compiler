
package j2ll.frontend;

import j2ll.AssistLLVM;
import j2ll.utils.Resolver;
import j2ll.utils.Statistics;
import j2ll.utils.Util;
import org.objectweb.asm.*;

import java.io.PrintStream;
import java.lang.reflect.Modifier;
import java.util.*;

public class CV extends ClassVisitor {
    // out
    private final PrintStream ps;
    private final Statistics statistics;

    // state
    String className;
    String superName;
    
    private final Set<JField> staticFields = new HashSet<>();
    private final List<JField> fields = new ArrayList<>();
    private final List<MV> methods = new ArrayList<>();
    
    // shared states
    public Set<String> declares = new HashSet<>();
    Set<String> assistFunc = new HashSet<>();

    public Map<String, String> staticStrs = new HashMap();

    public CV(PrintStream ps, Statistics statistics) {
        super(Opcodes.ASM5);
        this.ps = ps;
        this.statistics = statistics;
    }

    public Statistics getStatistics() {
        return statistics;
    }

    @Override
    public void visit(int version, int access, String name, String signature, String superName, String[] interfaces) {
        this.className = name;
        this.superName = superName;
    }

    @Override
    public void visitSource(String source, String debug) {
//        this.ps.println("src " + source);
    }

    @Override
    public void visitOuterClass(String owner, String name, String desc) {
    }

    @Override
    public AnnotationVisitor visitAnnotation(String desc, boolean visible) {
        return null;
    }

    @Override
    public void visitAttribute(Attribute attr) {
        this.ps.println(" attr " + attr);
    }

    @Override
    public void visitInnerClass(String name, String outerName, String innerName, int access) {
    }

    @Override
    public FieldVisitor visitField(int access, String name, String desc, String signature, Object value) {
        if ((access & Opcodes.ACC_STATIC) != 0) {
            Util.javaSignature2irType(statistics.getResolver(), desc);
            this.staticFields.add(new JField(name, desc));
        } else {
            this.fields.add(new JField(name, desc));
//            this.ps.println("  f  " + desc + " " + name + " " + signature + " " + value);
        }
        return null;
    }

    @Override
    public MethodVisitor visitMethod(int access, String name, String desc, String signature, String[] exceptions) {
        MV mv = new MV(access, name, desc, this);
        this.methods.add(mv);
        return mv;
    }

    @Override
    public void visitEnd() {
        this.ps.println("; CLASS: " + this.className + " extends " + this.superName);
        this.ps.println();
        this.ps.println(AssistLLVM.getAssistFuncDeclare());
        this.ps.println();

        // declares
        for (String mdeclare : declares) {
            this.ps.println("declare " + mdeclare);
        }
        this.ps.println();

        // use classes
        this.ps.println("; first generation");
        Resolver next = statistics.getResolver();
        for (String name : next.getClasses()) {
            Util.class2struct(next, name);
        }
        for (String name : next.getClasses()) {
            this.ps.println(Util.class2struct(next, name) + " ; use " + name);
        }

        // out fields
        this.ps.println("; globals");
        for (JField field : staticFields) {
            if (field.className == null) {
                String ir = Util.javaSignature2irType(statistics.getResolver(), field.javaSignature);
                this.ps.println(Util.static2str(this.className, field.name) + " = internal global " + ir + " zeroinitializer");
            } else {
                String ir = Util.javaSignature2irType(statistics.getResolver(), field.javaSignature);
                this.ps.println(Util.static2str(field.className, field.name) + " = internal global " + ir + " zeroinitializer");
            }
        }
        this.ps.println();

        for (String s : staticStrs.values()) {
            this.ps.println(s);
        }
        this.ps.println();

        // out methods
        for (MV method : this.methods) {
            if ((method.access & Modifier.NATIVE) == 0) {
                method.out(this.ps);
            }
        }

        for (String s : assistFunc) {
            this.ps.println(s);
        }
        this.ps.println();

    }

    public Set<JField> getStaticFields() {
        return staticFields;
    }
}
