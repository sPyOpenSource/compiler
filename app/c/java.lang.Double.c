// CLASS: java/lang/Double extends java/lang/Object
#include "metadata.h"

f64 func_java_lang_Double_longBitsToDouble__J_D(JThreadRuntime *runtime, struct java_lang_Double* p0, s64 p1);
s64 func_java_lang_Double_doubleToLongBits__D_J(JThreadRuntime *runtime, struct java_lang_Double* p0, f64 p1);

// generation
// globals
//struct java_lang_Double_static {struct java_lang_Class* TYPE_0; f64 POSITIVE_1INFINITY_1; f64 NEGATIVE_1INFINITY_2; f64 NaN_3; f64 MAX_1VALUE_4; f64 MIN_1VALUE_5;  };
struct java_lang_Double_static static_var_java_lang_Double = {NULL, 0, 0, 0, 0, 0};


__refer arr_vmtable_java_lang_Double_from_java_lang_Double[] = {
    func_java_lang_Double_toString___Ljava_lang_String_2,  //0
    func_java_lang_Double_doubleValue___D  //1
};
__refer arr_vmtable_java_lang_Double_from_java_lang_Object[] = {
    func_java_lang_Double_toString___Ljava_lang_String_2,  //0
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
VMTable vmtable_java_lang_Double[] = {
    {284, 2, arr_vmtable_java_lang_Double_from_java_lang_Double}, //0
    {5, 10, arr_vmtable_java_lang_Double_from_java_lang_Object}, //1
};



// locals: 3
// stack: 3
// args: 1
void func_java_lang_Double__init___D_V(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1727, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 18 , L79706679 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 18;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 19 , L773066329 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].d = local[1].d;
    sp += 2;
    // putfield java/lang/Double value D
    sp -= 3;
    ((struct java_lang_Double*)rstack[sp + 0].obj)->value_6 = stack[sp + 1].d;
    ; 
    //  line no 20 , L1235686146 , bytecode index = 
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

void bridge_java_lang_Double__init___D_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Double__init___D_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct java_lang_String* func_java_lang_Double_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1728, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 23 , L1497538476 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 23;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Double value D
    stack[sp - 1].d = ((struct java_lang_Double*)rstack[sp - 1].obj)->value_6;
    sp += 1;
    // invokestatic java/lang/Double.toString(D)Ljava/lang/String;
    {
        sp -= 3;
        rstack[sp].obj = func_java_lang_Double_toString__D_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
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

void bridge_java_lang_Double_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Double_toString___Ljava_lang_String_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 2
struct java_lang_Double* func_java_lang_Double_valueOf__D_Ljava_lang_Double_2(JThreadRuntime *runtime, struct java_lang_Double* p0, f64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1729, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    ; 
    //  line no 27 , L652481263 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 27;
    // new java/lang/Double
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 284);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp].d = local[0].d;
    sp += 2;
    // invokespecial java/lang/Double.<init>(D)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Double__init___D_V(runtime, stack[sp + 0].d);
        sp += 0;
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

void bridge_java_lang_Double_valueOf__D_Ljava_lang_Double_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Double_valueOf__D_Ljava_lang_Double_2(runtime, para[0].obj, para[1].d);
}


// locals: 1
// stack: 2
// args: 0
f64 func_java_lang_Double_doubleValue___D(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    ; 
    //  line no 31 , L118504112 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Double value D
    stack[sp - 1].d = ((struct java_lang_Double*)rstack[sp - 1].obj)->value_6;
    sp += 1;
    return stack[sp - 2].d;
    ; 
}

void bridge_java_lang_Double_doubleValue___D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Double_doubleValue___D(runtime, ins);
}


// locals: 2
// stack: 2
// args: 2
struct java_lang_String* func_java_lang_Double_toString__D_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_Double* p0, f64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1731, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    ; 
    //  line no 35 , L124376339 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 35;
    stack[sp].d = local[0].d;
    sp += 2;
    // invokestatic java/lang/VM.doubleToString(D)Ljava/lang/String;
    {
        sp -= 3;
        rstack[sp].obj = func_java_lang_VM_doubleToString__D_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
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

void bridge_java_lang_Double_toString__D_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Double_toString__D_Ljava_lang_String_2(runtime, para[0].obj, para[1].d);
}


// locals: 1
// stack: 2
// args: 2
f64 func_java_lang_Double_parseDouble__Ljava_lang_String_2_D(JThreadRuntime *runtime, struct java_lang_Double* p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1732, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 39 , L1485624601 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 39;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/lang/VM.stringToDouble(Ljava/lang/String;)D
    {
        sp -= 2;
        stack[sp].d = func_java_lang_VM_stringToDouble__Ljava_lang_String_2_D(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 2].d;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_Double_parseDouble__Ljava_lang_String_2_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Double_parseDouble__Ljava_lang_String_2_D(runtime, para[0].obj, para[1].obj);
}


// locals: 2
// stack: 4
// args: 2
s8 func_java_lang_Double_isNaN__D_Z(JThreadRuntime *runtime, struct java_lang_Double* p0, f64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1733, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    ; 
    //  line no 43 , L1989826789 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 43;
    stack[sp].d = local[0].d;
    sp += 2;
    stack[sp].d = local[0].d;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  == 0) goto L1442342557;
    // iconst_1
    stack[sp++].i = 1;
    goto L1809995046;
    L1442342557:
    // iconst_0
    stack[sp++].i = 0;
    L1809995046:
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

void bridge_java_lang_Double_isNaN__D_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Double_isNaN__D_Z(runtime, para[0].obj, para[1].d);
}


// locals: 2
// stack: 4
// args: 2
s8 func_java_lang_Double_isInfinite__D_Z(JThreadRuntime *runtime, struct java_lang_Double* p0, f64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1734, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    ; 
    //  line no 47 , L1723498053 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 47;
    stack[sp].d = local[0].d;
    sp += 2;
    // getstatic java/lang/Double POSITIVE_INFINITY D
    stack[sp].d =static_var_java_lang_Double.POSITIVE_1INFINITY_1;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  == 0) goto L1893736577;
    stack[sp].d = local[0].d;
    sp += 2;
    // getstatic java/lang/Double NEGATIVE_INFINITY D
    stack[sp].d =static_var_java_lang_Double.NEGATIVE_1INFINITY_2;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L164757726;
    L1893736577:
    // iconst_1
    stack[sp++].i = 1;
    goto L1360332263;
    L164757726:
    // iconst_0
    stack[sp++].i = 0;
    L1360332263:
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

void bridge_java_lang_Double_isInfinite__D_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Double_isInfinite__D_Z(runtime, para[0].obj, para[1].d);
}

void bridge_java_lang_Double_doubleToLongBits__D_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_lang_Double_doubleToLongBits__D_J(runtime, para[0].obj, para[1].d);
}

void bridge_java_lang_Double_longBitsToDouble__J_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Double_longBitsToDouble__J_D(runtime, para[0].obj, para[1].j);
}


// locals: 0
// stack: 2
// args: 1
void func_java_lang_Double__clinit____V(JThreadRuntime *runtime, struct java_lang_Double* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1737, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 9 , L1970528559 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 9;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3035);
    // invokestatic java/lang/Class.getPrimitiveClass(Ljava/lang/String;)Ljava/lang/Class;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Class_getPrimitiveClass__Ljava_lang_String_2_Ljava_lang_Class_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic java/lang/Double TYPE Ljava/lang/Class;
    sp -= 1;
    static_var_java_lang_Double.TYPE_0 = rstack[sp].obj;
    ; 
    //  line no 10 , L1370597622 , bytecode index = 
    //  ldc 
    stack[sp].j = 0x7ff0000000000000L;
    sp += 2;
    // invokestatic java/lang/Double.longBitsToDouble(J)D
    {
        sp -= 3;
        stack[sp].d = func_java_lang_Double_longBitsToDouble__J_D(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic java/lang/Double POSITIVE_INFINITY D
    sp -= 2;
    static_var_java_lang_Double.POSITIVE_1INFINITY_1 = stack[sp].d;
    ; 
    //  line no 11 , L708350323 , bytecode index = 
    //  ldc 
    stack[sp].j = 0xfff0000000000000L;
    sp += 2;
    // invokestatic java/lang/Double.longBitsToDouble(J)D
    {
        sp -= 3;
        stack[sp].d = func_java_lang_Double_longBitsToDouble__J_D(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic java/lang/Double NEGATIVE_INFINITY D
    sp -= 2;
    static_var_java_lang_Double.NEGATIVE_1INFINITY_2 = stack[sp].d;
    ; 
    //  line no 12 , L557342904 , bytecode index = 
    //  ldc 
    stack[sp].j = 0x7ff8000000000000L;
    sp += 2;
    // invokestatic java/lang/Double.longBitsToDouble(J)D
    {
        sp -= 3;
        stack[sp].d = func_java_lang_Double_longBitsToDouble__J_D(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic java/lang/Double NaN D
    sp -= 2;
    static_var_java_lang_Double.NaN_3 = stack[sp].d;
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

void bridge_java_lang_Double__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Double__clinit____V(runtime, para[0].obj);
}


