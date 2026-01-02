// CLASS: java/lang/System$1 extends java/io/InputStream
#include "metadata.h"


// generation
// globals
//struct java_lang_System_000241_static {};



__refer arr_vmtable_java_lang_System_000241_from_java_lang_System_000241[] = {
    func_java_lang_System_000241_read___I  //0
};
__refer arr_vmtable_java_lang_System_000241_from_java_io_InputStream[] = {
    func_java_lang_System_000241_read___I,  //0
    func_java_io_InputStream_read___3B_I,  //1
    func_java_io_InputStream_read___3BII_I,  //2
    func_java_io_InputStream_skip__J_J,  //3
    func_java_io_InputStream_available___I,  //4
    func_java_io_InputStream_close___V,  //5
    func_java_io_InputStream_mark__I_V,  //6
    func_java_io_InputStream_reset___V,  //7
    func_java_io_InputStream_markSupported___Z  //8
};
__refer arr_vmtable_java_lang_System_000241_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_System_000241[] = {
    {180, 1, arr_vmtable_java_lang_System_000241_from_java_lang_System_000241}, //0
    {66, 9, arr_vmtable_java_lang_System_000241_from_java_io_InputStream}, //1
    {5, 10, arr_vmtable_java_lang_System_000241_from_java_lang_Object}, //2
};



// locals: 1
// stack: 1
// args: 0
void func_java_lang_System_000241__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 930, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 17 , L885910946 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 17;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/InputStream.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_InputStream__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_java_lang_System_000241__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_System_000241__init____V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_lang_System_000241_read___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 931, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 20 , L811207775 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 20;
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_System_000241_read___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_System_000241_read___I(runtime, ins);
}


