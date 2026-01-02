// CLASS: jx/zero/VMSupport extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_VMSupport_static {};



__refer arr_vmtable_jx_zero_VMSupport_from_jx_zero_VMSupport[] = {
    NULL
};
__refer arr_vmtable_jx_zero_VMSupport_from_java_lang_Object[] = {
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
VMTable vmtable_jx_zero_VMSupport[] = {
    {326, 0, arr_vmtable_jx_zero_VMSupport_from_jx_zero_VMSupport}, //0
    {5, 10, arr_vmtable_jx_zero_VMSupport_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_jx_zero_VMSupport__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2158, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 11 , L593308118 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 11;
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

void bridge_jx_zero_VMSupport__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_VMSupport__init____V(runtime, ins);
}


// locals: 1
// stack: 3
// args: 2
s16 func_jx_zero_VMSupport_swapShortByteOrder__S_S(JThreadRuntime *runtime, struct jx_zero_VMSupport* p0, s16 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2159, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 13 , L1140448598 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 13;
    stack[sp++].i = local[0].i;
    //  ldc 
    stack[sp++].i = 0xff00;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 8
    stack[sp++].i = 8;
    stack[sp - 2].u = stack[sp - 2].u >> stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[0].i;
    //  sipush 255
    stack[sp++].i = 255;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 8
    stack[sp++].i = 8;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (s16)stack[sp - 1].i; 
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

void bridge_jx_zero_VMSupport_swapShortByteOrder__S_S(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_VMSupport_swapShortByteOrder__S_S(runtime, para[0].obj, para[1].i);
}


// locals: 2
// stack: 3
// args: 2
s32 func_jx_zero_VMSupport_swapIntByteOrder__I_I(JThreadRuntime *runtime, struct jx_zero_VMSupport* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2160, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 17 , L1472950462 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 17;
    // iconst_0
    stack[sp++].i = 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 18 , L759564454 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[0].i;
    //  sipush 255
    stack[sp++].i = 255;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 24
    stack[sp++].i = 24;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 19 , L551056181 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[0].i;
    //  ldc 
    stack[sp++].i = 0xff00;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 8
    stack[sp++].i = 8;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 20 , L713707020 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[0].i;
    //  ldc 
    stack[sp++].i = 0xff0000;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 8
    stack[sp++].i = 8;
    stack[sp - 2].u = stack[sp - 2].u >> stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 21 , L650679651 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[0].i;
    //  ldc 
    stack[sp++].i = 0xff000000;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    //  bipush 24
    stack[sp++].i = 24;
    stack[sp - 2].u = stack[sp - 2].u >> stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 22 , L1003928100 , bytecode index = 
    stack[sp++].i = local[1].i;
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

void bridge_jx_zero_VMSupport_swapIntByteOrder__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_VMSupport_swapIntByteOrder__I_I(runtime, para[0].obj, para[1].i);
}


// locals: 6
// stack: 4
// args: 6
void func_jx_zero_VMSupport_arraycopy_1byte_1left___3BI_3BII_V(JThreadRuntime *runtime, struct jx_zero_VMSupport* p0, JArray * p1, s32 p2, JArray * p3, s32 p4, s32 p5){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2161, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    local[4].i = p4;
    local[5].i = p5;
    ; 
    //  line no 27 , L553056396 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 27;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 28 , L1115099772 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 29 , L1283364748 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L894332932:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L585878713;
    rstack[sp++].obj = rlocal[2].obj;
    // iinc slot 3 value -1
    local[3].i += -1;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // iinc slot 1 value -1
    local[1].i += -1;
    stack[sp++].i = local[1].i;
    // arrload s8  ,  L894332932 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    // arrstore s8  ,  L894332932 bc index = 
    {
        ;
        s8 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s8_arr[idx] = value;
    }
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L894332932;
    L585878713:
    //  line no 30 , L585878713 , bytecode index = 
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

void bridge_jx_zero_VMSupport_arraycopy_1byte_1left___3BI_3BII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_VMSupport_arraycopy_1byte_1left___3BI_3BII_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].obj, para[4].i, para[5].i);
}


// locals: 6
// stack: 5
// args: 6
void func_jx_zero_VMSupport_arraycopy_1byte_1right___3BI_3BII_V(JThreadRuntime *runtime, struct jx_zero_VMSupport* p0, JArray * p1, s32 p2, JArray * p3, s32 p4, s32 p5){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2162, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    local[4].i = p4;
    local[5].i = p5;
    ; 
    //  line no 32 , L1620041759 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 32;
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L646410842:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1517677623;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload s8  ,  L646410842 bc index = 
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
        stack[sp].i = arr->prop.as_s8_arr[idx];
        sp += 1;
    }
    // arrstore s8  ,  L646410842 bc index = 
    {
        ;
        s8 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s8_arr[idx] = value;
    }
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L646410842;
    L1517677623:
    //  line no 33 , L1517677623 , bytecode index = 
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

void bridge_jx_zero_VMSupport_arraycopy_1byte_1right___3BI_3BII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_VMSupport_arraycopy_1byte_1right___3BI_3BII_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].obj, para[4].i, para[5].i);
}


// locals: 6
// stack: 4
// args: 6
void func_jx_zero_VMSupport_arraycopy_1char_1left___3CI_3CII_V(JThreadRuntime *runtime, struct jx_zero_VMSupport* p0, JArray * p1, s32 p2, JArray * p3, s32 p4, s32 p5){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2163, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    local[4].i = p4;
    local[5].i = p5;
    ; 
    //  line no 36 , L865430810 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 36;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 37 , L773708944 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 38 , L1534888240 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L1485208789:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1088628578;
    rstack[sp++].obj = rlocal[2].obj;
    // iinc slot 3 value -1
    local[3].i += -1;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // iinc slot 1 value -1
    local[1].i += -1;
    stack[sp++].i = local[1].i;
    // arrload u16  ,  L1485208789 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    // arrstore u16  ,  L1485208789 bc index = 
    {
        ;
        u16 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_u16_arr[idx] = value;
    }
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1485208789;
    L1088628578:
    //  line no 39 , L1088628578 , bytecode index = 
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

void bridge_jx_zero_VMSupport_arraycopy_1char_1left___3CI_3CII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_VMSupport_arraycopy_1char_1left___3CI_3CII_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].obj, para[4].i, para[5].i);
}


// locals: 6
// stack: 5
// args: 6
void func_jx_zero_VMSupport_arraycopy_1char_1right___3CI_3CII_V(JThreadRuntime *runtime, struct jx_zero_VMSupport* p0, JArray * p1, s32 p2, JArray * p3, s32 p4, s32 p5){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2164, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    local[4].i = p4;
    local[5].i = p5;
    ; 
    //  line no 41 , L1062254208 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 41;
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L1423639915:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L224063653;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload u16  ,  L1423639915 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    // arrstore u16  ,  L1423639915 bc index = 
    {
        ;
        u16 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_u16_arr[idx] = value;
    }
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1423639915;
    L224063653:
    //  line no 42 , L224063653 , bytecode index = 
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

void bridge_jx_zero_VMSupport_arraycopy_1char_1right___3CI_3CII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_VMSupport_arraycopy_1char_1right___3CI_3CII_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].obj, para[4].i, para[5].i);
}


// locals: 6
// stack: 4
// args: 6
void func_jx_zero_VMSupport_arraycopy_1left___3Ljava_lang_Object_2I_3Ljava_lang_Object_2II_V(JThreadRuntime *runtime, struct jx_zero_VMSupport* p0, JArray * p1, s32 p2, JArray * p3, s32 p4, s32 p5){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2165, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    local[4].i = p4;
    local[5].i = p5;
    ; 
    //  line no 45 , L1675603360 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 45;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 46 , L1864572141 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 47 , L900073076 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L1674899618:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L2105078741;
    rstack[sp++].obj = rlocal[2].obj;
    // iinc slot 3 value -1
    local[3].i += -1;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // iinc slot 1 value -1
    local[1].i += -1;
    stack[sp++].i = local[1].i;
    // arrload __refer  ,  L1674899618 bc index = 
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
    // arrstore __refer  ,  L1674899618 bc index = 
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
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1674899618;
    L2105078741:
    //  line no 48 , L2105078741 , bytecode index = 
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

void bridge_jx_zero_VMSupport_arraycopy_1left___3Ljava_lang_Object_2I_3Ljava_lang_Object_2II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_VMSupport_arraycopy_1left___3Ljava_lang_Object_2I_3Ljava_lang_Object_2II_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].obj, para[4].i, para[5].i);
}


// locals: 6
// stack: 5
// args: 6
void func_jx_zero_VMSupport_arraycopy_1right___3Ljava_lang_Object_2I_3Ljava_lang_Object_2II_V(JThreadRuntime *runtime, struct jx_zero_VMSupport* p0, JArray * p1, s32 p2, JArray * p3, s32 p4, s32 p5){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2166, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    local[4].i = p4;
    local[5].i = p5;
    ; 
    //  line no 50 , L257650296 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 50;
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L1263455953:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1905420854;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L1263455953 bc index = 
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
    // arrstore __refer  ,  L1263455953 bc index = 
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
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1263455953;
    L1905420854:
    //  line no 51 , L1905420854 , bytecode index = 
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

void bridge_jx_zero_VMSupport_arraycopy_1right___3Ljava_lang_Object_2I_3Ljava_lang_Object_2II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_VMSupport_arraycopy_1right___3Ljava_lang_Object_2I_3Ljava_lang_Object_2II_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].obj, para[4].i, para[5].i);
}


