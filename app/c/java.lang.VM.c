// CLASS: java/lang/VM extends java/lang/Object
#include "metadata.h"

struct java_lang_String* func_java_lang_VM_utf8ToUtf16___3BII_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_VM* p0, JArray * p1, s32 p2, s32 p3);
struct java_lang_String* func_java_lang_VM_doubleToString__D_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_VM* p0, f64 p1);
f64 func_java_lang_VM_stringToDouble__Ljava_lang_String_2_D(JThreadRuntime *runtime, struct java_lang_VM* p0, struct java_lang_String* p1);
JArray * func_java_lang_VM_utf16ToUtf8__Ljava_lang_String_2__3B(JThreadRuntime *runtime, struct java_lang_VM* p0, struct java_lang_String* p1);

// generation
// globals
//struct java_lang_VM_static {};



__refer arr_vmtable_java_lang_VM_from_java_lang_VM[] = {
    NULL
};
__refer arr_vmtable_java_lang_VM_from_java_lang_Object[] = {
    func_java_lang_Object_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_lang_Object_hashCode___I  //9
};
VMTable vmtable_java_lang_VM[] = {
    {404, 0, arr_vmtable_java_lang_VM_from_java_lang_VM}, //0
    {5, 10, arr_vmtable_java_lang_VM_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_java_lang_VM__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3133, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 6 , L2009900903 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 6;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_lang_VM__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_VM__init____V(runtime, ins);
}

ExceptionItem arr_extable_func_java_lang_VM_toCStyleStr__Ljava_lang_String_2__3B[] = {
    { , , 141}
};
ExceptionTable extable_func_java_lang_VM_toCStyleStr__Ljava_lang_String_2__3B = {1, arr_extable_func_java_lang_VM_toCStyleStr__Ljava_lang_String_2__3B};

// locals: 3
// stack: 5
// args: 2
JArray * func_java_lang_VM_toCStyleStr__Ljava_lang_String_2__3B(JThreadRuntime *runtime, struct java_lang_VM* p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3134, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    // try catch :L682025329 L591678006 L832648870 (
    L682025329:
    __frame->bytecodeIndex = 
    //  line no 10 , L682025329 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 10;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1461);
    // invokevirtual java/lang/String.getBytes(Ljava/lang/String;)[B
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 50, 27);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 11 , L816440283 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L816440283
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 12 , L798695894 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L798695894
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 13 , L772791273 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    L591678006:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L832648870:
    //  line no 14 , L832648870 , bytecode index = 
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 16 , L379833480 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L832648870;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_lang_VM_toCStyleStr__Ljava_lang_String_2__3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_VM_toCStyleStr__Ljava_lang_String_2__3B(runtime, para[0].obj, para[1].obj);
}

void bridge_java_lang_VM_doubleToString__D_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_VM_doubleToString__D_Ljava_lang_String_2(runtime, para[0].obj, para[1].d);
}

void bridge_java_lang_VM_stringToDouble__Ljava_lang_String_2_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_VM_stringToDouble__Ljava_lang_String_2_D(runtime, para[0].obj, para[1].obj);
}

void bridge_java_lang_VM_utf8ToUtf16___3BII_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_VM_utf8ToUtf16___3BII_Ljava_lang_String_2(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i);
}

void bridge_java_lang_VM_utf16ToUtf8__Ljava_lang_String_2__3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_VM_utf16ToUtf8__Ljava_lang_String_2__3B(runtime, para[0].obj, para[1].obj);
}


