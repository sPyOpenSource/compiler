// CLASS: java/lang/Boolean extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_lang_Boolean_static {struct java_lang_Class* TYPE_0; struct java_lang_Boolean* TRUE_1; struct java_lang_Boolean* FALSE_2;  };
struct java_lang_Boolean_static static_var_java_lang_Boolean = {NULL, NULL, NULL};


__refer arr_vmtable_java_lang_Boolean_from_java_lang_Boolean[] = {
    func_java_lang_Boolean_toString___Ljava_lang_String_2,  //0
    func_java_lang_Boolean_booleanValue___Z  //1
};
__refer arr_vmtable_java_lang_Boolean_from_java_lang_Object[] = {
    func_java_lang_Boolean_toString___Ljava_lang_String_2,  //0
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
VMTable vmtable_java_lang_Boolean[] = {
    {333, 2, arr_vmtable_java_lang_Boolean_from_java_lang_Boolean}, //0
    {5, 10, arr_vmtable_java_lang_Boolean_from_java_lang_Object}, //1
};



// locals: 2
// stack: 2
// args: 1
void func_java_lang_Boolean__init___Z_V(JThreadRuntime *runtime, s8 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2224, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 15 , L1638631856 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 15;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 16 , L1417203230 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield java/lang/Boolean value Z
    sp -= 2;
    ((struct java_lang_Boolean*)rstack[sp + 0].obj)->value_3 = stack[sp + 1].i;
    ; 
    //  line no 17 , L1591505133 , bytecode index = 
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

void bridge_java_lang_Boolean__init___Z_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Boolean__init___Z_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_java_lang_Boolean_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2225, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 20 , L2118939350 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 20;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Boolean value Z
    stack[sp - 1].i = ((struct java_lang_Boolean*)rstack[sp - 1].obj)->value_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1825983295;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3191);
    goto L1370494288;
    L1825983295:
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3192);
    L1370494288:
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

void bridge_java_lang_Boolean_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Boolean_toString___Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_lang_Boolean_booleanValue___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 24 , L859295820 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Boolean value Z
    stack[sp - 1].i = ((struct java_lang_Boolean*)rstack[sp - 1].obj)->value_3;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_lang_Boolean_booleanValue___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Boolean_booleanValue___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 2
struct java_lang_Boolean* func_java_lang_Boolean_valueOf__Z_Ljava_lang_Boolean_2(JThreadRuntime *runtime, struct java_lang_Boolean* p0, s8 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2227, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 28 , L1017997535 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 28;
    stack[sp++].i = local[0].i;
    if(stack[--sp].i  == 0) goto L345607713;
    // getstatic java/lang/Boolean TRUE Ljava/lang/Boolean;
    rstack[sp].obj =static_var_java_lang_Boolean.TRUE_1;
    sp += 1;
    goto L421632334;
    L345607713:
    // getstatic java/lang/Boolean FALSE Ljava/lang/Boolean;
    rstack[sp].obj =static_var_java_lang_Boolean.FALSE_2;
    sp += 1;
    L421632334:
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

void bridge_java_lang_Boolean_valueOf__Z_Ljava_lang_Boolean_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Boolean_valueOf__Z_Ljava_lang_Boolean_2(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 2
// args: 2
s8 func_java_lang_Boolean_parseBoolean__Ljava_lang_String_2_Z(JThreadRuntime *runtime, struct java_lang_Boolean* p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2228, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 32 , L351535152 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 32;
    rstack[sp++].obj = rlocal[0].obj;
    if(rstack[--sp].obj  == NULL) goto L1279556617;
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3191);
    // invokevirtual java/lang/String.equalsIgnoreCase(Ljava/lang/String;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 50, 11);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1279556617;
    // iconst_1
    stack[sp++].i = 1;
    goto L1496999718;
    L1279556617:
    // iconst_0
    stack[sp++].i = 0;
    L1496999718:
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

void bridge_java_lang_Boolean_parseBoolean__Ljava_lang_String_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Boolean_parseBoolean__Ljava_lang_String_2_Z(runtime, para[0].obj, para[1].obj);
}


// locals: 0
// stack: 3
// args: 1
void func_java_lang_Boolean__clinit____V(JThreadRuntime *runtime, struct java_lang_Boolean* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2229, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 9 , L1839923673 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 9;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 358);
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
    // putstatic java/lang/Boolean TYPE Ljava/lang/Class;
    sp -= 1;
    static_var_java_lang_Boolean.TYPE_0 = rstack[sp].obj;
    ; 
    //  line no 10 , L48274513 , bytecode index = 
    // new java/lang/Boolean
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 333);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    // invokespecial java/lang/Boolean.<init>(Z)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Boolean__init___Z_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic java/lang/Boolean TRUE Ljava/lang/Boolean;
    sp -= 1;
    static_var_java_lang_Boolean.TRUE_1 = rstack[sp].obj;
    ; 
    //  line no 11 , L141154428 , bytecode index = 
    // new java/lang/Boolean
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 333);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    // invokespecial java/lang/Boolean.<init>(Z)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Boolean__init___Z_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic java/lang/Boolean FALSE Ljava/lang/Boolean;
    sp -= 1;
    static_var_java_lang_Boolean.FALSE_2 = rstack[sp].obj;
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

void bridge_java_lang_Boolean__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Boolean__clinit____V(runtime, para[0].obj);
}


