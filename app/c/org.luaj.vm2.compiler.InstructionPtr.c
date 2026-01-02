// CLASS: org/luaj/vm2/compiler/InstructionPtr extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_compiler_InstructionPtr_static {};



__refer arr_vmtable_org_luaj_vm2_compiler_InstructionPtr_from_org_luaj_vm2_compiler_InstructionPtr[] = {
    func_org_luaj_vm2_compiler_InstructionPtr_get___I,  //0
    func_org_luaj_vm2_compiler_InstructionPtr_set__I_V  //1
};
__refer arr_vmtable_org_luaj_vm2_compiler_InstructionPtr_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_compiler_InstructionPtr[] = {
    {263, 2, arr_vmtable_org_luaj_vm2_compiler_InstructionPtr_from_org_luaj_vm2_compiler_InstructionPtr}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_compiler_InstructionPtr_from_java_lang_Object}, //1
};



// locals: 3
// stack: 2
// args: 2
void func_org_luaj_vm2_compiler_InstructionPtr__init____3II_V(JThreadRuntime *runtime, JArray * p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1705, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 27 , L1386677799 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 27;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 28 , L1629759610 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/compiler/InstructionPtr code [I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_InstructionPtr*)rstack[sp + 0].obj)->code_0 = rstack[sp + 1].obj;
    ; 
    //  line no 29 , L425107133 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield org/luaj/vm2/compiler/InstructionPtr idx I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_InstructionPtr*)rstack[sp + 0].obj)->idx_1 = stack[sp + 1].i;
    ; 
    //  line no 30 , L73608444 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_InstructionPtr__init____3II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_InstructionPtr__init____3II_V(runtime, ins, para[0].i);
}


// locals: 1
// stack: 2
// args: 0
s32 func_org_luaj_vm2_compiler_InstructionPtr_get___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1706, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 32 , L775423528 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 32;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/InstructionPtr code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_InstructionPtr*)rstack[sp - 1].obj)->code_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/InstructionPtr idx I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_InstructionPtr*)rstack[sp - 1].obj)->idx_1;
    sp += 0;
    // arrload s32  ,  L775423528 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        stack[sp].i = arr->prop.as_s32_arr[idx];
        sp += 1;
    }
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

void bridge_org_luaj_vm2_compiler_InstructionPtr_get___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_InstructionPtr_get___I(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
void func_org_luaj_vm2_compiler_InstructionPtr_set__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1707, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 35 , L514793058 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 35;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/InstructionPtr code [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_InstructionPtr*)rstack[sp - 1].obj)->code_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/InstructionPtr idx I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_InstructionPtr*)rstack[sp - 1].obj)->idx_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrstore s32  ,  L514793058 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 36 , L209845522 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_InstructionPtr_set__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_InstructionPtr_set__I_V(runtime, ins);
}


