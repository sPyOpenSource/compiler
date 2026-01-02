// CLASS: java/lang/Void extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_lang_Void_static {struct java_lang_Class* TYPE_0;  };
struct java_lang_Void_static static_var_java_lang_Void = {NULL};


__refer arr_vmtable_java_lang_Void_from_java_lang_Void[] = {
    NULL
};
__refer arr_vmtable_java_lang_Void_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_Void[] = {
    {251, 0, arr_vmtable_java_lang_Void_from_java_lang_Void}, //0
    {5, 10, arr_vmtable_java_lang_Void_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_java_lang_Void__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1366, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 11 , L695248316 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 11;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 12 , L5255258 , bytecode index = 
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

void bridge_java_lang_Void__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Void__init____V(runtime, ins);
}


// locals: 0
// stack: 1
// args: 1
void func_java_lang_Void__clinit____V(JThreadRuntime *runtime, struct java_lang_Void* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1367, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 9 , L1834031967 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 9;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2480);
    // invokestatic java/lang/Class.getPrimitiveClass(Ljava/lang/String;)Ljava/lang/Class;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Class_getPrimitiveClass__Ljava_lang_String_2_Ljava_lang_Class_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic java/lang/Void TYPE Ljava/lang/Class;
    sp -= 1;
    static_var_java_lang_Void.TYPE_0 = rstack[sp].obj;
    method_exit(runtime);
    return;
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_lang_Void__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Void__clinit____V(runtime, para[0].obj);
}


