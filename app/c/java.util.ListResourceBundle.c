// CLASS: java/util/ListResourceBundle extends java/util/ResourceBundle
#include "metadata.h"


// generation
// globals
//struct java_util_ListResourceBundle_static {};



__refer arr_vmtable_java_util_ListResourceBundle_from_java_util_ListResourceBundle[] = {
    func_java_util_ListResourceBundle_getContents____3_3Ljava_lang_Object_2,  //0
    func_java_util_ListResourceBundle_handleGetObject__Ljava_lang_String_2_Ljava_lang_Object_2,  //1
    func_java_util_ListResourceBundle_getKeys___Ljava_util_Enumeration_2  //2
};
__refer arr_vmtable_java_util_ListResourceBundle_from_java_util_ResourceBundle[] = {
    func_java_util_ResourceBundle_getString__Ljava_lang_String_2_Ljava_lang_String_2,  //0
    func_java_util_ResourceBundle_getStringArray__Ljava_lang_String_2__3Ljava_lang_String_2,  //1
    func_java_util_ResourceBundle_getObject__Ljava_lang_String_2_Ljava_lang_Object_2,  //2
    func_java_util_ResourceBundle_getLocale___Ljava_util_Locale_2,  //3
    func_java_util_ResourceBundle_setParent__Ljava_util_ResourceBundle_2_V,  //4
    func_java_util_ListResourceBundle_handleGetObject__Ljava_lang_String_2_Ljava_lang_Object_2,  //5
    func_java_util_ListResourceBundle_getKeys___Ljava_util_Enumeration_2  //6
};
__refer arr_vmtable_java_util_ListResourceBundle_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_lang_Object_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
VMTable vmtable_java_util_ListResourceBundle[] = {
    {271, 3, arr_vmtable_java_util_ListResourceBundle_from_java_util_ListResourceBundle}, //0
    {273, 7, arr_vmtable_java_util_ListResourceBundle_from_java_util_ResourceBundle}, //1
    {10, 11, arr_vmtable_java_util_ListResourceBundle_from_java_lang_Object}, //2
};



// locals: 1
// stack: 1
// args: 0
void func_java_util_ListResourceBundle__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 851, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 51 , L913065088 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 51;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/util/ResourceBundle.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_ResourceBundle__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 52 , L746280996 , bytecode index = 
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

void bridge_java_util_ListResourceBundle__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_ListResourceBundle__init____V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
JArray * func_java_util_ListResourceBundle_getContents____3_3Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 852, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_ListResourceBundle_getContents____3_3Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_ListResourceBundle_getContents____3_3Ljava_lang_Object_2(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
struct java_lang_Object* func_java_util_ListResourceBundle_handleGetObject__Ljava_lang_String_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 853, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 70 , L1557989809 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 70;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/ListResourceBundle.getContents()[[Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 271, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 71 , L146874094 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L2123222442:
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L2123222442
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1746570062;
    ; 
    //  line no 73 , L1555990397 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1555990397 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // iconst_0
    stack[sp++].i = 0;
    // arrload __refer  ,  L1555990397 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
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
    if(stack[--sp].i  == 0) goto L1544078442;
    ; 
    //  line no 74 , L1291367132 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // arrload __refer  ,  L1291367132 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    // iconst_1
    stack[sp++].i = 1;
    // arrload __refer  ,  L1291367132 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1544078442:
    //  line no 71 , L1544078442 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2123222442;
    L1746570062:
    //  line no 76 , L1746570062 , bytecode index = 
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

void bridge_java_util_ListResourceBundle_handleGetObject__Ljava_lang_String_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_ListResourceBundle_handleGetObject__Ljava_lang_String_2_Ljava_lang_Object_2(runtime, ins);
}


// locals: 2
// stack: 4
// args: 0
struct java_util_Enumeration* func_java_util_ListResourceBundle_getKeys___Ljava_util_Enumeration_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 854, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 85 , L1479140596 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 85;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/ListResourceBundle.getContents()[[Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 271, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 87 , L1108889615 , bytecode index = 
    // new java/util/ListResourceBundle$1
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 272);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/util/ListResourceBundle$1.<init>(Ljava/util/ListResourceBundle;[[Ljava/lang/Object;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_ListResourceBundle_000241__init___Ljava_util_ListResourceBundle_2_3_3Ljava_lang_Object_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_java_util_ListResourceBundle_getKeys___Ljava_util_Enumeration_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_ListResourceBundle_getKeys___Ljava_util_Enumeration_2(runtime, ins);
}


