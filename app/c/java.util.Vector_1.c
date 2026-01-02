// CLASS: java/util/Vector$1 extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_Vector_000241_static {};



__refer arr_vmtable_java_util_Vector_000241_from_java_util_Vector_000241[] = {
    func_java_util_Vector_000241_hasMoreElements___Z,  //0
    func_java_util_Vector_000241_nextElement___Ljava_lang_Object_2  //1
};
__refer arr_vmtable_java_util_Vector_000241_from_java_lang_Object[] = {
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
__refer arr_vmtable_java_util_Vector_000241_from_java_util_Enumeration[] = {
    func_java_util_Vector_000241_hasMoreElements___Z,  //0
    func_java_util_Vector_000241_nextElement___Ljava_lang_Object_2  //1
};
VMTable vmtable_java_util_Vector_000241[] = {
    {257, 2, arr_vmtable_java_util_Vector_000241_from_java_util_Vector_000241}, //0
    {5, 10, arr_vmtable_java_util_Vector_000241_from_java_lang_Object}, //1
    {46, 2, arr_vmtable_java_util_Vector_000241_from_java_util_Enumeration}, //2
};



// locals: 2
// stack: 2
// args: 1
void func_java_util_Vector_000241__init___Ljava_util_Vector_2_V(JThreadRuntime *runtime, struct java_util_Vector* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1402, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 117 , L1424788681 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 117;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/Vector$1 this$0 Ljava/util/Vector;
    sp -= 2;
    ((struct java_util_Vector_000241*)rstack[sp + 0].obj)->this_000240_1 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 118 , L1391119179 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/util/Vector$1 count I
    sp -= 2;
    ((struct java_util_Vector_000241*)rstack[sp + 0].obj)->count_0 = stack[sp + 1].i;
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

void bridge_java_util_Vector_000241__init___Ljava_util_Vector_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Vector_000241__init___Ljava_util_Vector_2_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s8 func_java_util_Vector_000241_hasMoreElements___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1403, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 121 , L710220387 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 121;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector$1 count I
    stack[sp - 1].i = ((struct java_util_Vector_000241*)rstack[sp - 1].obj)->count_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector$1 this$0 Ljava/util/Vector;
    rstack[sp - 1].obj = ((struct java_util_Vector_000241*)rstack[sp - 1].obj)->this_000240_1;
    sp += 0;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L443502884;
    // iconst_1
    stack[sp++].i = 1;
    goto L517693873;
    L443502884:
    // iconst_0
    stack[sp++].i = 0;
    L517693873:
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

void bridge_java_util_Vector_000241_hasMoreElements___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Vector_000241_hasMoreElements___Z(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_Vector_000241_nextElement___Ljava_lang_Object_2[] = {
    { , , -1}, 
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_util_Vector_000241_nextElement___Ljava_lang_Object_2 = {3, arr_extable_func_java_util_Vector_000241_nextElement___Ljava_lang_Object_2};

// locals: 3
// stack: 5
// args: 0
struct java_lang_Object* func_java_util_Vector_000241_nextElement___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1404, &rstack[0], &rlocal[0], &sp);
    // try catch :L214313531 L1824570614 L693345846 (
    // try catch :L854989361 L257718694 L693345846 (
    // try catch :L693345846 L1720865719 L693345846 (
    ; 
    //  line no 125 , L1392886653 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 125;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector$1 this$0 Ljava/util/Vector;
    rstack[sp - 1].obj = ((struct java_util_Vector_000241*)rstack[sp - 1].obj)->this_000240_1;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[1].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L214313531:
    __frame->bytecodeIndex = 
    //  line no 126 , L214313531 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector$1 count I
    stack[sp - 1].i = ((struct java_util_Vector_000241*)rstack[sp - 1].obj)->count_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector$1 this$0 Ljava/util/Vector;
    rstack[sp - 1].obj = ((struct java_util_Vector_000241*)rstack[sp - 1].obj)->this_000240_1;
    sp += 0;
    // getfield java/util/Vector elementCount I
    stack[sp - 1].i = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L854989361;
    ; 
    //  line no 127 , L1369468094 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Vector$1 this$0 Ljava/util/Vector;
    rstack[sp - 1].obj = ((struct java_util_Vector_000241*)rstack[sp - 1].obj)->this_000240_1;
    sp += 0;
    // getfield java/util/Vector elementData [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Vector*)rstack[sp - 1].obj)->elementData_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Vector$1 count I
    stack[sp - 1].i = ((struct java_util_Vector_000241*)rstack[sp - 1].obj)->count_0;
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
    // putfield java/util/Vector$1 count I
    sp -= 2;
    ((struct java_util_Vector_000241*)rstack[sp + 0].obj)->count_0 = stack[sp + 1].i;
    // arrload __refer  ,  L1369468094 bc index = 
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
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1824570614:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L854989361:
    __frame->bytecodeIndex = 
    //  line no 129 , L854989361 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L257718694:
    __frame->bytecodeIndex = 
    goto L1037942373;
    L693345846:
    __frame->bytecodeIndex = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1720865719:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L1720865719 in labeltable is :L1720865719
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 129;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1037942373:
    //  line no 130 , L1037942373 , bytecode index = 
    // new java/util/NoSuchElementException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 77);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/NoSuchElementException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_NoSuchElementException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1037942373 in labeltable is :L1037942373
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 130;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L693345846;
        case 1 : goto L693345846;
        case 2 : goto L693345846;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_Vector_000241_nextElement___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Vector_000241_nextElement___Ljava_lang_Object_2(runtime, ins);
}


