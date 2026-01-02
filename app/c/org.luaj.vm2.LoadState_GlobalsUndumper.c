// CLASS: org/luaj/vm2/LoadState$GlobalsUndumper extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_LoadState_00024GlobalsUndumper_static {};



__refer arr_vmtable_org_luaj_vm2_LoadState_00024GlobalsUndumper_from_org_luaj_vm2_LoadState_00024GlobalsUndumper[] = {
    func_org_luaj_vm2_LoadState_00024GlobalsUndumper_undump__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2  //0
};
__refer arr_vmtable_org_luaj_vm2_LoadState_00024GlobalsUndumper_from_java_lang_Object[] = {
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
__refer arr_vmtable_org_luaj_vm2_LoadState_00024GlobalsUndumper_from_org_luaj_vm2_Globals_00024Undumper[] = {
    func_org_luaj_vm2_LoadState_00024GlobalsUndumper_undump__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2  //0
};
VMTable vmtable_org_luaj_vm2_LoadState_00024GlobalsUndumper[] = {
    {129, 1, arr_vmtable_org_luaj_vm2_LoadState_00024GlobalsUndumper_from_org_luaj_vm2_LoadState_00024GlobalsUndumper}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_LoadState_00024GlobalsUndumper_from_java_lang_Object}, //1
    {223, 1, arr_vmtable_org_luaj_vm2_LoadState_00024GlobalsUndumper_from_org_luaj_vm2_Globals_00024Undumper}, //2
};



// locals: 1
// stack: 1
// args: 0
void func_org_luaj_vm2_LoadState_00024GlobalsUndumper__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2155, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 437 , L1464565578 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 437;
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

void bridge_org_luaj_vm2_LoadState_00024GlobalsUndumper__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LoadState_00024GlobalsUndumper__init____V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 2
struct org_luaj_vm2_Prototype* func_org_luaj_vm2_LoadState_00024GlobalsUndumper_undump__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime, struct java_io_InputStream* p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2156, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 440 , L840400805 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 440;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic org/luaj/vm2/LoadState.undump(Ljava/io/InputStream;Ljava/lang/String;)Lorg/luaj/vm2/Prototype;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LoadState_undump__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_LoadState_00024GlobalsUndumper_undump__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_LoadState_00024GlobalsUndumper_undump__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 1
// args: 1
void func_org_luaj_vm2_LoadState_00024GlobalsUndumper__init___Lorg_luaj_vm2_LoadState_000241_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LoadState_000241* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2157, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 437 , L111888987 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 437;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/LoadState$GlobalsUndumper.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LoadState_00024GlobalsUndumper__init____V(runtime);
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

void bridge_org_luaj_vm2_LoadState_00024GlobalsUndumper__init___Lorg_luaj_vm2_LoadState_000241_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_LoadState_00024GlobalsUndumper__init___Lorg_luaj_vm2_LoadState_000241_2_V(runtime, ins);
}


