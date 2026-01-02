// CLASS: org/luaj/vm2/compiler/LexState$Token extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_compiler_LexState_00024Token_static {};



__refer arr_vmtable_org_luaj_vm2_compiler_LexState_00024Token_from_org_luaj_vm2_compiler_LexState_00024Token[] = {
    func_org_luaj_vm2_compiler_LexState_00024Token_set__Lorg_luaj_vm2_compiler_LexState_00024Token_2_V  //0
};
__refer arr_vmtable_org_luaj_vm2_compiler_LexState_00024Token_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_compiler_LexState_00024Token[] = {
    {168, 1, arr_vmtable_org_luaj_vm2_compiler_LexState_00024Token_from_org_luaj_vm2_compiler_LexState_00024Token}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_compiler_LexState_00024Token_from_java_lang_Object}, //1
};



// locals: 1
// stack: 4
// args: 0
void func_org_luaj_vm2_compiler_LexState_00024Token__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 883, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 122 , L857394605 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 122;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 124 , L1104422581 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new org/luaj/vm2/compiler/LexState$SemInfo
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 167);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokespecial org/luaj/vm2/compiler/LexState$SemInfo.<init>(Lorg/luaj/vm2/compiler/LexState$1;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024SemInfo__init___Lorg_luaj_vm2_compiler_LexState_000241_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState$Token seminfo Lorg/luaj/vm2/compiler/LexState$SemInfo;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp + 0].obj)->seminfo_1 = rstack[sp + 1].obj;
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

void bridge_org_luaj_vm2_compiler_LexState_00024Token__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_00024Token__init____V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_compiler_LexState_00024Token_set__Lorg_luaj_vm2_compiler_LexState_00024Token_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024Token* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 884, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 126 , L254896875 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 126;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$Token token I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->token_0;
    sp += 0;
    // putfield org/luaj/vm2/compiler/LexState$Token token I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp + 0].obj)->token_0 = stack[sp + 1].i;
    ; 
    //  line no 127 , L1789110533 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$Token seminfo Lorg/luaj/vm2/compiler/LexState$SemInfo;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->seminfo_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$Token seminfo Lorg/luaj/vm2/compiler/LexState$SemInfo;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->seminfo_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$SemInfo r Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024SemInfo*)rstack[sp - 1].obj)->r_0;
    sp += 0;
    // putfield org/luaj/vm2/compiler/LexState$SemInfo r Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024SemInfo*)rstack[sp + 0].obj)->r_0 = rstack[sp + 1].obj;
    ; 
    //  line no 128 , L170052458 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$Token seminfo Lorg/luaj/vm2/compiler/LexState$SemInfo;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->seminfo_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$Token seminfo Lorg/luaj/vm2/compiler/LexState$SemInfo;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024Token*)rstack[sp - 1].obj)->seminfo_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$SemInfo ts Lorg/luaj/vm2/LuaString;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024SemInfo*)rstack[sp - 1].obj)->ts_1;
    sp += 0;
    // putfield org/luaj/vm2/compiler/LexState$SemInfo ts Lorg/luaj/vm2/LuaString;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024SemInfo*)rstack[sp + 0].obj)->ts_1 = rstack[sp + 1].obj;
    ; 
    //  line no 129 , L1574029810 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_00024Token_set__Lorg_luaj_vm2_compiler_LexState_00024Token_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_00024Token_set__Lorg_luaj_vm2_compiler_LexState_00024Token_2_V(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
void func_org_luaj_vm2_compiler_LexState_00024Token__init___Lorg_luaj_vm2_compiler_LexState_000241_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_000241* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 885, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 122 , L774895395 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 122;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/compiler/LexState$Token.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024Token__init____V(runtime);
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

void bridge_org_luaj_vm2_compiler_LexState_00024Token__init___Lorg_luaj_vm2_compiler_LexState_000241_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_00024Token__init___Lorg_luaj_vm2_compiler_LexState_000241_2_V(runtime, ins);
}


