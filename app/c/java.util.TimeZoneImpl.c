// CLASS: java/util/TimeZoneImpl extends java/util/TimeZone
#include "metadata.h"


// generation
// globals
//struct java_util_TimeZoneImpl_static {struct java_lang_String* HOME_1ID_3; s32 ONE_1MINUTE_4; s32 ONE_1HOUR_5; s32 ONE_1DAY_6; JArray * ids_8; s32 millisPerHour_20; s32 millisPerDay_21; JArray * staticMonthLength_23; s32 DOM_1MODE_27; s32 DOW_1IN_1MONTH_1MODE_28; s32 DOW_1GE_1DOM_1MODE_29; s32 DOW_1LE_1DOM_1MODE_30; JArray * zones_31;  };
struct java_util_TimeZoneImpl_static static_var_java_util_TimeZoneImpl = {NULL, 0, 0, 0, NULL, 0, 0, NULL, 0, 0, 0, 0, NULL};


__refer arr_vmtable_java_util_TimeZoneImpl_from_java_util_TimeZoneImpl[] = {
    func_java_util_TimeZoneImpl_getOffset__IIIIII_I,  //0
    func_java_util_TimeZoneImpl_getOffset__IIIIIII_I,  //1
    func_java_util_TimeZoneImpl_getRawOffset___I,  //2
    func_java_util_TimeZoneImpl_useDaylightTime___Z,  //3
    func_java_util_TimeZoneImpl_getID___Ljava_lang_String_2,  //4
    func_java_util_TimeZoneImpl_getInstance__Ljava_lang_String_2_Ljava_util_TimeZone_2,  //5
    func_java_util_TimeZoneImpl_getIDs____3Ljava_lang_String_2  //6
};
__refer arr_vmtable_java_util_TimeZoneImpl_from_java_util_TimeZone[] = {
    func_java_util_TimeZoneImpl_getOffset__IIIIII_I,  //0
    func_java_util_TimeZoneImpl_getRawOffset___I,  //1
    func_java_util_TimeZoneImpl_useDaylightTime___Z,  //2
    func_java_util_TimeZoneImpl_getID___Ljava_lang_String_2,  //3
    func_java_util_TimeZone_getDisplayName___Ljava_lang_String_2  //4
};
__refer arr_vmtable_java_util_TimeZoneImpl_from_java_lang_Object[] = {
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
VMTable vmtable_java_util_TimeZoneImpl[] = {
    {14, 7, arr_vmtable_java_util_TimeZoneImpl_from_java_util_TimeZoneImpl}, //0
    {13, 5, arr_vmtable_java_util_TimeZoneImpl_from_java_util_TimeZone}, //1
    {5, 10, arr_vmtable_java_util_TimeZoneImpl_from_java_lang_Object}, //2
};



// locals: 1
// stack: 2
// args: 0
void func_java_util_TimeZoneImpl__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 683, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 9 , L1063980005 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 9;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/TimeZone.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZone__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 270 , L1628998132 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/util/TimeZoneImpl useDaylight Z
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->useDaylight_19 = stack[sp + 1].i;
    ; 
    //  line no 276 , L497208183 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic java/util/TimeZoneImpl staticMonthLength [B
    rstack[sp].obj =static_var_java_util_TimeZoneImpl.staticMonthLength_23;
    sp += 1;
    // putfield java/util/TimeZoneImpl monthLength [B
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->monthLength_22 = rstack[sp + 1].obj;
    ; 
    //  line no 10 , L1223850219 , bytecode index = 
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

void bridge_java_util_TimeZoneImpl__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_TimeZoneImpl__init____V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 2
void func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(JThreadRuntime *runtime, s32 p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 684, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 13 , L173214986 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 13;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/TimeZone.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZone__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 270 , L27362884 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/util/TimeZoneImpl useDaylight Z
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->useDaylight_19 = stack[sp + 1].i;
    ; 
    //  line no 276 , L1523553211 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic java/util/TimeZoneImpl staticMonthLength [B
    rstack[sp].obj =static_var_java_util_TimeZoneImpl.staticMonthLength_23;
    sp += 1;
    // putfield java/util/TimeZoneImpl monthLength [B
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->monthLength_22 = rstack[sp + 1].obj;
    ; 
    //  line no 14 , L2122049087 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield java/util/TimeZoneImpl rawOffset I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->rawOffset_18 = stack[sp + 1].i;
    ; 
    //  line no 15 , L1825738663 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/util/TimeZoneImpl ID Ljava/lang/String;
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->ID_7 = rstack[sp + 1].obj;
    ; 
    //  line no 16 , L1632413663 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // putfield java/util/TimeZoneImpl dstSavings I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->dstSavings_26 = stack[sp + 1].i;
    ; 
    //  line no 17 , L1194893830 , bytecode index = 
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

void bridge_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, ins, para[0].obj);
}


// locals: 12
// stack: 3
// args: 11
void func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(JThreadRuntime *runtime, s32 p0, struct java_lang_String* p1, s32 p2, s32 p3, s32 p4, s32 p5, s32 p6, s32 p7, s32 p8, s32 p9, s32 p10){
    
    StackItem local[12] = {0};
    RStackItem rlocal[12] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 685, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    local[4].i = p4;
    local[5].i = p5;
    local[6].i = p6;
    local[7].i = p7;
    local[8].i = p8;
    local[9].i = p9;
    local[10].i = p10;
    ; 
    //  line no 23 , L503642634 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 23;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/TimeZone.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZone__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 270 , L452121674 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/util/TimeZoneImpl useDaylight Z
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->useDaylight_19 = stack[sp + 1].i;
    ; 
    //  line no 276 , L416841088 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic java/util/TimeZoneImpl staticMonthLength [B
    rstack[sp].obj =static_var_java_util_TimeZoneImpl.staticMonthLength_23;
    sp += 1;
    // putfield java/util/TimeZoneImpl monthLength [B
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->monthLength_22 = rstack[sp + 1].obj;
    ; 
    //  line no 24 , L1636050357 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/util/TimeZoneImpl ID Ljava/lang/String;
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->ID_7 = rstack[sp + 1].obj;
    ; 
    //  line no 25 , L1483298597 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield java/util/TimeZoneImpl rawOffset I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->rawOffset_18 = stack[sp + 1].i;
    ; 
    //  line no 26 , L1412794598 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // putfield java/util/TimeZoneImpl startMonth I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->startMonth_9 = stack[sp + 1].i;
    ; 
    //  line no 27 , L257608605 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // putfield java/util/TimeZoneImpl startDay I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->startDay_10 = stack[sp + 1].i;
    ; 
    //  line no 28 , L1337192014 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    // putfield java/util/TimeZoneImpl startDayOfWeek I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->startDayOfWeek_11 = stack[sp + 1].i;
    ; 
    //  line no 29 , L1567705314 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[6].i;
    // putfield java/util/TimeZoneImpl startTime I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->startTime_12 = stack[sp + 1].i;
    ; 
    //  line no 30 , L637241618 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[7].i;
    // putfield java/util/TimeZoneImpl endMonth I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->endMonth_13 = stack[sp + 1].i;
    ; 
    //  line no 31 , L2082781203 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[8].i;
    // putfield java/util/TimeZoneImpl endDay I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->endDay_14 = stack[sp + 1].i;
    ; 
    //  line no 32 , L741730375 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[9].i;
    // putfield java/util/TimeZoneImpl endDayOfWeek I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->endDayOfWeek_15 = stack[sp + 1].i;
    ; 
    //  line no 33 , L2077528955 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[10].i;
    // putfield java/util/TimeZoneImpl endTime I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->endTime_16 = stack[sp + 1].i;
    ; 
    //  line no 34 , L35534346 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[11].i;
    // putfield java/util/TimeZoneImpl dstSavings I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->dstSavings_26 = stack[sp + 1].i;
    ; 
    //  line no 35 , L1537471098 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/TimeZoneImpl.decodeRules()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl_decodeRules___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 36 , L1490509465 , bytecode index = 
    stack[sp++].i = local[11].i;
    if(stack[--sp].i  > 0) goto L122114483;
    ; 
    //  line no 37 , L1947896119 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1078);
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1947896119 in labeltable is :L1947896119
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 37;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L122114483:
    //  line no 39 , L122114483 , bytecode index = 
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

void bridge_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, ins, para[0].obj, para[1].i, para[2].i, para[3].i, para[4].i, para[5].i, para[6].i, para[7].i, para[8].i, para[9].i);
}


// locals: 7
// stack: 9
// args: 6
s32 func_java_util_TimeZoneImpl_getOffset__IIIIII_I(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2, s32 p3, s32 p4, s32 p5){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[10];
    RStackItem rstack[10];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 686, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    local[4].i = p4;
    local[5].i = p5;
    ; 
    //  line no 49 , L1387210478 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 49;
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  < 0) goto L1876443073;
    stack[sp++].i = local[3].i;
    //  bipush 11
    stack[sp++].i = 11;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1328238652;
    L1876443073:
    //  line no 52 , L1876443073 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1079);
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
    stack[sp++].i = local[3].i;
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
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1876443073 in labeltable is :L1876443073
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 52;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1328238652:
    //  line no 54 , L1328238652 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    // getstatic java/util/TimeZoneImpl staticMonthLength [B
    rstack[sp].obj =static_var_java_util_TimeZoneImpl.staticMonthLength_23;
    sp += 1;
    stack[sp++].i = local[3].i;
    // arrload s8  ,  L1328238652 bc index = 
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
    // invokevirtual java/util/TimeZoneImpl.getOffset(IIIIIII)I
    {
        sp -= 7;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32,s32,s32,s32,s32) = find_method(__ins->vm_table, 14, 1);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_java_util_TimeZoneImpl_getOffset__IIIIII_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_TimeZoneImpl_getOffset__IIIIII_I(runtime, ins, para[0].i, para[1].i, para[2].i, para[3].i, para[4].i);
}


// locals: 12
// stack: 10
// args: 7
s32 func_java_util_TimeZoneImpl_getOffset__IIIIIII_I(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2, s32 p3, s32 p4, s32 p5, s32 p6){
    
    StackItem local[12] = {0};
    RStackItem rlocal[12] = {0};
    StackItem stack[11];
    RStackItem rstack[11];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 687, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    local[4].i = p4;
    local[5].i = p5;
    local[6].i = p6;
    ; 
    //  line no 64 , L547201549 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 64;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  == 0) goto L236304360;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L455785638;
    L236304360:
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  < 0) goto L455785638;
    stack[sp++].i = local[3].i;
    //  bipush 11
    stack[sp++].i = 11;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L455785638;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L455785638;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[7].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L455785638;
    stack[sp++].i = local[5].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L455785638;
    stack[sp++].i = local[5].i;
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L455785638;
    stack[sp++].i = local[6].i;
    if(stack[--sp].i  < 0) goto L455785638;
    stack[sp++].i = local[6].i;
    //  ldc 
    stack[sp++].i = 0x5265c00;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L455785638;
    stack[sp++].i = local[7].i;
    //  bipush 28
    stack[sp++].i = 28;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L455785638;
    stack[sp++].i = local[7].i;
    //  bipush 31
    stack[sp++].i = 31;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1670546046;
    L455785638:
    //  line no 76 , L455785638 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalArgumentException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L455785638 in labeltable is :L455785638
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 76;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1670546046:
    //  line no 101 , L1670546046 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl rawOffset I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->rawOffset_18;
    sp += 0;
    local[8].i = stack[--sp].i;
    ; 
    //  line no 104 , L785570251 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl useDaylight Z
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->useDaylight_19;
    sp += 0;
    if(stack[--sp].i  == 0) goto L224100622;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startYear I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startYear_17;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L224100622;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1138410383;
    L224100622:
    stack[sp++].i = local[8].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1138410383:
    //  line no 107 , L1138410383 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startMonth I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startMonth_9;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endMonth I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endMonth_13;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L875313400;
    // iconst_1
    stack[sp++].i = 1;
    goto L210281271;
    L875313400:
    // iconst_0
    stack[sp++].i = 0;
    L210281271:
    local[9].i = stack[--sp].i;
    ; 
    //  line no 110 , L1560940633 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startMode I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startMode_24;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startMonth I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startMonth_9;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startDayOfWeek I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startDayOfWeek_11;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startDay_10;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startTime I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startTime_12;
    sp += 0;
    // invokestatic java/util/TimeZoneImpl.compareToRule(IIIIIIIIII)I
    {
        sp -= 11;
        stack[sp].i = func_java_util_TimeZoneImpl_compareToRule__IIIIIIIIII_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[10].i = stack[--sp].i;
    ; 
    //  line no 113 , L1213818572 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 116 , L501705927 , bytecode index = 
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[10].i;
    if(stack[--sp].i  < 0) goto L1421866327;
    // iconst_1
    stack[sp++].i = 1;
    goto L1497018177;
    L1421866327:
    // iconst_0
    stack[sp++].i = 0;
    L1497018177:
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1515638188;
    ; 
    //  line no 119 , L2087785333 , bytecode index = 
    stack[sp++].i = local[6].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl dstSavings I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->dstSavings_26;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[6].i = stack[--sp].i;
    L1473205473:
    //  line no 120 , L1473205473 , bytecode index = 
    stack[sp++].i = local[6].i;
    //  ldc 
    stack[sp++].i = 0x5265c00;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1526970878;
    ; 
    //  line no 121 , L936653983 , bytecode index = 
    stack[sp++].i = local[6].i;
    //  ldc 
    stack[sp++].i = 0x5265c00;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 122 , L1128948651 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    ; 
    //  line no 123 , L1846501247 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp++].i = local[5].i;
    //  bipush 7
    stack[sp++].i = 7;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 124 , L671471369 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[7].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1473205473;
    ; 
    //  line no 125 , L1055096410 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 128 , L782505238 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1473205473;
    L1526970878:
    //  line no 131 , L1526970878 , bytecode index = 
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endMode I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endMode_25;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endMonth I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endMonth_13;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endDayOfWeek I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endDayOfWeek_15;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endDay_14;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endTime I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endTime_16;
    sp += 0;
    // invokestatic java/util/TimeZoneImpl.compareToRule(IIIIIIIIII)I
    {
        sp -= 11;
        stack[sp].i = func_java_util_TimeZoneImpl_compareToRule__IIIIIIIIII_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[11].i = stack[--sp].i;
    L1515638188:
    //  line no 137 , L1515638188 , bytecode index = 
    stack[sp++].i = local[9].i;
    if(stack[--sp].i  != 0) goto L977552154;
    stack[sp++].i = local[10].i;
    if(stack[--sp].i  < 0) goto L977552154;
    stack[sp++].i = local[11].i;
    if(stack[--sp].i  < 0) goto L1014982340;
    L977552154:
    stack[sp++].i = local[9].i;
    if(stack[--sp].i  == 0) goto L424398527;
    stack[sp++].i = local[10].i;
    if(stack[--sp].i  >= 0) goto L1014982340;
    stack[sp++].i = local[11].i;
    if(stack[--sp].i  >= 0) goto L424398527;
    L1014982340:
    //  line no 140 , L1014982340 , bytecode index = 
    stack[sp++].i = local[8].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl dstSavings I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->dstSavings_26;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[8].i = stack[--sp].i;
    L424398527:
    //  line no 143 , L424398527 , bytecode index = 
    stack[sp++].i = local[8].i;
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

void bridge_java_util_TimeZoneImpl_getOffset__IIIIIII_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_TimeZoneImpl_getOffset__IIIIIII_I(runtime, ins, para[0].i, para[1].i, para[2].i, para[3].i, para[4].i, para[5].i);
}


// locals: 11
// stack: 4
// args: 11
s32 func_java_util_TimeZoneImpl_compareToRule__IIIIIIIIII_I(JThreadRuntime *runtime, struct java_util_TimeZoneImpl* p0, s32 p1, s32 p2, s32 p3, s32 p4, s32 p5, s32 p6, s32 p7, s32 p8, s32 p9, s32 p10){
    
    StackItem local[11] = {0};
    RStackItem rlocal[11] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 688, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    local[4].i = p4;
    local[5].i = p5;
    local[6].i = p6;
    local[7].i = p7;
    local[8].i = p8;
    local[9].i = p9;
    local[10].i = p10;
    ; 
    //  line no 151 , L252553541 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 151;
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[6].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1208203046;
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1208203046:
    //  line no 152 , L1208203046 , bytecode index = 
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[6].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L268084911;
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L268084911:
    //  line no 154 , L268084911 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[10].i = stack[--sp].i;
    ; 
    //  line no 155 , L1406014249 , bytecode index = 
    stack[sp++].i = local[5].i;
    switch(stack[--sp].i){
        case 1:
            goto L1678046232;
        case 2:
            goto L1041365481;
        case 3:
            goto L501609049;
        case 4:
            goto L1922930974;
        default:
            goto L829149076;
    }
    L1678046232:
    //  line no 157 , L1678046232 , bytecode index = 
    stack[sp++].i = local[8].i;
    local[10].i = stack[--sp].i;
    ; 
    //  line no 158 , L838473569 , bytecode index = 
    goto L829149076;
    L1041365481:
    //  line no 161 , L1041365481 , bytecode index = 
    stack[sp++].i = local[8].i;
    if(stack[--sp].i  <= 0) goto L9797126;
    ; 
    //  line no 162 , L844112759 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp++].i = local[8].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    //  bipush 7
    stack[sp++].i = 7;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  bipush 7
    stack[sp++].i = 7;
    stack[sp++].i = local[7].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    //  bipush 7
    stack[sp++].i = 7;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[10].i = stack[--sp].i;
    goto L829149076;
    L9797126:
    //  line no 166 , L9797126 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[8].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  bipush 7
    stack[sp++].i = 7;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  bipush 7
    stack[sp++].i = 7;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[7].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    //  bipush 7
    stack[sp++].i = 7;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[10].i = stack[--sp].i;
    ; 
    //  line no 169 , L739973450 , bytecode index = 
    goto L829149076;
    L501609049:
    //  line no 171 , L501609049 , bytecode index = 
    stack[sp++].i = local[8].i;
    //  bipush 49
    stack[sp++].i = 49;
    stack[sp++].i = local[7].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  bipush 7
    stack[sp++].i = 7;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[10].i = stack[--sp].i;
    ; 
    //  line no 173 , L1304117943 , bytecode index = 
    goto L829149076;
    L1922930974:
    //  line no 175 , L1922930974 , bytecode index = 
    stack[sp++].i = local[8].i;
    //  bipush 49
    stack[sp++].i = 49;
    stack[sp++].i = local[7].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    //  bipush 7
    stack[sp++].i = 7;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i % stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[10].i = stack[--sp].i;
    L829149076:
    //  line no 182 , L829149076 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[10].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1727361096;
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1727361096:
    //  line no 183 , L1727361096 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[10].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1426963578;
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1426963578:
    //  line no 185 , L1426963578 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[9].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L556281560;
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L556281560:
    //  line no 186 , L556281560 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[9].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L915500720;
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L915500720:
    //  line no 187 , L915500720 , bytecode index = 
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

void bridge_java_util_TimeZoneImpl_compareToRule__IIIIIIIIII_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_TimeZoneImpl_compareToRule__IIIIIIIIII_I(runtime, para[0].obj, para[1].i, para[2].i, para[3].i, para[4].i, para[5].i, para[6].i, para[7].i, para[8].i, para[9].i, para[10].i);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_util_TimeZoneImpl_getRawOffset___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 194 , L1132307065 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl rawOffset I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->rawOffset_18;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_util_TimeZoneImpl_getRawOffset___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_TimeZoneImpl_getRawOffset___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_util_TimeZoneImpl_useDaylightTime___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 199 , L505021446 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl useDaylight Z
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->useDaylight_19;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_util_TimeZoneImpl_useDaylightTime___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_TimeZoneImpl_useDaylightTime___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_java_util_TimeZoneImpl_getID___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 204 , L313239742 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl ID Ljava/lang/String;
    rstack[sp - 1].obj = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->ID_7;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_util_TimeZoneImpl_getID___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TimeZoneImpl_getID___Ljava_lang_String_2(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
struct java_util_TimeZone* func_java_util_TimeZoneImpl_getInstance__Ljava_lang_String_2_Ljava_util_TimeZone_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 692, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 209 , L1744189907 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 209;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L103103526;
    ; 
    //  line no 210 , L1225038340 , bytecode index = 
    // getstatic java/util/TimeZoneImpl HOME_ID Ljava/lang/String;
    rstack[sp].obj =static_var_java_util_TimeZoneImpl.HOME_1ID_3;
    sp += 1;
    if(rstack[--sp].obj  != NULL) goto L1906879951;
    ; 
    //  line no 211 , L658909832 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1084);
    // invokestatic java/lang/System.getProperty(Ljava/lang/String;)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_System_getProperty__Ljava_lang_String_2_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic java/util/TimeZoneImpl HOME_ID Ljava/lang/String;
    sp -= 1;
    static_var_java_util_TimeZoneImpl.HOME_1ID_3 = rstack[sp].obj;
    ; 
    //  line no 212 , L137225802 , bytecode index = 
    // getstatic java/util/TimeZoneImpl HOME_ID Ljava/lang/String;
    rstack[sp].obj =static_var_java_util_TimeZoneImpl.HOME_1ID_3;
    sp += 1;
    if(rstack[--sp].obj  != NULL) goto L1906879951;
    ; 
    //  line no 213 , L1704237553 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1085);
    // putstatic java/util/TimeZoneImpl HOME_ID Ljava/lang/String;
    sp -= 1;
    static_var_java_util_TimeZoneImpl.HOME_1ID_3 = rstack[sp].obj;
    L1906879951:
    //  line no 215 , L1906879951 , bytecode index = 
    // getstatic java/util/TimeZoneImpl HOME_ID Ljava/lang/String;
    rstack[sp].obj =static_var_java_util_TimeZoneImpl.HOME_1ID_3;
    sp += 1;
    rlocal[1].obj = rstack[--sp].obj;
    L103103526:
    //  line no 217 , L103103526 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L1374066265:
    stack[sp++].i = local[2].i;
    // getstatic java/util/TimeZoneImpl zones [Ljava/util/TimeZone;
    rstack[sp].obj =static_var_java_util_TimeZoneImpl.zones_31;
    sp += 1;
    // arraylength  label  L1374066265
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1206051975;
    ; 
    //  line no 218 , L538592647 , bytecode index = 
    // getstatic java/util/TimeZoneImpl zones [Ljava/util/TimeZone;
    rstack[sp].obj =static_var_java_util_TimeZoneImpl.zones_31;
    sp += 1;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L538592647 bc index = 
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
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 50, 10);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1627396964;
    ; 
    //  line no 219 , L70323523 , bytecode index = 
    // getstatic java/util/TimeZoneImpl zones [Ljava/util/TimeZone;
    rstack[sp].obj =static_var_java_util_TimeZoneImpl.zones_31;
    sp += 1;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L70323523 bc index = 
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
    L1627396964:
    //  line no 217 , L1627396964 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1374066265;
    L1206051975:
    //  line no 221 , L1206051975 , bytecode index = 
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

void bridge_java_util_TimeZoneImpl_getInstance__Ljava_lang_String_2_Ljava_util_TimeZone_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TimeZoneImpl_getInstance__Ljava_lang_String_2_Ljava_util_TimeZone_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 0
JArray * func_java_util_TimeZoneImpl_getIDs____3Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 693, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 226 , L652433136 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 226;
    // getstatic java/util/TimeZoneImpl ids [Ljava/lang/String;
    rstack[sp].obj =static_var_java_util_TimeZoneImpl.ids_8;
    sp += 1;
    if(rstack[--sp].obj  != NULL) goto L1205445235;
    ; 
    //  line no 227 , L1267655902 , bytecode index = 
    // getstatic java/util/TimeZoneImpl zones [Ljava/util/TimeZone;
    rstack[sp].obj =static_var_java_util_TimeZoneImpl.zones_31;
    sp += 1;
    // arraylength  label  L1267655902
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // ; newarray/multiarray Dimension Array: [Ljava/lang/String; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(592));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putstatic java/util/TimeZoneImpl ids [Ljava/lang/String;
    sp -= 1;
    static_var_java_util_TimeZoneImpl.ids_8 = rstack[sp].obj;
    ; 
    //  line no 228 , L670663110 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[1].i = stack[--sp].i;
    L454104863:
    stack[sp++].i = local[1].i;
    // getstatic java/util/TimeZoneImpl zones [Ljava/util/TimeZone;
    rstack[sp].obj =static_var_java_util_TimeZoneImpl.zones_31;
    sp += 1;
    // arraylength  label  L454104863
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1205445235;
    ; 
    //  line no 229 , L290579508 , bytecode index = 
    // getstatic java/util/TimeZoneImpl ids [Ljava/lang/String;
    rstack[sp].obj =static_var_java_util_TimeZoneImpl.ids_8;
    sp += 1;
    stack[sp++].i = local[1].i;
    // getstatic java/util/TimeZoneImpl zones [Ljava/util/TimeZone;
    rstack[sp].obj =static_var_java_util_TimeZoneImpl.zones_31;
    sp += 1;
    stack[sp++].i = local[1].i;
    // arrload __refer  ,  L290579508 bc index = 
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
    // arrstore __refer  ,  L290579508 bc index = 
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
    //  line no 228 , L767904468 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L454104863;
    L1205445235:
    //  line no 231 , L1205445235 , bytecode index = 
    // getstatic java/util/TimeZoneImpl ids [Ljava/lang/String;
    rstack[sp].obj =static_var_java_util_TimeZoneImpl.ids_8;
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

void bridge_java_util_TimeZoneImpl_getIDs____3Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_TimeZoneImpl_getIDs____3Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
void func_java_util_TimeZoneImpl_decodeRules___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 694, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 296 , L1432569632 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 296;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/TimeZoneImpl.decodeStartRule()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl_decodeStartRule___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 297 , L1259174396 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/TimeZoneImpl.decodeEndRule()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl_decodeEndRule___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 298 , L1276709283 , bytecode index = 
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

void bridge_java_util_TimeZoneImpl_decodeRules___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_TimeZoneImpl_decodeRules___V(runtime, ins);
}


// locals: 1
// stack: 4
// args: 0
void func_java_util_TimeZoneImpl_decodeStartRule___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 695, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 302 , L227755469 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 302;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startDay_10;
    sp += 0;
    if(stack[--sp].i  == 0) goto L762384154;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endDay_14;
    sp += 0;
    if(stack[--sp].i  == 0) goto L762384154;
    // iconst_1
    stack[sp++].i = 1;
    goto L690052870;
    L762384154:
    // iconst_0
    stack[sp++].i = 0;
    L690052870:
    // putfield java/util/TimeZoneImpl useDaylight Z
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->useDaylight_19 = stack[sp + 1].i;
    ; 
    //  line no 303 , L1498438472 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startDay_10;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1325056130;
    ; 
    //  line no 304 , L1809194904 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startMonth I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startMonth_9;
    sp += 0;
    if(stack[--sp].i  < 0) goto L1219273867;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startMonth I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startMonth_9;
    sp += 0;
    //  bipush 11
    stack[sp++].i = 11;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L335359181;
    L1219273867:
    //  line no 305 , L1219273867 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1089);
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
    // getfield java/util/TimeZoneImpl startMonth I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startMonth_9;
    sp += 0;
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
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1219273867 in labeltable is :L1219273867
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 305;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L335359181:
    //  line no 308 , L335359181 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startTime I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startTime_12;
    sp += 0;
    if(stack[--sp].i  < 0) goto L194707680;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startTime I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startTime_12;
    sp += 0;
    //  ldc 
    stack[sp++].i = 0x5265c00;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1349182676;
    L194707680:
    //  line no 309 , L194707680 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1090);
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
    // getfield java/util/TimeZoneImpl startTime I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startTime_12;
    sp += 0;
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
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L194707680 in labeltable is :L194707680
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 309;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1349182676:
    //  line no 312 , L1349182676 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startDayOfWeek I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startDayOfWeek_11;
    sp += 0;
    if(stack[--sp].i  != 0) goto L2102368942;
    ; 
    //  line no 313 , L120478350 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield java/util/TimeZoneImpl startMode I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->startMode_24 = stack[sp + 1].i;
    goto L1424082571;
    L2102368942:
    //  line no 315 , L2102368942 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startDayOfWeek I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startDayOfWeek_11;
    sp += 0;
    if(stack[--sp].i  <= 0) goto L1403700359;
    ; 
    //  line no 316 , L1387380406 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_2
    stack[sp++].i = 2;
    // putfield java/util/TimeZoneImpl startMode I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->startMode_24 = stack[sp + 1].i;
    goto L658404420;
    L1403700359:
    //  line no 318 , L1403700359 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startDayOfWeek I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startDayOfWeek_11;
    sp += 0;
    stack[sp - 1].i = -stack[sp - 1].i; 
    // putfield java/util/TimeZoneImpl startDayOfWeek I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->startDayOfWeek_11 = stack[sp + 1].i;
    ; 
    //  line no 319 , L2108763062 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startDay_10;
    sp += 0;
    if(stack[--sp].i  <= 0) goto L2017085051;
    ; 
    //  line no 320 , L656479172 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_3
    stack[sp++].i = 3;
    // putfield java/util/TimeZoneImpl startMode I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->startMode_24 = stack[sp + 1].i;
    goto L658404420;
    L2017085051:
    //  line no 322 , L2017085051 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startDay_10;
    sp += 0;
    stack[sp - 1].i = -stack[sp - 1].i; 
    // putfield java/util/TimeZoneImpl startDay I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->startDay_10 = stack[sp + 1].i;
    ; 
    //  line no 323 , L1944702768 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_4
    stack[sp++].i = 4;
    // putfield java/util/TimeZoneImpl startMode I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->startMode_24 = stack[sp + 1].i;
    L658404420:
    //  line no 326 , L658404420 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startDayOfWeek I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startDayOfWeek_11;
    sp += 0;
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1424082571;
    ; 
    //  line no 327 , L124888672 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1091);
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
    // getfield java/util/TimeZoneImpl startDayOfWeek I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startDayOfWeek_11;
    sp += 0;
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
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L124888672 in labeltable is :L124888672
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 327;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1424082571:
    //  line no 331 , L1424082571 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startMode I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startMode_24;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L760357227;
    ; 
    //  line no 332 , L37926966 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startDay_10;
    sp += 0;
    //  bipush -5
    stack[sp++].i = -5;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1064265473;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startDay_10;
    sp += 0;
    // iconst_5
    stack[sp++].i = 5;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1325056130;
    L1064265473:
    //  line no 333 , L1064265473 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1092);
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
    // getfield java/util/TimeZoneImpl startDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startDay_10;
    sp += 0;
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
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1064265473 in labeltable is :L1064265473
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 333;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L760357227:
    //  line no 336 , L760357227 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startDay_10;
    sp += 0;
    // getstatic java/util/TimeZoneImpl staticMonthLength [B
    rstack[sp].obj =static_var_java_util_TimeZoneImpl.staticMonthLength_23;
    sp += 1;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startMonth I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startMonth_9;
    sp += 0;
    // arrload s8  ,  L760357227 bc index = 
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
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1325056130;
    ; 
    //  line no 337 , L891786282 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1093);
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
    // getfield java/util/TimeZoneImpl startDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startDay_10;
    sp += 0;
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
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L891786282 in labeltable is :L891786282
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 337;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1325056130:
    //  line no 341 , L1325056130 , bytecode index = 
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

void bridge_java_util_TimeZoneImpl_decodeStartRule___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_TimeZoneImpl_decodeStartRule___V(runtime, ins);
}


// locals: 1
// stack: 4
// args: 0
void func_java_util_TimeZoneImpl_decodeEndRule___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 696, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 345 , L517355658 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 345;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl startDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->startDay_10;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1514476350;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endDay_14;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1514476350;
    // iconst_1
    stack[sp++].i = 1;
    goto L1397381784;
    L1514476350:
    // iconst_0
    stack[sp++].i = 0;
    L1397381784:
    // putfield java/util/TimeZoneImpl useDaylight Z
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->useDaylight_19 = stack[sp + 1].i;
    ; 
    //  line no 346 , L1333810223 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endDay_14;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1623009085;
    ; 
    //  line no 347 , L303240439 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endMonth I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endMonth_13;
    sp += 0;
    if(stack[--sp].i  < 0) goto L319558327;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endMonth I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endMonth_13;
    sp += 0;
    //  bipush 11
    stack[sp++].i = 11;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1583353301;
    L319558327:
    //  line no 348 , L319558327 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1095);
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
    // getfield java/util/TimeZoneImpl endMonth I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endMonth_13;
    sp += 0;
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
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L319558327 in labeltable is :L319558327
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 348;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1583353301:
    //  line no 351 , L1583353301 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endTime I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endTime_16;
    sp += 0;
    if(stack[--sp].i  < 0) goto L1466785259;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endTime I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endTime_16;
    sp += 0;
    //  ldc 
    stack[sp++].i = 0x5265c00;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1565740893;
    L1466785259:
    //  line no 352 , L1466785259 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1096);
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
    // getfield java/util/TimeZoneImpl endTime I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endTime_16;
    sp += 0;
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
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1466785259 in labeltable is :L1466785259
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 352;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1565740893:
    //  line no 355 , L1565740893 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endDayOfWeek I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endDayOfWeek_15;
    sp += 0;
    if(stack[--sp].i  != 0) goto L775514090;
    ; 
    //  line no 356 , L1894369629 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield java/util/TimeZoneImpl endMode I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->endMode_25 = stack[sp + 1].i;
    goto L1297502382;
    L775514090:
    //  line no 358 , L775514090 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endDayOfWeek I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endDayOfWeek_15;
    sp += 0;
    if(stack[--sp].i  <= 0) goto L171493374;
    ; 
    //  line no 359 , L1876682596 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_2
    stack[sp++].i = 2;
    // putfield java/util/TimeZoneImpl endMode I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->endMode_25 = stack[sp + 1].i;
    goto L1371957475;
    L171493374:
    //  line no 361 , L171493374 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endDayOfWeek I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endDayOfWeek_15;
    sp += 0;
    stack[sp - 1].i = -stack[sp - 1].i; 
    // putfield java/util/TimeZoneImpl endDayOfWeek I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->endDayOfWeek_15 = stack[sp + 1].i;
    ; 
    //  line no 362 , L778731861 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endDay_14;
    sp += 0;
    if(stack[--sp].i  <= 0) goto L1646371921;
    ; 
    //  line no 363 , L1383178166 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_3
    stack[sp++].i = 3;
    // putfield java/util/TimeZoneImpl endMode I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->endMode_25 = stack[sp + 1].i;
    goto L1371957475;
    L1646371921:
    //  line no 365 , L1646371921 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endDay_14;
    sp += 0;
    stack[sp - 1].i = -stack[sp - 1].i; 
    // putfield java/util/TimeZoneImpl endDay I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->endDay_14 = stack[sp + 1].i;
    ; 
    //  line no 366 , L806511723 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_4
    stack[sp++].i = 4;
    // putfield java/util/TimeZoneImpl endMode I
    sp -= 2;
    ((struct java_util_TimeZoneImpl*)rstack[sp + 0].obj)->endMode_25 = stack[sp + 1].i;
    L1371957475:
    //  line no 369 , L1371957475 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endDayOfWeek I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endDayOfWeek_15;
    sp += 0;
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1297502382;
    ; 
    //  line no 370 , L1250442005 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1097);
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
    // getfield java/util/TimeZoneImpl endDayOfWeek I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endDayOfWeek_15;
    sp += 0;
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
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1250442005 in labeltable is :L1250442005
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 370;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1297502382:
    //  line no 374 , L1297502382 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endMode I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endMode_25;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L627318073;
    ; 
    //  line no 375 , L2067180044 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endDay_14;
    sp += 0;
    //  bipush -5
    stack[sp++].i = -5;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1478797373;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endDay_14;
    sp += 0;
    // iconst_5
    stack[sp++].i = 5;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1623009085;
    L1478797373:
    //  line no 376 , L1478797373 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1098);
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
    // getfield java/util/TimeZoneImpl endDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endDay_14;
    sp += 0;
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
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1478797373 in labeltable is :L1478797373
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 376;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L627318073:
    //  line no 379 , L627318073 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endDay_14;
    sp += 0;
    // getstatic java/util/TimeZoneImpl staticMonthLength [B
    rstack[sp].obj =static_var_java_util_TimeZoneImpl.staticMonthLength_23;
    sp += 1;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/TimeZoneImpl endMonth I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endMonth_13;
    sp += 0;
    // arrload s8  ,  L627318073 bc index = 
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
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1623009085;
    ; 
    //  line no 380 , L1400856767 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1099);
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
    // getfield java/util/TimeZoneImpl endDay I
    stack[sp - 1].i = ((struct java_util_TimeZoneImpl*)rstack[sp - 1].obj)->endDay_14;
    sp += 0;
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
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1400856767 in labeltable is :L1400856767
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 380;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1623009085:
    //  line no 384 , L1623009085 , bytecode index = 
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

void bridge_java_util_TimeZoneImpl_decodeEndRule___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_TimeZoneImpl_decodeEndRule___V(runtime, ins);
}


// locals: 0
// stack: 16
// args: 1
void func_java_util_TimeZoneImpl__clinit____V(JThreadRuntime *runtime, struct java_util_TimeZoneImpl* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[17];
    RStackItem rstack[17];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 697, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 7 , L417301556 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 7;
    // aconst null
    rstack[sp++].obj = NULL;
    // putstatic java/util/TimeZoneImpl HOME_ID Ljava/lang/String;
    sp -= 1;
    static_var_java_util_TimeZoneImpl.HOME_1ID_3 = rstack[sp].obj;
    ; 
    //  line no 237 , L1707582034 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    // putstatic java/util/TimeZoneImpl ids [Ljava/lang/String;
    sp -= 1;
    static_var_java_util_TimeZoneImpl.ids_8 = rstack[sp].obj;
    ; 
    //  line no 277 , L1293241549 , bytecode index = 
    //  bipush 12
    stack[sp++].i = 12;
    // ; newarray/multiarray Dimension Array: [B 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(741));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 31
    stack[sp++].i = 31;
    // arrstore s8  ,  L1293241549 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    //  bipush 29
    stack[sp++].i = 29;
    // arrstore s8  ,  L1293241549 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_2
    stack[sp++].i = 2;
    //  bipush 31
    stack[sp++].i = 31;
    // arrstore s8  ,  L1293241549 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_3
    stack[sp++].i = 3;
    //  bipush 30
    stack[sp++].i = 30;
    // arrstore s8  ,  L1293241549 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_4
    stack[sp++].i = 4;
    //  bipush 31
    stack[sp++].i = 31;
    // arrstore s8  ,  L1293241549 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_5
    stack[sp++].i = 5;
    //  bipush 30
    stack[sp++].i = 30;
    // arrstore s8  ,  L1293241549 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 6
    stack[sp++].i = 6;
    //  bipush 31
    stack[sp++].i = 31;
    // arrstore s8  ,  L1293241549 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 7
    stack[sp++].i = 7;
    //  bipush 31
    stack[sp++].i = 31;
    // arrstore s8  ,  L1293241549 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 8
    stack[sp++].i = 8;
    //  bipush 30
    stack[sp++].i = 30;
    // arrstore s8  ,  L1293241549 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 9
    stack[sp++].i = 9;
    //  bipush 31
    stack[sp++].i = 31;
    // arrstore s8  ,  L1293241549 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 10
    stack[sp++].i = 10;
    //  bipush 30
    stack[sp++].i = 30;
    // arrstore s8  ,  L1293241549 bc index = 
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  bipush 11
    stack[sp++].i = 11;
    //  bipush 31
    stack[sp++].i = 31;
    // arrstore s8  ,  L1293241549 bc index = 
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
    // putstatic java/util/TimeZoneImpl staticMonthLength [B
    sp -= 1;
    static_var_java_util_TimeZoneImpl.staticMonthLength_23 = rstack[sp].obj;
    ; 
    //  line no 386 , L580673921 , bytecode index = 
    //  sipush 320
    stack[sp++].i = 320;
    // ; newarray/multiarray Dimension Array: [Ljava/util/TimeZone; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1100));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 138);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1085);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfddaaf00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1101);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfe119d80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1102);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfe119d80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1103);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfe488c00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1104);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfe488c00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1105);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfe488c00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1106);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfe488c00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1107);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfe7f7a80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1108);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfe7f7a80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1109);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfe7f7a80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1110);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 12
    stack[sp++].i = 12;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfe7f7a80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1111);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 13
    stack[sp++].i = 13;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfe7f7a80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1112);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 14
    stack[sp++].i = 14;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfe7f7a80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1113);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 15
    stack[sp++].i = 15;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfe7f7a80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1114);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 16
    stack[sp++].i = 16;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeb66900;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1115);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 17
    stack[sp++].i = 17;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeb66900;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1116);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 18
    stack[sp++].i = 18;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeb66900;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1117);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 19
    stack[sp++].i = 19;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeb66900;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1118);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 20
    stack[sp++].i = 20;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeb66900;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1119);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 21
    stack[sp++].i = 21;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeb66900;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1120);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 22
    stack[sp++].i = 22;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeb66900;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1121);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 23
    stack[sp++].i = 23;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeb66900;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1122);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 24
    stack[sp++].i = 24;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeb66900;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1123);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 25
    stack[sp++].i = 25;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeb66900;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1124);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 26
    stack[sp++].i = 26;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeed5780;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1125);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 27
    stack[sp++].i = 27;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeed5780;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1126);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 28
    stack[sp++].i = 28;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeed5780;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1127);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 29
    stack[sp++].i = 29;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeed5780;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1128);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 30
    stack[sp++].i = 30;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeed5780;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1129);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 31
    stack[sp++].i = 31;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeed5780;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1130);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 32
    stack[sp++].i = 32;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeed5780;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1131);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 33
    stack[sp++].i = 33;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeed5780;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1132);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 34
    stack[sp++].i = 34;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeed5780;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1133);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 35
    stack[sp++].i = 35;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeed5780;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1134);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 36
    stack[sp++].i = 36;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeed5780;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1135);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 37
    stack[sp++].i = 37;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeed5780;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1136);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 38
    stack[sp++].i = 38;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeed5780;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1137);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 9
    stack[sp++].i = 9;
    //  bipush 8
    stack[sp++].i = 8;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 39
    stack[sp++].i = 39;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeed5780;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1138);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 40
    stack[sp++].i = 40;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeed5780;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1139);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 41
    stack[sp++].i = 41;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeed5780;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1140);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 42
    stack[sp++].i = 42;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeed5780;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1141);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 43
    stack[sp++].i = 43;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1142);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 44
    stack[sp++].i = 44;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1143);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 45
    stack[sp++].i = 45;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1144);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 46
    stack[sp++].i = 46;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1145);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 47
    stack[sp++].i = 47;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1146);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 48
    stack[sp++].i = 48;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1147);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 49
    stack[sp++].i = 49;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1148);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 50
    stack[sp++].i = 50;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1149);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 51
    stack[sp++].i = 51;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1150);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 52
    stack[sp++].i = 52;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1151);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 53
    stack[sp++].i = 53;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1152);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 54
    stack[sp++].i = 54;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1153);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 55
    stack[sp++].i = 55;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1154);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 56
    stack[sp++].i = 56;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1155);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 57
    stack[sp++].i = 57;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1156);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 58
    stack[sp++].i = 58;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1157);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 59
    stack[sp++].i = 59;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1158);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 60
    stack[sp++].i = 60;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1159);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 61
    stack[sp++].i = 61;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1160);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 62
    stack[sp++].i = 62;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1161);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 63
    stack[sp++].i = 63;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1162);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 64
    stack[sp++].i = 64;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1163);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 65
    stack[sp++].i = 65;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1164);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 66
    stack[sp++].i = 66;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1165);
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_1
    stack[sp++].i = 1;
    //  bipush 11
    stack[sp++].i = 11;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 67
    stack[sp++].i = 67;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1166);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 68
    stack[sp++].i = 68;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1167);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 69
    stack[sp++].i = 69;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1168);
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_2
    stack[sp++].i = 2;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 70
    stack[sp++].i = 70;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1169);
    //  bipush 9
    stack[sp++].i = 9;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_2
    stack[sp++].i = 2;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 71
    stack[sp++].i = 71;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff3fbd40;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1170);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 72
    stack[sp++].i = 72;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff3fbd40;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1171);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 73
    stack[sp++].i = 73;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff5b3480;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1172);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 74
    stack[sp++].i = 74;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff5b3480;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1173);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 75
    stack[sp++].i = 75;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff5b3480;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1174);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 76
    stack[sp++].i = 76;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff5b3480;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1175);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 77
    stack[sp++].i = 77;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff5b3480;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1176);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 78
    stack[sp++].i = 78;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff5b3480;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1177);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 79
    stack[sp++].i = 79;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff5b3480;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1178);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    //  bipush 7
    stack[sp++].i = 7;
    //  ldc 
    stack[sp++].i = 0x4b87f00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    //  bipush 7
    stack[sp++].i = 7;
    //  ldc 
    stack[sp++].i = 0x4b87f00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 80
    stack[sp++].i = 80;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff5b3480;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1179);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 81
    stack[sp++].i = 81;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff5b3480;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1180);
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_1
    stack[sp++].i = 1;
    //  bipush 11
    stack[sp++].i = 11;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 82
    stack[sp++].i = 82;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff5b3480;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1181);
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_1
    stack[sp++].i = 1;
    //  bipush 11
    stack[sp++].i = 11;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 83
    stack[sp++].i = 83;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff922300;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1182);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 84
    stack[sp++].i = 84;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xffc91180;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1183);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 85
    stack[sp++].i = 85;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1184);
    //  bipush 9
    stack[sp++].i = 9;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_2
    stack[sp++].i = 2;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 86
    stack[sp++].i = 86;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1499700;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1185);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 87
    stack[sp++].i = 87;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1b77400;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1186);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 88
    stack[sp++].i = 88;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2255100;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1187);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 89
    stack[sp++].i = 89;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2932e00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1188);
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    // iconst_2
    stack[sp++].i = 2;
    //  bipush 15
    stack[sp++].i = 15;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 90
    stack[sp++].i = 90;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1b77400;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1189);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 91
    stack[sp++].i = 91;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x209d9c0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1190);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 92
    stack[sp++].i = 92;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x209d9c0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1191);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 93
    stack[sp++].i = 93;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x209d9c0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1192);
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 94
    stack[sp++].i = 94;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2255100;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1193);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 95
    stack[sp++].i = 95;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2255100;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1194);
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 96
    stack[sp++].i = 96;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2255100;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1195);
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 97
    stack[sp++].i = 97;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x240c840;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1196);
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x1b7740;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 98
    stack[sp++].i = 98;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1197);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 99
    stack[sp++].i = 99;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff244600;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1198);
    //  bipush 8
    stack[sp++].i = 8;
    //  bipush 8
    stack[sp++].i = 8;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_3
    stack[sp++].i = 3;
    //  bipush 16
    stack[sp++].i = 16;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 100
    stack[sp++].i = 100;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xff922300;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1199);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 101
    stack[sp++].i = 101;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xffc91180;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1200);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 102
    stack[sp++].i = 102;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xffc91180;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1201);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 103
    stack[sp++].i = 103;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xffc91180;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1202);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 104
    stack[sp++].i = 104;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1203);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 105
    stack[sp++].i = 105;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1204);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 106
    stack[sp++].i = 106;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1205);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 107
    stack[sp++].i = 107;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1206);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 108
    stack[sp++].i = 108;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1207);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 109
    stack[sp++].i = 109;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1208);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 110
    stack[sp++].i = 110;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1209);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 111
    stack[sp++].i = 111;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1210);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 112
    stack[sp++].i = 112;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1211);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 113
    stack[sp++].i = 113;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1212);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 114
    stack[sp++].i = 114;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1213);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 115
    stack[sp++].i = 115;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1214);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 116
    stack[sp++].i = 116;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1215);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 117
    stack[sp++].i = 117;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1216);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 118
    stack[sp++].i = 118;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1217);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 119
    stack[sp++].i = 119;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1218);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 120
    stack[sp++].i = 120;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1219);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 121
    stack[sp++].i = 121;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1220);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 122
    stack[sp++].i = 122;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1221);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 123
    stack[sp++].i = 123;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1222);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 124
    stack[sp++].i = 124;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1223);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 125
    stack[sp++].i = 125;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1224);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 126
    stack[sp++].i = 126;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1225);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  bipush 127
    stack[sp++].i = 127;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1226);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 128
    stack[sp++].i = 128;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1227);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 129
    stack[sp++].i = 129;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1228);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 130
    stack[sp++].i = 130;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1229);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 131
    stack[sp++].i = 131;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1230);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 132
    stack[sp++].i = 132;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1231);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 133
    stack[sp++].i = 133;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1232);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 134
    stack[sp++].i = 134;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1233);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_5
    stack[sp++].i = 5;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_1
    stack[sp++].i = 1;
    //  bipush -5
    stack[sp++].i = -5;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 135
    stack[sp++].i = 135;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1234);
    //  bipush 8
    stack[sp++].i = 8;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 136
    stack[sp++].i = 136;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1235);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 137
    stack[sp++].i = 137;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1236);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 138
    stack[sp++].i = 138;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1237);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 139
    stack[sp++].i = 139;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1238);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 140
    stack[sp++].i = 140;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1239);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 141
    stack[sp++].i = 141;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1240);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 142
    stack[sp++].i = 142;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1241);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 143
    stack[sp++].i = 143;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1242);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 144
    stack[sp++].i = 144;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1243);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 145
    stack[sp++].i = 145;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1244);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 146
    stack[sp++].i = 146;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1245);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 147
    stack[sp++].i = 147;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1246);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 148
    stack[sp++].i = 148;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1247);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 149
    stack[sp++].i = 149;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1248);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_-1
    stack[sp++].i = -1;
    //  bipush 6
    stack[sp++].i = 6;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  bipush 8
    stack[sp++].i = 8;
    // iconst_-1
    stack[sp++].i = -1;
    //  bipush 6
    stack[sp++].i = 6;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 150
    stack[sp++].i = 150;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1249);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_-1
    stack[sp++].i = -1;
    //  bipush 6
    stack[sp++].i = 6;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  bipush 8
    stack[sp++].i = 8;
    // iconst_-1
    stack[sp++].i = -1;
    //  bipush 6
    stack[sp++].i = 6;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 151
    stack[sp++].i = 151;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1250);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 152
    stack[sp++].i = 152;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1251);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 153
    stack[sp++].i = 153;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1252);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 154
    stack[sp++].i = 154;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1253);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 155
    stack[sp++].i = 155;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1254);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 156
    stack[sp++].i = 156;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1255);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 157
    stack[sp++].i = 157;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1256);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 158
    stack[sp++].i = 158;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1257);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 159
    stack[sp++].i = 159;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1258);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 160
    stack[sp++].i = 160;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1259);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 161
    stack[sp++].i = 161;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1260);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 162
    stack[sp++].i = 162;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1261);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 163
    stack[sp++].i = 163;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1262);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 164
    stack[sp++].i = 164;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1263);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 165
    stack[sp++].i = 165;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1264);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 166
    stack[sp++].i = 166;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1265);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 167
    stack[sp++].i = 167;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1266);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 168
    stack[sp++].i = 168;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1267);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 169
    stack[sp++].i = 169;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1268);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 170
    stack[sp++].i = 170;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1269);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 171
    stack[sp++].i = 171;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1270);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 172
    stack[sp++].i = 172;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1271);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 173
    stack[sp++].i = 173;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1272);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 174
    stack[sp++].i = 174;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1273);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 175
    stack[sp++].i = 175;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1274);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 176
    stack[sp++].i = 176;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1275);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 177
    stack[sp++].i = 177;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1276);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 178
    stack[sp++].i = 178;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1277);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 179
    stack[sp++].i = 179;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1278);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 180
    stack[sp++].i = 180;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1279);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 181
    stack[sp++].i = 181;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1280);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 182
    stack[sp++].i = 182;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1281);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 183
    stack[sp++].i = 183;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1282);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 184
    stack[sp++].i = 184;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1283);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 185
    stack[sp++].i = 185;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1284);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 186
    stack[sp++].i = 186;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1285);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 187
    stack[sp++].i = 187;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1286);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 188
    stack[sp++].i = 188;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1287);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 189
    stack[sp++].i = 189;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1288);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 190
    stack[sp++].i = 190;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1289);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 191
    stack[sp++].i = 191;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1290);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 8
    stack[sp++].i = 8;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 192
    stack[sp++].i = 192;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1291);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 193
    stack[sp++].i = 193;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1292);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 194
    stack[sp++].i = 194;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1293);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 195
    stack[sp++].i = 195;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1294);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 196
    stack[sp++].i = 196;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1295);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 197
    stack[sp++].i = 197;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1296);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 198
    stack[sp++].i = 198;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1297);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 199
    stack[sp++].i = 199;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1298);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 200
    stack[sp++].i = 200;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xdbba00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1299);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 201
    stack[sp++].i = 201;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1300);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 8
    stack[sp++].i = 8;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 202
    stack[sp++].i = 202;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1301);
    // iconst_2
    stack[sp++].i = 2;
    //  bipush 15
    stack[sp++].i = 15;
    //  bipush -6
    stack[sp++].i = -6;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 8
    stack[sp++].i = 8;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 203
    stack[sp++].i = 203;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1302);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    //  bipush -6
    stack[sp++].i = -6;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 8
    stack[sp++].i = 8;
    //  bipush 15
    stack[sp++].i = 15;
    //  bipush -6
    stack[sp++].i = -6;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 204
    stack[sp++].i = 204;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1303);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 8
    stack[sp++].i = 8;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 205
    stack[sp++].i = 205;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1304);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 206
    stack[sp++].i = 206;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1305);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 207
    stack[sp++].i = 207;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1306);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 208
    stack[sp++].i = 208;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1307);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 209
    stack[sp++].i = 209;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1308);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 210
    stack[sp++].i = 210;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1309);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 211
    stack[sp++].i = 211;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1310);
    // iconst_3
    stack[sp++].i = 3;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0xdbba00;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 212
    stack[sp++].i = 212;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xc042c0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1311);
    // iconst_2
    stack[sp++].i = 2;
    //  bipush 21
    stack[sp++].i = 21;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 8
    stack[sp++].i = 8;
    //  bipush 23
    stack[sp++].i = 23;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 213
    stack[sp++].i = 213;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xc042c0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1312);
    // iconst_2
    stack[sp++].i = 2;
    //  bipush 21
    stack[sp++].i = 21;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 8
    stack[sp++].i = 8;
    //  bipush 23
    stack[sp++].i = 23;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 214
    stack[sp++].i = 214;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xdbba00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1313);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 215
    stack[sp++].i = 215;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xdbba00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1314);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 216
    stack[sp++].i = 216;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xdbba00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1315);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 217
    stack[sp++].i = 217;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xdbba00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1316);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 218
    stack[sp++].i = 218;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xdbba00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1317);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x112a880;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x112a880;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 219
    stack[sp++].i = 219;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xdbba00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1318);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 220
    stack[sp++].i = 220;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xf73140;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1319);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 221
    stack[sp++].i = 221;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x112a880;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1320);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 222
    stack[sp++].i = 222;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x112a880;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1321);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 223
    stack[sp++].i = 223;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x112a880;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1322);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 224
    stack[sp++].i = 224;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x112a880;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1323);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 225
    stack[sp++].i = 225;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x112a880;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1324);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 226
    stack[sp++].i = 226;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x112a880;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1325);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 227
    stack[sp++].i = 227;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x112a880;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1326);
    // iconst_3
    stack[sp++].i = 3;
    //  bipush 7
    stack[sp++].i = 7;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 8
    stack[sp++].i = 8;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 228
    stack[sp++].i = 228;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x112a880;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1327);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 229
    stack[sp++].i = 229;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x112a880;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1328);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 230
    stack[sp++].i = 230;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x12e1fc0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1329);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 231
    stack[sp++].i = 231;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x12e1fc0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1330);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 232
    stack[sp++].i = 232;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x13bdb60;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1331);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 233
    stack[sp++].i = 233;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1499700;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1332);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 234
    stack[sp++].i = 234;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1499700;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1333);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 235
    stack[sp++].i = 235;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1499700;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1334);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 236
    stack[sp++].i = 236;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1499700;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1335);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 237
    stack[sp++].i = 237;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1499700;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1336);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 238
    stack[sp++].i = 238;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1499700;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1337);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 239
    stack[sp++].i = 239;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1650e40;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1338);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 240
    stack[sp++].i = 240;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1808580;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1339);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 241
    stack[sp++].i = 241;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1808580;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1340);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 242
    stack[sp++].i = 242;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1808580;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1341);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 243
    stack[sp++].i = 243;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1808580;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1342);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 244
    stack[sp++].i = 244;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1808580;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1343);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 245
    stack[sp++].i = 245;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1808580;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1344);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 246
    stack[sp++].i = 246;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1808580;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1345);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 247
    stack[sp++].i = 247;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1b77400;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1346);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 248
    stack[sp++].i = 248;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1b77400;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1347);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 249
    stack[sp++].i = 249;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1b77400;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1348);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 250
    stack[sp++].i = 250;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1b77400;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1349);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 251
    stack[sp++].i = 251;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1b77400;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1350);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 252
    stack[sp++].i = 252;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1b77400;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1351);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 253
    stack[sp++].i = 253;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1b77400;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1352);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 254
    stack[sp++].i = 254;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1b77400;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1353);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 255
    stack[sp++].i = 255;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1b77400;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1354);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 256
    stack[sp++].i = 256;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1b77400;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1355);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 257
    stack[sp++].i = 257;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1b77400;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1356);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 258
    stack[sp++].i = 258;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1b77400;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1357);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 8
    stack[sp++].i = 8;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 259
    stack[sp++].i = 259;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1b77400;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1358);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 260
    stack[sp++].i = 260;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1ee6280;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1359);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 261
    stack[sp++].i = 261;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1ee6280;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1360);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 262
    stack[sp++].i = 262;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1ee6280;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1361);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 263
    stack[sp++].i = 263;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1ee6280;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1362);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 264
    stack[sp++].i = 264;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1ee6280;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1363);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 265
    stack[sp++].i = 265;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1ee6280;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1364);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 266
    stack[sp++].i = 266;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2255100;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1365);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 267
    stack[sp++].i = 267;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x25c3f80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1366);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 268
    stack[sp++].i = 268;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2932e00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1367);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 269
    stack[sp++].i = 269;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2ca1c80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1368);
    // iconst_2
    stack[sp++].i = 2;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 270
    stack[sp++].i = 270;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1369);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 271
    stack[sp++].i = 271;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1370);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 272
    stack[sp++].i = 272;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1371);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 273
    stack[sp++].i = 273;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xdbba00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1372);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 274
    stack[sp++].i = 274;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xdbba00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1373);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 275
    stack[sp++].i = 275;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xdbba00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1374);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 276
    stack[sp++].i = 276;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x112a880;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1375);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 277
    stack[sp++].i = 277;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x112a880;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1376);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 278
    stack[sp++].i = 278;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x112a880;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1377);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 279
    stack[sp++].i = 279;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1650e40;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1378);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 280
    stack[sp++].i = 280;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1808580;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1379);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 281
    stack[sp++].i = 281;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x1ee6280;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1380);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 282
    stack[sp++].i = 282;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2255100;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1381);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 283
    stack[sp++].i = 283;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2255100;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1382);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 284
    stack[sp++].i = 284;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2255100;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1383);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 285
    stack[sp++].i = 285;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2255100;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1384);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 286
    stack[sp++].i = 286;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x25c3f80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1385);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 287
    stack[sp++].i = 287;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x25c3f80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1386);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 288
    stack[sp++].i = 288;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x25c3f80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1387);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 289
    stack[sp++].i = 289;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x25c3f80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1388);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 290
    stack[sp++].i = 290;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x25c3f80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1389);
    //  bipush 10
    stack[sp++].i = 10;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    // iconst_2
    stack[sp++].i = 2;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 291
    stack[sp++].i = 291;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfda3c080;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1390);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 292
    stack[sp++].i = 292;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfda3c080;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1391);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 293
    stack[sp++].i = 293;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfda3c080;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1392);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 294
    stack[sp++].i = 294;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfda3c080;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1393);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 295
    stack[sp++].i = 295;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfddaaf00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1394);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 296
    stack[sp++].i = 296;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfddaaf00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1395);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 297
    stack[sp++].i = 297;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfddaaf00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1396);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 298
    stack[sp++].i = 298;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfddaaf00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1397);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 299
    stack[sp++].i = 299;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfddaaf00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1398);
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_2
    stack[sp++].i = 2;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x1b7740;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 300
    stack[sp++].i = 300;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfdf62640;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1399);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 301
    stack[sp++].i = 301;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfe119d80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1400);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 302
    stack[sp++].i = 302;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfe2d14c0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1401);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 303
    stack[sp++].i = 303;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeb66900;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1402);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 304
    stack[sp++].i = 304;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0xfeb66900;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1403);
    //  bipush 9
    stack[sp++].i = 9;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_2
    stack[sp++].i = 2;
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_-1
    stack[sp++].i = -1;
    // iconst_0
    stack[sp++].i = 0;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 305
    stack[sp++].i = 305;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x277b6c0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1404);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 306
    stack[sp++].i = 306;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2932e00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1405);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 307
    stack[sp++].i = 307;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2932e00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1406);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 308
    stack[sp++].i = 308;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2932e00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1407);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 309
    stack[sp++].i = 309;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2932e00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1408);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 310
    stack[sp++].i = 310;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2932e00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1409);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 311
    stack[sp++].i = 311;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2932e00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1410);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 312
    stack[sp++].i = 312;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2932e00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1411);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 313
    stack[sp++].i = 313;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2932e00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1412);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 314
    stack[sp++].i = 314;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2932e00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1413);
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    // iconst_2
    stack[sp++].i = 2;
    //  bipush 15
    stack[sp++].i = 15;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 315
    stack[sp++].i = 315;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2932e00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1414);
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x6ddd00;
    // iconst_2
    stack[sp++].i = 2;
    //  bipush 15
    stack[sp++].i = 15;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0xa4cb80;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 316
    stack[sp++].i = 316;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2bc60e0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1415);
    //  bipush 9
    stack[sp++].i = 9;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0x970fe0;
    // iconst_2
    stack[sp++].i = 2;
    //  bipush 15
    stack[sp++].i = 15;
    // iconst_-1
    stack[sp++].i = -1;
    //  ldc 
    stack[sp++].i = 0xcdfe60;
    //  ldc 
    stack[sp++].i = 0x36ee80;
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;IIIIIIIII)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2IIIIIIIII_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 317
    stack[sp++].i = 317;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2ca1c80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1416);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 318
    stack[sp++].i = 318;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x2ca1c80;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1417);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    //  sipush 319
    stack[sp++].i = 319;
    // new java/util/TimeZoneImpl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 14);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    stack[sp++].i = 0x3010b00;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1418);
    // invokespecial java/util/TimeZoneImpl.<init>(ILjava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_TimeZoneImpl__init___ILjava_lang_String_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L580673921 bc index = 
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
    // putstatic java/util/TimeZoneImpl zones [Ljava/util/TimeZone;
    sp -= 1;
    static_var_java_util_TimeZoneImpl.zones_31 = rstack[sp].obj;
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

void bridge_java_util_TimeZoneImpl__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_TimeZoneImpl__clinit____V(runtime, para[0].obj);
}


