// CLASS: org/luaj/vm2/lib/DebugLib$CallFrame extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_lib_DebugLib_00024CallFrame_static {};



__refer arr_vmtable_org_luaj_vm2_lib_DebugLib_00024CallFrame_from_org_luaj_vm2_lib_DebugLib_00024CallFrame[] = {
    func_org_luaj_vm2_lib_DebugLib_00024CallFrame_set__Lorg_luaj_vm2_LuaClosure_2Lorg_luaj_vm2_Varargs_2_3Lorg_luaj_vm2_LuaValue_2_V,  //0
    func_org_luaj_vm2_lib_DebugLib_00024CallFrame_shortsource___Ljava_lang_String_2,  //1
    func_org_luaj_vm2_lib_DebugLib_00024CallFrame_set__Lorg_luaj_vm2_LuaFunction_2_V,  //2
    func_org_luaj_vm2_lib_DebugLib_00024CallFrame_reset___V,  //3
    func_org_luaj_vm2_lib_DebugLib_00024CallFrame_instr__ILorg_luaj_vm2_Varargs_2I_V,  //4
    func_org_luaj_vm2_lib_DebugLib_00024CallFrame_getLocal__I_Lorg_luaj_vm2_Varargs_2,  //5
    func_org_luaj_vm2_lib_DebugLib_00024CallFrame_setLocal__ILorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2,  //6
    func_org_luaj_vm2_lib_DebugLib_00024CallFrame_currentline___I,  //7
    func_org_luaj_vm2_lib_DebugLib_00024CallFrame_sourceline___Ljava_lang_String_2,  //8
    func_org_luaj_vm2_lib_DebugLib_00024CallFrame_linedefined___I,  //9
    func_org_luaj_vm2_lib_DebugLib_00024CallFrame_getlocalname__I_Lorg_luaj_vm2_LuaString_2  //10
};
__refer arr_vmtable_org_luaj_vm2_lib_DebugLib_00024CallFrame_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_lib_DebugLib_00024CallFrame[] = {
    {110, 11, arr_vmtable_org_luaj_vm2_lib_DebugLib_00024CallFrame_from_org_luaj_vm2_lib_DebugLib_00024CallFrame}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_lib_DebugLib_00024CallFrame_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_org_luaj_vm2_lib_DebugLib_00024CallFrame__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1381, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 652 , L127356954 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 652;
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallFrame__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_00024CallFrame__init____V(runtime, ins);
}


// locals: 4
// stack: 2
// args: 3
void func_org_luaj_vm2_lib_DebugLib_00024CallFrame_set__Lorg_luaj_vm2_LuaClosure_2Lorg_luaj_vm2_Varargs_2_3Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaClosure* p0, struct org_luaj_vm2_Varargs* p1, JArray * p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1382, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 660 , L1475842502 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 660;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp + 0].obj)->f_0 = rstack[sp + 1].obj;
    ; 
    //  line no 661 , L1365575811 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield org/luaj/vm2/lib/DebugLib$CallFrame v Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp + 0].obj)->v_3 = rstack[sp + 1].obj;
    ; 
    //  line no 662 , L1817154869 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // putfield org/luaj/vm2/lib/DebugLib$CallFrame stack [Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp + 0].obj)->stack_4 = rstack[sp + 1].obj;
    ; 
    //  line no 663 , L1540476618 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallFrame_set__Lorg_luaj_vm2_LuaClosure_2Lorg_luaj_vm2_Varargs_2_3Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_00024CallFrame_set__Lorg_luaj_vm2_LuaClosure_2Lorg_luaj_vm2_Varargs_2_3Lorg_luaj_vm2_LuaValue_2_V(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_org_luaj_vm2_lib_DebugLib_00024CallFrame_shortsource___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1383, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 665 , L1234905692 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 665;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->f_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaFunction.isclosure()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 3);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1500379239;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->f_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaFunction.checkclosure()Lorg/luaj/vm2/LuaClosure;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaClosure* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 45);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getfield org/luaj/vm2/LuaClosure p Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaClosure*)rstack[sp - 1].obj)->p_46;
    sp += 0;
    // invokevirtual org/luaj/vm2/Prototype.shortsource()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 128, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L203409950;
    L1500379239:
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2514);
    L203409950:
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallFrame_shortsource___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_DebugLib_00024CallFrame_shortsource___Ljava_lang_String_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_lib_DebugLib_00024CallFrame_set__Lorg_luaj_vm2_LuaFunction_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaFunction* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    rlocal[0].obj = p0;
    ; 
    //  line no 668 , L876823802 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp + 0].obj)->f_0 = rstack[sp + 1].obj;
    ; 
    //  line no 669 , L47918293 , bytecode index = 
    return;
    ; 
}

void bridge_org_luaj_vm2_lib_DebugLib_00024CallFrame_set__Lorg_luaj_vm2_LuaFunction_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_00024CallFrame_set__Lorg_luaj_vm2_LuaFunction_2_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_org_luaj_vm2_lib_DebugLib_00024CallFrame_reset___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1385, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 671 , L102103410 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 671;
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp + 0].obj)->f_0 = rstack[sp + 1].obj;
    ; 
    //  line no 672 , L677317086 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/lib/DebugLib$CallFrame v Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp + 0].obj)->v_3 = rstack[sp + 1].obj;
    ; 
    //  line no 673 , L1933129092 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/lib/DebugLib$CallFrame stack [Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp + 0].obj)->stack_4 = rstack[sp + 1].obj;
    ; 
    //  line no 674 , L827328832 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallFrame_reset___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_00024CallFrame_reset___V(runtime, ins);
}


// locals: 4
// stack: 5
// args: 3
void func_org_luaj_vm2_lib_DebugLib_00024CallFrame_instr__ILorg_luaj_vm2_Varargs_2I_V(JThreadRuntime *runtime, s32 p0, struct org_luaj_vm2_Varargs* p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1386, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 676 , L1223050066 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 676;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield org/luaj/vm2/lib/DebugLib$CallFrame pc I
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp + 0].obj)->pc_1 = stack[sp + 1].i;
    ; 
    //  line no 677 , L1917442783 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield org/luaj/vm2/lib/DebugLib$CallFrame v Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp + 0].obj)->v_3 = rstack[sp + 1].obj;
    ; 
    //  line no 678 , L1130551263 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // putfield org/luaj/vm2/lib/DebugLib$CallFrame top I
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp + 0].obj)->top_2 = stack[sp + 1].i;
    ; 
    //  line no 679 , L1713605602 , bytecode index = 
    // getstatic org/luaj/vm2/lib/DebugLib TRACE Z
    stack[sp].i =static_var_org_luaj_vm2_lib_DebugLib.TRACE_48;
    sp += 1;
    if(stack[--sp].i  == 0) goto L472234151;
    ; 
    //  line no 680 , L537265886 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->f_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaFunction.checkclosure()Lorg/luaj/vm2/LuaClosure;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaClosure* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 45);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame stack [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->stack_4;
    sp += 0;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic org/luaj/vm2/Print.printState(Lorg/luaj/vm2/LuaClosure;I[Lorg/luaj/vm2/LuaValue;ILorg/luaj/vm2/Varargs;)V
    {
        sp -= 6;
        func_org_luaj_vm2_Print_printState__Lorg_luaj_vm2_LuaClosure_2I_3Lorg_luaj_vm2_LuaValue_2ILorg_luaj_vm2_Varargs_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, rstack[sp + 5].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L472234151:
    //  line no 681 , L472234151 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallFrame_instr__ILorg_luaj_vm2_Varargs_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_00024CallFrame_instr__ILorg_luaj_vm2_Varargs_2I_V(runtime, ins, para[0].obj, para[1].i);
}


// locals: 3
// stack: 4
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_DebugLib_00024CallFrame_getLocal__I_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1387, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 683 , L260638966 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 683;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallFrame.getlocalname(I)Lorg/luaj/vm2/LuaString;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 110, 10);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 684 , L1045985568 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L788048067;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame stack [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->stack_4;
    sp += 0;
    // arraylength  label  L1045985568
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L788048067;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame stack [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->stack_4;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L1045985568 bc index = 
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
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    if(rstack[--sp].obj  == NULL) goto L788048067;
    ; 
    //  line no 685 , L619985571 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  != NULL) goto L1677543539;
    // getstatic org/luaj/vm2/LuaValue NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    goto L504478805;
    L1677543539:
    rstack[sp++].obj = rlocal[2].obj;
    L504478805:
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame stack [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->stack_4;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L504478805 bc index = 
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
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // invokestatic org/luaj/vm2/LuaValue.varargsOf(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_varargsOf__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L788048067:
    //  line no 687 , L788048067 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallFrame_getLocal__I_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_DebugLib_00024CallFrame_getLocal__I_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 4
// stack: 3
// args: 2
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_lib_DebugLib_00024CallFrame_setLocal__ILorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, s32 p0, struct org_luaj_vm2_LuaValue* p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1388, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 690 , L1893772493 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 690;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallFrame.getlocalname(I)Lorg/luaj/vm2/LuaString;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 110, 10);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 691 , L2035801202 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1790387225;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame stack [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->stack_4;
    sp += 0;
    // arraylength  label  L2035801202
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1790387225;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame stack [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->stack_4;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L2035801202 bc index = 
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
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    if(rstack[--sp].obj  == NULL) goto L1790387225;
    ; 
    //  line no 692 , L984412970 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame stack [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->stack_4;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[2].obj;
    // arrstore __refer  ,  L984412970 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 693 , L1340057206 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  != NULL) goto L137123763;
    // getstatic org/luaj/vm2/LuaValue NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    goto L1541942595;
    L137123763:
    rstack[sp++].obj = rlocal[3].obj;
    L1541942595:
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1790387225:
    //  line no 695 , L1790387225 , bytecode index = 
    // getstatic org/luaj/vm2/LuaValue NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallFrame_setLocal__ILorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_DebugLib_00024CallFrame_setLocal__ILorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_Varargs_2(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 2
// args: 0
s32 func_org_luaj_vm2_lib_DebugLib_00024CallFrame_currentline___I(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1389, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 699 , L878598679 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 699;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->f_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaFunction.isclosure()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 3);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1587872480;
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1587872480:
    //  line no 700 , L1587872480 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->f_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaFunction.checkclosure()Lorg/luaj/vm2/LuaClosure;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaClosure* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 45);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getfield org/luaj/vm2/LuaClosure p Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaClosure*)rstack[sp - 1].obj)->p_46;
    sp += 0;
    // getfield org/luaj/vm2/Prototype lineinfo [I
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->lineinfo_3;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 701 , L1144897090 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L1195064186;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->pc_1;
    sp += 0;
    if(stack[--sp].i  < 0) goto L1195064186;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->pc_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1144897090
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L24334184;
    L1195064186:
    // iconst_-1
    stack[sp++].i = -1;
    goto L2008547236;
    L24334184:
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->pc_1;
    sp += 0;
    // arrload s32  ,  L24334184 bc index = 
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
    L2008547236:
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallFrame_currentline___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_DebugLib_00024CallFrame_currentline___I(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct java_lang_String* func_org_luaj_vm2_lib_DebugLib_00024CallFrame_sourceline___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1390, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 704 , L1076855029 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 704;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->f_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaFunction.isclosure()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 3);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1539088279;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->f_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaFunction.tojstring()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 19, 6);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1539088279:
    //  line no 705 , L1539088279 , bytecode index = 
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 41);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuilder__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->f_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaFunction.checkclosure()Lorg/luaj/vm2/LuaClosure;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaClosure* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 45);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getfield org/luaj/vm2/LuaClosure p Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaClosure*)rstack[sp - 1].obj)->p_46;
    sp += 0;
    // invokevirtual org/luaj/vm2/Prototype.shortsource()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 128, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 41, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1801);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 41, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallFrame.currentline()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 110, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 41, 5);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 41, 8);
        rstack[sp].obj = __func_p(runtime);
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallFrame_sourceline___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_DebugLib_00024CallFrame_sourceline___Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_org_luaj_vm2_lib_DebugLib_00024CallFrame_linedefined___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1391, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 708 , L1094199074 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 708;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->f_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaFunction.isclosure()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 3);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L2108440536;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->f_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaFunction.checkclosure()Lorg/luaj/vm2/LuaClosure;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaClosure* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 45);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getfield org/luaj/vm2/LuaClosure p Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaClosure*)rstack[sp - 1].obj)->p_46;
    sp += 0;
    // getfield org/luaj/vm2/Prototype linedefined I
    stack[sp - 1].i = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->linedefined_7;
    sp += 0;
    goto L1112758237;
    L2108440536:
    // iconst_-1
    stack[sp++].i = -1;
    L1112758237:
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallFrame_linedefined___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_DebugLib_00024CallFrame_linedefined___I(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_lib_DebugLib_00024CallFrame_getlocalname__I_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1392, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 711 , L553879264 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 711;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->f_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaFunction.isclosure()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 3);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1028472807;
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1028472807:
    //  line no 712 , L1028472807 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->f_0;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaFunction.checkclosure()Lorg/luaj/vm2/LuaClosure;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaClosure* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 45);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getfield org/luaj/vm2/LuaClosure p Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_LuaClosure*)rstack[sp - 1].obj)->p_46;
    sp += 0;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame pc I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->pc_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/Prototype.getlocalname(II)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 128, 1);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallFrame_getlocalname__I_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_DebugLib_00024CallFrame_getlocalname__I_Lorg_luaj_vm2_LuaString_2(runtime, ins);
}


