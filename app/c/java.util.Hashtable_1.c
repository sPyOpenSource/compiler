// CLASS: java/util/Hashtable$1 extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_Hashtable_000241_static {};



__refer arr_vmtable_java_util_Hashtable_000241_from_java_util_Hashtable_000241[] = {
    func_java_util_Hashtable_000241_hasMoreElements___Z,  //0
    func_java_util_Hashtable_000241_nextElement___Ljava_lang_Object_2  //1
};
__refer arr_vmtable_java_util_Hashtable_000241_from_java_lang_Object[] = {
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
__refer arr_vmtable_java_util_Hashtable_000241_from_java_util_Enumeration[] = {
    func_java_util_Hashtable_000241_hasMoreElements___Z,  //0
    func_java_util_Hashtable_000241_nextElement___Ljava_lang_Object_2  //1
};
VMTable vmtable_java_util_Hashtable_000241[] = {
    {28, 2, arr_vmtable_java_util_Hashtable_000241_from_java_util_Hashtable_000241}, //0
    {5, 10, arr_vmtable_java_util_Hashtable_000241_from_java_lang_Object}, //1
    {46, 2, arr_vmtable_java_util_Hashtable_000241_from_java_util_Enumeration}, //2
};



// locals: 2
// stack: 2
// args: 1
void func_java_util_Hashtable_000241__init___Ljava_util_Hashtable_2_V(JThreadRuntime *runtime, struct java_util_Hashtable* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1724, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 64 , L1219637204 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 64;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/Hashtable$1 this$0 Ljava/util/Hashtable;
    sp -= 2;
    ((struct java_util_Hashtable_000241*)rstack[sp + 0].obj)->this_000240_2 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 65 , L1788698111 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable$1 this$0 Ljava/util/Hashtable;
    rstack[sp - 1].obj = ((struct java_util_Hashtable_000241*)rstack[sp - 1].obj)->this_000240_2;
    sp += 0;
    // invokestatic java/util/Hashtable.access$000(Ljava/util/Hashtable;)Ljava/util/HashMap;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_Hashtable_access_00024000__Ljava_util_Hashtable_2_Ljava_util_HashMap_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/HashMap.keySet()Ljava/util/Set;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Set* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 27, 21);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokeinterface java/util/Set.toArray()[Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 86, 4);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/util/Hashtable$1 list [Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_Hashtable_000241*)rstack[sp + 0].obj)->list_0 = rstack[sp + 1].obj;
    ; 
    //  line no 66 , L990442552 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/util/Hashtable$1 eindex I
    sp -= 2;
    ((struct java_util_Hashtable_000241*)rstack[sp + 0].obj)->eindex_1 = stack[sp + 1].i;
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

void bridge_java_util_Hashtable_000241__init___Ljava_util_Hashtable_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Hashtable_000241__init___Ljava_util_Hashtable_2_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s8 func_java_util_Hashtable_000241_hasMoreElements___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1725, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 70 , L1529842358 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 70;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable$1 list [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable_000241*)rstack[sp - 1].obj)->list_0;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1541232265;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable$1 eindex I
    stack[sp - 1].i = ((struct java_util_Hashtable_000241*)rstack[sp - 1].obj)->eindex_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable$1 list [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable_000241*)rstack[sp - 1].obj)->list_0;
    sp += 0;
    // arraylength  label  L1529842358
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1541232265;
    // iconst_1
    stack[sp++].i = 1;
    goto L663277822;
    L1541232265:
    // iconst_0
    stack[sp++].i = 0;
    L663277822:
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

void bridge_java_util_Hashtable_000241_hasMoreElements___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Hashtable_000241_hasMoreElements___Z(runtime, ins);
}


// locals: 1
// stack: 5
// args: 0
struct java_lang_Object* func_java_util_Hashtable_000241_nextElement___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1726, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 75 , L1425433685 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 75;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Hashtable$1 list [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_Hashtable_000241*)rstack[sp - 1].obj)->list_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/Hashtable$1 eindex I
    stack[sp - 1].i = ((struct java_util_Hashtable_000241*)rstack[sp - 1].obj)->eindex_1;
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
    // putfield java/util/Hashtable$1 eindex I
    sp -= 2;
    ((struct java_util_Hashtable_000241*)rstack[sp + 0].obj)->eindex_1 = stack[sp + 1].i;
    // arrload __refer  ,  L1425433685 bc index = 
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

void bridge_java_util_Hashtable_000241_nextElement___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Hashtable_000241_nextElement___Ljava_lang_Object_2(runtime, ins);
}


