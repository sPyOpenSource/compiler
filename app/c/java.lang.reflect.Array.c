// CLASS: java/lang/reflect/Array extends java/lang/Object
#include "metadata.h"

struct java_lang_Object* func_java_lang_reflect_Array_multiNewArray__Ljava_lang_Class_2_3I_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_reflect_Array* p0, struct java_lang_Class* p1, JArray * p2);

// generation
// globals
//struct java_lang_reflect_Array_static {JArray * dim_0;  };
struct java_lang_reflect_Array_static static_var_java_lang_reflect_Array = {NULL};


__refer arr_vmtable_java_lang_reflect_Array_from_java_lang_reflect_Array[] = {
    NULL
};
__refer arr_vmtable_java_lang_reflect_Array_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_reflect_Array[] = {
    {399, 0, arr_vmtable_java_lang_reflect_Array_from_java_lang_reflect_Array}, //0
    {5, 10, arr_vmtable_java_lang_reflect_Array_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_java_lang_reflect_Array__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2937, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 9 , L1689129053 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 9;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 10 , L279023166 , bytecode index = 
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

void bridge_java_lang_reflect_Array__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_reflect_Array__init____V(runtime, ins);
}

ExceptionItem arr_extable_func_java_lang_reflect_Array_newInstance__Ljava_lang_Class_2I_Ljava_lang_Object_2[] = {
    { , , -1}, 
    { , , -1}
};
ExceptionTable extable_func_java_lang_reflect_Array_newInstance__Ljava_lang_Class_2I_Ljava_lang_Object_2 = {2, arr_extable_func_java_lang_reflect_Array_newInstance__Ljava_lang_Class_2I_Ljava_lang_Object_2};

// locals: 4
// stack: 3
// args: 3
struct java_lang_Object* func_java_lang_reflect_Array_newInstance__Ljava_lang_Class_2I_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_reflect_Array* p0, struct java_lang_Class* p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2938, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    // try catch :L1403662281 L1200812313 L1541298091 (
    // try catch :L1541298091 L15335646 L1541298091 (
    ; 
    //  line no 14 , L37528429 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 14;
    // getstatic java/lang/reflect/Array dim [I
    rstack[sp].obj =static_var_java_lang_reflect_Array.dim_0;
    sp += 1;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[2].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1403662281:
    __frame->bytecodeIndex = 
    //  line no 15 , L1403662281 , bytecode index = 
    // getstatic java/lang/reflect/Array dim [I
    rstack[sp].obj =static_var_java_lang_reflect_Array.dim_0;
    sp += 1;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[1].i;
    // arrstore s32  ,  L1403662281 bc index = 
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
    //  line no 16 , L1391890442 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic java/lang/reflect/Array dim [I
    rstack[sp].obj =static_var_java_lang_reflect_Array.dim_0;
    sp += 1;
    // invokestatic java/lang/reflect/Array.multiNewArray(Ljava/lang/Class;[I)Ljava/lang/Object;
    {
        sp -= 3;
        rstack[sp].obj = func_java_lang_reflect_Array_multiNewArray__Ljava_lang_Class_2_3I_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1200812313:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1541298091:
    __frame->bytecodeIndex = 
    //  line no 17 , L1541298091 , bytecode index = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L15335646:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L15335646 in labeltable is :L15335646
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 17;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1541298091;
        case 1 : goto L1541298091;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_lang_reflect_Array_newInstance__Ljava_lang_Class_2I_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_reflect_Array_newInstance__Ljava_lang_Class_2I_Ljava_lang_Object_2(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 2
// stack: 2
// args: 3
struct java_lang_Object* func_java_lang_reflect_Array_newInstance__Ljava_lang_Class_2_3I_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_reflect_Array* p0, struct java_lang_Class* p1, JArray * p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2939, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 23 , L729867689 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 23;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic java/lang/reflect/Array.multiNewArray(Ljava/lang/Class;[I)Ljava/lang/Object;
    {
        sp -= 3;
        rstack[sp].obj = func_java_lang_reflect_Array_multiNewArray__Ljava_lang_Class_2_3I_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
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

void bridge_java_lang_reflect_Array_newInstance__Ljava_lang_Class_2_3I_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_reflect_Array_newInstance__Ljava_lang_Class_2_3I_Ljava_lang_Object_2(runtime, para[0].obj, para[1].obj, para[2].obj);
}

void bridge_java_lang_reflect_Array_multiNewArray__Ljava_lang_Class_2_3I_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_reflect_Array_multiNewArray__Ljava_lang_Class_2_3I_Ljava_lang_Object_2(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 0
// stack: 4
// args: 1
void func_java_lang_reflect_Array__clinit____V(JThreadRuntime *runtime, struct java_lang_reflect_Array* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2941, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 7 , L919063521 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 7;
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
    // arrstore s32  ,  L919063521 bc index = 
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
    // putstatic java/lang/reflect/Array dim [I
    sp -= 1;
    static_var_java_lang_reflect_Array.dim_0 = rstack[sp].obj;
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

void bridge_java_lang_reflect_Array__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_reflect_Array__clinit____V(runtime, para[0].obj);
}


