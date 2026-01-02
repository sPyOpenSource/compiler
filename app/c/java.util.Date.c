// CLASS: java/util/Date extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_Date_static {};



__refer arr_vmtable_java_util_Date_from_java_util_Date[] = {
    func_java_util_Date_getTime___J,  //0
    func_java_util_Date_setTime__J_V,  //1
    func_java_util_Date_equals__Ljava_lang_Object_2_Z,  //2
    func_java_util_Date_hashCode___I,  //3
    func_java_util_Date_toString___Ljava_lang_String_2  //4
};
__refer arr_vmtable_java_util_Date_from_java_lang_Object[] = {
    func_java_util_Date_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_util_Date_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_util_Date_hashCode___I  //9
};
VMTable vmtable_java_util_Date[] = {
    {217, 5, arr_vmtable_java_util_Date_from_java_util_Date}, //0
    {5, 10, arr_vmtable_java_util_Date_from_java_lang_Object}, //1
};



// locals: 1
// stack: 3
// args: 0
void func_java_util_Date__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1216, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 12 , L703555670 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 12;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/lang/System.currentTimeMillis()J
    {
        sp -= 1;
        stack[sp].j = func_java_lang_System_currentTimeMillis___J(runtime, rstack[sp + 0].obj);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/util/Date.<init>(J)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_Date__init___J_V(runtime, stack[sp + 0].j);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 13 , L179808568 , bytecode index = 
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

void bridge_java_util_Date__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Date__init____V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
void func_java_util_Date__init___J_V(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1217, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    ; 
    //  line no 16 , L73698537 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 16;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 17 , L1453062635 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/Calendar.getInstance()Ljava/util/Calendar;
    {
        sp -= 1;
        jthread_lock(runtime, (JObject *)g_classes[216].clazz);
        rstack[sp].obj = func_java_util_Calendar_getInstance___Ljava_util_Calendar_2(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, (JObject *)g_classes[216].clazz);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/util/Date calendar Ljava/util/Calendar;
    sp -= 2;
    ((struct java_util_Date*)rstack[sp + 0].obj)->calendar_0 = rstack[sp + 1].obj;
    ; 
    //  line no 18 , L1632789609 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Date calendar Ljava/util/Calendar;
    rstack[sp - 1].obj = ((struct java_util_Date*)rstack[sp - 1].obj)->calendar_0;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L659059448;
    ; 
    //  line no 19 , L124494140 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Date calendar Ljava/util/Calendar;
    rstack[sp - 1].obj = ((struct java_util_Date*)rstack[sp - 1].obj)->calendar_0;
    sp += 0;
    stack[sp].j = local[1].j;
    sp += 2;
    // invokevirtual java/util/Calendar.setTimeInMillis(J)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s64) = find_method(__ins->vm_table, 216, 3);
        __func_p(runtime, stack[sp + 0].j);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L659059448:
    //  line no 21 , L659059448 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].j = local[1].j;
    sp += 2;
    // putfield java/util/Date fastTime J
    sp -= 3;
    ((struct java_util_Date*)rstack[sp + 0].obj)->fastTime_1 = stack[sp + 1].j;
    ; 
    //  line no 22 , L246826139 , bytecode index = 
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

void bridge_java_util_Date__init___J_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Date__init___J_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s64 func_java_util_Date_getTime___J(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1218, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 26 , L403598020 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 26;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Date calendar Ljava/util/Calendar;
    rstack[sp - 1].obj = ((struct java_util_Date*)rstack[sp - 1].obj)->calendar_0;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1119242936;
    ; 
    //  line no 27 , L2123914473 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Date calendar Ljava/util/Calendar;
    rstack[sp - 1].obj = ((struct java_util_Date*)rstack[sp - 1].obj)->calendar_0;
    sp += 0;
    // invokevirtual java/util/Calendar.getTimeInMillis()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 216, 2);
        stack[sp].j = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 2].j;
    L1119242936:
    //  line no 29 , L1119242936 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Date fastTime J
    stack[sp - 1].j = ((struct java_util_Date*)rstack[sp - 1].obj)->fastTime_1;
    sp += 1;
    method_exit(runtime);
    return stack[sp - 2].j;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_util_Date_getTime___J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_util_Date_getTime___J(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
void func_java_util_Date_setTime__J_V(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1219, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    ; 
    //  line no 35 , L1091234211 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 35;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Date calendar Ljava/util/Calendar;
    rstack[sp - 1].obj = ((struct java_util_Date*)rstack[sp - 1].obj)->calendar_0;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L832145584;
    ; 
    //  line no 36 , L224060798 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Date calendar Ljava/util/Calendar;
    rstack[sp - 1].obj = ((struct java_util_Date*)rstack[sp - 1].obj)->calendar_0;
    sp += 0;
    stack[sp].j = local[1].j;
    sp += 2;
    // invokevirtual java/util/Calendar.setTimeInMillis(J)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s64) = find_method(__ins->vm_table, 216, 3);
        __func_p(runtime, stack[sp + 0].j);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L832145584:
    //  line no 38 , L832145584 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].j = local[1].j;
    sp += 2;
    // putfield java/util/Date fastTime J
    sp -= 3;
    ((struct java_util_Date*)rstack[sp + 0].obj)->fastTime_1 = stack[sp + 1].j;
    ; 
    //  line no 39 , L1752535057 , bytecode index = 
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

void bridge_java_util_Date_setTime__J_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Date_setTime__J_V(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
s8 func_java_util_Date_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1220, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 43 , L50720817 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 43;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L1496220730;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/util/Date
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 2241);
    if(stack[--sp].i  == 0) goto L1496220730;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/Date.getTime()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 217, 0);
        stack[sp].j = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast java/util/Date
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 2241);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/Date.getTime()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 217, 0);
        stack[sp].j = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L1496220730;
    // iconst_1
    stack[sp++].i = 1;
    goto L488600086;
    L1496220730:
    // iconst_0
    stack[sp++].i = 0;
    L488600086:
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

void bridge_java_util_Date_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Date_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 3
// stack: 4
// args: 0
s32 func_java_util_Date_hashCode___I(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1221, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 48 , L1846982837 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 48;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/Date.getTime()J
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s64 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 217, 0);
        stack[sp].j = __func_p(runtime);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    local[1].j = stack[sp].j;
    ; 
    //  line no 49 , L1135935001 , bytecode index = 
    stack[sp].j = local[1].j;
    sp += 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    stack[sp].j = local[1].j;
    sp += 2;
    //  bipush 32
    stack[sp++].i = 32;
    stack[sp - 3].j = stack[sp - 3].j >> stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i ^ stack[sp - 1].i; 
    --sp;
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

void bridge_java_util_Date_hashCode___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Date_hashCode___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_java_util_Date_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1222, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 54 , L355885103 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 54;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Date calendar Ljava/util/Calendar;
    rstack[sp - 1].obj = ((struct java_util_Date*)rstack[sp - 1].obj)->calendar_0;
    sp += 0;
    // invokestatic java/util/CalendarImpl.toString(Ljava/util/Calendar;)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_util_CalendarImpl_toString__Ljava_util_Calendar_2_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_java_util_Date_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Date_toString___Ljava_lang_String_2(runtime, ins);
}


