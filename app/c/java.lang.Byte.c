// CLASS: java/lang/Byte extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_lang_Byte_static {struct java_lang_Class* TYPE_0; s8 MIN_1VALUE_1; s8 MAX_1VALUE_2;  };
struct java_lang_Byte_static static_var_java_lang_Byte = {NULL, 0, 0};


__refer arr_vmtable_java_lang_Byte_from_java_lang_Byte[] = {
    func_java_lang_Byte_byteValue___B,  //0
    func_java_lang_Byte_toString___Ljava_lang_String_2  //1
};
__refer arr_vmtable_java_lang_Byte_from_java_lang_Object[] = {
    func_java_lang_Byte_toString___Ljava_lang_String_2,  //0
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
VMTable vmtable_java_lang_Byte[] = {
    {341, 2, arr_vmtable_java_lang_Byte_from_java_lang_Byte}, //0
    {5, 10, arr_vmtable_java_lang_Byte_from_java_lang_Object}, //1
};



// locals: 2
// stack: 2
// args: 1
void func_java_lang_Byte__init___B_V(JThreadRuntime *runtime, s8 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2267, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 15 , L1211297851 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 15;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 16 , L2062780238 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield java/lang/Byte value B
    sp -= 2;
    ((struct java_lang_Byte*)rstack[sp + 0].obj)->value_3 = stack[sp + 1].i;
    ; 
    //  line no 17 , L1518868172 , bytecode index = 
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

void bridge_java_lang_Byte__init___B_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Byte__init___B_V(runtime, ins);
}


// locals: 1
// stack: 3
// args: 2
struct java_lang_Byte* func_java_lang_Byte_valueOf__B_Ljava_lang_Byte_2(JThreadRuntime *runtime, struct java_lang_Byte* p0, s8 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2268, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 20 , L934993374 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 20;
    // new java/lang/Byte
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 341);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[0].i;
    // invokespecial java/lang/Byte.<init>(B)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Byte__init___B_V(runtime, stack[sp + 0].i);
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

void bridge_java_lang_Byte_valueOf__B_Ljava_lang_Byte_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Byte_valueOf__B_Ljava_lang_Byte_2(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_lang_Byte_byteValue___B(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 24 , L1261545224 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Byte value B
    stack[sp - 1].i = ((struct java_lang_Byte*)rstack[sp - 1].obj)->value_3;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_lang_Byte_byteValue___B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Byte_byteValue___B(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_java_lang_Byte_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2270, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 28 , L1893088773 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 28;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Byte value B
    stack[sp - 1].i = ((struct java_lang_Byte*)rstack[sp - 1].obj)->value_3;
    sp += 0;
    // invokestatic java/lang/Byte.toString(B)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Byte_toString__B_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
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

void bridge_java_lang_Byte_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Byte_toString___Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 3
// args: 2
struct java_lang_String* func_java_lang_Byte_toString__B_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_Byte* p0, s8 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2271, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 32 , L1214125015 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 32;
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

void bridge_java_lang_Byte_toString__B_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Byte_toString__B_Ljava_lang_String_2(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 4
// args: 2
struct java_lang_String* func_java_lang_Byte_toHexString__B_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_Byte* p0, s8 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2272, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 36 , L50297459 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 36;
    stack[sp++].i = local[0].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    //  ldc 
    stack[sp].j = 0xffL;
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

void bridge_java_lang_Byte_toHexString__B_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Byte_toHexString__B_Ljava_lang_String_2(runtime, para[0].obj, para[1].i);
}


// locals: 2
// stack: 3
// args: 3
struct java_lang_String* func_java_lang_Byte_toString__BI_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_Byte* p0, s8 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2273, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 40 , L997219303 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 40;
    stack[sp++].i = local[0].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp++].i = local[1].i;
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

void bridge_java_lang_Byte_toString__BI_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Byte_toString__BI_Ljava_lang_String_2(runtime, para[0].obj, para[1].i, para[2].i);
}


// locals: 1
// stack: 2
// args: 2
s8 func_java_lang_Byte_parseByte__Ljava_lang_String_2_B(JThreadRuntime *runtime, struct java_lang_Byte* p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2274, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 44 , L1135400862 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 44;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 10
    stack[sp++].i = 10;
    // invokestatic java/lang/Byte.parseByte(Ljava/lang/String;I)B
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Byte_parseByte__Ljava_lang_String_2I_B(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
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

void bridge_java_lang_Byte_parseByte__Ljava_lang_String_2_B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Byte_parseByte__Ljava_lang_String_2_B(runtime, para[0].obj, para[1].obj);
}


// locals: 4
// stack: 4
// args: 3
s8 func_java_lang_Byte_parseByte__Ljava_lang_String_2I_B(JThreadRuntime *runtime, struct java_lang_Byte* p0, struct java_lang_String* p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2275, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    ; 
    //  line no 48 , L955743449 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 48;
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
    sp -= 2;
    local[2].j = stack[sp].j;
    ; 
    //  line no 49 , L1250848393 , bytecode index = 
    stack[sp].j = local[2].j;
    sp += 2;
    //  ldc 
    stack[sp].j = 0xffffffffffffff80L;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  < 0) goto L1874542689;
    stack[sp].j = local[2].j;
    sp += 2;
    //  ldc 
    stack[sp].j = 0x7fL;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L1674938191;
    L1874542689:
    //  line no 50 , L1874542689 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4007);
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4008);
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
    stack[sp++].i = local[1].i;
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
    //     L1874542689 in labeltable is :L1874542689
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 50;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1674938191:
    //  line no 51 , L1674938191 , bytecode index = 
    stack[sp].j = local[2].j;
    sp += 2;
    stack[sp - 2].i = (s32)stack[sp - 2].j; 
    --sp;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
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

void bridge_java_lang_Byte_parseByte__Ljava_lang_String_2I_B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Byte_parseByte__Ljava_lang_String_2I_B(runtime, para[0].obj, para[1].obj, para[2].i);
}


// locals: 0
// stack: 1
// args: 1
void func_java_lang_Byte__clinit____V(JThreadRuntime *runtime, struct java_lang_Byte* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2276, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 9 , L1501888239 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 9;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4009);
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
    // putstatic java/lang/Byte TYPE Ljava/lang/Class;
    sp -= 1;
    static_var_java_lang_Byte.TYPE_0 = rstack[sp].obj;
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

void bridge_java_lang_Byte__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Byte__clinit____V(runtime, para[0].obj);
}


