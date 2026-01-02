// CLASS: java/io/RandomAccessFile$2 extends java/io/OutputStream
#include "metadata.h"


// generation
// globals
//struct java_io_RandomAccessFile_000242_static {};



__refer arr_vmtable_java_io_RandomAccessFile_000242_from_java_io_RandomAccessFile_000242[] = {
    func_java_io_RandomAccessFile_000242_write__I_V  //0
};
__refer arr_vmtable_java_io_RandomAccessFile_000242_from_java_io_OutputStream[] = {
    func_java_io_RandomAccessFile_000242_write__I_V,  //0
    func_java_io_OutputStream_write___3B_V,  //1
    func_java_io_OutputStream_write___3BII_V,  //2
    func_java_io_OutputStream_flush___V,  //3
    func_java_io_OutputStream_close___V  //4
};
__refer arr_vmtable_java_io_RandomAccessFile_000242_from_java_lang_Object[] = {
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
VMTable vmtable_java_io_RandomAccessFile_000242[] = {
    {182, 1, arr_vmtable_java_io_RandomAccessFile_000242_from_java_io_RandomAccessFile_000242}, //0
    {122, 5, arr_vmtable_java_io_RandomAccessFile_000242_from_java_io_OutputStream}, //1
    {5, 10, arr_vmtable_java_io_RandomAccessFile_000242_from_java_lang_Object}, //2
};



// locals: 2
// stack: 2
// args: 1
void func_java_io_RandomAccessFile_000242__init___Ljava_io_RandomAccessFile_2_V(JThreadRuntime *runtime, struct java_io_RandomAccessFile* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 932, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 393 , L516875052 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 393;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/io/RandomAccessFile$2 this$0 Ljava/io/RandomAccessFile;
    sp -= 2;
    ((struct java_io_RandomAccessFile_000242*)rstack[sp + 0].obj)->this_000240_0 = rstack[sp + 1].obj;
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

void bridge_java_io_RandomAccessFile_000242__init___Ljava_io_RandomAccessFile_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_RandomAccessFile_000242__init___Ljava_io_RandomAccessFile_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_io_RandomAccessFile_000242_write__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 933, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 396 , L589987187 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 396;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/RandomAccessFile$2 this$0 Ljava/io/RandomAccessFile;
    rstack[sp - 1].obj = ((struct java_io_RandomAccessFile_000242*)rstack[sp - 1].obj)->this_000240_0;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokevirtual java/io/RandomAccessFile.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 181, 6);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 397 , L1262609629 , bytecode index = 
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

void bridge_java_io_RandomAccessFile_000242_write__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_RandomAccessFile_000242_write__I_V(runtime, ins);
}


