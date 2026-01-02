// CLASS: java/lang/Float extends java/lang/Object
#include "metadata.h"

s32 func_java_lang_Float_floatToIntBits__F_I(JThreadRuntime *runtime, struct java_lang_Float* p0, f32 p1);
f32 func_java_lang_Float_intBitsToFloat__I_F(JThreadRuntime *runtime, struct java_lang_Float* p0, s32 p1);

// generation
// globals
//struct java_lang_Float_static {struct java_lang_Class* TYPE_0; f32 POSITIVE_1INFINITY_1; f32 NEGATIVE_1INFINITY_2; f32 NaN_3; f32 MAX_1VALUE_4; f32 MIN_1VALUE_5;  };
struct java_lang_Float_static static_var_java_lang_Float = {NULL, 0, 0, 0, 0, 0};


__refer arr_vmtable_java_lang_Float_from_java_lang_Float[] = {
    func_java_lang_Float_toString___Ljava_lang_String_2,  //0
    func_java_lang_Float_floatValue___F  //1
};
__refer arr_vmtable_java_lang_Float_from_java_lang_Object[] = {
    func_java_lang_Float_toString___Ljava_lang_String_2,  //0
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
VMTable vmtable_java_lang_Float[] = {
    {200, 2, arr_vmtable_java_lang_Float_from_java_lang_Float}, //0
    {5, 10, arr_vmtable_java_lang_Float_from_java_lang_Object}, //1
};



// locals: 2
// stack: 2
// args: 1
void func_java_lang_Float__init___F_V(JThreadRuntime *runtime, f32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1004, &rstack[0], &rlocal[0], &sp);
    local[0].f = p0;
    ; 
    //  line no 18 , L1135278099 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 18;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 19 , L1470911015 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].f = local[1].f;
    // putfield java/lang/Float value F
    sp -= 2;
    ((struct java_lang_Float*)rstack[sp + 0].obj)->value_6 = stack[sp + 1].f;
    ; 
    //  line no 20 , L1268974304 , bytecode index = 
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

void bridge_java_lang_Float__init___F_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Float__init___F_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_java_lang_Float_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1005, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 23 , L451312813 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 23;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Float value F
    stack[sp - 1].f = ((struct java_lang_Float*)rstack[sp - 1].obj)->value_6;
    sp += 0;
    // invokestatic java/lang/Float.toString(F)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Float_toString__F_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].f);
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

void bridge_java_lang_Float_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Float_toString___Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 3
// args: 2
struct java_lang_Float* func_java_lang_Float_valueOf__F_Ljava_lang_Float_2(JThreadRuntime *runtime, struct java_lang_Float* p0, f32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1006, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].f = p1;
    ; 
    //  line no 27 , L2081000371 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 27;
    // new java/lang/Float
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 200);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].f = local[0].f;
    // invokespecial java/lang/Float.<init>(F)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Float__init___F_V(runtime, stack[sp + 0].f);
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

void bridge_java_lang_Float_valueOf__F_Ljava_lang_Float_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Float_valueOf__F_Ljava_lang_Float_2(runtime, para[0].obj, para[1].f);
}


// locals: 1
// stack: 1
// args: 0
f32 func_java_lang_Float_floatValue___F(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 31 , L416201381 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Float value F
    stack[sp - 1].f = ((struct java_lang_Float*)rstack[sp - 1].obj)->value_6;
    sp += 0;
    return stack[sp - 1].f;
    ; 
}

void bridge_java_lang_Float_floatValue___F(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->f = func_java_lang_Float_floatValue___F(runtime, ins);
}


// locals: 1
// stack: 2
// args: 2
struct java_lang_String* func_java_lang_Float_toString__F_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_Float* p0, f32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1008, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].f = p1;
    ; 
    //  line no 35 , L1985938863 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 35;
    stack[sp++].f = local[0].f;
    stack[sp - 1].d = (f64)stack[sp - 1].f; 
    ++sp;
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

void bridge_java_lang_Float_toString__F_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Float_toString__F_Ljava_lang_String_2(runtime, para[0].obj, para[1].f);
}


// locals: 1
// stack: 2
// args: 2
f32 func_java_lang_Float_parseFloat__Ljava_lang_String_2_F(JThreadRuntime *runtime, struct java_lang_Float* p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1009, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 39 , L251664534 , bytecode index = 
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
    stack[sp - 2].f = (f32)stack[sp - 2].d; 
    --sp;
    method_exit(runtime);
    return stack[sp - 1].f;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_Float_parseFloat__Ljava_lang_String_2_F(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->f = func_java_lang_Float_parseFloat__Ljava_lang_String_2_F(runtime, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 2
// args: 2
s8 func_java_lang_Float_isNaN__F_Z(JThreadRuntime *runtime, struct java_lang_Float* p0, f32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1010, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].f = p1;
    ; 
    //  line no 43 , L487416600 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 43;
    stack[sp++].f = local[0].f;
    stack[sp++].f = local[0].f;
    {
    f32 v1 = stack[sp - 1].f;
    f32 v2 = stack[sp - 2].f;
    stack[sp - 2].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    --sp;
    }
    if(stack[--sp].i  == 0) goto L1271041075;
    // iconst_1
    stack[sp++].i = 1;
    goto L1141500277;
    L1271041075:
    // iconst_0
    stack[sp++].i = 0;
    L1141500277:
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

void bridge_java_lang_Float_isNaN__F_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Float_isNaN__F_Z(runtime, para[0].obj, para[1].f);
}


// locals: 1
// stack: 2
// args: 2
s8 func_java_lang_Float_isInfinite__F_Z(JThreadRuntime *runtime, struct java_lang_Float* p0, f32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1011, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].f = p1;
    ; 
    //  line no 47 , L712410791 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 47;
    stack[sp++].f = local[0].f;
    // getstatic java/lang/Float POSITIVE_INFINITY F
    stack[sp].f =static_var_java_lang_Float.POSITIVE_1INFINITY_1;
    sp += 1;
    {
    f32 v1 = stack[sp - 1].f;
    f32 v2 = stack[sp - 2].f;
    stack[sp - 2].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    --sp;
    }
    if(stack[--sp].i  == 0) goto L1971991758;
    stack[sp++].f = local[0].f;
    // getstatic java/lang/Float NEGATIVE_INFINITY F
    stack[sp].f =static_var_java_lang_Float.NEGATIVE_1INFINITY_2;
    sp += 1;
    {
    f32 v1 = stack[sp - 1].f;
    f32 v2 = stack[sp - 2].f;
    stack[sp - 2].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    --sp;
    }
    if(stack[--sp].i  != 0) goto L2126723403;
    L1971991758:
    // iconst_1
    stack[sp++].i = 1;
    goto L201274566;
    L2126723403:
    // iconst_0
    stack[sp++].i = 0;
    L201274566:
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

void bridge_java_lang_Float_isInfinite__F_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Float_isInfinite__F_Z(runtime, para[0].obj, para[1].f);
}

void bridge_java_lang_Float_floatToIntBits__F_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Float_floatToIntBits__F_I(runtime, para[0].obj, para[1].f);
}

void bridge_java_lang_Float_intBitsToFloat__I_F(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->f = func_java_lang_Float_intBitsToFloat__I_F(runtime, para[0].obj, para[1].i);
}


// locals: 0
// stack: 1
// args: 1
void func_java_lang_Float__clinit____V(JThreadRuntime *runtime, struct java_lang_Float* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1014, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 9 , L611289995 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 9;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2052);
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
    // putstatic java/lang/Float TYPE Ljava/lang/Class;
    sp -= 1;
    static_var_java_lang_Float.TYPE_0 = rstack[sp].obj;
    ; 
    //  line no 10 , L663466110 , bytecode index = 
    //  ldc 
    stack[sp++].i = 0x7f800000;
    // invokestatic java/lang/Float.intBitsToFloat(I)F
    {
        sp -= 2;
        stack[sp].f = func_java_lang_Float_intBitsToFloat__I_F(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic java/lang/Float POSITIVE_INFINITY F
    sp -= 1;
    static_var_java_lang_Float.POSITIVE_1INFINITY_1 = stack[sp].f;
    ; 
    //  line no 11 , L1129433283 , bytecode index = 
    //  ldc 
    stack[sp++].i = 0xff800000;
    // invokestatic java/lang/Float.intBitsToFloat(I)F
    {
        sp -= 2;
        stack[sp].f = func_java_lang_Float_intBitsToFloat__I_F(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic java/lang/Float NEGATIVE_INFINITY F
    sp -= 1;
    static_var_java_lang_Float.NEGATIVE_1INFINITY_2 = stack[sp].f;
    ; 
    //  line no 12 , L864138492 , bytecode index = 
    //  ldc 
    stack[sp++].i = 0x7fc00000;
    // invokestatic java/lang/Float.intBitsToFloat(I)F
    {
        sp -= 2;
        stack[sp].f = func_java_lang_Float_intBitsToFloat__I_F(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic java/lang/Float NaN F
    sp -= 1;
    static_var_java_lang_Float.NaN_3 = stack[sp].f;
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

void bridge_java_lang_Float__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Float__clinit____V(runtime, para[0].obj);
}


