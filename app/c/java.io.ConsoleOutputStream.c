// CLASS: java/io/ConsoleOutputStream extends java/io/OutputStream
#include "metadata.h"

void func_java_io_ConsoleOutputStream_writeImpl__II_V(JThreadRuntime *runtime, struct java_io_ConsoleOutputStream* p0, s32 p1, s32 p2);

// generation
// globals
//struct java_io_ConsoleOutputStream_static {s32 STD_0; s32 ERR_1;  };
struct java_io_ConsoleOutputStream_static static_var_java_io_ConsoleOutputStream = {0, 0};


__refer arr_vmtable_java_io_ConsoleOutputStream_from_java_io_ConsoleOutputStream[] = {
    func_java_io_ConsoleOutputStream_write__I_V  //0
};
__refer arr_vmtable_java_io_ConsoleOutputStream_from_java_io_OutputStream[] = {
    func_java_io_ConsoleOutputStream_write__I_V,  //0
    func_java_io_OutputStream_write___3B_V,  //1
    func_java_io_OutputStream_write___3BII_V,  //2
    func_java_io_OutputStream_flush___V,  //3
    func_java_io_OutputStream_close___V  //4
};
__refer arr_vmtable_java_io_ConsoleOutputStream_from_java_lang_Object[] = {
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
VMTable vmtable_java_io_ConsoleOutputStream[] = {
    {255, 1, arr_vmtable_java_io_ConsoleOutputStream_from_java_io_ConsoleOutputStream}, //0
    {122, 5, arr_vmtable_java_io_ConsoleOutputStream_from_java_io_OutputStream}, //1
    {5, 10, arr_vmtable_java_io_ConsoleOutputStream_from_java_lang_Object}, //2
};



// locals: 2
// stack: 2
// args: 1
void func_java_io_ConsoleOutputStream__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2463, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 8 , L1955226954 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 8;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/OutputStream.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_OutputStream__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 9 , L495650048 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield java/io/ConsoleOutputStream stderr I
    sp -= 2;
    ((struct java_io_ConsoleOutputStream*)rstack[sp + 0].obj)->stderr_2 = stack[sp + 1].i;
    ; 
    //  line no 10 , L1985235978 , bytecode index = 
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

void bridge_java_io_ConsoleOutputStream__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_ConsoleOutputStream__init___I_V(runtime, ins);
}

void bridge_java_io_ConsoleOutputStream_writeImpl__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_ConsoleOutputStream_writeImpl__II_V(runtime, para[0].obj, para[1].i, para[2].i);
}


// locals: 2
// stack: 2
// args: 1
void func_java_io_ConsoleOutputStream_write__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2465, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 16 , L552266488 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 16;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/ConsoleOutputStream stderr I
    stack[sp - 1].i = ((struct java_io_ConsoleOutputStream*)rstack[sp - 1].obj)->stderr_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokestatic java/io/ConsoleOutputStream.writeImpl(II)V
    {
        sp -= 3;
        func_java_io_ConsoleOutputStream_writeImpl__II_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 17 , L1955251955 , bytecode index = 
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

void bridge_java_io_ConsoleOutputStream_write__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_ConsoleOutputStream_write__I_V(runtime, ins);
}


