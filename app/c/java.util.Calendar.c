// CLASS: java/util/Calendar extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_Calendar_static {s32 YEAR_0; s32 MONTH_1; s32 DATE_2; s32 DAY_1OF_1MONTH_3; s32 DAY_1OF_1WEEK_4; s32 AM_1PM_5; s32 HOUR_6; s32 HOUR_1OF_1DAY_7; s32 MINUTE_8; s32 SECOND_9; s32 MILLISECOND_10; s32 SUNDAY_11; s32 MONDAY_12; s32 TUESDAY_13; s32 WEDNESDAY_14; s32 THURSDAY_15; s32 FRIDAY_16; s32 SATURDAY_17; s32 JANUARY_18; s32 FEBRUARY_19; s32 MARCH_20; s32 APRIL_21; s32 MAY_22; s32 JUNE_23; s32 JULY_24; s32 AUGUST_25; s32 SEPTEMBER_26; s32 OCTOBER_27; s32 NOVEMBER_28; s32 DECEMBER_29; s32 AM_30; s32 PM_31; s32 FIELDS_32;  };
struct java_util_Calendar_static static_var_java_util_Calendar = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};


__refer arr_vmtable_java_util_Calendar_from_java_util_Calendar[] = {
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
    func_java_util_Calendar_computeFields___V,  //11
    func_java_util_Calendar_computeTime___V  //12
};
__refer arr_vmtable_java_util_Calendar_from_java_lang_Object[] = {
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
VMTable vmtable_java_util_Calendar[] = {
    {216, 13, arr_vmtable_java_util_Calendar_from_java_util_Calendar}, //0
    {5, 10, arr_vmtable_java_util_Calendar_from_java_lang_Object}, //1
};



// locals: 1
// stack: 3
// args: 0
void func_java_util_Calendar__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3064, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 92 , L356300643 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 92;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 89 , L741431520 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/util/Calendar dateObj Ljava/util/Date;
    sp -= 2;
    ((struct java_util_Calendar*)rstack[sp + 0].obj)->dateObj_38 = rstack[sp + 1].obj;
    ; 
    //  line no 93 , L1093582436 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 15
    stack[sp++].i = 15;
    // ; newarray/multiarray Dimension Array: [I 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1044));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/util/Calendar fields [I
    sp -= 2;
    ((struct java_util_Calendar*)rstack[sp + 0].obj)->fields_33 = rstack[sp + 1].obj;
    ; 
    //  line no 94 , L1869813593 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 15
    stack[sp++].i = 15;
    // ; newarray/multiarray Dimension Array: [Z 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(5038));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/util/Calendar isSet [Z
    sp -= 2;
    ((struct java_util_Calendar*)rstack[sp + 0].obj)->isSet_34 = rstack[sp + 1].obj;
    ; 
    //  line no 96 , L528757371 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/util/TimeZone.getDefault()Ljava/util/TimeZone;
    {
        sp -= 1;
        jthread_lock(runtime, (JObject *)g_classes[13].clazz);
        rstack[sp].obj = func_java_util_TimeZone_getDefault___Ljava_util_TimeZone_2(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, (JObject *)g_classes[13].clazz);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/util/Calendar zone Ljava/util/TimeZone;
    sp -= 2;
    ((struct java_util_Calendar*)rstack[sp + 0].obj)->zone_37 = rstack[sp + 1].obj;
    ; 
    //  line no 97 , L961847091 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Calendar zone Ljava/util/TimeZone;
    rstack[sp - 1].obj = ((struct java_util_Calendar*)rstack[sp - 1].obj)->zone_37;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L230546403;
    ; 
    //  line no 98 , L2055458002 , bytecode index = 
    // new java/lang/RuntimeException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 108);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 5039);
    // invokespecial java/lang/RuntimeException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_RuntimeException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L2055458002 in labeltable is :L2055458002
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 98;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L230546403:
    //  line no 100 , L230546403 , bytecode index = 
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
    ; 
    //  line no 101 , L1152003603 , bytecode index = 
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

void bridge_java_util_Calendar__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Calendar__init____V(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_Calendar_getTime___Ljava_util_Date_2[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_util_Calendar_getTime___Ljava_util_Date_2 = {2, arr_extable_func_java_util_Calendar_getTime___Ljava_util_Date_2};

// locals: 3
// stack: 5
// args: 0
struct java_util_Date* func_java_util_Calendar_getTime___Ljava_util_Date_2(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3065, &rstack[0], &rlocal[0], &sp);
    // try catch :L974861985 L1578801260 L1263927050 (
    // try catch :L1263927050 L1185387998 L1263927050 (
    ; 
    //  line no 105 , L627707285 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 105;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Calendar dateObj Ljava/util/Date;
    rstack[sp - 1].obj = ((struct java_util_Calendar*)rstack[sp - 1].obj)->dateObj_38;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L792275116;
    ; 
    //  line no 106 , L1274036206 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/Date
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 217);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
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
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield java/util/Calendar dateObj Ljava/util/Date;
    sp -= 2;
    ((struct java_util_Calendar*)rstack[sp + 0].obj)->dateObj_38 = rstack[sp + 1].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L792275116:
    //  line no 108 , L792275116 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Calendar dateObj Ljava/util/Date;
    rstack[sp - 1].obj = ((struct java_util_Calendar*)rstack[sp - 1].obj)->dateObj_38;
    sp += 0;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[1].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L974861985:
    __frame->bytecodeIndex = 
    //  line no 109 , L974861985 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Calendar dateObj Ljava/util/Date;
    rstack[sp - 1].obj = ((struct java_util_Calendar*)rstack[sp - 1].obj)->dateObj_38;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
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
    // invokevirtual java/util/Date.setTime(J)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s64) = find_method(__ins->vm_table, 217, 1);
        __func_p(runtime, stack[sp + 0].j);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 110 , L830687787 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Calendar dateObj Ljava/util/Date;
    rstack[sp - 1].obj = ((struct java_util_Calendar*)rstack[sp - 1].obj)->dateObj_38;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1578801260:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1263927050:
    __frame->bytecodeIndex = 
    //  line no 111 , L1263927050 , bytecode index = 
    rlocal[2].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1185387998:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[2].obj;
    // athrow
    //     L1185387998 in labeltable is :L1185387998
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 111;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1263927050;
        case 1 : goto L1263927050;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_Calendar_getTime___Ljava_util_Date_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Calendar_getTime___Ljava_util_Date_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
void func_java_util_Calendar_setTime__Ljava_util_Date_2_V(JThreadRuntime *runtime, struct java_util_Date* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3066, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 117 , L585814865 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 117;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
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
    ; 
    //  line no 118 , L1756333997 , bytecode index = 
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

void bridge_java_util_Calendar_setTime__Ljava_util_Date_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Calendar_setTime__Ljava_util_Date_2_V(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_Calendar_getInstance___Ljava_util_Calendar_2[] = {
    { , , 141}
};
ExceptionTable extable_func_java_util_Calendar_getInstance___Ljava_util_Calendar_2 = {1, arr_extable_func_java_util_Calendar_getInstance___Ljava_util_Calendar_2};

// locals: 1
// stack: 1
// args: 1
struct java_util_Calendar* func_java_util_Calendar_getInstance___Ljava_util_Calendar_2(JThreadRuntime *runtime, struct java_util_Calendar* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3067, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L10288247 L1947785070 L1612625071 (
    L10288247:
    __frame->bytecodeIndex = 
    //  line no 124 , L10288247 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 124;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 5043);
    // invokestatic java/lang/Class.forName(Ljava/lang/String;)Ljava/lang/Class;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Class_forName__Ljava_lang_String_2_Ljava_lang_Class_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[0].obj = rstack[--sp].obj;
    ; 
    //  line no 125 , L300804223 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Class.newInstance()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 15, 18);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast java/util/Calendar
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 2242);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    L1947785070:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1612625071:
    //  line no 126 , L1612625071 , bytecode index = 
    rlocal[0].obj = rstack[--sp].obj;
    ; 
    //  line no 128 , L1987428721 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1612625071;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_Calendar_getInstance___Ljava_util_Calendar_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Calendar_getInstance___Ljava_util_Calendar_2(runtime, para[0].obj);
}


// locals: 2
// stack: 2
// args: 2
struct java_util_Calendar* func_java_util_Calendar_getInstance__Ljava_util_TimeZone_2_Ljava_util_Calendar_2(JThreadRuntime *runtime, struct java_util_Calendar* p0, struct java_util_TimeZone* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3068, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 133 , L1155844982 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 133;
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
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 134 , L1372238985 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/Calendar.setTimeZone(Ljava/util/TimeZone;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_util_TimeZone*) = find_method(__ins->vm_table, 216, 9);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 135 , L798626015 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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

void bridge_java_util_Calendar_getInstance__Ljava_util_TimeZone_2_Ljava_util_Calendar_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Calendar_getInstance__Ljava_util_TimeZone_2_Ljava_util_Calendar_2(runtime, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 2
// args: 0
s64 func_java_util_Calendar_getTimeInMillis___J(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3069, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 140 , L367130878 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 140;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Calendar isTimeSet Z
    stack[sp - 1].i = ((struct java_util_Calendar*)rstack[sp - 1].obj)->isTimeSet_36;
    sp += 0;
    if(stack[--sp].i  != 0) goto L285964343;
    ; 
    //  line no 141 , L1860734497 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/Calendar.computeTime()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 216, 12);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 142 , L2027044202 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield java/util/Calendar isTimeSet Z
    sp -= 2;
    ((struct java_util_Calendar*)rstack[sp + 0].obj)->isTimeSet_36 = stack[sp + 1].i;
    L285964343:
    //  line no 144 , L285964343 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Calendar time J
    stack[sp - 1].j = ((struct java_util_Calendar*)rstack[sp - 1].obj)->time_35;
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

void bridge_java_util_Calendar_getTimeInMillis___J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_util_Calendar_getTimeInMillis___J(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
void func_java_util_Calendar_setTimeInMillis__J_V(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3070, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    ; 
    //  line no 149 , L686688828 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 149;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield java/util/Calendar isTimeSet Z
    sp -= 2;
    ((struct java_util_Calendar*)rstack[sp + 0].obj)->isTimeSet_36 = stack[sp + 1].i;
    ; 
    //  line no 150 , L48042118 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Calendar fields [I
    rstack[sp - 1].obj = ((struct java_util_Calendar*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    //  bipush 7
    stack[sp++].i = 7;
    // iconst_0
    stack[sp++].i = 0;
    // arrstore s32  ,  L48042118 bc index = 
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
    //  line no 151 , L1804424410 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].j = local[1].j;
    sp += 2;
    // putfield java/util/Calendar time J
    sp -= 3;
    ((struct java_util_Calendar*)rstack[sp + 0].obj)->time_35 = stack[sp + 1].j;
    ; 
    //  line no 152 , L2039840529 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/Calendar.computeFields()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 216, 11);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 153 , L561133045 , bytecode index = 
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

void bridge_java_util_Calendar_setTimeInMillis__J_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Calendar_setTimeInMillis__J_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s32 func_java_util_Calendar_get__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3071, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 157 , L1256975947 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 157;
    stack[sp++].i = local[1].i;
    //  bipush 7
    stack[sp++].i = 7;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L416579056;
    stack[sp++].i = local[1].i;
    //  bipush 11
    stack[sp++].i = 11;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L416579056;
    stack[sp++].i = local[1].i;
    //  bipush 9
    stack[sp++].i = 9;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L416579056;
    stack[sp++].i = local[1].i;
    //  bipush 10
    stack[sp++].i = 10;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L674840194;
    L416579056:
    //  line no 161 , L416579056 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    sp -= 2; //pop2
    ; 
    //  line no 162 , L1769605448 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/Calendar.computeFields()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 216, 11);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L674840194:
    //  line no 164 , L674840194 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Calendar fields [I
    rstack[sp - 1].obj = ((struct java_util_Calendar*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload s32  ,  L674840194 bc index = 
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

void bridge_java_util_Calendar_get__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Calendar_get__I_I(runtime, ins);
}


// locals: 3
// stack: 3
// args: 2
void func_java_util_Calendar_set__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3072, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 169 , L1198973449 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 169;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/util/Calendar isTimeSet Z
    sp -= 2;
    ((struct java_util_Calendar*)rstack[sp + 0].obj)->isTimeSet_36 = stack[sp + 1].i;
    ; 
    //  line no 171 , L643434827 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Calendar isSet [Z
    rstack[sp - 1].obj = ((struct java_util_Calendar*)rstack[sp - 1].obj)->isSet_34;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    // arrstore s8  ,  L643434827 bc index = 
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
    //  line no 172 , L525558913 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Calendar fields [I
    rstack[sp - 1].obj = ((struct java_util_Calendar*)rstack[sp - 1].obj)->fields_33;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // arrstore s32  ,  L525558913 bc index = 
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
    //  line no 173 , L1379186202 , bytecode index = 
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

void bridge_java_util_Calendar_set__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Calendar_set__II_V(runtime, ins, para[0].i);
}


// locals: 3
// stack: 4
// args: 1
s8 func_java_util_Calendar_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3073, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 177 , L1422140849 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 177;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1354183876;
    ; 
    //  line no 178 , L658824366 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1354183876:
    //  line no 181 , L1354183876 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/util/Calendar
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 2242);
    if(stack[--sp].i  != 0) goto L382788897;
    ; 
    //  line no 182 , L1665967079 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L382788897:
    //  line no 185 , L382788897 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast java/util/Calendar
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 2242);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 186 , L179612254 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    rstack[sp++].obj = rlocal[2].obj;
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
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L185906698;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Calendar zone Ljava/util/TimeZone;
    rstack[sp - 1].obj = ((struct java_util_Calendar*)rstack[sp - 1].obj)->zone_37;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield java/util/Calendar zone Ljava/util/TimeZone;
    rstack[sp - 1].obj = ((struct java_util_Calendar*)rstack[sp - 1].obj)->zone_37;
    sp += 0;
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 5, 3);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L185906698;
    // iconst_1
    stack[sp++].i = 1;
    goto L444380068;
    L185906698:
    // iconst_0
    stack[sp++].i = 0;
    L444380068:
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

void bridge_java_util_Calendar_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Calendar_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
s8 func_java_util_Calendar_before__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3074, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 191 , L870369046 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 191;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/util/Calendar
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 2242);
    if(stack[--sp].i  == 0) goto L493519750;
    rstack[sp++].obj = rlocal[0].obj;
    ; 
    //  line no 192 , L1651831324 , bytecode index = 
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
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast java/util/Calendar
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 2242);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
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
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L493519750;
    // iconst_1
    stack[sp++].i = 1;
    goto L902742789;
    L493519750:
    // iconst_0
    stack[sp++].i = 0;
    L902742789:
    //  line no 191 , L902742789 , bytecode index = 
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

void bridge_java_util_Calendar_before__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Calendar_before__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
s8 func_java_util_Calendar_after__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3075, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 197 , L1226616812 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 197;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/util/Calendar
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 2242);
    if(stack[--sp].i  == 0) goto L213729473;
    rstack[sp++].obj = rlocal[0].obj;
    ; 
    //  line no 198 , L1336437944 , bytecode index = 
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
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast java/util/Calendar
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 2242);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
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
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L213729473;
    // iconst_1
    stack[sp++].i = 1;
    goto L1422262786;
    L213729473:
    // iconst_0
    stack[sp++].i = 0;
    L1422262786:
    //  line no 197 , L1422262786 , bytecode index = 
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

void bridge_java_util_Calendar_after__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_Calendar_after__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_util_Calendar_setTimeZone__Ljava_util_TimeZone_2_V(JThreadRuntime *runtime, struct java_util_TimeZone* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3076, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 203 , L508844065 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 203;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/Calendar zone Ljava/util/TimeZone;
    sp -= 2;
    ((struct java_util_Calendar*)rstack[sp + 0].obj)->zone_37 = rstack[sp + 1].obj;
    ; 
    //  line no 204 , L311765759 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    sp -= 2; //pop2
    ; 
    //  line no 205 , L1990720701 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/Calendar.computeFields()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 216, 11);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 206 , L1128178348 , bytecode index = 
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

void bridge_java_util_Calendar_setTimeZone__Ljava_util_TimeZone_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Calendar_setTimeZone__Ljava_util_TimeZone_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_util_TimeZone* func_java_util_Calendar_getTimeZone___Ljava_util_TimeZone_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 210 , L1148088421 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/Calendar zone Ljava/util/TimeZone;
    rstack[sp - 1].obj = ((struct java_util_Calendar*)rstack[sp - 1].obj)->zone_37;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_util_Calendar_getTimeZone___Ljava_util_TimeZone_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_Calendar_getTimeZone___Ljava_util_TimeZone_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_java_util_Calendar_computeFields___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3078, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_util_Calendar_computeFields___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Calendar_computeFields___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
void func_java_util_Calendar_computeTime___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3079, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_util_Calendar_computeTime___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_Calendar_computeTime___V(runtime, ins);
}


