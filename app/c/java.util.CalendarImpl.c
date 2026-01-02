// CLASS: java/util/CalendarImpl extends java/util/Calendar
#include "metadata.h"


// generation
// globals
//struct java_util_CalendarImpl_static {s32 BC_39; s32 AD_40; s32 JAN_11_11_1JULIAN_1DAY_41; s32 EPOCH_1JULIAN_1DAY_42; JArray * NUM_1DAYS_43; JArray * LEAP_1NUM_1DAYS_44; s32 ONE_1SECOND_45; s32 ONE_1MINUTE_46; s32 ONE_1HOUR_47; s64 ONE_1DAY_48; s64 ONE_1WEEK_49; s64 gregorianCutover_50; s32 gregorianCutoverYear_51; JArray * months_52; JArray * days_53;  };
struct java_util_CalendarImpl_static static_var_java_util_CalendarImpl = {0, 0, 0, 0, NULL, NULL, 0, 0, 0, 0, 0, 0, 0, NULL, NULL};


__refer arr_vmtable_java_util_CalendarImpl_from_java_util_CalendarImpl[] = {
    func_java_util_CalendarImpl_computeFields___V,  //0
    func_java_util_CalendarImpl_computeTime___V  //1
};
__refer arr_vmtable_java_util_CalendarImpl_from_java_util_Calendar[] = {
    func_java_util_Calendar_getTime___Ljava_util_Date_2,  //0
    func_java_util_Calendar_setTime__Ljava_util_Date_2_V,  //1
    func_java_util_Calendar_getTimeInMillis___J,  //2
    func_java_util_Calendar_setTimeInMillis__J_V,  //3
    func_java_util_Calendar_get__I_I,  //4
    func_java_util_Calendar_set__II_V,  //5
    func_java_util_Calendar_equals__Ljava_lang_Object_2_Z,  //6
    func_java_util_Calendar_before__Ljava_lang_Object_2_Z,  //7
    func_java_util_Calendar_after__Ljava_lang_Object_2_Z,  //8
    func_java_util_Calendar_setTimeZone__Ljava_util_TimeZone_2_V,  //9
    func_java_util_Calendar_getTimeZone___Ljava_util_TimeZone_2,  //10
    func_java_util_CalendarImpl_computeFields___V,  //11
    func_java_util_CalendarImpl_computeTime___V  //12
};
__refer arr_vmtable_java_util_CalendarImpl_from_java_lang_Object[] = {
    func_java_lang_Object_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_util_Calendar_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_lang_Object_hashCode___I  //9
};
VMTable vmtable_java_util_CalendarImpl[] = {
    {413, 2, arr_vmtable_java_util_CalendarImpl_from_java_util_CalendarImpl}, //0
    {216, 13, arr_vmtable_java_util_CalendarImpl_from_java_util_Calendar}, //1
    {5, 10, arr_vmtable_java_util_CalendarImpl_from_java_lang_Object}, //2
};



// locals: 1
// stack: 1
// args: 0
void func_java_util_CalendarImpl__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3272, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 38 , L104912388 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 38;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/Calendar.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_Calendar__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 39 , L1657521272 , bytecode index = 
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

void bridge_java_util_CalendarImpl__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_CalendarImpl__init____V(runtime, ins);
}


// locals: 10
// stack: 7
// args: 0
void func_java_util_CalendarImpl_computeFields___V(JThreadRuntime *runtime){
    
    StackItem local[10] = {0};
    RStackItem rlocal[10] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3273, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 43 , L1361755941 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 43;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/CalendarImpl.getTimeZone()Ljava/util/TimeZone;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_TimeZone* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 216, 10);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/TimeZone.getRawOffset()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 13, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 44 , L1364898802 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl time J
    stack[sp - 1].j = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->time_35;
    sp += 1;
    stack[sp++].i = local[1].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    sp -= 2;
    local[2].j = stack[sp].j;
    ; 
    //  line no 47 , L1829651877 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl time J
    stack[sp - 1].j = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->time_35;
    sp += 1;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L2121744549;
    stack[sp].j = local[2].j;
    sp += 2;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L2121744549;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  <= 0) goto L2121744549;
    ; 
    //  line no 48 , L2057313241 , bytecode index = 
    //  ldc 
    stack[sp].j = 0x7fffffffffffffffL;
    sp += 2;
    sp -= 2;
    local[2].j = stack[sp].j;
    goto L2120344156;
    L2121744549:
    //  line no 49 , L2121744549 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl time J
    stack[sp - 1].j = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->time_35;
    sp += 1;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L2120344156;
    stack[sp].j = local[2].j;
    sp += 2;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L2120344156;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  >= 0) goto L2120344156;
    ; 
    //  line no 50 , L1633530712 , bytecode index = 
    //  ldc 
    stack[sp].j = 0x8000000000000000L;
    sp += 2;
    sp -= 2;
    local[2].j = stack[sp].j;
    L2120344156:
    //  line no 54 , L2120344156 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].j = local[2].j;
    sp += 2;
    // invokespecial java/util/CalendarImpl.timeToFields(J)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_CalendarImpl_timeToFields__J_V(runtime, stack[sp + 0].j);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 56 , L627815870 , bytecode index = 
    stack[sp].j = local[2].j;
    sp += 2;
    //  ldc 
    stack[sp].j = 0x5265c00L;
    sp += 2;
    if (!stack[sp - 2].j) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 4].j = stack[sp - 4].j / stack[sp - 2].j; 
    sp -= 2;
    sp -= 2;
    local[4].j = stack[sp].j;
    ; 
    //  line no 57 , L1609501721 , bytecode index = 
    stack[sp].j = local[2].j;
    sp += 2;
    stack[sp].j = local[4].j;
    sp += 2;
    //  ldc 
    stack[sp].j = 0x5265c00L;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j * stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 59 , L778925754 , bytecode index = 
    stack[sp++].i = local[6].i;
    if(stack[--sp].i  >= 0) goto L581359452;
    stack[sp++].i = local[6].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    //  ldc 
    stack[sp].j = 0x5265c00L;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    local[6].i = stack[--sp].i;
    L581359452:
    //  line no 62 , L581359452 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/CalendarImpl.getTimeZone()Ljava/util/TimeZone;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_TimeZone* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 216, 10);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    // arrload s32  ,  L581359452 bc index = 
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
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    // arrload s32  ,  L581359452 bc index = 
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
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    // iconst_5
    stack[sp++].i = 5;
    // arrload s32  ,  L581359452 bc index = 
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
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 7
    stack[sp++].i = 7;
    // arrload s32  ,  L581359452 bc index = 
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
    stack[sp++].i = local[6].i;
    // invokevirtual java/util/TimeZone.getOffset(IIIIII)I
    {
        sp -= 6;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32,s32,s32) = find_method(__ins->vm_table, 13, 0);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 70 , L1519927539 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[7].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 73 , L2100297853 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    //  ldc 
    stack[sp].j = 0x5265c00L;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  < 0) goto L942502343;
    ; 
    //  line no 74 , L749030825 , bytecode index = 
    stack[sp].j = local[2].j;
    sp += 2;
    stack[sp++].i = local[7].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    sp -= 2;
    local[8].j = stack[sp].j;
    ; 
    //  line no 75 , L883035926 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    //  ldc 
    stack[sp].j = 0x5265c00L;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 77 , L1231864343 , bytecode index = 
    stack[sp].j = local[2].j;
    sp += 2;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L438051252;
    stack[sp].j = local[8].j;
    sp += 2;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L438051252;
    stack[sp++].i = local[7].i;
    if(stack[--sp].i  <= 0) goto L438051252;
    ; 
    //  line no 78 , L483589979 , bytecode index = 
    //  ldc 
    stack[sp].j = 0x7fffffffffffffffL;
    sp += 2;
    sp -= 2;
    local[8].j = stack[sp].j;
    goto L950831464;
    L438051252:
    //  line no 79 , L438051252 , bytecode index = 
    stack[sp].j = local[2].j;
    sp += 2;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L950831464;
    stack[sp].j = local[8].j;
    sp += 2;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L950831464;
    stack[sp++].i = local[7].i;
    if(stack[--sp].i  >= 0) goto L950831464;
    ; 
    //  line no 80 , L402622480 , bytecode index = 
    //  ldc 
    stack[sp].j = 0x8000000000000000L;
    sp += 2;
    sp -= 2;
    local[8].j = stack[sp].j;
    L950831464:
    //  line no 82 , L950831464 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].j = local[8].j;
    sp += 2;
    // invokespecial java/util/CalendarImpl.timeToFields(J)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_CalendarImpl_timeToFields__J_V(runtime, stack[sp + 0].j);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L942502343:
    //  line no 86 , L942502343 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 14
    stack[sp++].i = 14;
    stack[sp++].i = local[6].i;
    //  sipush 1000
    stack[sp++].i = 1000;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    // arrstore s32  ,  L942502343 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 87 , L1821711066 , bytecode index = 
    stack[sp++].i = local[6].i;
    //  sipush 1000
    stack[sp++].i = 1000;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 89 , L1739986996 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 13
    stack[sp++].i = 13;
    stack[sp++].i = local[6].i;
    //  bipush 60
    stack[sp++].i = 60;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    // arrstore s32  ,  L1739986996 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 90 , L990722659 , bytecode index = 
    stack[sp++].i = local[6].i;
    //  bipush 60
    stack[sp++].i = 60;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 92 , L1348045338 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 12
    stack[sp++].i = 12;
    stack[sp++].i = local[6].i;
    //  bipush 60
    stack[sp++].i = 60;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    // arrstore s32  ,  L1348045338 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 93 , L350099713 , bytecode index = 
    stack[sp++].i = local[6].i;
    //  bipush 60
    stack[sp++].i = 60;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 95 , L1132385302 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 11
    stack[sp++].i = 11;
    stack[sp++].i = local[6].i;
    // arrstore s32  ,  L1132385302 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 96 , L301084728 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 9
    stack[sp++].i = 9;
    stack[sp++].i = local[6].i;
    //  bipush 12
    stack[sp++].i = 12;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    // arrstore s32  ,  L301084728 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 97 , L233271622 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 10
    stack[sp++].i = 10;
    stack[sp++].i = local[6].i;
    //  bipush 12
    stack[sp++].i = 12;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    // arrstore s32  ,  L233271622 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 98 , L1763010538 , bytecode index = 
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

void bridge_java_util_CalendarImpl_computeFields___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_CalendarImpl_computeFields___V(runtime, ins);
}


// locals: 14
// stack: 6
// args: 1
void func_java_util_CalendarImpl_timeToFields__J_V(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[14] = {0};
    RStackItem rlocal[14] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3274, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    ; 
    //  line no 106 , L1552767213 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 106;
    stack[sp].j = local[1].j;
    sp += 2;
    //  ldc 
    stack[sp].j = 0xfffff4e2f964ac00L;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  < 0) goto L1784053627;
    ; 
    //  line no 109 , L683573228 , bytecode index = 
    stack[sp].j = local[1].j;
    sp += 2;
    ; 
    //  line no 110 , L40829249 , bytecode index = 
    // invokestatic java/util/CalendarImpl.millisToJulianDay(J)J
    {
        sp -= 3;
        stack[sp].j = func_java_util_CalendarImpl_millisToJulianDay__J_J(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    stack[sp].j = 0x1a4452L;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    sp -= 2;
    local[7].j = stack[sp].j;
    ; 
    //  line no 113 , L873688017 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    // ; newarray/multiarray Dimension Array: [I 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1044));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[9].obj = rstack[--sp].obj;
    ; 
    //  line no 116 , L1843885967 , bytecode index = 
    stack[sp].j = local[7].j;
    sp += 2;
    //  ldc 
    stack[sp++].i = 0x23ab1;
    rstack[sp++].obj = rlocal[9].obj;
    // invokestatic java/util/CalendarImpl.floorDivide(JI[I)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_CalendarImpl_floorDivide__JI_3I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].j, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[10].i = stack[--sp].i;
    ; 
    //  line no 119 , L914175168 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    // iconst_0
    stack[sp++].i = 0;
    // arrload s32  ,  L914175168 bc index = 
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
    //  ldc 
    stack[sp++].i = 0x8eac;
    rstack[sp++].obj = rlocal[9].obj;
    // invokestatic java/util/CalendarImpl.floorDivide(II[I)I
    {
        sp -= 4;
        stack[sp].i = func_java_util_CalendarImpl_floorDivide__II_3I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[11].i = stack[--sp].i;
    ; 
    //  line no 122 , L1289903687 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    // iconst_0
    stack[sp++].i = 0;
    // arrload s32  ,  L1289903687 bc index = 
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
    //  sipush 1461
    stack[sp++].i = 1461;
    rstack[sp++].obj = rlocal[9].obj;
    // invokestatic java/util/CalendarImpl.floorDivide(II[I)I
    {
        sp -= 4;
        stack[sp].i = func_java_util_CalendarImpl_floorDivide__II_3I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[12].i = stack[--sp].i;
    ; 
    //  line no 124 , L1669392873 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    // iconst_0
    stack[sp++].i = 0;
    // arrload s32  ,  L1669392873 bc index = 
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
    //  sipush 365
    stack[sp++].i = 365;
    rstack[sp++].obj = rlocal[9].obj;
    // invokestatic java/util/CalendarImpl.floorDivide(II[I)I
    {
        sp -= 4;
        stack[sp].i = func_java_util_CalendarImpl_floorDivide__II_3I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[13].i = stack[--sp].i;
    ; 
    //  line no 125 , L890085657 , bytecode index = 
    //  sipush 400
    stack[sp++].i = 400;
    stack[sp++].i = local[10].i;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    //  bipush 100
    stack[sp++].i = 100;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_4
    stack[sp++].i = 4;
    stack[sp++].i = local[12].i;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[13].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 128 , L1778993228 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    // iconst_0
    stack[sp++].i = 0;
    // arrload s32  ,  L1778993228 bc index = 
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
    local[3].i = stack[--sp].i;
    ; 
    //  line no 131 , L885465900 , bytecode index = 
    stack[sp++].i = local[11].i;
    // iconst_4
    stack[sp++].i = 4;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1357663228;
    stack[sp++].i = local[13].i;
    // iconst_4
    stack[sp++].i = 4;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L145833361;
    L1357663228:
    //  line no 132 , L1357663228 , bytecode index = 
    //  sipush 365
    stack[sp++].i = 365;
    local[3].i = stack[--sp].i;
    goto L677007331;
    L145833361:
    //  line no 134 , L145833361 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    L677007331:
    //  line no 138 , L677007331 , bytecode index = 
    stack[sp++].i = local[5].i;
    // iconst_3
    stack[sp++].i = 3;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  != 0) goto L629790599;
    stack[sp++].i = local[5].i;
    //  bipush 100
    stack[sp++].i = 100;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  != 0) goto L394840929;
    stack[sp++].i = local[5].i;
    //  sipush 400
    stack[sp++].i = 400;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  != 0) goto L629790599;
    L394840929:
    // iconst_1
    stack[sp++].i = 1;
    goto L383005108;
    L629790599:
    // iconst_0
    stack[sp++].i = 0;
    L383005108:
    local[6].i = stack[--sp].i;
    ; 
    //  line no 142 , L1812681178 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 7
    stack[sp++].i = 7;
    stack[sp].j = local[7].j;
    sp += 2;
    //  lconst 1
    stack[sp].j = 1;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    //  ldc 
    stack[sp].j = 0x7L;
    sp += 2;
    if (!stack[sp - 2].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 4].j = stack[sp - 4].j % stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    // arrstore s32  ,  L1812681178 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 143 , L123045427 , bytecode index = 
    goto L1448580731;
    L1784053627:
    //  line no 146 , L1784053627 , bytecode index = 
    stack[sp].j = local[1].j;
    sp += 2;
    ; 
    //  line no 147 , L1631143060 , bytecode index = 
    // invokestatic java/util/CalendarImpl.millisToJulianDay(J)J
    {
        sp -= 3;
        stack[sp].j = func_java_util_CalendarImpl_millisToJulianDay__J_J(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    stack[sp].j = 0x1a4450L;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    sp -= 2;
    local[7].j = stack[sp].j;
    ; 
    //  line no 149 , L1468685544 , bytecode index = 
    //  ldc 
    stack[sp].j = 0x4L;
    sp += 2;
    stack[sp].j = local[7].j;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j * stack[sp - 2].j; 
    sp -= 2;
    //  ldc 
    stack[sp].j = 0x5b8L;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    //  ldc 
    stack[sp].j = 0x5b5L;
    sp += 2;
    // invokestatic java/util/CalendarImpl.floorDivide(JJ)J
    {
        sp -= 5;
        stack[sp].j = func_java_util_CalendarImpl_floorDivide__JJ_J(runtime, rstack[sp + 0].obj, stack[sp + 1].j, stack[sp + 3].j);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 152 , L2084912180 , bytecode index = 
    //  sipush 365
    stack[sp++].i = 365;
    stack[sp++].i = local[5].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_4
    stack[sp++].i = 4;
    // invokestatic java/util/CalendarImpl.floorDivide(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_CalendarImpl_floorDivide__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    sp -= 2;
    local[9].j = stack[sp].j;
    ; 
    //  line no 153 , L382441865 , bytecode index = 
    stack[sp].j = local[7].j;
    sp += 2;
    stack[sp].j = local[9].j;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 156 , L1040015904 , bytecode index = 
    stack[sp++].i = local[5].i;
    // iconst_3
    stack[sp++].i = 3;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  != 0) goto L940905579;
    // iconst_1
    stack[sp++].i = 1;
    goto L1843674049;
    L940905579:
    // iconst_0
    stack[sp++].i = 0;
    L1843674049:
    local[6].i = stack[--sp].i;
    ; 
    //  line no 159 , L665448485 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 7
    stack[sp++].i = 7;
    stack[sp].j = local[7].j;
    sp += 2;
    //  lconst 1
    stack[sp].j = 1;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    //  ldc 
    stack[sp].j = 0x7L;
    sp += 2;
    if (!stack[sp - 2].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 4].j = stack[sp - 4].j % stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    // arrstore s32  ,  L665448485 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    L1448580731:
    //  line no 163 , L1448580731 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 166 , L1905486482 , bytecode index = 
    stack[sp++].i = local[6].i;
    if(stack[--sp].i  == 0) goto L1630903943;
    //  bipush 60
    stack[sp++].i = 60;
    goto L767794003;
    L1630903943:
    //  bipush 59
    stack[sp++].i = 59;
    L767794003:
    local[8].i = stack[--sp].i;
    ; 
    //  line no 168 , L1157856790 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[8].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L791563230;
    stack[sp++].i = local[6].i;
    if(stack[--sp].i  == 0) goto L1646410010;
    // iconst_1
    stack[sp++].i = 1;
    goto L1401564942;
    L1646410010:
    // iconst_2
    stack[sp++].i = 2;
    L1401564942:
    local[7].i = stack[--sp].i;
    L791563230:
    //  line no 171 , L791563230 , bytecode index = 
    //  bipush 12
    stack[sp++].i = 12;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[7].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    //  bipush 6
    stack[sp++].i = 6;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  sipush 367
    stack[sp++].i = 367;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[9].i = stack[--sp].i;
    ; 
    //  line no 174 , L220661927 , bytecode index = 
    stack[sp++].i = local[3].i;
    ; 
    //  line no 175 , L1351275110 , bytecode index = 
    stack[sp++].i = local[6].i;
    if(stack[--sp].i  == 0) goto L588503940;
    // getstatic java/util/CalendarImpl LEAP_NUM_DAYS [I
    rstack[sp].obj =static_var_java_util_CalendarImpl.LEAP_1NUM_1DAYS_44;
    sp += 1;
    stack[sp++].i = local[9].i;
    // arrload s32  ,  L1351275110 bc index = 
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
    goto L560165559;
    L588503940:
    // getstatic java/util/CalendarImpl NUM_DAYS [I
    rstack[sp].obj =static_var_java_util_CalendarImpl.NUM_1DAYS_43;
    sp += 1;
    stack[sp++].i = local[9].i;
    // arrload s32  ,  L588503940 bc index = 
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
    L560165559:
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[10].i = stack[--sp].i;
    ; 
    //  line no 178 , L347354124 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 7
    stack[sp++].i = 7;
    // ; dup2
    stack[sp + 1].j = stack[sp - 1].j; 
    stack[sp + 0].j = stack[sp - 2].j; 
    rstack[sp + 1].obj = rstack[sp - 1].obj; 
    rstack[sp + 0].obj = rstack[sp - 2].obj; 
    sp += 2;
    // arrload s32  ,  L347354124 bc index = 
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
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 7
    stack[sp++].i = 7;
    // arrload s32  ,  L347354124 bc index = 
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
    if(stack[--sp].i  >= 0) goto L313249054;
    //  bipush 8
    stack[sp++].i = 8;
    goto L802814772;
    L313249054:
    // iconst_1
    stack[sp++].i = 1;
    L802814772:
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrstore s32  ,  L802814772 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 180 , L362140338 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp++].i = local[5].i;
    // arrstore s32  ,  L362140338 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 183 , L540315736 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    // arrload s32  ,  L540315736 bc index = 
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
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1824225917;
    ; 
    //  line no 184 , L215694469 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    // arrload s32  ,  L215694469 bc index = 
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
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrstore s32  ,  L215694469 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    L1824225917:
    //  line no 188 , L1824225917 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp++].i = local[9].i;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrstore s32  ,  L1824225917 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 189 , L929066990 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    // iconst_5
    stack[sp++].i = 5;
    stack[sp++].i = local[10].i;
    // arrstore s32  ,  L929066990 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 190 , L869437194 , bytecode index = 
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

void bridge_java_util_CalendarImpl_timeToFields__J_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_CalendarImpl_timeToFields__J_V(runtime, ins);
}


// locals: 12
// stack: 4
// args: 2
struct java_lang_String* func_java_util_CalendarImpl_toString__Ljava_util_Calendar_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_util_CalendarImpl* p0, struct java_util_Calendar* p1){
    
    StackItem local[12] = {0};
    RStackItem rlocal[12] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3275, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 202 , L1374115999 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 202;
    rstack[sp++].obj = rlocal[0].obj;
    if(rstack[--sp].obj  != NULL) goto L1707889234;
    ; 
    //  line no 203 , L1119955774 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 5372);
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1707889234:
    //  line no 206 , L1707889234 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 7
    stack[sp++].i = 7;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 207 , L767535474 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_2
    stack[sp++].i = 2;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 208 , L1190608890 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_5
    stack[sp++].i = 5;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 209 , L1101970356 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 11
    stack[sp++].i = 11;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 210 , L184410212 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 12
    stack[sp++].i = 12;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 211 , L1515793520 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 13
    stack[sp++].i = 13;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[6].i = stack[--sp].i;
    ; 
    //  line no 212 , L623820846 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[7].i = stack[--sp].i;
    ; 
    //  line no 214 , L300526628 , bytecode index = 
    stack[sp++].i = local[7].i;
    // invokestatic java/lang/Integer.toString(I)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Integer_toString__I_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[8].obj = rstack[--sp].obj;
    ; 
    //  line no 216 , L1962049725 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/Calendar.getTimeZone()Ljava/util/TimeZone;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_TimeZone* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 216, 10);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[9].obj = rstack[--sp].obj;
    ; 
    //  line no 217 , L1734023423 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    // invokevirtual java/util/TimeZone.getID()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 13, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[10].obj = rstack[--sp].obj;
    ; 
    //  line no 218 , L875010954 , bytecode index = 
    rstack[sp++].obj = rlocal[10].obj;
    if(rstack[--sp].obj  != NULL) goto L1752402342;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 617);
    rlocal[10].obj = rstack[--sp].obj;
    L1752402342:
    //  line no 221 , L1752402342 , bytecode index = 
    // new java/lang/StringBuffer
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 178);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 25
    stack[sp++].i = 25;
    rstack[sp++].obj = rlocal[10].obj;
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
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[8].obj;
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
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokespecial java/lang/StringBuffer.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuffer__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[11].obj = rstack[--sp].obj;
    ; 
    //  line no 223 , L140778365 , bytecode index = 
    rstack[sp++].obj = rlocal[11].obj;
    // getstatic java/util/CalendarImpl days [Ljava/lang/String;
    rstack[sp].obj =static_var_java_util_CalendarImpl.days_53;
    sp += 1;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L140778365 bc index = 
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
    //  bipush 32
    stack[sp++].i = 32;
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
    //  line no 224 , L935818862 , bytecode index = 
    rstack[sp++].obj = rlocal[11].obj;
    // getstatic java/util/CalendarImpl months [Ljava/lang/String;
    rstack[sp].obj =static_var_java_util_CalendarImpl.months_52;
    sp += 1;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L935818862 bc index = 
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
    //  bipush 32
    stack[sp++].i = 32;
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
    //  line no 225 , L1068781783 , bytecode index = 
    rstack[sp++].obj = rlocal[11].obj;
    stack[sp++].i = local[3].i;
    // invokestatic java/util/CalendarImpl.appendTwoDigits(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
    {
        sp -= 3;
        rstack[sp].obj = func_java_util_CalendarImpl_appendTwoDigits__Ljava_lang_StringBuffer_2I_Ljava_lang_StringBuffer_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 32
    stack[sp++].i = 32;
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
    //  line no 226 , L1266602046 , bytecode index = 
    rstack[sp++].obj = rlocal[11].obj;
    stack[sp++].i = local[4].i;
    // invokestatic java/util/CalendarImpl.appendTwoDigits(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
    {
        sp -= 3;
        rstack[sp].obj = func_java_util_CalendarImpl_appendTwoDigits__Ljava_lang_StringBuffer_2I_Ljava_lang_StringBuffer_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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
    //  line no 227 , L1667859935 , bytecode index = 
    rstack[sp++].obj = rlocal[11].obj;
    stack[sp++].i = local[5].i;
    // invokestatic java/util/CalendarImpl.appendTwoDigits(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
    {
        sp -= 3;
        rstack[sp].obj = func_java_util_CalendarImpl_appendTwoDigits__Ljava_lang_StringBuffer_2I_Ljava_lang_StringBuffer_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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
    //  line no 228 , L1871838170 , bytecode index = 
    rstack[sp++].obj = rlocal[11].obj;
    stack[sp++].i = local[6].i;
    // invokestatic java/util/CalendarImpl.appendTwoDigits(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
    {
        sp -= 3;
        rstack[sp].obj = func_java_util_CalendarImpl_appendTwoDigits__Ljava_lang_StringBuffer_2I_Ljava_lang_StringBuffer_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 32
    stack[sp++].i = 32;
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
    //  line no 229 , L1916681239 , bytecode index = 
    rstack[sp++].obj = rlocal[10].obj;
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
    if(stack[--sp].i  <= 0) goto L1341975886;
    rstack[sp++].obj = rlocal[11].obj;
    rstack[sp++].obj = rlocal[10].obj;
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
    //  bipush 32
    stack[sp++].i = 32;
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
    L1341975886:
    //  line no 230 , L1341975886 , bytecode index = 
    rstack[sp++].obj = rlocal[11].obj;
    stack[sp++].i = local[7].i;
    // invokestatic java/util/CalendarImpl.appendFourDigits(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
    {
        sp -= 3;
        rstack[sp].obj = func_java_util_CalendarImpl_appendFourDigits__Ljava_lang_StringBuffer_2I_Ljava_lang_StringBuffer_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 232 , L1620368915 , bytecode index = 
    rstack[sp++].obj = rlocal[11].obj;
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

void bridge_java_util_CalendarImpl_toString__Ljava_util_Calendar_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_CalendarImpl_toString__Ljava_util_Calendar_2_Ljava_lang_String_2(runtime, para[0].obj, para[1].obj);
}


// locals: 14
// stack: 4
// args: 2
struct java_lang_String* func_java_util_CalendarImpl_toISO8601String__Ljava_util_Calendar_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_util_CalendarImpl* p0, struct java_util_Calendar* p1){
    
    StackItem local[14] = {0};
    RStackItem rlocal[14] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3276, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 239 , L65465460 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 239;
    rstack[sp++].obj = rlocal[0].obj;
    if(rstack[--sp].obj  != NULL) goto L735639515;
    ; 
    //  line no 240 , L1836765429 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 5374);
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L735639515:
    //  line no 243 , L735639515 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[1].i = stack[--sp].i;
    ; 
    //  line no 244 , L816576412 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_2
    stack[sp++].i = 2;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 245 , L77215921 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_5
    stack[sp++].i = 5;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 246 , L1745904086 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 11
    stack[sp++].i = 11;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 247 , L1406593369 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 10
    stack[sp++].i = 10;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 248 , L1018094504 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 12
    stack[sp++].i = 12;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[6].i = stack[--sp].i;
    ; 
    //  line no 249 , L1772358460 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 13
    stack[sp++].i = 13;
    // invokevirtual java/util/Calendar.get(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 216, 4);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[7].i = stack[--sp].i;
    ; 
    //  line no 251 , L38914319 , bytecode index = 
    stack[sp++].i = local[1].i;
    // invokestatic java/lang/Integer.toString(I)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Integer_toString__I_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[8].obj = rstack[--sp].obj;
    ; 
    //  line no 254 , L1713988669 , bytecode index = 
    // new java/lang/StringBuffer
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 178);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 25
    stack[sp++].i = 25;
    rstack[sp++].obj = rlocal[8].obj;
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
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokespecial java/lang/StringBuffer.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuffer__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[9].obj = rstack[--sp].obj;
    ; 
    //  line no 256 , L768702707 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    stack[sp++].i = local[1].i;
    // invokestatic java/util/CalendarImpl.appendFourDigits(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
    {
        sp -= 3;
        rstack[sp].obj = func_java_util_CalendarImpl_appendFourDigits__Ljava_lang_StringBuffer_2I_Ljava_lang_StringBuffer_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 32
    stack[sp++].i = 32;
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
    //  line no 257 , L1684368286 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    stack[sp++].i = local[2].i;
    // invokestatic java/util/CalendarImpl.appendTwoDigits(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
    {
        sp -= 3;
        rstack[sp].obj = func_java_util_CalendarImpl_appendTwoDigits__Ljava_lang_StringBuffer_2I_Ljava_lang_StringBuffer_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 32
    stack[sp++].i = 32;
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
    //  line no 258 , L1752223660 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    stack[sp++].i = local[3].i;
    // invokestatic java/util/CalendarImpl.appendTwoDigits(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
    {
        sp -= 3;
        rstack[sp].obj = func_java_util_CalendarImpl_appendTwoDigits__Ljava_lang_StringBuffer_2I_Ljava_lang_StringBuffer_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 32
    stack[sp++].i = 32;
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
    //  line no 259 , L1163216403 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    stack[sp++].i = local[4].i;
    // invokestatic java/util/CalendarImpl.appendTwoDigits(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
    {
        sp -= 3;
        rstack[sp].obj = func_java_util_CalendarImpl_appendTwoDigits__Ljava_lang_StringBuffer_2I_Ljava_lang_StringBuffer_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 32
    stack[sp++].i = 32;
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
    //  line no 260 , L1675999402 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    stack[sp++].i = local[6].i;
    // invokestatic java/util/CalendarImpl.appendTwoDigits(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
    {
        sp -= 3;
        rstack[sp].obj = func_java_util_CalendarImpl_appendTwoDigits__Ljava_lang_StringBuffer_2I_Ljava_lang_StringBuffer_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 32
    stack[sp++].i = 32;
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
    //  line no 261 , L747833043 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    stack[sp++].i = local[7].i;
    // invokestatic java/util/CalendarImpl.appendTwoDigits(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
    {
        sp -= 3;
        rstack[sp].obj = func_java_util_CalendarImpl_appendTwoDigits__Ljava_lang_StringBuffer_2I_Ljava_lang_StringBuffer_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 32
    stack[sp++].i = 32;
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
    //  line no 264 , L1114681666 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/Calendar.getTimeZone()Ljava/util/TimeZone;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_TimeZone* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 216, 10);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[10].obj = rstack[--sp].obj;
    ; 
    //  line no 265 , L771359425 , bytecode index = 
    rstack[sp++].obj = rlocal[10].obj;
    // invokevirtual java/util/TimeZone.getRawOffset()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 13, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  sipush 1000
    stack[sp++].i = 1000;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    //  bipush 60
    stack[sp++].i = 60;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 267 , L1662312252 , bytecode index = 
    stack[sp++].i = local[11].i;
    if(stack[--sp].i  >= 0) goto L1468393491;
    ; 
    //  line no 268 , L280541440 , bytecode index = 
    stack[sp++].i = local[11].i;
    // invokestatic java/lang/Math.abs(I)I
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Math_abs__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[11].i = stack[--sp].i;
    ; 
    //  line no 269 , L1831423452 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    //  bipush 45
    stack[sp++].i = 45;
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
    goto L671187578;
    L1468393491:
    //  line no 271 , L1468393491 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    //  bipush 43
    stack[sp++].i = 43;
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
    L671187578:
    //  line no 274 , L671187578 , bytecode index = 
    stack[sp++].i = local[11].i;
    //  bipush 60
    stack[sp++].i = 60;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    local[12].i = stack[--sp].i;
    ; 
    //  line no 275 , L1354510873 , bytecode index = 
    stack[sp++].i = local[11].i;
    //  bipush 60
    stack[sp++].i = 60;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    local[13].i = stack[--sp].i;
    ; 
    //  line no 277 , L93974967 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    stack[sp++].i = local[12].i;
    // invokestatic java/util/CalendarImpl.appendTwoDigits(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
    {
        sp -= 3;
        rstack[sp].obj = func_java_util_CalendarImpl_appendTwoDigits__Ljava_lang_StringBuffer_2I_Ljava_lang_StringBuffer_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 278 , L578362229 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    stack[sp++].i = local[13].i;
    // invokestatic java/util/CalendarImpl.appendTwoDigits(Ljava/lang/StringBuffer;I)Ljava/lang/StringBuffer;
    {
        sp -= 3;
        rstack[sp].obj = func_java_util_CalendarImpl_appendTwoDigits__Ljava_lang_StringBuffer_2I_Ljava_lang_StringBuffer_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 280 , L105860882 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
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

void bridge_java_util_CalendarImpl_toISO8601String__Ljava_util_Calendar_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_CalendarImpl_toISO8601String__Ljava_util_Calendar_2_Ljava_lang_String_2(runtime, para[0].obj, para[1].obj);
}


// locals: 2
// stack: 2
// args: 3
struct java_lang_StringBuffer* func_java_util_CalendarImpl_appendFourDigits__Ljava_lang_StringBuffer_2I_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, struct java_util_CalendarImpl* p0, struct java_lang_StringBuffer* p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3277, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 284 , L2097992252 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 284;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  < 0) goto L398777435;
    stack[sp++].i = local[1].i;
    //  sipush 1000
    stack[sp++].i = 1000;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L398777435;
    ; 
    //  line no 285 , L1796154990 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 48
    stack[sp++].i = 48;
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
    //  line no 286 , L1211627902 , bytecode index = 
    stack[sp++].i = local[1].i;
    //  bipush 100
    stack[sp++].i = 100;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1395740534;
    ; 
    //  line no 287 , L1655072591 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 48
    stack[sp++].i = 48;
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
    L1395740534:
    //  line no 289 , L1395740534 , bytecode index = 
    stack[sp++].i = local[1].i;
    //  bipush 10
    stack[sp++].i = 10;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L398777435;
    ; 
    //  line no 290 , L1887965475 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 48
    stack[sp++].i = 48;
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
    L398777435:
    //  line no 293 , L398777435 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
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

void bridge_java_util_CalendarImpl_appendFourDigits__Ljava_lang_StringBuffer_2I_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_CalendarImpl_appendFourDigits__Ljava_lang_StringBuffer_2I_Ljava_lang_StringBuffer_2(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 2
// stack: 2
// args: 3
struct java_lang_StringBuffer* func_java_util_CalendarImpl_appendTwoDigits__Ljava_lang_StringBuffer_2I_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, struct java_util_CalendarImpl* p0, struct java_lang_StringBuffer* p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3278, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 297 , L1586519852 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 297;
    stack[sp++].i = local[1].i;
    //  bipush 10
    stack[sp++].i = 10;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L266196910;
    ; 
    //  line no 298 , L1064095359 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 48
    stack[sp++].i = 48;
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
    L266196910:
    //  line no 300 , L266196910 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
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

void bridge_java_util_CalendarImpl_appendTwoDigits__Ljava_lang_StringBuffer_2I_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_CalendarImpl_appendTwoDigits__Ljava_lang_StringBuffer_2I_Ljava_lang_StringBuffer_2(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 12
// stack: 8
// args: 0
void func_java_util_CalendarImpl_computeTime___V(JThreadRuntime *runtime){
    
    StackItem local[12] = {0};
    RStackItem rlocal[12] = {0};
    StackItem stack[9];
    RStackItem rstack[9];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3279, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 306 , L2073069810 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 306;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/CalendarImpl.correctTime()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_CalendarImpl_correctTime___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 309 , L445726857 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    // arrload s32  ,  L445726857 bc index = 
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
    local[1].i = stack[--sp].i;
    ; 
    //  line no 310 , L1138190994 , bytecode index = 
    stack[sp++].i = local[1].i;
    //  sipush 1582
    stack[sp++].i = 1582;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1244394767;
    // iconst_1
    stack[sp++].i = 1;
    goto L889398176;
    L1244394767:
    // iconst_0
    stack[sp++].i = 0;
    L889398176:
    local[2].i = stack[--sp].i;
    ; 
    //  line no 311 , L621197441 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    // invokespecial java/util/CalendarImpl.calculateJulianDay(ZI)J
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].j = func_java_util_CalendarImpl_calculateJulianDay__ZI_J(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    local[3].j = stack[sp].j;
    ; 
    //  line no 312 , L1568527689 , bytecode index = 
    stack[sp].j = local[3].j;
    sp += 2;
    // invokestatic java/util/CalendarImpl.julianDayToMillis(J)J
    {
        sp -= 3;
        stack[sp].j = func_java_util_CalendarImpl_julianDayToMillis__J_J(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    local[5].j = stack[sp].j;
    ; 
    //  line no 315 , L1215025252 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp].j = local[5].j;
    sp += 2;
    //  ldc 
    stack[sp].j = 0xfffff4e2f964ac00L;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  < 0) goto L1683617002;
    // iconst_1
    stack[sp++].i = 1;
    goto L1946917456;
    L1683617002:
    // iconst_0
    stack[sp++].i = 0;
    L1946917456:
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1198513669;
    stack[sp].j = local[3].j;
    sp += 2;
    //  ldc 
    stack[sp].j = 0xffffffe7253b200cL;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  == 0) goto L1198513669;
    ; 
    //  line no 318 , L1360125564 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  != 0) goto L2059701776;
    // iconst_1
    stack[sp++].i = 1;
    goto L1379222018;
    L2059701776:
    // iconst_0
    stack[sp++].i = 0;
    L1379222018:
    stack[sp++].i = local[1].i;
    // invokespecial java/util/CalendarImpl.calculateJulianDay(ZI)J
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        stack[sp].j = func_java_util_CalendarImpl_calculateJulianDay__ZI_J(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    local[3].j = stack[sp].j;
    ; 
    //  line no 319 , L1796415927 , bytecode index = 
    stack[sp].j = local[3].j;
    sp += 2;
    // invokestatic java/util/CalendarImpl.julianDayToMillis(J)J
    {
        sp -= 3;
        stack[sp].j = func_java_util_CalendarImpl_julianDayToMillis__J_J(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    local[5].j = stack[sp].j;
    L1198513669:
    //  line no 323 , L1198513669 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 326 , L875487383 , bytecode index = 
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 11
    stack[sp++].i = 11;
    // arrload s32  ,  L875487383 bc index = 
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
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 327 , L1791253516 , bytecode index = 
    stack[sp++].i = local[7].i;
    //  bipush 60
    stack[sp++].i = 60;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 330 , L303638020 , bytecode index = 
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 12
    stack[sp++].i = 12;
    // arrload s32  ,  L303638020 bc index = 
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
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 331 , L1618326377 , bytecode index = 
    stack[sp++].i = local[7].i;
    //  bipush 60
    stack[sp++].i = 60;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 334 , L589094312 , bytecode index = 
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 13
    stack[sp++].i = 13;
    // arrload s32  ,  L589094312 bc index = 
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
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 335 , L1802555899 , bytecode index = 
    stack[sp++].i = local[7].i;
    //  sipush 1000
    stack[sp++].i = 1000;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 338 , L805495703 , bytecode index = 
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 14
    stack[sp++].i = 14;
    // arrload s32  ,  L805495703 bc index = 
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
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 341 , L2107760645 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/CalendarImpl.getTimeZone()Ljava/util/TimeZone;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_TimeZone* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 216, 10);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/util/TimeZone.getRawOffset()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 13, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[8].i = stack[--sp].i;
    ; 
    //  line no 344 , L940938116 , bytecode index = 
    stack[sp].j = local[5].j;
    sp += 2;
    stack[sp++].i = local[7].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    sp -= 2;
    local[5].j = stack[sp].j;
    ; 
    //  line no 347 , L1434940020 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    // ; newarray/multiarray Dimension Array: [I 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1044));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[9].obj = rstack[--sp].obj;
    ; 
    //  line no 348 , L1916677384 , bytecode index = 
    stack[sp].j = local[5].j;
    sp += 2;
    //  ldc 
    stack[sp++].i = 0x5265c00;
    rstack[sp++].obj = rlocal[9].obj;
    // invokestatic java/util/CalendarImpl.floorDivide(JI[I)I
    {
        sp -= 5;
        stack[sp].i = func_java_util_CalendarImpl_floorDivide__JI_3I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].j, stack[sp + 3].i, rstack[sp + 4].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 351 , L7162498 , bytecode index = 
    stack[sp].j = local[3].j;
    sp += 2;
    // invokestatic java/util/CalendarImpl.julianDayToDayOfWeek(J)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_CalendarImpl_julianDayToDayOfWeek__J_I(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[10].i = stack[--sp].i;
    ; 
    //  line no 354 , L351297720 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/CalendarImpl.getTimeZone()Ljava/util/TimeZone;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_TimeZone* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 216, 10);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    // arrload s32  ,  L351297720 bc index = 
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
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    // arrload s32  ,  L351297720 bc index = 
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
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    // iconst_5
    stack[sp++].i = 5;
    // arrload s32  ,  L351297720 bc index = 
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
    stack[sp++].i = local[10].i;
    rstack[sp++].obj = rlocal[9].obj;
    // iconst_0
    stack[sp++].i = 0;
    // arrload s32  ,  L351297720 bc index = 
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
    // invokevirtual java/util/TimeZone.getOffset(IIIIII)I
    {
        sp -= 6;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32,s32,s32) = find_method(__ins->vm_table, 13, 0);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 363 , L2047521920 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].j = local[5].j;
    sp += 2;
    stack[sp++].i = local[8].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    stack[sp++].i = local[11].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    // putfield java/util/CalendarImpl time J
    sp -= 3;
    ((struct java_util_CalendarImpl*)rstack[sp + 0].obj)->time_35 = stack[sp + 1].j;
    ; 
    //  line no 364 , L2044690596 , bytecode index = 
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

void bridge_java_util_CalendarImpl_computeTime___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_CalendarImpl_computeTime___V(runtime, ins);
}


// locals: 9
// stack: 5
// args: 2
s64 func_java_util_CalendarImpl_calculateJulianDay__ZI_J(JThreadRuntime *runtime, s8 p0, s32 p1){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3280, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 368 , L82750270 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 368;
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 369 , L728740247 , bytecode index = 
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    sp -= 2;
    local[4].j = stack[sp].j;
    ; 
    //  line no 371 , L783339262 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    // arrload s32  ,  L783339262 bc index = 
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
    // iconst_0
    stack[sp++].i = 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 374 , L1512759723 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  < 0) goto L736888459;
    stack[sp++].i = local[3].i;
    //  bipush 11
    stack[sp++].i = 11;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L2103044456;
    L736888459:
    //  line no 375 , L736888459 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    // ; newarray/multiarray Dimension Array: [I 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1044));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 376 , L1429610243 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    //  bipush 12
    stack[sp++].i = 12;
    rstack[sp++].obj = rlocal[6].obj;
    // invokestatic java/util/CalendarImpl.floorDivide(II[I)I
    {
        sp -= 4;
        stack[sp].i = func_java_util_CalendarImpl_floorDivide__II_3I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 377 , L1478269879 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // iconst_0
    stack[sp++].i = 0;
    // arrload s32  ,  L1478269879 bc index = 
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
    local[3].i = stack[--sp].i;
    L2103044456:
    //  line no 380 , L2103044456 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_4
    stack[sp++].i = 4;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  != 0) goto L328140385;
    // iconst_1
    stack[sp++].i = 1;
    goto L556773329;
    L328140385:
    // iconst_0
    stack[sp++].i = 0;
    L556773329:
    local[6].i = stack[--sp].i;
    ; 
    //  line no 382 , L1149526768 , bytecode index = 
    //  ldc 
    stack[sp].j = 0x16dL;
    sp += 2;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j * stack[sp - 2].j; 
    sp -= 2;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_4
    stack[sp++].i = 4;
    ; 
    //  line no 383 , L2021230836 , bytecode index = 
    // invokestatic java/util/CalendarImpl.floorDivide(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_CalendarImpl_floorDivide__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    //  ldc 
    stack[sp].j = 0x1a444fL;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    sp -= 2;
    local[7].j = stack[sp].j;
    ; 
    //  line no 385 , L321795476 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  == 0) goto L1327714567;
    ; 
    //  line no 386 , L685193713 , bytecode index = 
    stack[sp++].i = local[6].i;
    if(stack[--sp].i  == 0) goto L475871799;
    stack[sp++].i = local[2].i;
    //  bipush 100
    stack[sp++].i = 100;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  != 0) goto L2117938877;
    stack[sp++].i = local[2].i;
    //  sipush 400
    stack[sp++].i = 400;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  != 0) goto L475871799;
    L2117938877:
    // iconst_1
    stack[sp++].i = 1;
    goto L725873428;
    L475871799:
    // iconst_0
    stack[sp++].i = 0;
    L725873428:
    local[6].i = stack[--sp].i;
    ; 
    //  line no 388 , L977952572 , bytecode index = 
    stack[sp].j = local[7].j;
    sp += 2;
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    //  sipush 400
    stack[sp++].i = 400;
    ; 
    //  line no 389 , L1328764608 , bytecode index = 
    // invokestatic java/util/CalendarImpl.floorDivide(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_CalendarImpl_floorDivide__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    //  bipush 100
    stack[sp++].i = 100;
    // invokestatic java/util/CalendarImpl.floorDivide(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_util_CalendarImpl_floorDivide__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    sp -= 2;
    local[7].j = stack[sp].j;
    L1327714567:
    //  line no 393 , L1327714567 , bytecode index = 
    stack[sp].j = local[7].j;
    sp += 2;
    stack[sp++].i = local[6].i;
    if(stack[--sp].i  == 0) goto L1483522397;
    // getstatic java/util/CalendarImpl LEAP_NUM_DAYS [I
    rstack[sp].obj =static_var_java_util_CalendarImpl.LEAP_1NUM_1DAYS_44;
    sp += 1;
    stack[sp++].i = local[3].i;
    // arrload s32  ,  L1327714567 bc index = 
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
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    goto L1820545559;
    L1483522397:
    // getstatic java/util/CalendarImpl NUM_DAYS [I
    rstack[sp].obj =static_var_java_util_CalendarImpl.NUM_1DAYS_43;
    sp += 1;
    stack[sp++].i = local[3].i;
    // arrload s32  ,  L1483522397 bc index = 
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
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    L1820545559:
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    sp -= 2;
    local[7].j = stack[sp].j;
    ; 
    //  line no 394 , L72893188 , bytecode index = 
    stack[sp].j = local[7].j;
    sp += 2;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    // iconst_5
    stack[sp++].i = 5;
    // arrload s32  ,  L72893188 bc index = 
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
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    sp -= 2;
    local[7].j = stack[sp].j;
    ; 
    //  line no 395 , L1367900185 , bytecode index = 
    stack[sp].j = local[7].j;
    sp += 2;
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

void bridge_java_util_CalendarImpl_calculateJulianDay__ZI_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_util_CalendarImpl_calculateJulianDay__ZI_J(runtime, ins, para[0].i);
}


// locals: 2
// stack: 4
// args: 0
void func_java_util_CalendarImpl_correctTime___V(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3281, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 402 , L431300939 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 402;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl isSet [Z
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->isSet_34;
    sp += 0;
    //  bipush 11
    stack[sp++].i = 11;
    // arrload s8  ,  L431300939 bc index = 
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
    if(stack[--sp].i  == 0) goto L1605570842;
    ; 
    //  line no 403 , L1252969149 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 11
    stack[sp++].i = 11;
    // arrload s32  ,  L1252969149 bc index = 
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
    //  bipush 24
    stack[sp++].i = 24;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 404 , L599592065 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 11
    stack[sp++].i = 11;
    stack[sp++].i = local[1].i;
    // arrstore s32  ,  L599592065 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 405 , L322100932 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 9
    stack[sp++].i = 9;
    stack[sp++].i = local[1].i;
    //  bipush 12
    stack[sp++].i = 12;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1414411897;
    // iconst_0
    stack[sp++].i = 0;
    goto L1753871727;
    L1414411897:
    // iconst_1
    stack[sp++].i = 1;
    L1753871727:
    // arrstore s32  ,  L1753871727 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 406 , L588985851 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl isSet [Z
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->isSet_34;
    sp += 0;
    //  bipush 11
    stack[sp++].i = 11;
    // iconst_0
    stack[sp++].i = 0;
    // arrstore s8  ,  L588985851 bc index = 
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
    ; 
    //  line no 407 , L651828130 , bytecode index = 
    method_exit(runtime);
    return;
    L1605570842:
    //  line no 410 , L1605570842 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl isSet [Z
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->isSet_34;
    sp += 0;
    //  bipush 9
    stack[sp++].i = 9;
    // arrload s8  ,  L1605570842 bc index = 
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
    if(stack[--sp].i  == 0) goto L58854654;
    ; 
    //  line no 413 , L604480364 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 9
    stack[sp++].i = 9;
    // arrload s32  ,  L604480364 bc index = 
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
    if(stack[--sp].i  == 0) goto L1590292218;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 9
    stack[sp++].i = 9;
    // arrload s32  ,  L604480364 bc index = 
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
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1590292218;
    ; 
    //  line no 414 , L683211146 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 11
    stack[sp++].i = 11;
    // arrload s32  ,  L683211146 bc index = 
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
    local[1].i = stack[--sp].i;
    ; 
    //  line no 415 , L995030431 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 9
    stack[sp++].i = 9;
    stack[sp++].i = local[1].i;
    //  bipush 12
    stack[sp++].i = 12;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L583744857;
    // iconst_0
    stack[sp++].i = 0;
    goto L870627780;
    L583744857:
    // iconst_1
    stack[sp++].i = 1;
    L870627780:
    // arrstore s32  ,  L870627780 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    L1590292218:
    //  line no 417 , L1590292218 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl isSet [Z
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->isSet_34;
    sp += 0;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_0
    stack[sp++].i = 0;
    // arrstore s8  ,  L1590292218 bc index = 
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
    L58854654:
    //  line no 420 , L58854654 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl isSet [Z
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->isSet_34;
    sp += 0;
    //  bipush 10
    stack[sp++].i = 10;
    // arrload s8  ,  L58854654 bc index = 
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
    if(stack[--sp].i  == 0) goto L1560244891;
    ; 
    //  line no 421 , L282166934 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 10
    stack[sp++].i = 10;
    // arrload s32  ,  L282166934 bc index = 
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
    local[1].i = stack[--sp].i;
    ; 
    //  line no 422 , L1804292128 , bytecode index = 
    stack[sp++].i = local[1].i;
    //  bipush 12
    stack[sp++].i = 12;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L2100817420;
    ; 
    //  line no 423 , L1518022811 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 11
    stack[sp++].i = 11;
    stack[sp++].i = local[1].i;
    //  bipush 12
    stack[sp++].i = 12;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    //  bipush 12
    stack[sp++].i = 12;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrstore s32  ,  L1518022811 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 424 , L1174599796 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 10
    stack[sp++].i = 10;
    stack[sp++].i = local[1].i;
    //  bipush 12
    stack[sp++].i = 12;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    // arrstore s32  ,  L1174599796 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 425 , L2000267972 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_1
    stack[sp++].i = 1;
    // arrstore s32  ,  L2000267972 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    goto L893152673;
    L2100817420:
    //  line no 427 , L2100817420 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 9
    stack[sp++].i = 9;
    // arrload s32  ,  L2100817420 bc index = 
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
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L918584437;
    ; 
    //  line no 428 , L1733354369 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 11
    stack[sp++].i = 11;
    stack[sp++].i = local[1].i;
    //  bipush 12
    stack[sp++].i = 12;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrstore s32  ,  L1733354369 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    goto L893152673;
    L918584437:
    //  line no 430 , L918584437 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl fields [I
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 11
    stack[sp++].i = 11;
    stack[sp++].i = local[1].i;
    // arrstore s32  ,  L918584437 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    L893152673:
    //  line no 433 , L893152673 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/CalendarImpl isSet [Z
    rstack[sp - 1].obj = ((struct java_util_CalendarImpl*)rstack[sp - 1].obj)->isSet_34;
    sp += 0;
    //  bipush 10
    stack[sp++].i = 10;
    // iconst_0
    stack[sp++].i = 0;
    // arrstore s8  ,  L893152673 bc index = 
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
    L1560244891:
    //  line no 435 , L1560244891 , bytecode index = 
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

void bridge_java_util_CalendarImpl_correctTime___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_CalendarImpl_correctTime___V(runtime, ins);
}


// locals: 2
// stack: 6
// args: 2
s64 func_java_util_CalendarImpl_millisToJulianDay__J_J(JThreadRuntime *runtime, struct java_util_CalendarImpl* p0, s64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3282, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].j = p1;
    ; 
    //  line no 439 , L184690001 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 439;
    //  ldc 
    stack[sp].j = 0x253d8cL;
    sp += 2;
    stack[sp].j = local[0].j;
    sp += 2;
    //  ldc 
    stack[sp].j = 0x5265c00L;
    sp += 2;
    // invokestatic java/util/CalendarImpl.floorDivide(JJ)J
    {
        sp -= 5;
        stack[sp].j = func_java_util_CalendarImpl_floorDivide__JJ_J(runtime, rstack[sp + 0].obj, stack[sp + 1].j, stack[sp + 3].j);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
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

void bridge_java_util_CalendarImpl_millisToJulianDay__J_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_util_CalendarImpl_millisToJulianDay__J_J(runtime, para[0].obj, para[1].j);
}


// locals: 2
// stack: 4
// args: 2
s64 func_java_util_CalendarImpl_julianDayToMillis__J_J(JThreadRuntime *runtime, struct java_util_CalendarImpl* p0, s64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3283, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].j = p1;
    ; 
    //  line no 444 , L1589146424 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 444;
    stack[sp].j = local[0].j;
    sp += 2;
    //  ldc 
    stack[sp].j = 0x253d8cL;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    //  ldc 
    stack[sp].j = 0x5265c00L;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j * stack[sp - 2].j; 
    sp -= 2;
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

void bridge_java_util_CalendarImpl_julianDayToMillis__J_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_util_CalendarImpl_julianDayToMillis__J_J(runtime, para[0].obj, para[1].j);
}


// locals: 3
// stack: 4
// args: 2
s32 func_java_util_CalendarImpl_julianDayToDayOfWeek__J_I(JThreadRuntime *runtime, struct java_util_CalendarImpl* p0, s64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3284, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].j = p1;
    ; 
    //  line no 450 , L833298023 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 450;
    stack[sp].j = local[0].j;
    sp += 2;
    //  lconst 1
    stack[sp].j = 1;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    //  ldc 
    stack[sp].j = 0x7L;
    sp += 2;
    if (!stack[sp - 2].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 4].j = stack[sp - 4].j % stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 451 , L700171153 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  >= 0) goto L881280045;
    //  bipush 8
    stack[sp++].i = 8;
    goto L1393484427;
    L881280045:
    // iconst_1
    stack[sp++].i = 1;
    L1393484427:
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
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

void bridge_java_util_CalendarImpl_julianDayToDayOfWeek__J_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_CalendarImpl_julianDayToDayOfWeek__J_I(runtime, para[0].obj, para[1].j);
}


// locals: 4
// stack: 4
// args: 3
s64 func_java_util_CalendarImpl_floorDivide__JJ_J(JThreadRuntime *runtime, struct java_util_CalendarImpl* p0, s64 p1, s64 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3285, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].j = p1;
    local[3].j = p3;
    ; 
    //  line no 458 , L1307540790 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 458;
    stack[sp].j = local[0].j;
    sp += 2;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  < 0) goto L1137180298;
    ; 
    //  line no 459 , L1744389827 , bytecode index = 
    stack[sp].j = local[0].j;
    sp += 2;
    stack[sp].j = local[2].j;
    sp += 2;
    if (!stack[sp - 2].j) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 4].j = stack[sp - 4].j / stack[sp - 2].j; 
    sp -= 2;
    goto L565517913;
    L1137180298:
    //  line no 460 , L1137180298 , bytecode index = 
    stack[sp].j = local[0].j;
    sp += 2;
    //  lconst 1
    stack[sp].j = 1;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    stack[sp].j = local[2].j;
    sp += 2;
    if (!stack[sp - 2].j) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 4].j = stack[sp - 4].j / stack[sp - 2].j; 
    sp -= 2;
    //  lconst 1
    stack[sp].j = 1;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    L565517913:
    //  line no 458 , L565517913 , bytecode index = 
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

void bridge_java_util_CalendarImpl_floorDivide__JJ_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_util_CalendarImpl_floorDivide__JJ_J(runtime, para[0].obj, para[1].j, para[2].j);
}


// locals: 2
// stack: 2
// args: 3
s32 func_java_util_CalendarImpl_floorDivide__II_I(JThreadRuntime *runtime, struct java_util_CalendarImpl* p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3286, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 467 , L1800031808 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 467;
    stack[sp++].i = local[0].i;
    if(stack[--sp].i  < 0) goto L1185465012;
    ; 
    //  line no 468 , L1332104174 , bytecode index = 
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[1].i;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    goto L1985362663;
    L1185465012:
    //  line no 469 , L1185465012 , bytecode index = 
    stack[sp++].i = local[0].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[1].i;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    L1985362663:
    //  line no 467 , L1985362663 , bytecode index = 
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

void bridge_java_util_CalendarImpl_floorDivide__II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_CalendarImpl_floorDivide__II_I(runtime, para[0].obj, para[1].i, para[2].i);
}


// locals: 4
// stack: 5
// args: 4
s32 func_java_util_CalendarImpl_floorDivide__II_3I_I(JThreadRuntime *runtime, struct java_util_CalendarImpl* p0, s32 p1, s32 p2, JArray * p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3287, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    ; 
    //  line no 476 , L1340769295 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 476;
    stack[sp++].i = local[0].i;
    if(stack[--sp].i  < 0) goto L850300711;
    ; 
    //  line no 477 , L1978141335 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[1].i;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    // arrstore s32  ,  L1978141335 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 478 , L5998675 , bytecode index = 
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[1].i;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    method_exit(runtime);
    return stack[sp - 1].i;
    L850300711:
    //  line no 480 , L850300711 , bytecode index = 
    stack[sp++].i = local[0].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[1].i;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 481 , L462073515 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrstore s32  ,  L462073515 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 482 , L1562107210 , bytecode index = 
    stack[sp++].i = local[3].i;
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

void bridge_java_util_CalendarImpl_floorDivide__II_3I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_CalendarImpl_floorDivide__II_3I_I(runtime, para[0].obj, para[1].i, para[2].i, para[3].obj);
}


// locals: 5
// stack: 6
// args: 4
s32 func_java_util_CalendarImpl_floorDivide__JI_3I_I(JThreadRuntime *runtime, struct java_util_CalendarImpl* p0, s64 p1, s32 p3, JArray * p4){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3288, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].j = p1;
    local[3].i = p3;
    rlocal[4].obj = p4;
    ; 
    //  line no 489 , L878169229 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 489;
    stack[sp].j = local[0].j;
    sp += 2;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  < 0) goto L2053555034;
    ; 
    //  line no 490 , L2039783633 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp].j = local[0].j;
    sp += 2;
    stack[sp++].i = local[2].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    if (!stack[sp - 2].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 4].j = stack[sp - 4].j % stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    // arrstore s32  ,  L2039783633 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 491 , L121521031 , bytecode index = 
    stack[sp].j = local[0].j;
    sp += 2;
    stack[sp++].i = local[2].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    if (!stack[sp - 2].j) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 4].j = stack[sp - 4].j / stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    method_exit(runtime);
    return stack[sp - 1].i;
    L2053555034:
    //  line no 493 , L2053555034 , bytecode index = 
    stack[sp].j = local[0].j;
    sp += 2;
    //  lconst 1
    stack[sp].j = 1;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j + stack[sp - 2].j; 
    sp -= 2;
    stack[sp++].i = local[2].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    if (!stack[sp - 2].j) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 4].j = stack[sp - 4].j / stack[sp - 2].j; 
    sp -= 2;
    //  lconst 1
    stack[sp].j = 1;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 494 , L227005513 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp].j = local[0].j;
    sp += 2;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    // arrstore s32  ,  L227005513 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    ; 
    //  line no 495 , L1094167216 , bytecode index = 
    stack[sp++].i = local[4].i;
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

void bridge_java_util_CalendarImpl_floorDivide__JI_3I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_CalendarImpl_floorDivide__JI_3I_I(runtime, para[0].obj, para[1].j, para[2].i, para[3].obj);
}


// locals: 0
// stack: 4
// args: 1
void func_java_util_CalendarImpl__clinit____V(JThreadRuntime *runtime, struct java_util_CalendarImpl* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3289, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 17 , L1747862060 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 17;
    //  bipush 12
    stack[sp++].i = 12;
    // ; newarray/multiarray Dimension Array: [I 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1044));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
    // arrstore s32  ,  L1747862060 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    //  bipush 31
    stack[sp++].i = 31;
    // arrstore s32  ,  L1747862060 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_2
    stack[sp++].i = 2;
    //  bipush 59
    stack[sp++].i = 59;
    // arrstore s32  ,  L1747862060 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_3
    stack[sp++].i = 3;
    //  bipush 90
    stack[sp++].i = 90;
    // arrstore s32  ,  L1747862060 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_4
    stack[sp++].i = 4;
    //  bipush 120
    stack[sp++].i = 120;
    // arrstore s32  ,  L1747862060 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_5
    stack[sp++].i = 5;
    //  sipush 151
    stack[sp++].i = 151;
    // arrstore s32  ,  L1747862060 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 6
    stack[sp++].i = 6;
    //  sipush 181
    stack[sp++].i = 181;
    // arrstore s32  ,  L1747862060 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 7
    stack[sp++].i = 7;
    //  sipush 212
    stack[sp++].i = 212;
    // arrstore s32  ,  L1747862060 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 8
    stack[sp++].i = 8;
    //  sipush 243
    stack[sp++].i = 243;
    // arrstore s32  ,  L1747862060 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 9
    stack[sp++].i = 9;
    //  sipush 273
    stack[sp++].i = 273;
    // arrstore s32  ,  L1747862060 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 10
    stack[sp++].i = 10;
    //  sipush 304
    stack[sp++].i = 304;
    // arrstore s32  ,  L1747862060 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 11
    stack[sp++].i = 11;
    //  sipush 334
    stack[sp++].i = 334;
    // arrstore s32  ,  L1747862060 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // putstatic java/util/CalendarImpl NUM_DAYS [I
    sp -= 1;
    static_var_java_util_CalendarImpl.NUM_1DAYS_43 = rstack[sp].obj;
    ; 
    //  line no 21 , L1538844412 , bytecode index = 
    //  bipush 12
    stack[sp++].i = 12;
    // ; newarray/multiarray Dimension Array: [I 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1044));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
    // arrstore s32  ,  L1538844412 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    //  bipush 31
    stack[sp++].i = 31;
    // arrstore s32  ,  L1538844412 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_2
    stack[sp++].i = 2;
    //  bipush 60
    stack[sp++].i = 60;
    // arrstore s32  ,  L1538844412 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_3
    stack[sp++].i = 3;
    //  bipush 91
    stack[sp++].i = 91;
    // arrstore s32  ,  L1538844412 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_4
    stack[sp++].i = 4;
    //  bipush 121
    stack[sp++].i = 121;
    // arrstore s32  ,  L1538844412 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_5
    stack[sp++].i = 5;
    //  sipush 152
    stack[sp++].i = 152;
    // arrstore s32  ,  L1538844412 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 6
    stack[sp++].i = 6;
    //  sipush 182
    stack[sp++].i = 182;
    // arrstore s32  ,  L1538844412 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 7
    stack[sp++].i = 7;
    //  sipush 213
    stack[sp++].i = 213;
    // arrstore s32  ,  L1538844412 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 8
    stack[sp++].i = 8;
    //  sipush 244
    stack[sp++].i = 244;
    // arrstore s32  ,  L1538844412 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 9
    stack[sp++].i = 9;
    //  sipush 274
    stack[sp++].i = 274;
    // arrstore s32  ,  L1538844412 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 10
    stack[sp++].i = 10;
    //  sipush 305
    stack[sp++].i = 305;
    // arrstore s32  ,  L1538844412 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 11
    stack[sp++].i = 11;
    //  sipush 335
    stack[sp++].i = 335;
    // arrstore s32  ,  L1538844412 bc index = 
    {
        ;
        s32 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_s32_arr[idx] = value;
    }
    // putstatic java/util/CalendarImpl LEAP_NUM_DAYS [I
    sp -= 1;
    static_var_java_util_CalendarImpl.LEAP_1NUM_1DAYS_44 = rstack[sp].obj;
    ; 
    //  line no 193 , L656844049 , bytecode index = 
    //  bipush 12
    stack[sp++].i = 12;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/String; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(592));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3309);
    // arrstore __refer  ,  L656844049 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3310);
    // arrstore __refer  ,  L656844049 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_2
    stack[sp++].i = 2;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3311);
    // arrstore __refer  ,  L656844049 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_3
    stack[sp++].i = 3;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3312);
    // arrstore __refer  ,  L656844049 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_4
    stack[sp++].i = 4;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3313);
    // arrstore __refer  ,  L656844049 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_5
    stack[sp++].i = 5;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3314);
    // arrstore __refer  ,  L656844049 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 6
    stack[sp++].i = 6;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3315);
    // arrstore __refer  ,  L656844049 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 7
    stack[sp++].i = 7;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3316);
    // arrstore __refer  ,  L656844049 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 8
    stack[sp++].i = 8;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3317);
    // arrstore __refer  ,  L656844049 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 9
    stack[sp++].i = 9;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3318);
    // arrstore __refer  ,  L656844049 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 10
    stack[sp++].i = 10;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3319);
    // arrstore __refer  ,  L656844049 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 11
    stack[sp++].i = 11;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3320);
    // arrstore __refer  ,  L656844049 bc index = 
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
    // putstatic java/util/CalendarImpl months [Ljava/lang/String;
    sp -= 1;
    static_var_java_util_CalendarImpl.months_52 = rstack[sp].obj;
    ; 
    //  line no 196 , L1925835770 , bytecode index = 
    //  bipush 7
    stack[sp++].i = 7;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/String; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(592));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3295);
    // arrstore __refer  ,  L1925835770 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3296);
    // arrstore __refer  ,  L1925835770 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_2
    stack[sp++].i = 2;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3297);
    // arrstore __refer  ,  L1925835770 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_3
    stack[sp++].i = 3;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3298);
    // arrstore __refer  ,  L1925835770 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_4
    stack[sp++].i = 4;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3299);
    // arrstore __refer  ,  L1925835770 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_5
    stack[sp++].i = 5;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3300);
    // arrstore __refer  ,  L1925835770 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 6
    stack[sp++].i = 6;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3301);
    // arrstore __refer  ,  L1925835770 bc index = 
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
    // putstatic java/util/CalendarImpl days [Ljava/lang/String;
    sp -= 1;
    static_var_java_util_CalendarImpl.days_53 = rstack[sp].obj;
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

void bridge_java_util_CalendarImpl__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_CalendarImpl__clinit____V(runtime, para[0].obj);
}


