// CLASS: java/lang/Class extends java/lang/Object
#include "metadata.h"

struct java_lang_String* func_java_lang_Class_getName___Ljava_lang_String_2(JThreadRuntime *runtime);
struct java_lang_Object* func_java_lang_Class_newInstance___Ljava_lang_Object_2(JThreadRuntime *runtime);
s8 func_java_lang_Class_isInstance__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0);
void func_java_lang_Class_initReflect__Ljava_lang_Class_2_V(JThreadRuntime *runtime, struct java_lang_Class* p0, struct java_lang_Class* p1);
struct java_lang_Class* func_java_lang_Class_getSuperclass___Ljava_lang_Class_2(JThreadRuntime *runtime);
struct java_lang_Class* func_java_lang_Class_forName__Ljava_lang_String_2_Ljava_lang_Class_2(JThreadRuntime *runtime, struct java_lang_Class* p0, struct java_lang_String* p1);
s8 func_java_lang_Class_isAssignableFrom__Ljava_lang_Class_2_Z(JThreadRuntime *runtime, struct java_lang_Class* p0);
s8 func_java_lang_Class_isInterface___Z(JThreadRuntime *runtime);
struct java_lang_Class* func_java_lang_Class_getPrimitiveClass__Ljava_lang_String_2_Ljava_lang_Class_2(JThreadRuntime *runtime, struct java_lang_Class* p0, struct java_lang_String* p1);
s8 func_java_lang_Class_isArray___Z(JThreadRuntime *runtime);
s8 func_java_lang_Class_isPrimitive___Z(JThreadRuntime *runtime);

// generation
// globals
//struct java_lang_Class_static {s32 ENUM_0;  };
struct java_lang_Class_static static_var_java_lang_Class = {0};


__refer arr_vmtable_java_lang_Class_from_java_lang_Class[] = {
    func_java_lang_Class_getConstructors____3Ljava_lang_reflect_Constructor_2,  //0
    func_java_lang_Class_getFields____3Ljava_lang_reflect_Field_2,  //1
    func_java_lang_Class_getField__Ljava_lang_String_2_Ljava_lang_reflect_Field_2,  //2
    func_java_lang_Class_getMethods____3Ljava_lang_reflect_Method_2,  //3
    func_java_lang_Class_getMethod__Ljava_lang_String_2_3Ljava_lang_Class_2_Ljava_lang_reflect_Method_2,  //4
    func_java_lang_Class_getEnumConstants____3Ljava_lang_Object_2,  //5
    func_java_lang_Class_getEnumConstantsShared____3Ljava_lang_Object_2,  //6
    func_java_lang_Class_enumConstantDirectory___Ljava_util_Map_2,  //7
    func_java_lang_Class_getComponentType___Ljava_lang_Class_2,  //8
    func_java_lang_Class_getResourceAsStream__Ljava_lang_String_2_Ljava_io_InputStream_2,  //9
    func_java_lang_Class_getName___Ljava_lang_String_2,  //10
    func_java_lang_Class_getSuperclass___Ljava_lang_Class_2,  //11
    func_java_lang_Class_isAssignableFrom__Ljava_lang_Class_2_Z,  //12
    func_java_lang_Class_isArray___Z,  //13
    func_java_lang_Class_isInterface___Z,  //14
    func_java_lang_Class_isEnum___Z,  //15
    func_java_lang_Class_isInstance__Ljava_lang_Object_2_Z,  //16
    func_java_lang_Class_isPrimitive___Z,  //17
    func_java_lang_Class_newInstance___Ljava_lang_Object_2  //18
};
__refer arr_vmtable_java_lang_Class_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_Class[] = {
    {15, 19, arr_vmtable_java_lang_Class_from_java_lang_Class}, //0
    {5, 10, arr_vmtable_java_lang_Class_from_java_lang_Object}, //1
};



// locals: 1
// stack: 2
// args: 0
void func_java_lang_Class__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3093, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 10 , L1886938557 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 10;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 87 , L838301585 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/lang/Class enumConstants [Ljava/lang/Object;
    sp -= 2;
    ((struct java_lang_Class*)rstack[sp + 0].obj)->enumConstants_7 = rstack[sp + 1].obj;
    ; 
    //  line no 104 , L1429204602 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/lang/Class enumConstantDirectory Ljava/util/Map;
    sp -= 2;
    ((struct java_lang_Class*)rstack[sp + 0].obj)->enumConstantDirectory_8 = rstack[sp + 1].obj;
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

void bridge_java_lang_Class__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Class__init____V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
JArray * func_java_lang_Class_getConstructors____3Ljava_lang_reflect_Constructor_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3094, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 22 , L1734902032 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 22;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Class fields [Ljava/lang/reflect/Field;
    rstack[sp - 1].obj = ((struct java_lang_Class*)rstack[sp - 1].obj)->fields_5;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1831418259;
    ; 
    //  line no 23 , L1197430386 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/lang/Class.initReflect(Ljava/lang/Class;)V
    {
        sp -= 2;
        func_java_lang_Class_initReflect__Ljava_lang_Class_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1831418259:
    //  line no 25 , L1831418259 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Class constructors [Ljava/lang/reflect/Constructor;
    rstack[sp - 1].obj = ((struct java_lang_Class*)rstack[sp - 1].obj)->constructors_4;
    sp += 0;
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

void bridge_java_lang_Class_getConstructors____3Ljava_lang_reflect_Constructor_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Class_getConstructors____3Ljava_lang_reflect_Constructor_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
JArray * func_java_lang_Class_getFields____3Ljava_lang_reflect_Field_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3095, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 29 , L1110014943 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 29;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Class fields [Ljava/lang/reflect/Field;
    rstack[sp - 1].obj = ((struct java_lang_Class*)rstack[sp - 1].obj)->fields_5;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1726490536;
    ; 
    //  line no 30 , L1538855361 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/lang/Class.initReflect(Ljava/lang/Class;)V
    {
        sp -= 2;
        func_java_lang_Class_initReflect__Ljava_lang_Class_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1726490536:
    //  line no 32 , L1726490536 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Class fields [Ljava/lang/reflect/Field;
    rstack[sp - 1].obj = ((struct java_lang_Class*)rstack[sp - 1].obj)->fields_5;
    sp += 0;
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

void bridge_java_lang_Class_getFields____3Ljava_lang_reflect_Field_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Class_getFields____3Ljava_lang_reflect_Field_2(runtime, ins);
}


// locals: 5
// stack: 2
// args: 1
struct java_lang_reflect_Field* func_java_lang_Class_getField__Ljava_lang_String_2_Ljava_lang_reflect_Field_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3096, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 36 , L1663774813 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 36;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Class.getFields()[Ljava/lang/reflect/Field;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 15, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 37 , L1146719991 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    ; 
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L1476245668
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[4].i = stack[--sp].i;
    L388115473:
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L766599024;
    ; 
    //  line no 38 , L630669831 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L630669831 bc index = 
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
    // invokevirtual java/lang/reflect/Field.getName()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 374, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 50, 10);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L521528969;
    ; 
    //  line no 39 , L424743902 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L424743902 bc index = 
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
    L521528969:
    //  line no 37 , L521528969 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L388115473;
    L766599024:
    //  line no 42 , L766599024 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
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

void bridge_java_lang_Class_getField__Ljava_lang_String_2_Ljava_lang_reflect_Field_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Class_getField__Ljava_lang_String_2_Ljava_lang_reflect_Field_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
JArray * func_java_lang_Class_getMethods____3Ljava_lang_reflect_Method_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3097, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 46 , L564424689 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 46;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Class fields [Ljava/lang/reflect/Field;
    rstack[sp - 1].obj = ((struct java_lang_Class*)rstack[sp - 1].obj)->fields_5;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L297137378;
    ; 
    //  line no 47 , L7064297 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/lang/Class.initReflect(Ljava/lang/Class;)V
    {
        sp -= 2;
        func_java_lang_Class_initReflect__Ljava_lang_Class_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L297137378:
    //  line no 49 , L297137378 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Class methods [Ljava/lang/reflect/Method;
    rstack[sp - 1].obj = ((struct java_lang_Class*)rstack[sp - 1].obj)->methods_6;
    sp += 0;
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

void bridge_java_lang_Class_getMethods____3Ljava_lang_reflect_Method_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Class_getMethods____3Ljava_lang_reflect_Method_2(runtime, ins);
}


// locals: 6
// stack: 3
// args: 2
struct java_lang_reflect_Method* func_java_lang_Class_getMethod__Ljava_lang_String_2_3Ljava_lang_Class_2_Ljava_lang_reflect_Method_2(JThreadRuntime *runtime, struct java_lang_String* p0, JArray * p1){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3098, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 54 , L1493087920 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 54;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Class.getMethods()[Ljava/lang/reflect/Method;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 15, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 55 , L1725062057 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    ; 
    rstack[sp++].obj = rlocal[3].obj;
    // arraylength  label  L942733592
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[5].i = stack[--sp].i;
    L1593722877:
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1939354020;
    ; 
    //  line no 56 , L132326253 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L132326253 bc index = 
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
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/lang/reflect/Method.match(Ljava/lang/String;[Ljava/lang/Class;)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_String*,JArray *) = find_method(__ins->vm_table, 222, 0);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L950330032;
    ; 
    //  line no 57 , L348756982 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L348756982 bc index = 
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
    L950330032:
    //  line no 55 , L950330032 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1593722877;
    L1939354020:
    //  line no 60 , L1939354020 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
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

void bridge_java_lang_Class_getMethod__Ljava_lang_String_2_3Ljava_lang_Class_2_Ljava_lang_reflect_Method_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Class_getMethod__Ljava_lang_String_2_3Ljava_lang_Class_2_Ljava_lang_reflect_Method_2(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 1
// args: 0
JArray * func_java_lang_Class_getEnumConstants____3Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3099, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 64 , L948451889 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 64;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Class.getEnumConstantsShared()[Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 15, 6);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 65 , L665255666 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L2145961947;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual [Ljava/lang/Object;.clone()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 5, 4);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast [Ljava/lang/Object;
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 309);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    goto L767165873;
    L2145961947:
    // aconst null
    rstack[sp++].obj = NULL;
    L767165873:
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

void bridge_java_lang_Class_getEnumConstants____3Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Class_getEnumConstants____3Ljava_lang_Object_2(runtime, ins);
}

ExceptionItem arr_extable_func_java_lang_Class_getEnumConstantsShared____3Ljava_lang_Object_2[] = {
    { , , 141}
};
ExceptionTable extable_func_java_lang_Class_getEnumConstantsShared____3Ljava_lang_Object_2 = {1, arr_extable_func_java_lang_Class_getEnumConstantsShared____3Ljava_lang_Object_2};

// locals: 3
// stack: 3
// args: 0
JArray * func_java_lang_Class_getEnumConstantsShared____3Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3100, &rstack[0], &rlocal[0], &sp);
    // try catch :L1146867354 L2108952533 L6167135 (
    ; 
    //  line no 70 , L52104962 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 70;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Class enumConstants [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_lang_Class*)rstack[sp - 1].obj)->enumConstants_7;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L430845669;
    ; 
    //  line no 71 , L1152991394 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Class.isEnum()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 15, 15);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1146867354;
    ; 
    //  line no 72 , L885339784 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1146867354:
    __frame->bytecodeIndex = 
    //  line no 75 , L1146867354 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1980);
    // iconst_0
    stack[sp++].i = 0;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/Class; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(5127));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // invokevirtual java/lang/Class.getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_reflect_Method* (*__func_p) (JThreadRuntime *,struct java_lang_String*,JArray *) = find_method(__ins->vm_table, 15, 4);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 76 , L1878871053 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // iconst_0
    stack[sp++].i = 0;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/Object; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(309));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // invokevirtual java/lang/reflect/Method.invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*,JArray *) = find_method(__ins->vm_table, 222, 2);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast [Ljava/lang/Object;
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 309);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 77 , L122461713 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/lang/Class enumConstants [Ljava/lang/Object;
    sp -= 2;
    ((struct java_lang_Class*)rstack[sp + 0].obj)->enumConstants_7 = rstack[sp + 1].obj;
    L2108952533:
    __frame->bytecodeIndex = 
    //  line no 82 , L2108952533 , bytecode index = 
    goto L430845669;
    L6167135:
    //  line no 80 , L6167135 , bytecode index = 
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 81 , L167670282 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L430845669:
    //  line no 84 , L430845669 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Class enumConstants [Ljava/lang/Object;
    rstack[sp - 1].obj = ((struct java_lang_Class*)rstack[sp - 1].obj)->enumConstants_7;
    sp += 0;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L6167135;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_lang_Class_getEnumConstantsShared____3Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Class_getEnumConstantsShared____3Ljava_lang_Object_2(runtime, ins);
}


// locals: 7
// stack: 4
// args: 0
struct java_util_Map* func_java_lang_Class_enumConstantDirectory___Ljava_util_Map_2(JThreadRuntime *runtime){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3101, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 90 , L294309744 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 90;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Class enumConstantDirectory Ljava/util/Map;
    rstack[sp - 1].obj = ((struct java_lang_Class*)rstack[sp - 1].obj)->enumConstantDirectory_8;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1918203718;
    ; 
    //  line no 91 , L146875684 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Class.getEnumConstantsShared()[Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 15, 6);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 92 , L259144923 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L1212453642;
    ; 
    //  line no 93 , L301085187 , bytecode index = 
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
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Class.getName()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 15, 10);
        rstack[sp].obj = __func_p(runtime);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 5131);
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
    //     L301085187 in labeltable is :L301085187
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 93;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1212453642:
    //  line no 95 , L1212453642 , bytecode index = 
    // new java/util/HashMap
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 27);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_2
    stack[sp++].i = 2;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1212453642
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    // invokespecial java/util/HashMap.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 96 , L270261532 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // arraylength  label  L270261532
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[4].i = stack[--sp].i;
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L244428576:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1646375227;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[5].i;
    // arrload __refer  ,  L244428576 bc index = 
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
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 97 , L1657009494 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[6].obj;
    // checkcast java/lang/Enum
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 4125);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/Enum.name()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 342, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[6].obj;
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
    --sp; //pop
    ; 
    //  line no 96 , L754853679 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L244428576;
    L1646375227:
    //  line no 99 , L1646375227 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield java/lang/Class enumConstantDirectory Ljava/util/Map;
    sp -= 2;
    ((struct java_lang_Class*)rstack[sp + 0].obj)->enumConstantDirectory_8 = rstack[sp + 1].obj;
    L1918203718:
    //  line no 101 , L1918203718 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Class enumConstantDirectory Ljava/util/Map;
    rstack[sp - 1].obj = ((struct java_lang_Class*)rstack[sp - 1].obj)->enumConstantDirectory_8;
    sp += 0;
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

void bridge_java_lang_Class_enumConstantDirectory___Ljava_util_Map_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Class_enumConstantDirectory___Ljava_util_Map_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 0
struct java_lang_Class* func_java_lang_Class_getComponentType___Ljava_lang_Class_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3102, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 107 , L1079161247 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 107;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Class.isArray()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 15, 13);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1036420486;
    ; 
    //  line no 108 , L1625037390 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Class.getName()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 15, 10);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 109 , L1684285431 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual java/lang/String.substring(I)Ljava/lang/String;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 50, 21);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 110 , L837790893 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic java/lang/Class.getClassByDescriptor(Ljava/lang/String;)Ljava/lang/Class;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Class_getClassByDescriptor__Ljava_lang_String_2_Ljava_lang_Class_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1036420486:
    //  line no 112 , L1036420486 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
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

void bridge_java_lang_Class_getComponentType___Ljava_lang_Class_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Class_getComponentType___Ljava_lang_Class_2(runtime, ins);
}

ExceptionItem arr_extable_func_java_lang_Class_getClassByDescriptor__Ljava_lang_String_2_Ljava_lang_Class_2[] = {
    { , , 141}
};
ExceptionTable extable_func_java_lang_Class_getClassByDescriptor__Ljava_lang_String_2_Ljava_lang_Class_2 = {1, arr_extable_func_java_lang_Class_getClassByDescriptor__Ljava_lang_String_2_Ljava_lang_Class_2};

// locals: 2
// stack: 4
// args: 2
struct java_lang_Class* func_java_lang_Class_getClassByDescriptor__Ljava_lang_String_2_Ljava_lang_Class_2(JThreadRuntime *runtime, struct java_lang_Class* p0, struct java_lang_String* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3103, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    // try catch :L939693702 L2107393518 L836371508 (
    ; 
    //  line no 117 , L1847905873 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 117;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/lang/String.charAt(I)C
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        u16 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 50, 6);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    switch(stack[--sp].i){
        case 66:
            goto L1111413685;
        case 67:
            goto L1561480489;
        case 68:
            goto L1015552283;
        case 69:
            goto L939693702;
        case 70:
            goto L1955991197;
        case 71:
            goto L939693702;
        case 72:
            goto L939693702;
        case 73:
            goto L1073862849;
        case 74:
            goto L263565037;
        case 75:
            goto L939693702;
        case 76:
            goto L1938374337;
        case 77:
            goto L939693702;
        case 78:
            goto L939693702;
        case 79:
            goto L939693702;
        case 80:
            goto L939693702;
        case 81:
            goto L939693702;
        case 82:
            goto L939693702;
        case 83:
            goto L934225099;
        case 84:
            goto L939693702;
        case 85:
            goto L939693702;
        case 86:
            goto L2032547119;
        case 87:
            goto L939693702;
        case 88:
            goto L939693702;
        case 89:
            goto L939693702;
        case 90:
            goto L1539718688;
        default:
            goto L939693702;
    }
    L934225099:
    //  line no 119 , L934225099 , bytecode index = 
    // getstatic java/lang/Short TYPE Ljava/lang/Class;
    rstack[sp].obj =static_var_java_lang_Short.TYPE_0;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1561480489:
    //  line no 121 , L1561480489 , bytecode index = 
    // getstatic java/lang/Character TYPE Ljava/lang/Class;
    rstack[sp].obj =static_var_java_lang_Character.TYPE_0;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1111413685:
    //  line no 123 , L1111413685 , bytecode index = 
    // getstatic java/lang/Byte TYPE Ljava/lang/Class;
    rstack[sp].obj =static_var_java_lang_Byte.TYPE_0;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1073862849:
    //  line no 125 , L1073862849 , bytecode index = 
    // getstatic java/lang/Integer TYPE Ljava/lang/Class;
    rstack[sp].obj =static_var_java_lang_Integer.TYPE_0;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1955991197:
    //  line no 127 , L1955991197 , bytecode index = 
    // getstatic java/lang/Float TYPE Ljava/lang/Class;
    rstack[sp].obj =static_var_java_lang_Float.TYPE_0;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1539718688:
    //  line no 129 , L1539718688 , bytecode index = 
    // getstatic java/lang/Boolean TYPE Ljava/lang/Class;
    rstack[sp].obj =static_var_java_lang_Boolean.TYPE_0;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1015552283:
    //  line no 131 , L1015552283 , bytecode index = 
    // getstatic java/lang/Double TYPE Ljava/lang/Class;
    rstack[sp].obj =static_var_java_lang_Double.TYPE_0;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L263565037:
    //  line no 133 , L263565037 , bytecode index = 
    // getstatic java/lang/Long TYPE Ljava/lang/Class;
    rstack[sp].obj =static_var_java_lang_Long.TYPE_0;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L2032547119:
    //  line no 135 , L2032547119 , bytecode index = 
    // getstatic java/lang/Void TYPE Ljava/lang/Class;
    rstack[sp].obj =static_var_java_lang_Void.TYPE_0;
    sp += 1;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1938374337:
    //  line no 137 , L1938374337 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 60
    stack[sp++].i = 60;
    // invokevirtual java/lang/String.indexOf(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 50, 2);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  < 0) goto L1627618479;
    ; 
    //  line no 138 , L801412408 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[0].obj;
    //  bipush 60
    stack[sp++].i = 60;
    // invokevirtual java/lang/String.indexOf(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 50, 2);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/String.substring(II)Ljava/lang/String;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 50, 22);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[0].obj = rstack[--sp].obj;
    goto L939693702;
    L1627618479:
    //  line no 140 , L1627618479 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/String.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 50, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokevirtual java/lang/String.substring(II)Ljava/lang/String;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 50, 22);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[0].obj = rstack[--sp].obj;
    L939693702:
    __frame->bytecodeIndex = 
    //  line no 144 , L939693702 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
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
    L2107393518:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L836371508:
    //  line no 145 , L836371508 , bytecode index = 
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 146 , L1728266914 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/Exception.printStackTrace()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 56, 4);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 148 , L224286556 , bytecode index = 
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L836371508;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_lang_Class_getClassByDescriptor__Ljava_lang_String_2_Ljava_lang_Class_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Class_getClassByDescriptor__Ljava_lang_String_2_Ljava_lang_Class_2(runtime, para[0].obj, para[1].obj);
}


// locals: 2
// stack: 1
// args: 1
struct java_io_InputStream* func_java_lang_Class_getResourceAsStream__Ljava_lang_String_2_Ljava_io_InputStream_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3104, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 153 , L2091160281 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 153;
    // aconst null
    rstack[sp++].obj = NULL;
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

void bridge_java_lang_Class_getResourceAsStream__Ljava_lang_String_2_Ljava_io_InputStream_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Class_getResourceAsStream__Ljava_lang_String_2_Ljava_io_InputStream_2(runtime, ins);
}

void bridge_java_lang_Class_getName___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Class_getName___Ljava_lang_String_2(runtime, ins);
}

void bridge_java_lang_Class_getSuperclass___Ljava_lang_Class_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Class_getSuperclass___Ljava_lang_Class_2(runtime, ins);
}

void bridge_java_lang_Class_forName__Ljava_lang_String_2_Ljava_lang_Class_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Class_forName__Ljava_lang_String_2_Ljava_lang_Class_2(runtime, para[0].obj, para[1].obj);
}

void bridge_java_lang_Class_isAssignableFrom__Ljava_lang_Class_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Class_isAssignableFrom__Ljava_lang_Class_2_Z(runtime, ins);
}

void bridge_java_lang_Class_isArray___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Class_isArray___Z(runtime, ins);
}

void bridge_java_lang_Class_isInterface___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Class_isInterface___Z(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s8 func_java_lang_Class_isEnum___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3111, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 170 , L1789237070 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 170;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Class modifiers I
    stack[sp - 1].i = ((struct java_lang_Class*)rstack[sp - 1].obj)->modifiers_3;
    sp += 0;
    //  sipush 16384
    stack[sp++].i = 16384;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  == 0) goto L1583210428;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Class.getSuperclass()Ljava/lang/Class;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Class* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 15, 11);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    {
        class_clinit(runtime, get_utf8str_by_utfraw_index(4125));
        JClass *clazz = classes_get(get_utf8str_by_utfraw_index(4125));
        rstack[sp++].obj = ins_of_Class_create_get(runtime, clazz);
    }
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1583210428;
    // iconst_1
    stack[sp++].i = 1;
    goto L1541019006;
    L1583210428:
    // iconst_0
    stack[sp++].i = 0;
    L1541019006:
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

void bridge_java_lang_Class_isEnum___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Class_isEnum___Z(runtime, ins);
}

void bridge_java_lang_Class_isInstance__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Class_isInstance__Ljava_lang_Object_2_Z(runtime, ins);
}

void bridge_java_lang_Class_isPrimitive___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Class_isPrimitive___Z(runtime, ins);
}

void bridge_java_lang_Class_newInstance___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Class_newInstance___Ljava_lang_Object_2(runtime, ins);
}

void bridge_java_lang_Class_getPrimitiveClass__Ljava_lang_String_2_Ljava_lang_Class_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Class_getPrimitiveClass__Ljava_lang_String_2_Ljava_lang_Class_2(runtime, para[0].obj, para[1].obj);
}

void bridge_java_lang_Class_initReflect__Ljava_lang_Class_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Class_initReflect__Ljava_lang_Class_2_V(runtime, para[0].obj, para[1].obj);
}


