// CLASS: java/io/OutputStreamWriter extends java/io/Writer
#include "metadata.h"


// generation
// globals
//struct java_io_OutputStreamWriter_static {};



__refer arr_vmtable_java_io_OutputStreamWriter_from_java_io_OutputStreamWriter[] = {
    func_java_io_OutputStreamWriter_close___V,  //0
    func_java_io_OutputStreamWriter_flush___V,  //1
    func_java_io_OutputStreamWriter_getEncoding___Ljava_lang_String_2,  //2
    func_java_io_OutputStreamWriter_write__I_V,  //3
    func_java_io_OutputStreamWriter_write___3CII_V,  //4
    func_java_io_OutputStreamWriter_write__Ljava_lang_String_2II_V  //5
};
__refer arr_vmtable_java_io_OutputStreamWriter_from_java_io_Writer[] = {
    func_java_io_OutputStreamWriter_flush___V,  //0
    func_java_io_OutputStreamWriter_close___V,  //1
    func_java_io_OutputStreamWriter_write__I_V,  //2
    func_java_io_Writer_write___3C_V,  //3
    func_java_io_OutputStreamWriter_write___3CII_V,  //4
    func_java_io_Writer_write__Ljava_lang_String_2_V,  //5
    func_java_io_OutputStreamWriter_write__Ljava_lang_String_2II_V  //6
};
__refer arr_vmtable_java_io_OutputStreamWriter_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_lang_Object_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
VMTable vmtable_java_io_OutputStreamWriter[] = {
    {70, 6, arr_vmtable_java_io_OutputStreamWriter_from_java_io_OutputStreamWriter}, //0
    {71, 7, arr_vmtable_java_io_OutputStreamWriter_from_java_io_Writer}, //1
    {10, 11, arr_vmtable_java_io_OutputStreamWriter_from_java_lang_Object}, //2
};



// locals: 2
// stack: 1
// args: 1
void func_java_io_OutputStreamWriter__init___Ljava_io_OutputStream_2_V(JThreadRuntime *runtime, struct java_io_OutputStream* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 213, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 92 , L1138410383 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 92;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/Writer.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_io_Writer__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 94 , L875313400 , bytecode index = 
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

void bridge_java_io_OutputStreamWriter__init___Ljava_io_OutputStream_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_OutputStreamWriter__init___Ljava_io_OutputStream_2_V(runtime, ins);
}


// locals: 3
// stack: 1
// args: 2
void func_java_io_OutputStreamWriter__init___Ljava_io_OutputStream_2Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_io_OutputStream* p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 214, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 112 , L1560940633 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 112;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/Writer.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_io_Writer__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 114 , L1213818572 , bytecode index = 
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

void bridge_java_io_OutputStreamWriter__init___Ljava_io_OutputStream_2Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_OutputStreamWriter__init___Ljava_io_OutputStream_2Ljava_lang_String_2_V(runtime, ins, para[0].obj);
}


// locals: 1
// stack: 0
// args: 0
void func_java_io_OutputStreamWriter_close___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 215, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 131 , L1421866327 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 131;
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

void bridge_java_io_OutputStreamWriter_close___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_OutputStreamWriter_close___V(runtime, ins);
}


// locals: 1
// stack: 0
// args: 0
void func_java_io_OutputStreamWriter_flush___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 216, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 144 , L1515638188 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 144;
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

void bridge_java_io_OutputStreamWriter_flush___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_OutputStreamWriter_flush___V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_java_io_OutputStreamWriter_getEncoding___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 217, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 158 , L1473205473 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 158;
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_io_OutputStreamWriter_getEncoding___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_io_OutputStreamWriter_getEncoding___Ljava_lang_String_2(runtime, ins);
}


// locals: 2
// stack: 0
// args: 1
void func_java_io_OutputStreamWriter_write__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 218, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 174 , L936653983 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 174;
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

void bridge_java_io_OutputStreamWriter_write__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_OutputStreamWriter_write__I_V(runtime, ins);
}


// locals: 4
// stack: 0
// args: 3
void func_java_io_OutputStreamWriter_write___3CII_V(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 219, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 193 , L1846501247 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 193;
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

void bridge_java_io_OutputStreamWriter_write___3CII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_OutputStreamWriter_write___3CII_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 4
// stack: 0
// args: 3
void func_java_io_OutputStreamWriter_write__Ljava_lang_String_2II_V(JThreadRuntime *runtime, struct java_lang_String* p0, s32 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 220, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 212 , L1055096410 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 212;
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

void bridge_java_io_OutputStreamWriter_write__Ljava_lang_String_2II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_OutputStreamWriter_write__Ljava_lang_String_2II_V(runtime, ins, para[0].i, para[1].i);
}


