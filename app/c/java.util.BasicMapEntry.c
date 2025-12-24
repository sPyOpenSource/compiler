// CLASS: java/util/BasicMapEntry extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_BasicMapEntry_static {};



__refer arr_vmtable_java_util_BasicMapEntry_from_java_util_BasicMapEntry[] = {
    func_java_util_BasicMapEntry_equals__Ljava_lang_Object_2_Z,  //0
    func_java_util_BasicMapEntry_getKey___Ljava_lang_Object_2,  //1
    func_java_util_BasicMapEntry_getValue___Ljava_lang_Object_2,  //2
    func_java_util_BasicMapEntry_hashCode___I,  //3
    func_java_util_BasicMapEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2  //4
};
__refer arr_vmtable_java_util_BasicMapEntry_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_util_BasicMapEntry_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_lang_Object_toString___Ljava_lang_String_2,  //8
    func_java_util_BasicMapEntry_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
__refer arr_vmtable_java_util_BasicMapEntry_from_java_util_Map_00024Entry[] = {
    func_java_util_BasicMapEntry_getKey___Ljava_lang_Object_2,  //0
    func_java_util_BasicMapEntry_getValue___Ljava_lang_Object_2,  //1
    func_java_util_BasicMapEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2,  //2
    func_java_util_BasicMapEntry_hashCode___I,  //3
    func_java_util_BasicMapEntry_equals__Ljava_lang_Object_2_Z  //4
};
VMTable vmtable_java_util_BasicMapEntry[] = {
    {274, 5, arr_vmtable_java_util_BasicMapEntry_from_java_util_BasicMapEntry}, //0
    {10, 11, arr_vmtable_java_util_BasicMapEntry_from_java_lang_Object}, //1
    {30, 5, arr_vmtable_java_util_BasicMapEntry_from_java_util_Map_00024Entry}, //2
};



// locals: 3
// stack: 2
// args: 2
void func_java_util_BasicMapEntry__init___Ljava_lang_Object_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0, struct java_lang_Object* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 855, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 51 , L1887699190 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 51;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 52 , L1479140596 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/BasicMapEntry key Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_BasicMapEntry*)rstack[sp + 0].obj)->key_0 = rstack[sp + 1].obj;
    ; 
    //  line no 53 , L1108889615 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/util/BasicMapEntry value Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_BasicMapEntry*)rstack[sp + 0].obj)->value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 54 , L1275028674 , bytecode index = 
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

void bridge_java_util_BasicMapEntry__init___Ljava_lang_Object_2Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_BasicMapEntry__init___Ljava_lang_Object_2Ljava_lang_Object_2_V(runtime, ins, para[0].obj);
}


// locals: 7
// stack: 2
// args: 1
s8 func_java_util_BasicMapEntry_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 856, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 77 , L204805934 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 77;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/util/Map$Entry
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 496);
    if(stack[--sp].i  == 0) goto L204322447;
    ; 
    //  line no 79 , L1019484860 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast java/util/Map$Entry
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 496);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 80 , L1164365897 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/BasicMapEntry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 274, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 81 , L1640899500 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/BasicMapEntry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 274, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 82 , L3565780 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface java/util/Map$Entry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 30, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 83 , L473666452 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface java/util/Map$Entry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 30, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 84 , L1865219266 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  != NULL) goto L2138005960;
    rstack[sp++].obj = rlocal[5].obj;
    if(rstack[--sp].obj  != NULL) goto L1278002745;
    goto L214649627;
    L2138005960:
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[5].obj;
    ; 
    //  line no 85 , L67730604 , bytecode index = 
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 10, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1278002745;
    L214649627:
    rstack[sp++].obj = rlocal[4].obj;
    if(rstack[--sp].obj  != NULL) goto L15477956;
    rstack[sp++].obj = rlocal[6].obj;
    if(rstack[--sp].obj  != NULL) goto L1278002745;
    goto L710623214;
    L15477956:
    rstack[sp++].obj = rlocal[4].obj;
    rstack[sp++].obj = rlocal[6].obj;
    ; 
    //  line no 87 , L2082351661 , bytecode index = 
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 10, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1278002745;
    L710623214:
    // iconst_1
    stack[sp++].i = 1;
    goto L859690270;
    L1278002745:
    // iconst_0
    stack[sp++].i = 0;
    L859690270:
    //  line no 84 , L859690270 , bytecode index = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L204322447:
    //  line no 89 , L204322447 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
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

void bridge_java_util_BasicMapEntry_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_BasicMapEntry_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_java_util_BasicMapEntry_getKey___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 96 , L553759818 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/BasicMapEntry key Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_BasicMapEntry*)rstack[sp - 1].obj)->key_0;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_util_BasicMapEntry_getKey___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_BasicMapEntry_getKey___Ljava_lang_Object_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_Object* func_java_util_BasicMapEntry_getValue___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 103 , L1896552614 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/BasicMapEntry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_BasicMapEntry*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_util_BasicMapEntry_getValue___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_BasicMapEntry_getValue___Ljava_lang_Object_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 0
s32 func_java_util_BasicMapEntry_hashCode___I(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 859, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 119 , L1033856359 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 119;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/BasicMapEntry.getKey()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 274, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 120 , L201677908 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/BasicMapEntry.getValue()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 274, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 121 , L635611994 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L904253669;
    // iconst_0
    stack[sp++].i = 0;
    goto L1930903395;
    L904253669:
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/Object.hashCode()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 10, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1930903395:
    //  line no 122 , L1930903395 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  != NULL) goto L1431710377;
    // iconst_0
    stack[sp++].i = 0;
    goto L1700721442;
    L1431710377:
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/lang/Object.hashCode()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 10, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1700721442:
    stack[sp - 2].i = stack[sp - 2].i ^ stack[sp - 1].i; 
    --sp;
    ; 
    //  line no 121 , L2116511124 , bytecode index = 
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

void bridge_java_util_BasicMapEntry_hashCode___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_BasicMapEntry_hashCode___I(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
struct java_lang_Object* func_java_util_BasicMapEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 860, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 135 , L1348916831 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 135;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/BasicMapEntry value Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_util_BasicMapEntry*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 136 , L1110698130 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/BasicMapEntry value Ljava/lang/Object;
    sp -= 2;
    ((struct java_util_BasicMapEntry*)rstack[sp + 0].obj)->value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 137 , L125644421 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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

void bridge_java_util_BasicMapEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_BasicMapEntry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}


