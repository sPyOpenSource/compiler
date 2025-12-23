package com.ebsee.j2c;

import j2ll.asm.ClassHelper;

import java.util.*;
import jx.classfile.ClassData;
import jx.classfile.FieldData;
import jx.classfile.MethodSource;

public class ClassManger {
    static public ClassHelper helper;
    private static final Map<String, List<MethodSource>> class2vmt = new HashMap();
    //    static private Map<String, List<List<Method>>> class2vmt = new HashMap();
    private static final Map<String, Map<String, List<MethodSource>>> class2tree = new HashMap();
    private static final Map<String, List<FieldData>> class2ft = new HashMap();

    public static void init(List<String> files) {
        helper = new ClassHelper();//"", files.toArray(new String[files.size()]));
        helper.openClasses();
    }

    /*public static void addClassFile(String file) {
        helper.openClass(file);
    }*/

    public static ClassData getClassFile(String className) {
        return helper.getClassFile(className);
    }

    public static int getFieldIndexInFieldTable(String className, String field, String desc) {
        List<FieldData> fieldsWithSuperClass = getFieldTable(className);
        int i = 0;
        for (FieldData f : fieldsWithSuperClass) {
            if (f.getName().equals(field) && desc.equals(f.getType())) {
                return i;
            }
            i++;
        }
        throw new RuntimeException("field not found : " + className + "." + field + " " + desc);
    }

    public static int getFieldIndexInFieldTable(FieldData field) {
        List<FieldData> fieldsWithSuperClass = getFieldTable(field.getDeclaringClass().getClassName());
        int i = 0;
        for (FieldData f : fieldsWithSuperClass) {
            if (f == field) {
                return i;
            }
            i++;
        }
        throw new RuntimeException("field not found : " + field.getDeclaringClass().getClassName() + "." + field.getName() + " " + field.getType());
    }

    public static FieldData findField(String className, String fieldName, String descript) {
        FieldData f = null;

        ClassData cf = helper.getClassFile(className + ".class");
        if (className.startsWith("[")) cf = helper.getClassFile(Util.CLASS_JAVA_LANG_OBJECT);
        if (cf == null) {
            System.out.println("class not found :" + className);
        }
        for (int i = 0, imax = cf.getFields().length; i < imax; i++) {
            f = cf.getFields()[i];
            if (f.getName().equals(fieldName) && f.getType().equals(descript)) {
                return f;
            }
        }
        String superName = cf.getSuperClassName();
        if (superName != null) f = findField(superName, fieldName, descript);
        if (f != null) {
            return f;
        }
        for (String iname : cf.getInterfaceNames()) {
            f = findField(iname, fieldName, descript);
            if (f != null) {
                return f;
            }
        }

        return f;
    }

    public static List<FieldData> getFieldTable(String className) {
        List<FieldData> fieldsContainSuperClass = class2ft.get(className + ".class");
        if (fieldsContainSuperClass != null) return fieldsContainSuperClass;

        ClassData c = ClassManger.getClassFile(className + ".class");
        fieldsContainSuperClass = new ArrayList<>();
        ClassData sc = c;
        while (sc != null) {
            if(sc.getSuperClassName() == null) break;
            fieldsContainSuperClass.addAll(0, Arrays.asList(sc.getFields()));
            sc = ClassManger.getClassFile(sc.getSuperClassName());
        }
        class2ft.put(className, fieldsContainSuperClass);
        return fieldsContainSuperClass;
    }

    /*public static List<ClassData> getClasses() {
        return helper.getClassFileList();
    }*/

    public static Map<String, List<MethodSource>> getMethodTree(String className) {
        Map<String, List<MethodSource>> map = class2tree.get(className);
        if (map != null) return map;
        if (className.startsWith("[")) {
            map = getMethodTree(Util.CLASS_JAVA_LANG_OBJECT);
        } else {
            map = new LinkedHashMap<>();
            getMethodTree(className, map);
            List<MethodSource> impls = getImplementMethodTable(className);
            for (List<MethodSource> list : map.values()) {
                for (int i = 0, imax = list.size(); i < imax; i++) {
                    MethodSource m = list.get(i);
                    for (MethodSource impl : impls) {
//                        if (m.getMethodName().equals("hashCode") && impl.getMethodName().equals("hashCode") && className.equals("java/lang/String")) {
//                            int debug = 1;
//                        }
                        // if overwrite
                        if (m.getMethodName().equals(impl.getMethodName()) && m.getMethodType().equals(impl.getMethodType())) {
                            list.set(i, impl);
                            break;
                        }
                    }
                }
            }
        }
        class2tree.put(className, map);
        return map;
    }


    private static void getMethodTree(String className, Map<String, List<MethodSource>> map) {
        if (className == null) return;
        ClassData c = helper.getClassFile(className + ".class");
        if (c == null) {
            int debug = 1;
            System.out.println("Class not found:" + className);
        }
        List<MethodSource> list = new ArrayList<>();
        list.addAll(Arrays.asList(c.getVirtualMethods()));
        map.put(className, list);
        //
        ClassData sc = helper.getClassFile(c.getSuperClassName());
        if (sc != null) getMethodTree(c.getSuperClassName(), map);
        for (String i : c.getInterfaceNames()) {
            getMethodTree(i, map);
        }

    }

    public static List<MethodSource> getImplementMethodTable(String className) {
        List<MethodSource> list = class2vmt.get(className);
        if (list != null) return list;
        if (className.startsWith("[")) {
            list = getImplementMethodTable(Util.CLASS_JAVA_LANG_OBJECT);
        } else {
//            if (className.equals(("java/util/ArrayList"))) {
//                int debug = 1;
//            }
            list = new ArrayList<>();
            getInterfaceMethods(className, list);
            getClassMethods(className, list);
        }
        class2vmt.put(className, list);
        return list;
    }


    private static void getInterfaceMethods(String className, List<MethodSource> list) {
        if (className == null) return;
        ClassData c = helper.getClassFile(className + ".class");
        if (c == null) {
            int debug = 1;
        }

        MethodSource[] myVirMthd = c.getVirtualMethods();
        if (c.getInterfaceNames().length == 0) {
            list.addAll(Arrays.asList(myVirMthd));
        } else {
            for (String iname : c.getInterfaceNames()) {
                ClassData cf = getClassFile(iname + ".class");
                if (cf == null) {
                    int debug = 1;
                }
                getInterfaceMethods(cf.getClassName(), list);
                for (MethodSource impl : myVirMthd) {
                    // if overwrite
                    boolean override = false;
                    for (int i = 0, imax = list.size(); i < imax; i++) {
                        MethodSource m = list.get(i);
                        if (m.getMethodName().equals(impl.getMethodName()) && m.getMethodType().equals(impl.getMethodType())) {
                            override = true;
                            list.set(i, impl);
                            break;
                        }
                    }
                    if (!override && !list.contains(impl)) {
                        list.add(impl);
                    }
                }
            }
        }
    }

    private static void getClassMethods(String className, List<MethodSource> list) {
        if (className == null) return;
        ClassData c = helper.getClassFile(className + ".class");
        if (c == null) {
            int debug = 1;
            System.out.println("Class not found:" + className);
        }

        ClassData sc = getClassFile(c.getSuperClassName());
        if (sc != null) {
            getClassMethods(sc.getClassName(), list);
        }
        //overwrite
        MethodSource[] myVirMthd = c.getVirtualMethods();
        for (MethodSource impl : myVirMthd) {
            // if overwrite
            boolean override = false;
            for (int i = 0, imax = list.size(); i < imax; i++) {
                MethodSource m = list.get(i);
                if (m.getMethodName().equals(impl.getMethodName()) && m.getMethodType().equals(impl.getMethodType())) {
                    override = true;
                    list.set(i, impl);
                    break;
                }
            }
            if (!override && !list.contains(impl)) {
                list.add(impl);
            }
        }
    }

    public static class FindResult {
        public int index;
        public String className;
        public List<MethodSource> methods;

        public FindResult(int i, String cn, List<MethodSource> l) {
            index = i;
            className = cn;
            methods = l;
        }

        public MethodSource getMethod() {
            return methods.get(index);
        }
    }

    public static FindResult findVirtualMethod(String className, String methodName, String descript) {
//        if (methodName.equals("ensureOpen")) {
//            int debug = 1;
//        }
        if (className.startsWith("[")) {
            return findVirtualMethod(Util.CLASS_JAVA_LANG_OBJECT, methodName, descript);
        }
        String cname = className;
        Map<String, List<MethodSource>> map = getMethodTree(cname);
        while (cname != null) {
            int mhdidx, imax;
            ClassData cf = getClassFile(cname + ".class");
            if (cf == null) {
                int debug = 1;
                System.out.println("Class not found:" + className);
            }
            List<MethodSource> methods = map.get(cname);
            if (methods != null) {
                for (mhdidx = 0, imax = methods.size(); mhdidx < imax; mhdidx++) {
                    MethodSource m = methods.get(mhdidx);
                    if (m.getMethodName().equals(methodName) && m.getMethodType().equals(descript)) {
                        return new FindResult(mhdidx, cname, methods);
                    }
                }
            }
            for (String iname : cf.getInterfaceNames()) {
                FindResult r = findVirtualMethod(iname, methodName, descript);
                if (r != null) return r;
            }

            if (cf != null) cname = cf.getSuperClassName();
            else cname = null;
        }
        return null;
//        throw new RuntimeException("method not found:" + className + "." + methodName + descript);
    }

    public static MethodSource findMethod(String className, String methodName, String descript) {
        ClassData cf = helper.getClassFile(className + ".class");
        if (className.startsWith("[")) cf = helper.getClassFile(Util.CLASS_JAVA_LANG_OBJECT);
        if (cf == null) {
            System.out.println("class not found :" + className);
        }
        for (int i = 0, imax = cf.getMethods().length; i < imax; i++) {
            MethodSource m = cf.getMethods()[i];
            if (m.getMethodName().equals(methodName) && m.getMethodType().equals(descript)) {
                return m;
            }
        }
        String superName = cf.getSuperClassName();
        if (superName != null) {
            MethodSource m = findMethod(superName, methodName, descript);
            if (m != null) return m;
        }
        for (String interfaceName : cf.getInterfaceNames()) {
            MethodSource m = findMethod(interfaceName, methodName, descript);
            if (m != null) {
                return m;
            }
        }
        return null;
    }

    public static MethodSource findFinalizeMethod(String className) {
        List<MethodSource> lists = getImplementMethodTable(className);
        for (MethodSource m : lists) {
            if ("finalize".equals(m.getMethodName()) && "()V".equals(m.getMethodType())) {
                if (!Util.CLASS_JAVA_LANG_OBJECT.equals(m.getDeclaringClassSource().getClassName())) {
                    return m;
                }
            }
        }
        return null;
    }

}
