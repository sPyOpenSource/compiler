// CLASS: java/security/AccessControlContext extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_security_AccessControlContext_static {};



__refer arr_vmtable_java_security_AccessControlContext_from_java_security_AccessControlContext[] = {
    func_java_security_AccessControlContext_getDomainCombiner___Ljava_security_DomainCombiner_2,  //0
    func_java_security_AccessControlContext_checkPermission__Ljava_security_Permission_2_V,  //1
    func_java_security_AccessControlContext_equals__Ljava_lang_Object_2_Z,  //2
    func_java_security_AccessControlContext_hashCode___I  //3
};
__refer arr_vmtable_java_security_AccessControlContext_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_security_AccessControlContext_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_lang_Object_toString___Ljava_lang_String_2,  //8
    func_java_security_AccessControlContext_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
VMTable vmtable_java_security_AccessControlContext[] = {
    {218, 4, arr_vmtable_java_security_AccessControlContext_from_java_security_AccessControlContext}, //0
    {10, 11, arr_vmtable_java_security_AccessControlContext_from_java_lang_Object}, //1
};



// locals: 7
// stack: 4
// args: 1
void func_java_security_AccessControlContext__init____3Ljava_security_ProtectionDomain_2_V(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 539, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 57 , L252738640 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 57;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 58 , L1360215046 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1360215046
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[5].i = stack[--sp].i;
    ; 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 59 , L1111613684 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    ; 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L100929741:
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1154821602;
    ; 
    //  line no 60 , L157168588 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L945834881:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L507819576;
    ; 
    //  line no 61 , L1939022383 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L1939022383 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/AccessControlContext protectionDomain [Ljava/security/ProtectionDomain;
    rstack[sp - 1].obj = ((struct java_security_AccessControlContext*)rstack[sp - 1].obj)->protectionDomain_0;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1939022383 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L195801026;
    ; 
    //  line no 62 , L833474933 , bytecode index = 
    goto L507819576;
    L195801026:
    //  line no 60 , L195801026 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L945834881;
    L507819576:
    //  line no 63 , L507819576 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L182670350;
    ; 
    //  line no 64 , L1611373863 , bytecode index = 
    goto L914942811;
    L182670350:
    //  line no 66 , L182670350 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    L914942811:
    //  line no 59 , L914942811 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L100929741;
    L1154821602:
    //  line no 69 , L1154821602 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[6].i;
    // ; newarray/multiarray Dimension Array: [Ljava/security/ProtectionDomain; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1361));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/security/AccessControlContext protectionDomain [Ljava/security/ProtectionDomain;
    sp -= 2;
    ((struct java_security_AccessControlContext*)rstack[sp + 0].obj)->protectionDomain_0 = rstack[sp + 1].obj;
    ; 
    //  line no 70 , L1777443462 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L2032326802:
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[6].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1165791284;
    ; 
    //  line no 71 , L878668275 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L1356732524:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1062714541;
    ; 
    //  line no 72 , L512456259 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L512456259 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/AccessControlContext protectionDomain [Ljava/security/ProtectionDomain;
    rstack[sp - 1].obj = ((struct java_security_AccessControlContext*)rstack[sp - 1].obj)->protectionDomain_0;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L512456259 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1364497552;
    ; 
    //  line no 73 , L1911155630 , bytecode index = 
    goto L1062714541;
    L1364497552:
    //  line no 71 , L1364497552 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1356732524;
    L1062714541:
    //  line no 74 , L1062714541 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1943634922;
    ; 
    //  line no 75 , L916835004 , bytecode index = 
    goto L1126185196;
    L1943634922:
    //  line no 77 , L1943634922 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/AccessControlContext protectionDomain [Ljava/security/ProtectionDomain;
    rstack[sp - 1].obj = ((struct java_security_AccessControlContext*)rstack[sp - 1].obj)->protectionDomain_0;
    sp += 0;
    stack[sp++].i = local[3].i;
    // iinc slot 3 value 1
    local[3].i += 1;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1943634922 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // arrstore __refer  ,  L1943634922 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    L1126185196:
    //  line no 70 , L1126185196 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2032326802;
    L1165791284:
    //  line no 79 , L1165791284 , bytecode index = 
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

void bridge_java_security_AccessControlContext__init____3Ljava_security_ProtectionDomain_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_AccessControlContext__init____3Ljava_security_ProtectionDomain_2_V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 2
void func_java_security_AccessControlContext__init___Ljava_security_AccessControlContext_2Ljava_security_DomainCombiner_2_V(JThreadRuntime *runtime, struct java_security_AccessControlContext* p0, struct java_security_DomainCombiner* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 540, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 92 , L1112737073 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 92;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/security/AccessControlContext protectionDomain [Ljava/security/ProtectionDomain;
    rstack[sp - 1].obj = ((struct java_security_AccessControlContext*)rstack[sp - 1].obj)->protectionDomain_0;
    sp += 0;
    // invokespecial java/security/AccessControlContext.<init>([Ljava/security/ProtectionDomain;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_security_AccessControlContext__init____3Ljava_security_ProtectionDomain_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 93 , L1513867245 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/security/AccessControlContext combiner Ljava/security/DomainCombiner;
    sp -= 2;
    ((struct java_security_AccessControlContext*)rstack[sp + 0].obj)->combiner_1 = rstack[sp + 1].obj;
    ; 
    //  line no 94 , L404648734 , bytecode index = 
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

void bridge_java_security_AccessControlContext__init___Ljava_security_AccessControlContext_2Ljava_security_DomainCombiner_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_AccessControlContext__init___Ljava_security_AccessControlContext_2Ljava_security_DomainCombiner_2_V(runtime, ins, para[0].obj);
}


// locals: 1
// stack: 1
// args: 0
struct java_security_DomainCombiner* func_java_security_AccessControlContext_getDomainCombiner___Ljava_security_DomainCombiner_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 103 , L1866768727 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/AccessControlContext combiner Ljava/security/DomainCombiner;
    rstack[sp - 1].obj = ((struct java_security_AccessControlContext*)rstack[sp - 1].obj)->combiner_1;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_security_AccessControlContext_getDomainCombiner___Ljava_security_DomainCombiner_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_AccessControlContext_getDomainCombiner___Ljava_security_DomainCombiner_2(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
void func_java_security_AccessControlContext_checkPermission__Ljava_security_Permission_2_V(JThreadRuntime *runtime, struct java_security_Permission* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 542, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 116 , L2694936 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 116;
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L400064818:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/AccessControlContext protectionDomain [Ljava/security/ProtectionDomain;
    rstack[sp - 1].obj = ((struct java_security_AccessControlContext*)rstack[sp - 1].obj)->protectionDomain_0;
    sp += 0;
    // arraylength  label  L400064818
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1574749319;
    ; 
    //  line no 117 , L384617262 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/AccessControlContext protectionDomain [Ljava/security/ProtectionDomain;
    rstack[sp - 1].obj = ((struct java_security_AccessControlContext*)rstack[sp - 1].obj)->protectionDomain_0;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L384617262 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/security/ProtectionDomain.implies(Ljava/security/Permission;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_security_Permission*) = find_method(__ins->vm_table, 216, 2);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1593165620;
    ; 
    //  line no 118 , L225909961 , bytecode index = 
    method_exit(runtime);
    return;
    L1593165620:
    //  line no 116 , L1593165620 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L400064818;
    L1574749319:
    //  line no 120 , L1574749319 , bytecode index = 
    // new java/security/AccessControlException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 217);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1366);
    // invokespecial java/security/AccessControlException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_security_AccessControlException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1574749319 in labeltable is :L1574749319
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 120;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_security_AccessControlContext_checkPermission__Ljava_security_Permission_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_AccessControlContext_checkPermission__Ljava_security_Permission_2_V(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
s8 func_java_security_AccessControlContext_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 543, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 135 , L1181815135 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 135;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/security/AccessControlContext
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 1359);
    if(stack[--sp].i  == 0) goto L919446210;
    ; 
    //  line no 136 , L57241990 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast java/security/AccessControlContext
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1359);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 138 , L360936478 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield java/security/AccessControlContext protectionDomain [Ljava/security/ProtectionDomain;
    rstack[sp - 1].obj = ((struct java_security_AccessControlContext*)rstack[sp - 1].obj)->protectionDomain_0;
    sp += 0;
    // arraylength  label  L360936478
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/AccessControlContext protectionDomain [Ljava/security/ProtectionDomain;
    rstack[sp - 1].obj = ((struct java_security_AccessControlContext*)rstack[sp - 1].obj)->protectionDomain_0;
    sp += 0;
    // arraylength  label  L360936478
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1530295320;
    ; 
    //  line no 139 , L3540494 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1530295320:
    //  line no 141 , L1530295320 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L1209770703:
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/AccessControlContext protectionDomain [Ljava/security/ProtectionDomain;
    rstack[sp - 1].obj = ((struct java_security_AccessControlContext*)rstack[sp - 1].obj)->protectionDomain_0;
    sp += 0;
    // arraylength  label  L1209770703
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1186339926;
    ; 
    //  line no 142 , L776484396 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield java/security/AccessControlContext protectionDomain [Ljava/security/ProtectionDomain;
    rstack[sp - 1].obj = ((struct java_security_AccessControlContext*)rstack[sp - 1].obj)->protectionDomain_0;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L776484396 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/AccessControlContext protectionDomain [Ljava/security/ProtectionDomain;
    rstack[sp - 1].obj = ((struct java_security_AccessControlContext*)rstack[sp - 1].obj)->protectionDomain_0;
    sp += 0;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L776484396 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(rstack[sp + 0].obj  == rstack[sp + 1].obj) goto L519979933;
    ; 
    //  line no 143 , L199657303 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L519979933:
    //  line no 141 , L519979933 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1209770703;
    L1186339926:
    //  line no 144 , L1186339926 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L919446210:
    //  line no 146 , L919446210 , bytecode index = 
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

void bridge_java_security_AccessControlContext_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_security_AccessControlContext_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 3
// stack: 3
// args: 0
s32 func_java_security_AccessControlContext_hashCode___I(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 544, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 156 , L315805187 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 156;
    // iconst_0
    stack[sp++].i = 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 157 , L2119992687 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L1094674892:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/AccessControlContext protectionDomain [Ljava/security/ProtectionDomain;
    rstack[sp - 1].obj = ((struct java_security_AccessControlContext*)rstack[sp - 1].obj)->protectionDomain_0;
    sp += 0;
    // arraylength  label  L1094674892
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L525575644;
    ; 
    //  line no 158 , L460702435 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/AccessControlContext protectionDomain [Ljava/security/ProtectionDomain;
    rstack[sp - 1].obj = ((struct java_security_AccessControlContext*)rstack[sp - 1].obj)->protectionDomain_0;
    sp += 0;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L460702435 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
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
    stack[sp - 2].i = stack[sp - 2].i ^ stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 157 , L26757919 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1094674892;
    L525575644:
    //  line no 160 , L525575644 , bytecode index = 
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

void bridge_java_security_AccessControlContext_hashCode___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_security_AccessControlContext_hashCode___I(runtime, ins);
}


