// CLASS: java/util/LinkedHashMap$Entry extends java/util/HashMap$Entry
#include "metadata.h"


// generation
// globals
//struct java_util_LinkedHashMap_00024Entry_static {};



__refer arr_vmtable_java_util_LinkedHashMap_00024Entry_from_java_util_LinkedHashMap_00024Entry[] = {
    func_java_util_LinkedHashMap_00024Entry_recordAccess__Ljava_util_HashMap_2_V,  //0
    func_java_util_LinkedHashMap_00024Entry_recordRemoval__Ljava_util_HashMap_2_V  //1
};
__refer arr_vmtable_java_util_LinkedHashMap_00024Entry_from_java_util_HashMap_00024Entry[] = {
    func_java_util_HashMap_00024Entry_getKey___Ljava_lang_Object_2,  //0
    func_java_util_HashMap_00024Entry_getValue___Ljava_lang_Object_2,  //1
    func_java_util_HashMap_00024Entry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2,  //2
    func_java_util_HashMap_00024Entry_equals__Ljava_lang_Object_2_Z,  //3
    func_java_util_HashMap_00024Entry_hashCode___I,  //4
    func_java_util_HashMap_00024Entry_toString___Ljava_lang_String_2,  //5
    func_java_util_LinkedHashMap_00024Entry_recordAccess__Ljava_util_HashMap_2_V,  //6
    func_java_util_LinkedHashMap_00024Entry_recordRemoval__Ljava_util_HashMap_2_V  //7
};
__refer arr_vmtable_java_util_LinkedHashMap_00024Entry_from_java_lang_Object[] = {
    func_java_util_HashMap_00024Entry_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_util_HashMap_00024Entry_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_util_HashMap_00024Entry_hashCode___I  //9
};
__refer arr_vmtable_java_util_LinkedHashMap_00024Entry_from_java_util_Map_00024Entry[] = {
    func_java_util_HashMap_00024Entry_getKey___Ljava_lang_Object_2,  //0
    func_java_util_HashMap_00024Entry_getValue___Ljava_lang_Object_2,  //1
    func_java_util_HashMap_00024Entry_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2,  //2
    func_java_util_HashMap_00024Entry_equals__Ljava_lang_Object_2_Z,  //3
    func_java_util_HashMap_00024Entry_hashCode___I  //4
};
VMTable vmtable_java_util_LinkedHashMap_00024Entry[] = {
    {10, 2, arr_vmtable_java_util_LinkedHashMap_00024Entry_from_java_util_LinkedHashMap_00024Entry}, //0
    {11, 8, arr_vmtable_java_util_LinkedHashMap_00024Entry_from_java_util_HashMap_00024Entry}, //1
    {5, 10, arr_vmtable_java_util_LinkedHashMap_00024Entry_from_java_lang_Object}, //2
    {12, 5, arr_vmtable_java_util_LinkedHashMap_00024Entry_from_java_util_Map_00024Entry}, //3
};



// locals: 5
// stack: 5
// args: 4
void func_java_util_LinkedHashMap_00024Entry__init___ILjava_lang_Object_2Ljava_lang_Object_2Ljava_util_HashMap_00024Entry_2_V(JThreadRuntime *runtime, s32 p0, struct java_lang_Object* p1, struct java_lang_Object* p2, struct java_util_HashMap_00024Entry* p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 48, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    rlocal[3].obj = p3;
    ; 
    //  line no 101 , L932607259 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 101;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokespecial java/util/HashMap$Entry.<init>(ILjava/lang/Object;Ljava/lang/Object;Ljava/util/HashMap$Entry;)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap_00024Entry__init___ILjava_lang_Object_2Ljava_lang_Object_2Ljava_util_HashMap_00024Entry_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 102 , L1740000325 , bytecode index = 
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

void bridge_java_util_LinkedHashMap_00024Entry__init___ILjava_lang_Object_2Ljava_lang_Object_2Ljava_util_HashMap_00024Entry_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_LinkedHashMap_00024Entry__init___ILjava_lang_Object_2Ljava_lang_Object_2Ljava_util_HashMap_00024Entry_2_V(runtime, ins, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 1
// stack: 2
// args: 0
void func_java_util_LinkedHashMap_00024Entry_remove___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 49, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 106 , L1682092198 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 106;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$Entry before Ljava/util/LinkedHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024Entry*)rstack[sp - 1].obj)->before_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$Entry after Ljava/util/LinkedHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024Entry*)rstack[sp - 1].obj)->after_5;
    sp += 0;
    // putfield java/util/LinkedHashMap$Entry after Ljava/util/LinkedHashMap$Entry;
    sp -= 2;
    ((struct java_util_LinkedHashMap_00024Entry*)rstack[sp + 0].obj)->after_5 = rstack[sp + 1].obj;
    ; 
    //  line no 107 , L1626877848 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$Entry after Ljava/util/LinkedHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024Entry*)rstack[sp - 1].obj)->after_5;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$Entry before Ljava/util/LinkedHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024Entry*)rstack[sp - 1].obj)->before_4;
    sp += 0;
    // putfield java/util/LinkedHashMap$Entry before Ljava/util/LinkedHashMap$Entry;
    sp -= 2;
    ((struct java_util_LinkedHashMap_00024Entry*)rstack[sp + 0].obj)->before_4 = rstack[sp + 1].obj;
    ; 
    //  line no 108 , L905544614 , bytecode index = 
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

void bridge_java_util_LinkedHashMap_00024Entry_remove___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_LinkedHashMap_00024Entry_remove___V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_util_LinkedHashMap_00024Entry_addBefore__Ljava_util_LinkedHashMap_00024Entry_2_V(JThreadRuntime *runtime, struct java_util_LinkedHashMap_00024Entry* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 50, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 112 , L249515771 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 112;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/LinkedHashMap$Entry after Ljava/util/LinkedHashMap$Entry;
    sp -= 2;
    ((struct java_util_LinkedHashMap_00024Entry*)rstack[sp + 0].obj)->after_5 = rstack[sp + 1].obj;
    ; 
    //  line no 113 , L796533847 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/util/LinkedHashMap$Entry before Ljava/util/LinkedHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024Entry*)rstack[sp - 1].obj)->before_4;
    sp += 0;
    // putfield java/util/LinkedHashMap$Entry before Ljava/util/LinkedHashMap$Entry;
    sp -= 2;
    ((struct java_util_LinkedHashMap_00024Entry*)rstack[sp + 0].obj)->before_4 = rstack[sp + 1].obj;
    ; 
    //  line no 114 , L1449621165 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$Entry before Ljava/util/LinkedHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024Entry*)rstack[sp - 1].obj)->before_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // putfield java/util/LinkedHashMap$Entry after Ljava/util/LinkedHashMap$Entry;
    sp -= 2;
    ((struct java_util_LinkedHashMap_00024Entry*)rstack[sp + 0].obj)->after_5 = rstack[sp + 1].obj;
    ; 
    //  line no 115 , L1627960023 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/LinkedHashMap$Entry after Ljava/util/LinkedHashMap$Entry;
    rstack[sp - 1].obj = ((struct java_util_LinkedHashMap_00024Entry*)rstack[sp - 1].obj)->after_5;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // putfield java/util/LinkedHashMap$Entry before Ljava/util/LinkedHashMap$Entry;
    sp -= 2;
    ((struct java_util_LinkedHashMap_00024Entry*)rstack[sp + 0].obj)->before_4 = rstack[sp + 1].obj;
    ; 
    //  line no 116 , L357863579 , bytecode index = 
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

void bridge_java_util_LinkedHashMap_00024Entry_addBefore__Ljava_util_LinkedHashMap_00024Entry_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_LinkedHashMap_00024Entry_addBefore__Ljava_util_LinkedHashMap_00024Entry_2_V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
void func_java_util_LinkedHashMap_00024Entry_recordAccess__Ljava_util_HashMap_2_V(JThreadRuntime *runtime, struct java_util_HashMap* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 51, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 120 , L114132791 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 120;
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast java/util/LinkedHashMap
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 114);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 121 , L586617651 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic java/util/LinkedHashMap.access$000(Ljava/util/LinkedHashMap;)Z
    {
        sp -= 2;
        stack[sp].i = func_java_util_LinkedHashMap_access_00024000__Ljava_util_LinkedHashMap_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L328638398;
    ; 
    //  line no 122 , L1789550256 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/LinkedHashMap modCount I
    stack[sp - 1].i = ((struct java_util_LinkedHashMap*)rstack[sp - 1].obj)->modCount_9;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/LinkedHashMap modCount I
    sp -= 2;
    ((struct java_util_LinkedHashMap*)rstack[sp + 0].obj)->modCount_9 = stack[sp + 1].i;
    ; 
    //  line no 123 , L3447021 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/LinkedHashMap$Entry.remove()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_LinkedHashMap_00024Entry_remove___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 124 , L440434003 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic java/util/LinkedHashMap.access$100(Ljava/util/LinkedHashMap;)Ljava/util/LinkedHashMap$Entry;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_LinkedHashMap_access_00024100__Ljava_util_LinkedHashMap_2_Ljava_util_LinkedHashMap_00024Entry_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/util/LinkedHashMap$Entry.addBefore(Ljava/util/LinkedHashMap$Entry;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_LinkedHashMap_00024Entry_addBefore__Ljava_util_LinkedHashMap_00024Entry_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L328638398:
    //  line no 126 , L328638398 , bytecode index = 
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

void bridge_java_util_LinkedHashMap_00024Entry_recordAccess__Ljava_util_HashMap_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_LinkedHashMap_00024Entry_recordAccess__Ljava_util_HashMap_2_V(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
void func_java_util_LinkedHashMap_00024Entry_recordRemoval__Ljava_util_HashMap_2_V(JThreadRuntime *runtime, struct java_util_HashMap* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 52, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 129 , L99347477 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 129;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/LinkedHashMap$Entry.remove()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_LinkedHashMap_00024Entry_remove___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 130 , L566034357 , bytecode index = 
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

void bridge_java_util_LinkedHashMap_00024Entry_recordRemoval__Ljava_util_HashMap_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_LinkedHashMap_00024Entry_recordRemoval__Ljava_util_HashMap_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 3
void func_java_util_LinkedHashMap_00024Entry_access_00024600__Ljava_util_LinkedHashMap_00024Entry_2Ljava_util_LinkedHashMap_00024Entry_2_V(JThreadRuntime *runtime, struct java_util_LinkedHashMap_00024Entry* p0, struct java_util_LinkedHashMap_00024Entry* p1, struct java_util_LinkedHashMap_00024Entry* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 53, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 96 , L1720435669 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 96;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/util/LinkedHashMap$Entry.addBefore(Ljava/util/LinkedHashMap$Entry;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_LinkedHashMap_00024Entry_addBefore__Ljava_util_LinkedHashMap_00024Entry_2_V(runtime, rstack[sp + 0].obj);
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

void bridge_java_util_LinkedHashMap_00024Entry_access_00024600__Ljava_util_LinkedHashMap_00024Entry_2Ljava_util_LinkedHashMap_00024Entry_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_LinkedHashMap_00024Entry_access_00024600__Ljava_util_LinkedHashMap_00024Entry_2Ljava_util_LinkedHashMap_00024Entry_2_V(runtime, para[0].obj, para[1].obj, para[2].obj);
}


