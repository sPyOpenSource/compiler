// CLASS: java/lang/Integer extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_lang_Integer_static {struct java_lang_Class* TYPE_0; s32 MIN_1VALUE_1; s32 MAX_1VALUE_2; JArray * cache_3; s32 low_4; s32 high_5;  };
struct java_lang_Integer_static static_var_java_lang_Integer = {NULL, 0, 0, NULL, 0, 0};


__refer arr_vmtable_java_lang_Integer_from_java_lang_Integer[] = {
    func_java_lang_Integer_intValue___I,  //0
    func_java_lang_Integer_toString___Ljava_lang_String_2  //1
};
__refer arr_vmtable_java_lang_Integer_from_java_lang_Object[] = {
    func_java_lang_Integer_toString___Ljava_lang_String_2,  //0
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
VMTable vmtable_java_lang_Integer[] = {
    {267, 2, arr_vmtable_java_lang_Integer_from_java_lang_Integer}, //0
    {5, 10, arr_vmtable_java_lang_Integer_from_java_lang_Object}, //1
};



// locals: 2
// stack: 2
// args: 1
void func_java_lang_Integer__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2988, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 34 , L1122960426 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 34;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 35 , L502646755 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield java/lang/Integer value I
    sp -= 2;
    ((struct java_lang_Integer*)rstack[sp + 0].obj)->value_6 = stack[sp + 1].i;
    ; 
    //  line no 36 , L1577864993 , bytecode index = 
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

void bridge_java_lang_Integer__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Integer__init___I_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 2
struct java_lang_String* func_java_lang_Integer_toString__I_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_Integer* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2989, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 39 , L376187927 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 39;
    stack[sp++].i = local[0].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    // invokestatic java/lang/Long.toString(J)Ljava/lang/String;
    {
        sp -= 3;
        rstack[sp].obj = func_java_lang_Long_toString__J_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
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

void bridge_java_lang_Integer_toString__I_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Integer_toString__I_Ljava_lang_String_2(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 3
// args: 2
struct java_lang_Integer* func_java_lang_Integer_valueOf__I_Ljava_lang_Integer_2(JThreadRuntime *runtime, struct java_lang_Integer* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2990, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 43 , L433851698 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 43;
    stack[sp++].i = local[0].i;
    // getstatic java/lang/Integer low I
    stack[sp].i =static_var_java_lang_Integer.low_4;
    sp += 1;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1890777616;
    stack[sp++].i = local[0].i;
    // getstatic java/lang/Integer high I
    stack[sp].i =static_var_java_lang_Integer.high_5;
    sp += 1;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1890777616;
    ; 
    //  line no 44 , L130641029 , bytecode index = 
    // getstatic java/lang/Integer cache [Ljava/lang/Integer;
    rstack[sp].obj =static_var_java_lang_Integer.cache_3;
    sp += 1;
    stack[sp++].i = local[0].i;
    // getstatic java/lang/Integer low I
    stack[sp].i =static_var_java_lang_Integer.low_4;
    sp += 1;
    stack[sp - 1].i = -stack[sp - 1].i; 
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L130641029 bc index = 
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
    L1890777616:
    //  line no 45 , L1890777616 , bytecode index = 
    // new java/lang/Integer
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 267);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[0].i;
    // invokespecial java/lang/Integer.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Integer__init___I_V(runtime, stack[sp + 0].i);
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

void bridge_java_lang_Integer_valueOf__I_Ljava_lang_Integer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Integer_valueOf__I_Ljava_lang_Integer_2(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_lang_Integer_intValue___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 49 , L1916998751 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Integer value I
    stack[sp - 1].i = ((struct java_lang_Integer*)rstack[sp - 1].obj)->value_6;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_lang_Integer_intValue___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Integer_intValue___I(runtime, ins);
}


// locals: 1
// stack: 4
// args: 2
struct java_lang_String* func_java_lang_Integer_toHexString__I_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_Integer* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2992, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 53 , L1495791876 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 53;
    stack[sp++].i = local[0].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    //  ldc 
    stack[sp].j = 0xffffffffL;
    sp += 2;
    stack[sp - 4].j = stack[sp - 4].j & stack[sp - 2].j; 
    sp -= 2;
    // invokestatic java/lang/Long.toHexString(J)Ljava/lang/String;
    {
        sp -= 3;
        rstack[sp].obj = func_java_lang_Long_toHexString__J_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].j);
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

void bridge_java_lang_Integer_toHexString__I_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Integer_toHexString__I_Ljava_lang_String_2(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_java_lang_Integer_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2993, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 57 , L1094528209 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 57;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Integer value I
    stack[sp - 1].i = ((struct java_lang_Integer*)rstack[sp - 1].obj)->value_6;
    sp += 0;
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

void bridge_java_lang_Integer_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Integer_toString___Ljava_lang_String_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 3
struct java_lang_String* func_java_lang_Integer_toString__II_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_Integer* p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2994, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 61 , L38023477 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 61;
    stack[sp++].i = local[0].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    //  bipush 10
    stack[sp++].i = 10;
    // invokestatic java/lang/Long.toString(JI)Ljava/lang/String;
    {
        sp -= 4;
        rstack[sp].obj = func_java_lang_Long_toString__JI_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].j, stack[sp + 3].i);
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

void bridge_java_lang_Integer_toString__II_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Integer_toString__II_Ljava_lang_String_2(runtime, para[0].obj, para[1].i, para[2].i);
}


// locals: 1
// stack: 2
// args: 2
s32 func_java_lang_Integer_parseInt__Ljava_lang_String_2_I(JThreadRuntime *runtime, struct java_lang_Integer* p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2995, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 65 , L817614737 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 65;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 10
    stack[sp++].i = 10;
    // invokestatic java/lang/Long.parseLong(Ljava/lang/String;I)J
    {
        sp -= 3;
        stack[sp].j = func_java_lang_Long_parseLong__Ljava_lang_String_2I_J(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
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

void bridge_java_lang_Integer_parseInt__Ljava_lang_String_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Integer_parseInt__Ljava_lang_String_2_I(runtime, para[0].obj, para[1].obj);
}


// locals: 2
// stack: 2
// args: 3
s32 func_java_lang_Integer_parseInt__Ljava_lang_String_2I_I(JThreadRuntime *runtime, struct java_lang_Integer* p0, struct java_lang_String* p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2996, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 69 , L525275084 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 69;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokestatic java/lang/Long.parseLong(Ljava/lang/String;I)J
    {
        sp -= 3;
        stack[sp].j = func_java_lang_Long_parseLong__Ljava_lang_String_2I_J(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
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

void bridge_java_lang_Integer_parseInt__Ljava_lang_String_2I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Integer_parseInt__Ljava_lang_String_2I_I(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 3
// stack: 5
// args: 1
void func_java_lang_Integer__clinit____V(JThreadRuntime *runtime, struct java_lang_Integer* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2997, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 11 , L686327949 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 11;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 368);
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
    // putstatic java/lang/Integer TYPE Ljava/lang/Class;
    sp -= 1;
    static_var_java_lang_Integer.TYPE_0 = rstack[sp].obj;
    ; 
    //  line no 20 , L513324936 , bytecode index = 
    //  bipush 127
    stack[sp++].i = 127;
    local[0].i = stack[--sp].i;
    ; 
    //  line no 22 , L2035215096 , bytecode index = 
    stack[sp++].i = local[0].i;
    // putstatic java/lang/Integer high I
    sp -= 1;
    static_var_java_lang_Integer.high_5 = stack[sp].i;
    ; 
    //  line no 24 , L935667786 , bytecode index = 
    // getstatic java/lang/Integer high I
    stack[sp].i =static_var_java_lang_Integer.high_5;
    sp += 1;
    // getstatic java/lang/Integer low I
    stack[sp].i =static_var_java_lang_Integer.low_4;
    sp += 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/Integer; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(4979));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putstatic java/lang/Integer cache [Ljava/lang/Integer;
    sp -= 1;
    static_var_java_lang_Integer.cache_3 = rstack[sp].obj;
    ; 
    //  line no 25 , L1535472351 , bytecode index = 
    // getstatic java/lang/Integer low I
    stack[sp].i =static_var_java_lang_Integer.low_4;
    sp += 1;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 26 , L8039120 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L250448141:
    stack[sp++].i = local[2].i;
    // getstatic java/lang/Integer cache [Ljava/lang/Integer;
    rstack[sp].obj =static_var_java_lang_Integer.cache_3;
    sp += 1;
    // arraylength  label  L250448141
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L284456930;
    ; 
    //  line no 27 , L1620573353 , bytecode index = 
    // getstatic java/lang/Integer cache [Ljava/lang/Integer;
    rstack[sp].obj =static_var_java_lang_Integer.cache_3;
    sp += 1;
    stack[sp++].i = local[2].i;
    // new java/lang/Integer
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 267);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[1].i;
    // iinc slot 1 value 1
    local[1].i += 1;
    // invokespecial java/lang/Integer.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Integer__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L1620573353 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
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
    //  line no 26 , L904848961 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L250448141;
    L284456930:
    //  line no 30 , L284456930 , bytecode index = 
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

void bridge_java_lang_Integer__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Integer__clinit____V(runtime, para[0].obj);
}


