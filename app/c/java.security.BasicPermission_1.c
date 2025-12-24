// CLASS: java/security/BasicPermission$1 extends java/security/PermissionCollection
#include "metadata.h"


// generation
// globals
//struct java_security_BasicPermission_000241_static {};



__refer arr_vmtable_java_security_BasicPermission_000241_from_java_security_BasicPermission_000241[] = {
    func_java_security_BasicPermission_000241_add__Ljava_security_Permission_2_V,  //0
    func_java_security_BasicPermission_000241_implies__Ljava_security_Permission_2_Z,  //1
    func_java_security_BasicPermission_000241_elements___Ljava_util_Enumeration_2  //2
};
__refer arr_vmtable_java_security_BasicPermission_000241_from_java_security_PermissionCollection[] = {
    func_java_security_PermissionCollection_isReadOnly___Z,  //0
    func_java_security_PermissionCollection_setReadOnly___V,  //1
    func_java_security_BasicPermission_000241_add__Ljava_security_Permission_2_V,  //2
    func_java_security_BasicPermission_000241_elements___Ljava_util_Enumeration_2,  //3
    func_java_security_BasicPermission_000241_implies__Ljava_security_Permission_2_Z,  //4
    func_java_security_PermissionCollection_toString___Ljava_lang_String_2  //5
};
__refer arr_vmtable_java_security_BasicPermission_000241_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_security_PermissionCollection_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
__refer arr_vmtable_java_security_BasicPermission_000241_from_java_io_Serializable[] = {
    NULL
};
VMTable vmtable_java_security_BasicPermission_000241[] = {
    {170, 3, arr_vmtable_java_security_BasicPermission_000241_from_java_security_BasicPermission_000241}, //0
    {168, 6, arr_vmtable_java_security_BasicPermission_000241_from_java_security_PermissionCollection}, //1
    {10, 11, arr_vmtable_java_security_BasicPermission_000241_from_java_lang_Object}, //2
    {64, 0, arr_vmtable_java_security_BasicPermission_000241_from_java_io_Serializable}, //3
};



// locals: 2
// stack: 3
// args: 1
void func_java_security_BasicPermission_000241__init___Ljava_security_BasicPermission_2_V(JThreadRuntime *runtime, struct java_security_BasicPermission* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 430, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 221 , L652176954 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 221;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/security/BasicPermission$1 this$0 Ljava/security/BasicPermission;
    sp -= 2;
    ((struct java_security_BasicPermission_000241*)rstack[sp + 0].obj)->this_000240_4 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/security/PermissionCollection.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_security_PermissionCollection__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 222 , L1245065720 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/Hashtable
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 65);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/Hashtable.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_Hashtable__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/security/BasicPermission$1 permissions Ljava/util/Hashtable;
    sp -= 2;
    ((struct java_security_BasicPermission_000241*)rstack[sp + 0].obj)->permissions_2 = rstack[sp + 1].obj;
    ; 
    //  line no 223 , L1800976873 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/security/BasicPermission$1 allAllowed Z
    sp -= 2;
    ((struct java_security_BasicPermission_000241*)rstack[sp + 0].obj)->allAllowed_3 = stack[sp + 1].i;
    ; 
    //  line no 221 , L253011924 , bytecode index = 
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

void bridge_java_security_BasicPermission_000241__init___Ljava_security_BasicPermission_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_BasicPermission_000241__init___Ljava_security_BasicPermission_2_V(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
void func_java_security_BasicPermission_000241_add__Ljava_security_Permission_2_V(JThreadRuntime *runtime, struct java_security_Permission* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 431, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 227 , L698741991 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 227;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/security/BasicPermission$1.isReadOnly()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 168, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L127702987;
    ; 
    //  line no 228 , L765242091 , bytecode index = 
    // new java/lang/IllegalStateException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 23);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1059);
    // invokespecial java/lang/IllegalStateException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalStateException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L765242091 in labeltable is :L765242091
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 228;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L127702987:
    //  line no 230 , L127702987 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast java/security/BasicPermission
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1055);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 231 , L1117871068 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/security/BasicPermission.getName()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 169, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 232 , L1151704483 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1060);
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 9, 11);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L669284403;
    ; 
    //  line no 233 , L1869039062 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield java/security/BasicPermission$1 allAllowed Z
    sp -= 2;
    ((struct java_security_BasicPermission_000241*)rstack[sp + 0].obj)->allAllowed_3 = stack[sp + 1].i;
    L669284403:
    //  line no 234 , L669284403 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/BasicPermission$1 permissions Ljava/util/Hashtable;
    rstack[sp - 1].obj = ((struct java_security_BasicPermission_000241*)rstack[sp - 1].obj)->permissions_2;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/util/Hashtable.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_Object*) = find_method(__ins->vm_table, 65, 4);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 235 , L659590237 , bytecode index = 
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

void bridge_java_security_BasicPermission_000241_add__Ljava_security_Permission_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_security_BasicPermission_000241_add__Ljava_security_Permission_2_V(runtime, ins);
}


// locals: 5
// stack: 5
// args: 1
s8 func_java_security_BasicPermission_000241_implies__Ljava_security_Permission_2_Z(JThreadRuntime *runtime, struct java_security_Permission* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 432, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 239 , L1263634860 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 239;
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/security/BasicPermission
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 1055);
    if(stack[--sp].i  != 0) goto L508378341;
    ; 
    //  line no 240 , L1037854997 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L508378341:
    //  line no 242 , L508378341 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/BasicPermission$1 allAllowed Z
    stack[sp - 1].i = ((struct java_security_BasicPermission_000241*)rstack[sp - 1].obj)->allAllowed_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1884155890;
    ; 
    //  line no 243 , L932582590 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1884155890:
    //  line no 245 , L1884155890 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast java/security/BasicPermission
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1055);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 246 , L1078705341 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/security/BasicPermission.getName()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 169, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 247 , L511832416 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1060);
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 9, 11);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L28094269;
    ; 
    //  line no 248 , L110651474 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L28094269:
    //  line no 250 , L28094269 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual java/lang/String.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 9, 2);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 251 , L464224872 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1060);
    // invokevirtual java/lang/String.endsWith(Ljava/lang/String;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 9, 18);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L170949260;
    ; 
    //  line no 252 , L1845623216 , bytecode index = 
    // iinc slot 4 value -2
    local[4].i += -2;
    L170949260:
    //  line no 255 , L170949260 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/BasicPermission$1 permissions Ljava/util/Hashtable;
    rstack[sp - 1].obj = ((struct java_security_BasicPermission_000241*)rstack[sp - 1].obj)->permissions_2;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual java/util/Hashtable.get(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 65, 3);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(rstack[--sp].obj  == NULL) goto L731829978;
    ; 
    //  line no 256 , L1818339587 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L731829978:
    //  line no 258 , L731829978 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    //  bipush 46
    stack[sp++].i = 46;
    stack[sp++].i = local[4].i;
    // invokevirtual java/lang/String.lastIndexOf(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 9, 28);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 259 , L1703696921 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  >= 0) goto L69329761;
    ; 
    //  line no 260 , L1507118393 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L69329761:
    //  line no 261 , L69329761 , bytecode index = 
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 3);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuilder__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokevirtual java/lang/String.substring(II)Ljava/lang/String;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 9, 10);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 42
    stack[sp++].i = 42;
    // invokevirtual java/lang/StringBuilder.append(C)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,u16) = find_method(__ins->vm_table, 3, 7);
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
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 3, 9);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L170949260;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_security_BasicPermission_000241_implies__Ljava_security_Permission_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_security_BasicPermission_000241_implies__Ljava_security_Permission_2_Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_util_Enumeration* func_java_security_BasicPermission_000241_elements___Ljava_util_Enumeration_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 433, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 267 , L1070044969 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 267;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/security/BasicPermission$1 permissions Ljava/util/Hashtable;
    rstack[sp - 1].obj = ((struct java_security_BasicPermission_000241*)rstack[sp - 1].obj)->permissions_2;
    sp += 0;
    // invokevirtual java/util/Hashtable.elements()Ljava/util/Enumeration;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_util_Enumeration* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 65, 7);
        rstack[sp].obj = __func_p(runtime);
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

void bridge_java_security_BasicPermission_000241_elements___Ljava_util_Enumeration_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_security_BasicPermission_000241_elements___Ljava_util_Enumeration_2(runtime, ins);
}


