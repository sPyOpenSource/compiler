// CLASS: org/luaj/vm2/compiler/LexState$expdesc$U extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U_static {};



__refer arr_vmtable_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_from_org_luaj_vm2_compiler_LexState_00024expdesc_00024U[] = {
    func_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_setNval__Lorg_luaj_vm2_LuaValue_2_V,  //0
    func_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_nval___Lorg_luaj_vm2_LuaValue_2  //1
};
__refer arr_vmtable_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_compiler_LexState_00024expdesc_00024U[] = {
    {268, 2, arr_vmtable_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_from_org_luaj_vm2_compiler_LexState_00024expdesc_00024U}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_org_luaj_vm2_compiler_LexState_00024expdesc_00024U__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2819, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 758 , L61321954 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 758;
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

void bridge_org_luaj_vm2_compiler_LexState_00024expdesc_00024U__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_00024expdesc_00024U__init____V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_setNval__Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    rlocal[0].obj = p0;
    ; 
    //  line no 765 , L690070378 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U _nval Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->_1nval_3 = rstack[sp + 1].obj;
    ; 
    //  line no 766 , L729005419 , bytecode index = 
    return;
    ; 
}

void bridge_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_setNval__Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_setNval__Lorg_luaj_vm2_LuaValue_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_nval___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2821, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 768 , L1963906615 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 768;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U _nval Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->_1nval_3;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1368391951;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    // invokestatic org/luaj/vm2/LuaInteger.valueOf(I)Lorg/luaj/vm2/LuaInteger;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaInteger_valueOf__I_Lorg_luaj_vm2_LuaInteger_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1732146867;
    L1368391951:
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U _nval Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->_1nval_3;
    sp += 0;
    L1732146867:
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

void bridge_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_nval___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_nval___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 3
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_access_00024202__Lorg_luaj_vm2_compiler_LexState_00024expdesc_00024U_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U* p0, struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U* p1, struct org_luaj_vm2_LuaValue* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2822, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 758 , L416355623 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 758;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U _nval Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->_1nval_3 = rstack[sp + 1].obj;
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

void bridge_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_access_00024202__Lorg_luaj_vm2_compiler_LexState_00024expdesc_00024U_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_access_00024202__Lorg_luaj_vm2_compiler_LexState_00024expdesc_00024U_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 1
// stack: 1
// args: 2
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_access_00024200__Lorg_luaj_vm2_compiler_LexState_00024expdesc_00024U_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U* p0, struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 758 , L1569164069 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U _nval Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->_1nval_3;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_access_00024200__Lorg_luaj_vm2_compiler_LexState_00024expdesc_00024U_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_access_00024200__Lorg_luaj_vm2_compiler_LexState_00024expdesc_00024U_2_Lorg_luaj_vm2_LuaValue_2(runtime, para[0].obj, para[1].obj);
}


