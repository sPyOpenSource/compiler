// CLASS: java/lang/StringBuffer extends java/lang/StringBuilder
#include "metadata.h"


// generation
// globals
//struct java_lang_StringBuffer_static {};



__refer arr_vmtable_java_lang_StringBuffer_from_java_lang_StringBuffer[] = {
    func_java_lang_StringBuffer_append__Ljava_lang_String_2_Ljava_lang_StringBuffer_2,  //0
    func_java_lang_StringBuffer_append__D_Ljava_lang_StringBuffer_2,  //1
    func_java_lang_StringBuffer_append__F_Ljava_lang_StringBuffer_2,  //2
    func_java_lang_StringBuffer_append__J_Ljava_lang_StringBuffer_2,  //3
    func_java_lang_StringBuffer_append__I_Ljava_lang_StringBuffer_2,  //4
    func_java_lang_StringBuffer_append__C_Ljava_lang_StringBuffer_2,  //5
    func_java_lang_StringBuffer_append__Ljava_lang_Object_2_Ljava_lang_StringBuffer_2,  //6
    func_java_lang_StringBuffer_append__Ljava_lang_Object_2_Ljava_lang_StringBuilder_2,  //7
    func_java_lang_StringBuffer_append__C_Ljava_lang_StringBuilder_2,  //8
    func_java_lang_StringBuffer_append__I_Ljava_lang_StringBuilder_2,  //9
    func_java_lang_StringBuffer_append__J_Ljava_lang_StringBuilder_2,  //10
    func_java_lang_StringBuffer_append__F_Ljava_lang_StringBuilder_2,  //11
    func_java_lang_StringBuffer_append__D_Ljava_lang_StringBuilder_2,  //12
    func_java_lang_StringBuffer_append__Ljava_lang_String_2_Ljava_lang_StringBuilder_2  //13
};
__refer arr_vmtable_java_lang_StringBuffer_from_java_lang_StringBuilder[] = {
    func_java_lang_StringBuilder_length___I,  //0
    func_java_lang_StringBuffer_append__Ljava_lang_String_2_Ljava_lang_StringBuilder_2,  //1
    func_java_lang_StringBuffer_append__D_Ljava_lang_StringBuilder_2,  //2
    func_java_lang_StringBuffer_append__F_Ljava_lang_StringBuilder_2,  //3
    func_java_lang_StringBuffer_append__J_Ljava_lang_StringBuilder_2,  //4
    func_java_lang_StringBuffer_append__I_Ljava_lang_StringBuilder_2,  //5
    func_java_lang_StringBuffer_append__C_Ljava_lang_StringBuilder_2,  //6
    func_java_lang_StringBuffer_append__Ljava_lang_Object_2_Ljava_lang_StringBuilder_2,  //7
    func_java_lang_StringBuilder_toString___Ljava_lang_String_2,  //8
    func_java_lang_StringBuilder_expand__I_V,  //9
    func_java_lang_StringBuilder_reverse___V  //10
};
__refer arr_vmtable_java_lang_StringBuffer_from_java_lang_Object[] = {
    func_java_lang_StringBuilder_toString___Ljava_lang_String_2,  //0
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
VMTable vmtable_java_lang_StringBuffer[] = {
    {178, 14, arr_vmtable_java_lang_StringBuffer_from_java_lang_StringBuffer}, //0
    {41, 11, arr_vmtable_java_lang_StringBuffer_from_java_lang_StringBuilder}, //1
    {5, 10, arr_vmtable_java_lang_StringBuffer_from_java_lang_Object}, //2
};



// locals: 1
// stack: 2
// args: 0
void func_java_lang_StringBuffer__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1614, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 10 , L1521389237 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 10;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 16
    stack[sp++].i = 16;
    // invokespecial java/lang/StringBuilder.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuilder__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 11 , L1989495347 , bytecode index = 
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

void bridge_java_lang_StringBuffer__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_StringBuffer__init____V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_lang_StringBuffer__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1615, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 14 , L159562640 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 14;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokespecial java/lang/StringBuilder.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuilder__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 15 , L670517043 , bytecode index = 
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

void bridge_java_lang_StringBuffer__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_StringBuffer__init___I_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_StringBuffer* func_java_lang_StringBuffer_append__Ljava_lang_String_2_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1616, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 18 , L1270383967 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 18;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_lang_StringBuilder_append__Ljava_lang_String_2_Ljava_lang_StringBuilder_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 19 , L1476061571 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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

void bridge_java_lang_StringBuffer_append__Ljava_lang_String_2_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuffer_append__Ljava_lang_String_2_Ljava_lang_StringBuffer_2(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
struct java_lang_StringBuffer* func_java_lang_StringBuffer_append__D_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1617, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 23 , L1273895132 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 23;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].d = local[1].d;
    sp += 2;
    // invokespecial java/lang/StringBuilder.append(D)Ljava/lang/StringBuilder;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_lang_StringBuilder_append__D_Ljava_lang_StringBuilder_2(runtime, stack[sp + 0].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 24 , L1156841091 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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

void bridge_java_lang_StringBuffer_append__D_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuffer_append__D_Ljava_lang_StringBuffer_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_StringBuffer* func_java_lang_StringBuffer_append__F_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, f32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1618, &rstack[0], &rlocal[0], &sp);
    local[0].f = p0;
    ; 
    //  line no 28 , L1098737173 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 28;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].f = local[1].f;
    // invokespecial java/lang/StringBuilder.append(F)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_lang_StringBuilder_append__F_Ljava_lang_StringBuilder_2(runtime, stack[sp + 0].f);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 29 , L2054077982 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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

void bridge_java_lang_StringBuffer_append__F_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuffer_append__F_Ljava_lang_StringBuffer_2(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
struct java_lang_StringBuffer* func_java_lang_StringBuffer_append__J_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1619, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    ; 
    //  line no 33 , L1217741734 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 33;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].j = local[1].j;
    sp += 2;
    // invokespecial java/lang/StringBuilder.append(J)Ljava/lang/StringBuilder;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_lang_StringBuilder_append__J_Ljava_lang_StringBuilder_2(runtime, stack[sp + 0].j);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 34 , L1651689839 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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

void bridge_java_lang_StringBuffer_append__J_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuffer_append__J_Ljava_lang_StringBuffer_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_StringBuffer* func_java_lang_StringBuffer_append__I_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1620, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 38 , L1591954203 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 38;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokespecial java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_lang_StringBuilder_append__I_Ljava_lang_StringBuilder_2(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 39 , L1015659282 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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

void bridge_java_lang_StringBuffer_append__I_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuffer_append__I_Ljava_lang_StringBuffer_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_StringBuffer* func_java_lang_StringBuffer_append__C_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, u16 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1621, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 43 , L1039759545 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 43;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokespecial java/lang/StringBuilder.append(C)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_lang_StringBuilder_append__C_Ljava_lang_StringBuilder_2(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 44 , L2030458766 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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

void bridge_java_lang_StringBuffer_append__C_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuffer_append__C_Ljava_lang_StringBuffer_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_StringBuffer* func_java_lang_StringBuffer_append__Ljava_lang_Object_2_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1622, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 48 , L1638471954 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 48;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/lang/StringBuilder.append(Ljava/lang/Object;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_java_lang_StringBuilder_append__Ljava_lang_Object_2_Ljava_lang_StringBuilder_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 49 , L392403246 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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

void bridge_java_lang_StringBuffer_append__Ljava_lang_Object_2_Ljava_lang_StringBuffer_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuffer_append__Ljava_lang_Object_2_Ljava_lang_StringBuffer_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_StringBuilder* func_java_lang_StringBuffer_append__Ljava_lang_Object_2_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1623, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 7 , L1704535540 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 7;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/StringBuffer.append(Ljava/lang/Object;)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 178, 6);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
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

void bridge_java_lang_StringBuffer_append__Ljava_lang_Object_2_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuffer_append__Ljava_lang_Object_2_Ljava_lang_StringBuilder_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_StringBuilder* func_java_lang_StringBuffer_append__C_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, u16 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1624, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 7 , L1206946689 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 7;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
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

void bridge_java_lang_StringBuffer_append__C_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuffer_append__C_Ljava_lang_StringBuilder_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_StringBuilder* func_java_lang_StringBuffer_append__I_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1625, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 7 , L663215704 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 7;
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

void bridge_java_lang_StringBuffer_append__I_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuffer_append__I_Ljava_lang_StringBuilder_2(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
struct java_lang_StringBuilder* func_java_lang_StringBuffer_append__J_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1626, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    ; 
    //  line no 7 , L645208036 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 7;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].j = local[1].j;
    sp += 2;
    // invokevirtual java/lang/StringBuffer.append(J)Ljava/lang/StringBuffer;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,s64) = find_method(__ins->vm_table, 178, 3);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].j);
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

void bridge_java_lang_StringBuffer_append__J_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuffer_append__J_Ljava_lang_StringBuilder_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_StringBuilder* func_java_lang_StringBuffer_append__F_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, f32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1627, &rstack[0], &rlocal[0], &sp);
    local[0].f = p0;
    ; 
    //  line no 7 , L1526866775 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 7;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].f = local[1].f;
    // invokevirtual java/lang/StringBuffer.append(F)Ljava/lang/StringBuffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,f32) = find_method(__ins->vm_table, 178, 2);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].f);
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

void bridge_java_lang_StringBuffer_append__F_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuffer_append__F_Ljava_lang_StringBuilder_2(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
struct java_lang_StringBuilder* func_java_lang_StringBuffer_append__D_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1628, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 7 , L1632300236 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 7;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].d = local[1].d;
    sp += 2;
    // invokevirtual java/lang/StringBuffer.append(D)Ljava/lang/StringBuffer;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuffer* (*__func_p) (JThreadRuntime *,f64) = find_method(__ins->vm_table, 178, 1);
        jthread_lock(runtime, __ins);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].d);
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

void bridge_java_lang_StringBuffer_append__D_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuffer_append__D_Ljava_lang_StringBuilder_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_StringBuilder* func_java_lang_StringBuffer_append__Ljava_lang_String_2_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1629, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 7 , L465839591 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 7;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
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

void bridge_java_lang_StringBuffer_append__Ljava_lang_String_2_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuffer_append__Ljava_lang_String_2_Ljava_lang_StringBuilder_2(runtime, ins);
}


