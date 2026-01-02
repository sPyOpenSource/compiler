// CLASS: org/luaj/vm2/lib/DebugLib$CallStack extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_lib_DebugLib_00024CallStack_static {JArray * EMPTY_0;  };
struct org_luaj_vm2_lib_DebugLib_00024CallStack_static static_var_org_luaj_vm2_lib_DebugLib_00024CallStack = {NULL};


__refer arr_vmtable_org_luaj_vm2_lib_DebugLib_00024CallStack_from_org_luaj_vm2_lib_DebugLib_00024CallStack[] = {
    func_org_luaj_vm2_lib_DebugLib_00024CallStack_currentline___I,  //0
    func_org_luaj_vm2_lib_DebugLib_00024CallStack_onCall__Lorg_luaj_vm2_LuaFunction_2_V,  //1
    func_org_luaj_vm2_lib_DebugLib_00024CallStack_onCall__Lorg_luaj_vm2_LuaClosure_2Lorg_luaj_vm2_Varargs_2_3Lorg_luaj_vm2_LuaValue_2_V,  //2
    func_org_luaj_vm2_lib_DebugLib_00024CallStack_onReturn___V,  //3
    func_org_luaj_vm2_lib_DebugLib_00024CallStack_onInstruction__ILorg_luaj_vm2_Varargs_2I_V,  //4
    func_org_luaj_vm2_lib_DebugLib_00024CallStack_traceback__I_Ljava_lang_String_2,  //5
    func_org_luaj_vm2_lib_DebugLib_00024CallStack_getCallFrame__I_Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2,  //6
    func_org_luaj_vm2_lib_DebugLib_00024CallStack_findCallFrame__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2,  //7
    func_org_luaj_vm2_lib_DebugLib_00024CallStack_auxgetinfo__Ljava_lang_String_2Lorg_luaj_vm2_LuaFunction_2Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2_Lorg_luaj_vm2_lib_DebugLib_00024DebugInfo_2  //8
};
__refer arr_vmtable_org_luaj_vm2_lib_DebugLib_00024CallStack_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_lib_DebugLib_00024CallStack[] = {
    {105, 9, arr_vmtable_org_luaj_vm2_lib_DebugLib_00024CallStack_from_org_luaj_vm2_lib_DebugLib_00024CallStack}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_lib_DebugLib_00024CallStack_from_java_lang_Object}, //1
};



// locals: 1
// stack: 2
// args: 0
void func_org_luaj_vm2_lib_DebugLib_00024CallStack__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2414, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 511 , L2096842550 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 511;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 508 , L705265015 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/lib/DebugLib$CallStack EMPTY [Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    rstack[sp].obj =static_var_org_luaj_vm2_lib_DebugLib_00024CallStack.EMPTY_0;
    sp += 1;
    // putfield org/luaj/vm2/lib/DebugLib$CallStack frame [Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp + 0].obj)->frame_1 = rstack[sp + 1].obj;
    ; 
    //  line no 509 , L1405163418 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/lib/DebugLib$CallStack calls I
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp + 0].obj)->calls_2 = stack[sp + 1].i;
    ; 
    //  line no 511 , L1985011414 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallStack__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_00024CallStack__init____V(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
s32 func_org_luaj_vm2_lib_DebugLib_00024CallStack_currentline___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2415, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 514 , L834132073 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 514;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack calls I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->calls_2;
    sp += 0;
    if(stack[--sp].i  <= 0) goto L1787913218;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack frame [Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->frame_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack calls I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->calls_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L834132073 bc index = 
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
    goto L440902120;
    L1787913218:
    // iconst_-1
    stack[sp++].i = -1;
    L440902120:
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallStack_currentline___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_lib_DebugLib_00024CallStack_currentline___I(runtime, ins);
}


// locals: 4
// stack: 5
// args: 0
struct org_luaj_vm2_lib_DebugLib_00024CallFrame* func_org_luaj_vm2_lib_DebugLib_00024CallStack_pushcall___Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2(JThreadRuntime *runtime){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2416, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 518 , L1657920572 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 518;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack calls I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->calls_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack frame [Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->frame_1;
    sp += 0;
    // arraylength  label  L1657920572
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L58791184;
    ; 
    //  line no 519 , L619621481 , bytecode index = 
    // iconst_4
    stack[sp++].i = 4;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack frame [Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->frame_1;
    sp += 0;
    // arraylength  label  L619621481
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_3
    stack[sp++].i = 3;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    // iconst_2
    stack[sp++].i = 2;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/Math.max(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_max__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 520 , L408132785 , bytecode index = 
    stack[sp++].i = local[1].i;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/lib/DebugLib$CallFrame; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(4174));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 521 , L1955566523 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack frame [Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->frame_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack frame [Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->frame_1;
    sp += 0;
    // arraylength  label  L1955566523
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 522 , L2133668271 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack frame [Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->frame_1;
    sp += 0;
    // arraylength  label  L2133668271
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[3].i = stack[--sp].i;
    L779179975:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L709091500;
    ; 
    //  line no 523 , L584694804 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // new org/luaj/vm2/lib/DebugLib$CallFrame
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 110);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/DebugLib$CallFrame.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024CallFrame__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L584694804 bc index = 
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
    //  line no 522 , L879706537 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L779179975;
    L709091500:
    //  line no 524 , L709091500 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield org/luaj/vm2/lib/DebugLib$CallStack frame [Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp + 0].obj)->frame_1 = rstack[sp + 1].obj;
    ; 
    //  line no 525 , L277149580 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[3].i = stack[--sp].i;
    L636953520:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L58791184;
    ; 
    //  line no 526 , L1252069894 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1252069894 bc index = 
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
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L1252069894 bc index = 
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
    // putfield org/luaj/vm2/lib/DebugLib$CallFrame previous Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp + 0].obj)->previous_5 = rstack[sp + 1].obj;
    ; 
    //  line no 525 , L67985650 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L636953520;
    L58791184:
    //  line no 528 , L58791184 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack frame [Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->frame_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack calls I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->calls_2;
    sp += 0;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/DebugLib$CallStack calls I
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp + 0].obj)->calls_2 = stack[sp + 1].i;
    // arrload __refer  ,  L58791184 bc index = 
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallStack_pushcall___Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_DebugLib_00024CallStack_pushcall___Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_lib_DebugLib_00024CallStack_onCall__Lorg_luaj_vm2_LuaFunction_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaFunction* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2417, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 532 , L796168203 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 532;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/DebugLib$CallStack.pushcall()Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        jthread_lock(runtime, __ins);
        rstack[sp].obj = func_org_luaj_vm2_lib_DebugLib_00024CallStack_pushcall___Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2(runtime);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallFrame.set(Lorg/luaj/vm2/LuaFunction;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaFunction*) = find_method(__ins->vm_table, 110, 2);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 533 , L1837602497 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallStack_onCall__Lorg_luaj_vm2_LuaFunction_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_00024CallStack_onCall__Lorg_luaj_vm2_LuaFunction_2_V(runtime, ins);
}


// locals: 4
// stack: 4
// args: 3
void func_org_luaj_vm2_lib_DebugLib_00024CallStack_onCall__Lorg_luaj_vm2_LuaClosure_2Lorg_luaj_vm2_Varargs_2_3Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaClosure* p0, struct org_luaj_vm2_Varargs* p1, JArray * p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2418, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 536 , L666769352 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 536;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/lib/DebugLib$CallStack.pushcall()Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        jthread_lock(runtime, __ins);
        rstack[sp].obj = func_org_luaj_vm2_lib_DebugLib_00024CallStack_pushcall___Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2(runtime);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallFrame.set(Lorg/luaj/vm2/LuaClosure;Lorg/luaj/vm2/Varargs;[Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaClosure*,struct org_luaj_vm2_Varargs*,JArray *) = find_method(__ins->vm_table, 110, 0);
        __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 537 , L742473724 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallStack_onCall__Lorg_luaj_vm2_LuaClosure_2Lorg_luaj_vm2_Varargs_2_3Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_00024CallStack_onCall__Lorg_luaj_vm2_LuaClosure_2Lorg_luaj_vm2_Varargs_2_3Lorg_luaj_vm2_LuaValue_2_V(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 4
// args: 0
void func_org_luaj_vm2_lib_DebugLib_00024CallStack_onReturn___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2419, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 540 , L1826195973 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 540;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack calls I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->calls_2;
    sp += 0;
    if(stack[--sp].i  <= 0) goto L999211009;
    ; 
    //  line no 541 , L513128019 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack frame [Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->frame_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack calls I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->calls_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield org/luaj/vm2/lib/DebugLib$CallStack calls I
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp + 0].obj)->calls_2 = stack[sp + 1].i;
    // arrload __refer  ,  L513128019 bc index = 
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
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallFrame.reset()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 110, 3);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L999211009:
    //  line no 542 , L999211009 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallStack_onReturn___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_00024CallStack_onReturn___V(runtime, ins);
}


// locals: 4
// stack: 4
// args: 3
void func_org_luaj_vm2_lib_DebugLib_00024CallStack_onInstruction__ILorg_luaj_vm2_Varargs_2I_V(JThreadRuntime *runtime, s32 p0, struct org_luaj_vm2_Varargs* p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2420, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 545 , L1338332733 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 545;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack calls I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->calls_2;
    sp += 0;
    if(stack[--sp].i  <= 0) goto L42338572;
    ; 
    //  line no 546 , L823263265 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack frame [Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->frame_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack calls I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->calls_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L823263265 bc index = 
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
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallFrame.instr(ILorg/luaj/vm2/Varargs;I)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct org_luaj_vm2_Varargs*,s32) = find_method(__ins->vm_table, 110, 4);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L42338572:
    //  line no 547 , L42338572 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallStack_onInstruction__ILorg_luaj_vm2_Varargs_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_00024CallStack_onInstruction__ILorg_luaj_vm2_Varargs_2I_V(runtime, ins, para[0].obj, para[1].i);
}


// locals: 5
// stack: 4
// args: 1
struct java_lang_String* func_org_luaj_vm2_lib_DebugLib_00024CallStack_traceback__I_Ljava_lang_String_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2421, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 555 , L1482714257 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 555;
    // new java/lang/StringBuffer
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 178);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuffer.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuffer__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 556 , L1788662008 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4178);
    // invokevirtual java/lang/StringBuffer.append(Ljava/lang/String;)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 178, 0);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1269749378:
    //  line no 557 , L1269749378 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // iinc slot 1 value 1
    local[1].i += 1;
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallStack.getCallFrame(I)Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_lib_DebugLib_00024CallFrame* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 105, 6);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    if(rstack[--sp].obj  == NULL) goto L540876179;
    ; 
    //  line no 558 , L740950652 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4179);
    // invokevirtual java/lang/StringBuffer.append(Ljava/lang/String;)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 178, 0);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 559 , L294505405 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallFrame.shortsource()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 110, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuffer.append(Ljava/lang/String;)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 178, 0);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 560 , L2107088180 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 58
    stack[sp++].i = 58;
    // invokevirtual java/lang/StringBuffer.append(C)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,u16) = find_method(__ins->vm_table, 178, 5);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 561 , L890160784 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
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
    if(stack[--sp].i  <= 0) goto L1238047663;
    ; 
    //  line no 562 , L912584968 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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
    rstack[sp++].obj = rlocal[3].obj;
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
    // invokevirtual java/lang/StringBuffer.append(Ljava/lang/String;)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 178, 0);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1238047663:
    //  line no 563 , L1238047663 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4180);
    // invokevirtual java/lang/StringBuffer.append(Ljava/lang/String;)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 178, 0);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 564 , L2010883277 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1065);
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->f_0;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallStack.auxgetinfo(Ljava/lang/String;Lorg/luaj/vm2/LuaFunction;Lorg/luaj/vm2/lib/DebugLib$CallFrame;)Lorg/luaj/vm2/lib/DebugLib$DebugInfo;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_lib_DebugLib_00024DebugInfo* (*__func_p) (JThreadRuntime *,struct java_lang_String*,struct org_luaj_vm2_LuaFunction*,struct org_luaj_vm2_lib_DebugLib_00024CallFrame*) = find_method(__ins->vm_table, 105, 8);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 565 , L883087072 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallFrame.linedefined()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 110, 9);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L623224248;
    ; 
    //  line no 566 , L878242981 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4181);
    // invokevirtual java/lang/StringBuffer.append(Ljava/lang/String;)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 178, 0);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    goto L504355631;
    L623224248:
    //  line no 567 , L623224248 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/lib/DebugLib$DebugInfo name Ljava/lang/String;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp - 1].obj)->name_0;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1010306008;
    ; 
    //  line no 568 , L884502914 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4182);
    // invokevirtual java/lang/StringBuffer.append(Ljava/lang/String;)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 178, 0);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 569 , L1198952052 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/lib/DebugLib$DebugInfo name Ljava/lang/String;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp - 1].obj)->name_0;
    sp += 0;
    // invokevirtual java/lang/StringBuffer.append(Ljava/lang/String;)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 178, 0);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 570 , L658563862 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 39
    stack[sp++].i = 39;
    // invokevirtual java/lang/StringBuffer.append(C)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,u16) = find_method(__ins->vm_table, 178, 5);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    goto L504355631;
    L1010306008:
    //  line no 572 , L1010306008 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4183);
    // invokevirtual java/lang/StringBuffer.append(Ljava/lang/String;)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 178, 0);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 573 , L1532644077 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallFrame.shortsource()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 110, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuffer.append(Ljava/lang/String;)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 178, 0);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 574 , L748229733 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 58
    stack[sp++].i = 58;
    // invokevirtual java/lang/StringBuffer.append(C)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,u16) = find_method(__ins->vm_table, 178, 5);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 575 , L1609509548 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/lib/DebugLib$CallFrame.linedefined()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 110, 9);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuffer.append(I)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 178, 4);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 576 , L2140617236 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 62
    stack[sp++].i = 62;
    // invokevirtual java/lang/StringBuffer.append(C)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,u16) = find_method(__ins->vm_table, 178, 5);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L504355631:
    //  line no 578 , L504355631 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1269749378;
    L540876179:
    //  line no 579 , L540876179 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4184);
    // invokevirtual java/lang/StringBuffer.append(Ljava/lang/String;)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 178, 0);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 580 , L1980959273 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/lang/StringBuffer.toString()Ljava/lang/String;
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallStack_traceback__I_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_DebugLib_00024CallStack_traceback__I_Ljava_lang_String_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_lib_DebugLib_00024CallFrame* func_org_luaj_vm2_lib_DebugLib_00024CallStack_getCallFrame__I_Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2422, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 584 , L877785117 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 584;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1917860633;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack calls I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->calls_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L486286648;
    L1917860633:
    //  line no 585 , L1917860633 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L486286648:
    //  line no 586 , L486286648 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack frame [Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->frame_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack calls I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->calls_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L486286648 bc index = 
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallStack_getCallFrame__I_Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_DebugLib_00024CallStack_getCallFrame__I_Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
struct org_luaj_vm2_lib_DebugLib_00024CallFrame* func_org_luaj_vm2_lib_DebugLib_00024CallStack_findCallFrame__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2423, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 590 , L1563699545 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 590;
    // iconst_1
    stack[sp++].i = 1;
    local[2].i = stack[--sp].i;
    L785340693:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack calls I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->calls_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1407675409;
    ; 
    //  line no 591 , L1120671806 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack frame [Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->frame_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack calls I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->calls_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L1120671806 bc index = 
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
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame f Lorg/luaj/vm2/LuaFunction;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->f_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1045336031;
    ; 
    //  line no 592 , L1780313842 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallStack frame [Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallStack*)rstack[sp - 1].obj)->frame_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1780313842 bc index = 
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
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1045336031:
    //  line no 590 , L1045336031 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L785340693;
    L1407675409:
    //  line no 593 , L1407675409 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallStack_findCallFrame__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_DebugLib_00024CallStack_findCallFrame__Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2(runtime, ins);
}


// locals: 8
// stack: 2
// args: 3
struct org_luaj_vm2_lib_DebugLib_00024DebugInfo* func_org_luaj_vm2_lib_DebugLib_00024CallStack_auxgetinfo__Ljava_lang_String_2Lorg_luaj_vm2_LuaFunction_2Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2_Lorg_luaj_vm2_lib_DebugLib_00024DebugInfo_2(JThreadRuntime *runtime, struct java_lang_String* p0, struct org_luaj_vm2_LuaFunction* p1, struct org_luaj_vm2_lib_DebugLib_00024CallFrame* p2){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2424, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 598 , L543028700 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 598;
    // new org/luaj/vm2/lib/DebugLib$DebugInfo
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 331);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/lib/DebugLib$DebugInfo.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_lib_DebugLib_00024DebugInfo__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 599 , L1789376127 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    ; 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/String.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 50, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[6].i = stack[--sp].i;
    L2041504298:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L915540950;
    ; 
    //  line no 600 , L1632716597 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[5].i;
    // invokevirtual java/lang/String.charAt(I)C
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        u16 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 50, 6);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    switch(stack[--sp].i){
        case 76:
            goto L1700751834;
        case 83:
            goto L1135936028;
        case 102:
            goto L1700751834;
        case 108:
            goto L674667952;
        case 110:
            goto L814300680;
        case 116:
            goto L780566650;
        case 117:
            goto L1162400340;
        default:
            goto L1810790719;
    }
    L1135936028:
    //  line no 602 , L1135936028 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/lib/DebugLib$DebugInfo.funcinfo(Lorg/luaj/vm2/LuaFunction;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaFunction*) = find_method(__ins->vm_table, 331, 0);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 603 , L1494158416 , bytecode index = 
    goto L1810790719;
    L674667952:
    //  line no 605 , L674667952 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L546242567;
    rstack[sp++].obj = rlocal[3].obj;
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
    if(stack[--sp].i  == 0) goto L546242567;
    rstack[sp++].obj = rlocal[3].obj;
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
    goto L982565180;
    L546242567:
    // iconst_-1
    stack[sp++].i = -1;
    L982565180:
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo currentline I
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->currentline_4 = stack[sp + 1].i;
    ; 
    //  line no 606 , L969502280 , bytecode index = 
    goto L1810790719;
    L1162400340:
    //  line no 608 , L1162400340 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  == NULL) goto L411408557;
    rstack[sp++].obj = rlocal[2].obj;
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
    if(stack[--sp].i  == 0) goto L411408557;
    ; 
    //  line no 609 , L1087519874 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 610 , L2096598149 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[7].obj;
    // getfield org/luaj/vm2/Prototype upvalues [Lorg/luaj/vm2/Upvaldesc;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->upvalues_5;
    sp += 0;
    // arraylength  label  L2096598149
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo nups S
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->nups_7 = stack[sp + 1].i;
    ; 
    //  line no 611 , L247334525 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[7].obj;
    // getfield org/luaj/vm2/Prototype numparams I
    stack[sp - 1].i = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->numparams_9;
    sp += 0;
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo nparams S
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->nparams_8 = stack[sp + 1].i;
    ; 
    //  line no 612 , L977975287 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[7].obj;
    // getfield org/luaj/vm2/Prototype is_vararg I
    stack[sp - 1].i = ((struct org_luaj_vm2_Prototype*)rstack[sp - 1].obj)->is_1vararg_10;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1806547472;
    // iconst_1
    stack[sp++].i = 1;
    goto L729710660;
    L1806547472:
    // iconst_0
    stack[sp++].i = 0;
    L729710660:
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo isvararg Z
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->isvararg_9 = stack[sp + 1].i;
    ; 
    //  line no 613 , L1426974392 , bytecode index = 
    goto L1810790719;
    L411408557:
    //  line no 614 , L411408557 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo nups S
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->nups_7 = stack[sp + 1].i;
    ; 
    //  line no 615 , L974587617 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo isvararg Z
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->isvararg_9 = stack[sp + 1].i;
    ; 
    //  line no 616 , L1013728905 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo nparams S
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->nparams_8 = stack[sp + 1].i;
    ; 
    //  line no 618 , L1674550752 , bytecode index = 
    goto L1810790719;
    L780566650:
    //  line no 620 , L780566650 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo istailcall Z
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->istailcall_10 = stack[sp + 1].i;
    ; 
    //  line no 621 , L1498259207 , bytecode index = 
    goto L1810790719;
    L814300680:
    //  line no 624 , L814300680 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L1542437569;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame previous Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->previous_5;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1542437569;
    ; 
    //  line no 625 , L99219259 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame previous Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->previous_5;
    sp += 0;
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
    if(stack[--sp].i  == 0) goto L1542437569;
    ; 
    //  line no 626 , L441867003 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/lib/DebugLib$CallFrame previous Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024CallFrame*)rstack[sp - 1].obj)->previous_5;
    sp += 0;
    // invokestatic org/luaj/vm2/lib/DebugLib.getfuncname(Lorg/luaj/vm2/lib/DebugLib$CallFrame;)Lorg/luaj/vm2/lib/DebugLib$NameWhat;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_lib_DebugLib_getfuncname__Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2_Lorg_luaj_vm2_lib_DebugLib_00024NameWhat_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 627 , L802573073 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    if(rstack[--sp].obj  == NULL) goto L1542437569;
    ; 
    //  line no 628 , L155829656 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[7].obj;
    // getfield org/luaj/vm2/lib/DebugLib$NameWhat name Ljava/lang/String;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024NameWhat*)rstack[sp - 1].obj)->name_0;
    sp += 0;
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo name Ljava/lang/String;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->name_0 = rstack[sp + 1].obj;
    ; 
    //  line no 629 , L1137945509 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[7].obj;
    // getfield org/luaj/vm2/lib/DebugLib$NameWhat namewhat Ljava/lang/String;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024NameWhat*)rstack[sp - 1].obj)->namewhat_1;
    sp += 0;
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo namewhat Ljava/lang/String;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->namewhat_1 = rstack[sp + 1].obj;
    L1542437569:
    //  line no 633 , L1542437569 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/lib/DebugLib$DebugInfo namewhat Ljava/lang/String;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp - 1].obj)->namewhat_1;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1810790719;
    ; 
    //  line no 634 , L1811587238 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 617);
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo namewhat Ljava/lang/String;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->namewhat_1 = rstack[sp + 1].obj;
    ; 
    //  line no 635 , L1995042827 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/lib/DebugLib$DebugInfo name Ljava/lang/String;
    sp -= 2;
    ((struct org_luaj_vm2_lib_DebugLib_00024DebugInfo*)rstack[sp + 0].obj)->name_0 = rstack[sp + 1].obj;
    goto L1810790719;
    L1700751834:
    //  line no 641 , L1700751834 , bytecode index = 
    goto L1810790719;
    L1810790719:
    //  line no 599 , L1810790719 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2041504298;
    L915540950:
    //  line no 647 , L915540950 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallStack_auxgetinfo__Ljava_lang_String_2Lorg_luaj_vm2_LuaFunction_2Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2_Lorg_luaj_vm2_lib_DebugLib_00024DebugInfo_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_lib_DebugLib_00024CallStack_auxgetinfo__Ljava_lang_String_2Lorg_luaj_vm2_LuaFunction_2Lorg_luaj_vm2_lib_DebugLib_00024CallFrame_2_Lorg_luaj_vm2_lib_DebugLib_00024DebugInfo_2(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 0
// stack: 1
// args: 1
void func_org_luaj_vm2_lib_DebugLib_00024CallStack__clinit____V(JThreadRuntime *runtime, struct org_luaj_vm2_lib_DebugLib_00024CallStack* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2425, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 507 , L1864074564 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 507;
    // iconst_0
    stack[sp++].i = 0;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/lib/DebugLib$CallFrame; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(4174));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putstatic org/luaj/vm2/lib/DebugLib$CallStack EMPTY [Lorg/luaj/vm2/lib/DebugLib$CallFrame;
    sp -= 1;
    static_var_org_luaj_vm2_lib_DebugLib_00024CallStack.EMPTY_0 = rstack[sp].obj;
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

void bridge_org_luaj_vm2_lib_DebugLib_00024CallStack__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_DebugLib_00024CallStack__clinit____V(runtime, para[0].obj);
}


