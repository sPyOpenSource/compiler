// CLASS: java/lang/System extends java/lang/Object
#include "metadata.h"

s64 func_java_lang_System_currentTimeMillis___J(JThreadRuntime *runtime, struct java_lang_System* p0);
void func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(JThreadRuntime *runtime, struct java_lang_System* p0, struct java_lang_Object* p1, s32 p2, struct java_lang_Object* p3, s32 p4, s32 p5);
s64 func_java_lang_System_nanoTime___J(JThreadRuntime *runtime, struct java_lang_System* p0);

// generation
// globals
//struct java_lang_System_static {struct java_util_Map* property_0; struct java_io_InputStream* in_1; struct java_io_PrintStream* out_2; struct java_io_PrintStream* err_3;  };
struct java_lang_System_static static_var_java_lang_System = {NULL, NULL, NULL, NULL};


__refer arr_vmtable_java_lang_System_from_java_lang_System[] = {
    NULL
};
__refer arr_vmtable_java_lang_System_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_System[] = {
    {256, 0, arr_vmtable_java_lang_System_from_java_lang_System}, //0
    {5, 10, arr_vmtable_java_lang_System_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_java_lang_System__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1393, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 14 , L1365790282 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 14;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
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

void bridge_java_lang_System__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_System__init____V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 2
struct java_lang_String* func_java_lang_System_getProperty__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_System* p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1394, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 27 , L948395645 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 27;
    // getstatic java/lang/System property Ljava/util/Map;
    rstack[sp].obj =static_var_java_lang_System.property_0;
    sp += 1;
    rstack[sp++].obj = rlocal[0].obj;
    // invokeinterface java/util/Map.get(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 171, 4);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast java/lang/String
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 32);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
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

void bridge_java_lang_System_getProperty__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_System_getProperty__Ljava_lang_String_2_Ljava_lang_String_2(runtime, para[0].obj, para[1].obj);
}


// locals: 2
// stack: 3
// args: 3
struct java_lang_String* func_java_lang_System_setProperty__Ljava_lang_String_2Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_System* p0, struct java_lang_String* p1, struct java_lang_String* p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1395, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 31 , L226586078 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 31;
    // getstatic java/lang/System property Ljava/util/Map;
    rstack[sp].obj =static_var_java_lang_System.property_0;
    sp += 1;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface java/util/Map.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_Object*) = find_method(__ins->vm_table, 171, 5);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast java/lang/String
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 32);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
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

void bridge_java_lang_System_setProperty__Ljava_lang_String_2Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_System_setProperty__Ljava_lang_String_2Ljava_lang_String_2_Ljava_lang_String_2(runtime, para[0].obj, para[1].obj, para[2].obj);
}


// locals: 0
// stack: 1
// args: 1
void func_java_lang_System_gc___V(JThreadRuntime *runtime, struct java_lang_System* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1396, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 35 , L1816468636 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 35;
    // invokestatic java/lang/Runtime.getRuntime()Ljava/lang/Runtime;
    {
        sp -= 1;
        rstack[sp].obj = func_java_lang_Runtime_getRuntime___Ljava_lang_Runtime_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/Runtime.gc()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 254, 3);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 36 , L834824701 , bytecode index = 
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

void bridge_java_lang_System_gc___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_System_gc___V(runtime, para[0].obj);
}


// locals: 1
// stack: 2
// args: 2
void func_java_lang_System_exit__I_V(JThreadRuntime *runtime, struct java_lang_System* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1397, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 39 , L925568390 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 39;
    // invokestatic java/lang/Runtime.getRuntime()Ljava/lang/Runtime;
    {
        sp -= 1;
        rstack[sp].obj = func_java_lang_Runtime_getRuntime___Ljava_lang_Runtime_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[0].i;
    // invokevirtual java/lang/Runtime.exit(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 254, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 40 , L1198817209 , bytecode index = 
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

void bridge_java_lang_System_exit__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_System_exit__I_V(runtime, para[0].obj, para[1].i);
}

void bridge_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, para[0].obj, para[1].obj, para[2].i, para[3].obj, para[4].i, para[5].i);
}

void bridge_java_lang_System_currentTimeMillis___J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_lang_System_currentTimeMillis___J(runtime, para[0].obj);
}

void bridge_java_lang_System_nanoTime___J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_lang_System_nanoTime___J(runtime, para[0].obj);
}


// locals: 0
// stack: 5
// args: 1
void func_java_lang_System__clinit____V(JThreadRuntime *runtime, struct java_lang_System* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1401, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 15 , L540092563 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 15;
    // new java/util/HashMap
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 27);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/HashMap.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic java/lang/System property Ljava/util/Map;
    sp -= 1;
    static_var_java_lang_System.property_0 = rstack[sp].obj;
    ; 
    //  line no 17 , L1894698434 , bytecode index = 
    // new java/lang/System$1
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 180);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/System$1.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_System_000241__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic java/lang/System in Ljava/io/InputStream;
    sp -= 1;
    static_var_java_lang_System.in_1 = rstack[sp].obj;
    ; 
    //  line no 23 , L205615258 , bytecode index = 
    // new java/io/PrintStream
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 123);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // new java/io/ConsoleOutputStream
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 255);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    // invokespecial java/io/ConsoleOutputStream.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_ConsoleOutputStream__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/io/PrintStream.<init>(Ljava/io/OutputStream;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_PrintStream__init___Ljava_io_OutputStream_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic java/lang/System out Ljava/io/PrintStream;
    sp -= 1;
    static_var_java_lang_System.out_2 = rstack[sp].obj;
    ; 
    //  line no 24 , L2108708444 , bytecode index = 
    // new java/io/PrintStream
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 123);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // new java/io/ConsoleOutputStream
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 255);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    // invokespecial java/io/ConsoleOutputStream.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_ConsoleOutputStream__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial java/io/PrintStream.<init>(Ljava/io/OutputStream;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_PrintStream__init___Ljava_io_OutputStream_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic java/lang/System err Ljava/io/PrintStream;
    sp -= 1;
    static_var_java_lang_System.err_3 = rstack[sp].obj;
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

void bridge_java_lang_System__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_System__clinit____V(runtime, para[0].obj);
}


