// CLASS: org/luaj/vm2/UpValue extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_UpValue_static {};



__refer arr_vmtable_org_luaj_vm2_UpValue_from_org_luaj_vm2_UpValue[] = {
    func_org_luaj_vm2_UpValue_toString___Ljava_lang_String_2,  //0
    func_org_luaj_vm2_UpValue_tojstring___Ljava_lang_String_2,  //1
    func_org_luaj_vm2_UpValue_getValue___Lorg_luaj_vm2_LuaValue_2,  //2
    func_org_luaj_vm2_UpValue_setValue__Lorg_luaj_vm2_LuaValue_2_V,  //3
    func_org_luaj_vm2_UpValue_close___V  //4
};
__refer arr_vmtable_org_luaj_vm2_UpValue_from_java_lang_Object[] = {
    func_org_luaj_vm2_UpValue_toString___Ljava_lang_String_2,  //0
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
VMTable vmtable_org_luaj_vm2_UpValue[] = {
    {109, 5, arr_vmtable_org_luaj_vm2_UpValue_from_org_luaj_vm2_UpValue}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_UpValue_from_java_lang_Object}, //1
};



// locals: 3
// stack: 2
// args: 2
void func_org_luaj_vm2_UpValue__init____3Lorg_luaj_vm2_LuaValue_2I_V(JThreadRuntime *runtime, JArray * p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 571, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 40 , L1509791656 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 40;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 41 , L257608164 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/UpValue array [Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_UpValue*)rstack[sp + 0].obj)->array_0 = rstack[sp + 1].obj;
    ; 
    //  line no 42 , L306115458 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield org/luaj/vm2/UpValue index I
    sp -= 2;
    ((struct org_luaj_vm2_UpValue*)rstack[sp + 0].obj)->index_1 = stack[sp + 1].i;
    ; 
    //  line no 43 , L230643635 , bytecode index = 
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

void bridge_org_luaj_vm2_UpValue__init____3Lorg_luaj_vm2_LuaValue_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_UpValue__init____3Lorg_luaj_vm2_LuaValue_2I_V(runtime, ins, para[0].i);
}


// locals: 1
// stack: 3
// args: 0
struct java_lang_String* func_org_luaj_vm2_UpValue_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 572, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 46 , L1636182655 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 46;
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
    // getfield org/luaj/vm2/UpValue index I
    stack[sp - 1].i = ((struct org_luaj_vm2_UpValue*)rstack[sp - 1].obj)->index_1;
    sp += 0;
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 921);
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
    // getfield org/luaj/vm2/UpValue array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_UpValue*)rstack[sp - 1].obj)->array_0;
    sp += 0;
    // arraylength  label  L1636182655
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
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
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 922);
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
    // getfield org/luaj/vm2/UpValue array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_UpValue*)rstack[sp - 1].obj)->array_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/UpValue index I
    stack[sp - 1].i = ((struct org_luaj_vm2_UpValue*)rstack[sp - 1].obj)->index_1;
    sp += 0;
    // arrload __refer  ,  L1636182655 bc index = 
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
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/Object;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 41, 7);
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

void bridge_org_luaj_vm2_UpValue_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_UpValue_toString___Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct java_lang_String* func_org_luaj_vm2_UpValue_tojstring___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 573, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 55 , L1932831450 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 55;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/UpValue array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_UpValue*)rstack[sp - 1].obj)->array_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/UpValue index I
    stack[sp - 1].i = ((struct org_luaj_vm2_UpValue*)rstack[sp - 1].obj)->index_1;
    sp += 0;
    // arrload __refer  ,  L1932831450 bc index = 
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
    // invokevirtual org/luaj/vm2/LuaValue.tojstring()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 1, 23);
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

void bridge_org_luaj_vm2_UpValue_tojstring___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_UpValue_tojstring___Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_UpValue_getValue___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 574, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 63 , L1302227152 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 63;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/UpValue array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_UpValue*)rstack[sp - 1].obj)->array_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/UpValue index I
    stack[sp - 1].i = ((struct org_luaj_vm2_UpValue*)rstack[sp - 1].obj)->index_1;
    sp += 0;
    // arrload __refer  ,  L1302227152 bc index = 
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
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_org_luaj_vm2_UpValue_getValue___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_UpValue_getValue___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
void func_org_luaj_vm2_UpValue_setValue__Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 575, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 71 , L350068407 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 71;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/UpValue array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_UpValue*)rstack[sp - 1].obj)->array_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/UpValue index I
    stack[sp - 1].i = ((struct org_luaj_vm2_UpValue*)rstack[sp - 1].obj)->index_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // arrstore __refer  ,  L350068407 bc index = 
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
    //  line no 72 , L1390869998 , bytecode index = 
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

void bridge_org_luaj_vm2_UpValue_setValue__Lorg_luaj_vm2_LuaValue_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_UpValue_setValue__Lorg_luaj_vm2_LuaValue_2_V(runtime, ins);
}


// locals: 2
// stack: 6
// args: 0
void func_org_luaj_vm2_UpValue_close___V(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 576, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 78 , L1645547422 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 78;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/UpValue array [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_UpValue*)rstack[sp - 1].obj)->array_0;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 79 , L440737101 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // ; newarray/multiarray Dimension Array: [Lorg/luaj/vm2/LuaValue; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(38));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/UpValue index I
    stack[sp - 1].i = ((struct org_luaj_vm2_UpValue*)rstack[sp - 1].obj)->index_1;
    sp += 0;
    // arrload __refer  ,  L440737101 bc index = 
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
    // arrstore __refer  ,  L440737101 bc index = 
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
    // putfield org/luaj/vm2/UpValue array [Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_UpValue*)rstack[sp + 0].obj)->array_0 = rstack[sp + 1].obj;
    ; 
    //  line no 80 , L2141817446 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/UpValue index I
    stack[sp - 1].i = ((struct org_luaj_vm2_UpValue*)rstack[sp - 1].obj)->index_1;
    sp += 0;
    // aconst null
    rstack[sp++].obj = NULL;
    // arrstore __refer  ,  L2141817446 bc index = 
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
    //  line no 81 , L369049246 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/UpValue index I
    sp -= 2;
    ((struct org_luaj_vm2_UpValue*)rstack[sp + 0].obj)->index_1 = stack[sp + 1].i;
    ; 
    //  line no 82 , L1608297024 , bytecode index = 
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

void bridge_org_luaj_vm2_UpValue_close___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_UpValue_close___V(runtime, ins);
}


