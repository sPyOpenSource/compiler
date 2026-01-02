// CLASS: java/lang/String extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_lang_String_static {};



__refer arr_vmtable_java_lang_String_from_java_lang_String[] = {
    func_java_lang_String_length___I,  //0
    func_java_lang_String_isEmpty___Z,  //1
    func_java_lang_String_indexOf__I_I,  //2
    func_java_lang_String_indexOf__II_I,  //3
    func_java_lang_String_lastIndexOf__I_I,  //4
    func_java_lang_String_lastIndexOf__II_I,  //5
    func_java_lang_String_charAt__I_C,  //6
    func_java_lang_String_toCharArray____3C,  //7
    func_java_lang_String_getChars__II_3CI_V,  //8
    func_java_lang_String_regionMatches__ZILjava_lang_String_2II_Z,  //9
    func_java_lang_String_equals__Ljava_lang_Object_2_Z,  //10
    func_java_lang_String_equalsIgnoreCase__Ljava_lang_String_2_Z,  //11
    func_java_lang_String_compareTo__Ljava_lang_String_2_I,  //12
    func_java_lang_String_startsWith__Ljava_lang_String_2I_Z,  //13
    func_java_lang_String_startsWith__Ljava_lang_String_2_Z,  //14
    func_java_lang_String_endsWith__Ljava_lang_String_2_Z,  //15
    func_java_lang_String_hashCode___I,  //16
    func_java_lang_String_indexOf__Ljava_lang_String_2_I,  //17
    func_java_lang_String_indexOf__Ljava_lang_String_2I_I,  //18
    func_java_lang_String_lastIndexOf__Ljava_lang_String_2_I,  //19
    func_java_lang_String_lastIndexOf__Ljava_lang_String_2I_I,  //20
    func_java_lang_String_substring__I_Ljava_lang_String_2,  //21
    func_java_lang_String_substring__II_Ljava_lang_String_2,  //22
    func_java_lang_String_subSequence__II_Ljava_lang_CharSequence_2,  //23
    func_java_lang_String_replace__Ljava_lang_String_2Ljava_lang_String_2_Ljava_lang_String_2,  //24
    func_java_lang_String_replace__CC_Ljava_lang_String_2,  //25
    func_java_lang_String_getBytes____3B,  //26
    func_java_lang_String_getBytes__Ljava_lang_String_2__3B,  //27
    func_java_lang_String_contains__Ljava_lang_String_2_Z,  //28
    func_java_lang_String_split__Ljava_lang_String_2__3Ljava_lang_String_2,  //29
    func_java_lang_String_split__Ljava_lang_String_2I__3Ljava_lang_String_2,  //30
    func_java_lang_String_expandArr___3Ljava_lang_String_2__3Ljava_lang_String_2,  //31
    func_java_lang_String_trim___Ljava_lang_String_2,  //32
    func_java_lang_String_toLowerCase___Ljava_lang_String_2,  //33
    func_java_lang_String_toUpperCase___Ljava_lang_String_2,  //34
    func_java_lang_String_toString___Ljava_lang_String_2  //35
};
__refer arr_vmtable_java_lang_String_from_java_lang_Object[] = {
    func_java_lang_String_toString___Ljava_lang_String_2,  //0
    func_java_lang_Object_wait___V,  //1
    func_java_lang_Object_finalize___V,  //2
    func_java_lang_String_equals__Ljava_lang_Object_2_Z,  //3
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //4
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //5
    func_java_lang_Object_wait__J_V,  //6
    func_java_lang_Object_notify___V,  //7
    func_java_lang_Object_notifyAll___V,  //8
    func_java_lang_String_hashCode___I  //9
};
__refer arr_vmtable_java_lang_String_from_java_lang_CharSequence[] = {
    func_java_lang_String_charAt__I_C,  //0
    func_java_lang_String_length___I,  //1
    func_java_lang_String_subSequence__II_Ljava_lang_CharSequence_2,  //2
    func_java_lang_String_toString___Ljava_lang_String_2  //3
};
VMTable vmtable_java_lang_String[] = {
    {50, 36, arr_vmtable_java_lang_String_from_java_lang_String}, //0
    {5, 10, arr_vmtable_java_lang_String_from_java_lang_Object}, //1
    {294, 4, arr_vmtable_java_lang_String_from_java_lang_CharSequence}, //2
};



// locals: 1
// stack: 2
// args: 0
void func_java_lang_String__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1800, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 17 , L30563356 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 17;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 13 , L233343686 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/lang/String hash I
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->hash_0 = stack[sp + 1].i;
    ; 
    //  line no 18 , L1539995236 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/lang/String value [C
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 19 , L274426173 , bytecode index = 
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

void bridge_java_lang_String__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_String__init____V(runtime, ins);
}


// locals: 2
// stack: 5
// args: 1
void func_java_lang_String__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1801, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 21 , L1242427797 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 21;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 13 , L1123862502 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/lang/String hash I
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->hash_0 = stack[sp + 1].i;
    ; 
    //  line no 22 , L153443333 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
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
    // putfield java/lang/String count I
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->count_3 = stack[sp + 1].i;
    ; 
    //  line no 23 , L1571278562 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/lang/String value [C
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 24 , L2021854618 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/lang/String.getChars(II[CI)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,JArray *,s32) = find_method(__ins->vm_table, 50, 8);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 25 , L1558460059 , bytecode index = 
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

void bridge_java_lang_String__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_String__init___Ljava_lang_String_2_V(runtime, ins);
}


// locals: 2
// stack: 5
// args: 1
void func_java_lang_String__init____3C_V(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1802, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 27 , L481402298 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 27;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 13 , L2084486251 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/lang/String hash I
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->hash_0 = stack[sp + 1].i;
    ; 
    //  line no 28 , L26418585 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L26418585
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // putfield java/lang/String count I
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->count_3 = stack[sp + 1].i;
    ; 
    //  line no 29 , L1788432625 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/lang/String value [C
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 30 , L2060799061 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 31 , L1929476736 , bytecode index = 
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

void bridge_java_lang_String__init____3C_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_String__init____3C_V(runtime, ins);
}


// locals: 4
// stack: 5
// args: 3
void func_java_lang_String__init____3CII_V(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1803, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 33 , L1247348185 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 33;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 13 , L440295203 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/lang/String hash I
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->hash_0 = stack[sp + 1].i;
    ; 
    //  line no 34 , L1653859230 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L911561694;
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  < 0) goto L911561694;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1653859230
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L882962176;
    L911561694:
    //  line no 35 , L911561694 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/lang/String value [C
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 36 , L1544518128 , bytecode index = 
    method_exit(runtime);
    return;
    L882962176:
    //  line no 38 , L882962176 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/lang/String value [C
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 39 , L570294012 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // putfield java/lang/String count I
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->count_3 = stack[sp + 1].i;
    ; 
    //  line no 40 , L1034584766 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[3].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 41 , L247575268 , bytecode index = 
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

void bridge_java_lang_String__init____3CII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_String__init____3CII_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 2
// stack: 5
// args: 1
void func_java_lang_String__init____3B_V(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1804, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 44 , L1742900195 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 44;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1742900195
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1461);
    // invokespecial java/lang/String.<init>([BIILjava/lang/String;)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_String__init____3BIILjava_lang_String_2_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 45 , L238308051 , bytecode index = 
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

void bridge_java_lang_String__init____3B_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_String__init____3B_V(runtime, ins);
}


// locals: 4
// stack: 5
// args: 3
void func_java_lang_String__init____3BII_V(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1805, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 48 , L277601240 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 48;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1461);
    // invokespecial java/lang/String.<init>([BIILjava/lang/String;)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_String__init____3BIILjava_lang_String_2_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 49 , L1665525689 , bytecode index = 
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

void bridge_java_lang_String__init____3BII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_String__init____3BII_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 6
// stack: 4
// args: 4
void func_java_lang_String__init____3BIILjava_lang_String_2_V(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2, struct java_lang_String* p3){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1806, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    ; 
    //  line no 51 , L1318080469 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 51;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 13 , L727236 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/lang/String hash I
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->hash_0 = stack[sp + 1].i;
    ; 
    //  line no 52 , L1287606099 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1461);
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
    if(stack[--sp].i  == 0) goto L1501513951;
    ; 
    //  line no 53 , L366828226 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L1296612741;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L1296612741;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L366828226
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L2075899560;
    L1296612741:
    //  line no 54 , L1296612741 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 121);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalArgumentException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1296612741 in labeltable is :L1296612741
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 54;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L2075899560:
    //  line no 56 , L2075899560 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokestatic java/lang/VM.utf8ToUtf16([BII)Ljava/lang/String;
    {
        sp -= 4;
        rstack[sp].obj = func_java_lang_VM_utf8ToUtf16___3BII_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 57 , L1486954672 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    // putfield java/lang/String count I
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->count_3 = stack[sp + 1].i;
    ; 
    //  line no 58 , L668301868 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // putfield java/lang/String value [C
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 59 , L804872134 , bytecode index = 
    goto L164733543;
    L1501513951:
    //  line no 60 , L1501513951 , bytecode index = 
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3156);
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
    rstack[sp++].obj = rlocal[4].obj;
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
    //     L1501513951 in labeltable is :L1501513951
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 60;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L164733543:
    //  line no 62 , L164733543 , bytecode index = 
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

void bridge_java_lang_String__init____3BIILjava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_String__init____3BIILjava_lang_String_2_V(runtime, ins, para[0].i, para[1].i, para[2].obj);
}


// locals: 4
// stack: 2
// args: 3
void func_java_lang_String__init___II_3C_V(JThreadRuntime *runtime, s32 p0, s32 p1, JArray * p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1807, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 64 , L1420599919 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 64;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 13 , L827248723 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/lang/String hash I
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->hash_0 = stack[sp + 1].i;
    ; 
    //  line no 65 , L889753223 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // putfield java/lang/String value [C
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 66 , L1215023524 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield java/lang/String offset I
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->offset_2 = stack[sp + 1].i;
    ; 
    //  line no 67 , L2036704540 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield java/lang/String count I
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->count_3 = stack[sp + 1].i;
    ; 
    //  line no 68 , L1055800875 , bytecode index = 
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

void bridge_java_lang_String__init___II_3C_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_String__init___II_3C_V(runtime, ins, para[0].i, para[1].obj);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_lang_String_length___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 71 , L1498621286 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_lang_String_length___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_length___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_lang_String_isEmpty___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1809, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 75 , L1109020385 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 75;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    if(stack[--sp].i  != 0) goto L305651902;
    // iconst_1
    stack[sp++].i = 1;
    goto L1385140107;
    L305651902:
    // iconst_0
    stack[sp++].i = 0;
    L1385140107:
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

void bridge_java_lang_String_isEmpty___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_isEmpty___Z(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
s32 func_java_lang_String_indexOf__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1810, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 79 , L508873523 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 79;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/lang/String.indexOf(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 50, 3);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
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

void bridge_java_lang_String_indexOf__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_indexOf__I_I(runtime, ins);
}


// locals: 6
// stack: 2
// args: 2
s32 func_java_lang_String_indexOf__II_I(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1811, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 83 , L496425074 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 83;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 84 , L1551139176 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 86 , L1682031750 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  >= 0) goto L137659163;
    ; 
    //  line no 87 , L592088871 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    goto L1531782631;
    L137659163:
    //  line no 88 , L137659163 , bytecode index = 
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1531782631;
    ; 
    //  line no 89 , L834842620 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1531782631:
    //  line no 91 , L1531782631 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    L499310212:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1778801068;
    ; 
    //  line no 92 , L1490434838 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[5].i;
    // arrload u16  ,  L1490434838 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2085601983;
    ; 
    //  line no 93 , L2003961164 , bytecode index = 
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    method_exit(runtime);
    return stack[sp - 1].i;
    L2085601983:
    //  line no 91 , L2085601983 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L499310212;
    L1778801068:
    //  line no 96 , L1778801068 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
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

void bridge_java_lang_String_indexOf__II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_indexOf__II_I(runtime, ins, para[0].i);
}


// locals: 2
// stack: 4
// args: 1
s32 func_java_lang_String_lastIndexOf__I_I(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1812, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 100 , L1183213894 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 100;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokevirtual java/lang/String.lastIndexOf(II)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 50, 5);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
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

void bridge_java_lang_String_lastIndexOf__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_lastIndexOf__I_I(runtime, ins);
}


// locals: 6
// stack: 3
// args: 2
s32 func_java_lang_String_lastIndexOf__II_I(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1813, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 104 , L593573025 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 104;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 105 , L57264571 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 107 , L1993366729 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1118969241;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    goto L1759313234;
    L1118969241:
    stack[sp++].i = local[2].i;
    L1759313234:
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    L632669667:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1366811528;
    ; 
    //  line no 108 , L58421994 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[5].i;
    // arrload u16  ,  L58421994 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L214055354;
    ; 
    //  line no 109 , L131301148 , bytecode index = 
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    method_exit(runtime);
    return stack[sp - 1].i;
    L214055354:
    //  line no 107 , L214055354 , bytecode index = 
    // iinc slot 5 value -1
    local[5].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L632669667;
    L1366811528:
    //  line no 112 , L1366811528 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
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

void bridge_java_lang_String_lastIndexOf__II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_lastIndexOf__II_I(runtime, ins, para[0].i);
}


// locals: 2
// stack: 3
// args: 1
u16 func_java_lang_String_charAt__I_C(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1814, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 116 , L828535871 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 116;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  < 0) goto L745571392;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L828535871
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L809968973;
    L745571392:
    //  line no 117 , L745571392 , bytecode index = 
    // new java/lang/ArrayIndexOutOfBoundsException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 6);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[1].i;
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
    // invokespecial java/lang/ArrayIndexOutOfBoundsException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_ArrayIndexOutOfBoundsException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L745571392 in labeltable is :L745571392
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 117;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L809968973:
    //  line no 119 , L809968973 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload u16  ,  L809968973 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
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

void bridge_java_lang_String_charAt__I_C(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_charAt__I_C(runtime, ins);
}


// locals: 2
// stack: 5
// args: 0
JArray * func_java_lang_String_toCharArray____3C(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1815, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 123 , L1318209130 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 123;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 124 , L1726519676 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/lang/String.getChars(II[CI)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,JArray *,s32) = find_method(__ins->vm_table, 50, 8);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 125 , L1863103905 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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

void bridge_java_lang_String_toCharArray____3C(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_toCharArray____3C(runtime, ins);
}


// locals: 5
// stack: 6
// args: 4
void func_java_lang_String_getChars__II_3CI_V(JThreadRuntime *runtime, s32 p0, s32 p1, JArray * p2, s32 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1816, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    rlocal[2].obj = p2;
    local[3].i = p3;
    ; 
    //  line no 129 , L1196716338 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 129;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  < 0) goto L1700078557;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L1196716338
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1700078557;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1870541675;
    L1700078557:
    //  line no 130 , L1700078557 , bytecode index = 
    method_exit(runtime);
    return;
    L1870541675:
    //  line no 132 , L1870541675 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 133 , L975905570 , bytecode index = 
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

void bridge_java_lang_String_getChars__II_3CI_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_String_getChars__II_3CI_V(runtime, ins, para[0].i, para[1].obj, para[2].i);
}


// locals: 15
// stack: 6
// args: 5
s8 func_java_lang_String_regionMatches__ZILjava_lang_String_2II_Z(JThreadRuntime *runtime, s8 p0, s32 p1, struct java_lang_String* p2, s32 p3, s32 p4){
    
    StackItem local[15] = {0};
    RStackItem rlocal[15] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1817, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    rlocal[2].obj = p2;
    local[3].i = p3;
    local[4].i = p4;
    ; 
    //  line no 138 , L311788384 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 138;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 139 , L208539442 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 140 , L1866403758 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[8].i = stack[--sp].i;
    ; 
    //  line no 141 , L564555077 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rlocal[9].obj = rstack[--sp].obj;
    ; 
    //  line no 142 , L529949842 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[10].i = stack[--sp].i;
    ; 
    //  line no 145 , L1677590477 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  < 0) goto L1948835427;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L1948835427;
    stack[sp++].i = local[2].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp++].i = local[5].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  > 0) goto L1948835427;
    stack[sp++].i = local[4].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp++].i = local[5].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    stack[sp - 4].j = stack[sp - 4].j - stack[sp - 2].j; 
    sp -= 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L1727420902;
    L1948835427:
    //  line no 147 , L1948835427 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1727420902:
    //  line no 149 , L1727420902 , bytecode index = 
    stack[sp++].i = local[5].i;
    // iinc slot 5 value -1
    local[5].i += -1;
    if(stack[--sp].i  <= 0) goto L1248334686;
    ; 
    //  line no 150 , L1181191753 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    stack[sp++].i = local[7].i;
    // iinc slot 7 value 1
    local[7].i += 1;
    // arrload u16  ,  L1181191753 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    local[11].i = stack[--sp].i;
    ; 
    //  line no 151 , L1955502880 , bytecode index = 
    rstack[sp++].obj = rlocal[9].obj;
    stack[sp++].i = local[10].i;
    // iinc slot 10 value 1
    local[10].i += 1;
    // arrload u16  ,  L1955502880 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    local[12].i = stack[--sp].i;
    ; 
    //  line no 152 , L543409470 , bytecode index = 
    stack[sp++].i = local[11].i;
    stack[sp++].i = local[12].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L714850447;
    ; 
    //  line no 153 , L1358169683 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1727420902;
    L714850447:
    //  line no 155 , L714850447 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  == 0) goto L1352913142;
    ; 
    //  line no 156 , L1851241961 , bytecode index = 
    stack[sp++].i = local[11].i;
    // invokestatic java/lang/Character.toUpperCase(C)C
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Character_toUpperCase__C_C(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[13].i = stack[--sp].i;
    ; 
    //  line no 157 , L448569108 , bytecode index = 
    stack[sp++].i = local[12].i;
    // invokestatic java/lang/Character.toUpperCase(C)C
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Character_toUpperCase__C_C(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[14].i = stack[--sp].i;
    ; 
    //  line no 158 , L1779090574 , bytecode index = 
    stack[sp++].i = local[13].i;
    stack[sp++].i = local[14].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L618696025;
    ; 
    //  line no 159 , L2009832657 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1727420902;
    L618696025:
    //  line no 161 , L618696025 , bytecode index = 
    stack[sp++].i = local[13].i;
    // invokestatic java/lang/Character.toLowerCase(C)C
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Character_toLowerCase__C_C(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[14].i;
    // invokestatic java/lang/Character.toLowerCase(C)C
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Character_toLowerCase__C_C(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1352913142;
    ; 
    //  line no 162 , L158460163 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1727420902;
    L1352913142:
    //  line no 165 , L1352913142 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1248334686:
    //  line no 167 , L1248334686 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
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

void bridge_java_lang_String_regionMatches__ZILjava_lang_String_2II_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_regionMatches__ZILjava_lang_String_2II_Z(runtime, ins, para[0].i, para[1].obj, para[2].i, para[3].i);
}


// locals: 7
// stack: 3
// args: 1
s8 func_java_lang_String_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1818, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 171 , L357153703 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 171;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L1045397707;
    ; 
    //  line no 172 , L946884592 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1045397707:
    //  line no 174 , L1045397707 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof java/lang/String
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 32);
    if(stack[--sp].i  == 0) goto L380494131;
    ; 
    //  line no 175 , L1315038402 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast java/lang/String
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 32);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 176 , L208301085 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L208301085
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[3].i = stack[--sp].i;
    ; 
    //  line no 177 , L920632751 , bytecode index = 
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L920632751
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L380494131;
    ; 
    //  line no 178 , L1333945918 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 179 , L235195640 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 180 , L1372668833 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    L438873841:
    //  line no 181 , L438873841 , bytecode index = 
    stack[sp++].i = local[3].i;
    // iinc slot 3 value -1
    local[3].i += -1;
    if(stack[--sp].i  == 0) goto L1179093020;
    ; 
    //  line no 182 , L1846345504 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[6].i;
    // arrload u16  ,  L1846345504 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[6].i;
    // arrload u16  ,  L1846345504 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L899376395;
    ; 
    //  line no 183 , L1788545647 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L899376395:
    //  line no 185 , L899376395 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L438873841;
    L1179093020:
    //  line no 187 , L1179093020 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L380494131:
    //  line no 190 , L380494131 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
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

void bridge_java_lang_String_equals__Ljava_lang_Object_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_equals__Ljava_lang_Object_2_Z(runtime, ins);
}


// locals: 2
// stack: 6
// args: 1
s8 func_java_lang_String_equalsIgnoreCase__Ljava_lang_String_2_Z(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1819, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 194 , L421163163 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 194;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L2009591182;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2009591182;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    ; 
    //  line no 195 , L1161644395 , bytecode index = 
    // invokevirtual java/lang/String.regionMatches(ZILjava/lang/String;II)Z
    {
        sp -= 5;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s8,s32,struct java_lang_String*,s32,s32) = find_method(__ins->vm_table, 50, 9);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj, stack[sp + 3].i, stack[sp + 4].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L2009591182;
    // iconst_1
    stack[sp++].i = 1;
    goto L1723518396;
    L2009591182:
    // iconst_0
    stack[sp++].i = 0;
    L1723518396:
    //  line no 194 , L1723518396 , bytecode index = 
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

void bridge_java_lang_String_equalsIgnoreCase__Ljava_lang_String_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_equalsIgnoreCase__Ljava_lang_String_2_Z(runtime, ins);
}


// locals: 10
// stack: 2
// args: 1
s32 func_java_lang_String_compareTo__Ljava_lang_String_2_I(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[10] = {0};
    RStackItem rlocal[10] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1820, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 199 , L1678623942 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 199;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L1678623942
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[2].i = stack[--sp].i;
    ; 
    //  line no 200 , L1263841085 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L1263841085
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[3].i = stack[--sp].i;
    ; 
    //  line no 201 , L2075352262 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 202 , L540811471 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 203 , L706604026 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 205 , L1155437763 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[7].i = stack[--sp].i;
    L627746290:
    //  line no 206 , L627746290 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1678889928;
    ; 
    //  line no 207 , L555136651 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[7].i;
    // arrload u16  ,  L555136651 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    local[8].i = stack[--sp].i;
    ; 
    //  line no 208 , L299783910 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    stack[sp++].i = local[7].i;
    // arrload u16  ,  L299783910 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    local[9].i = stack[--sp].i;
    ; 
    //  line no 209 , L1634411546 , bytecode index = 
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[9].i;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L193864812;
    ; 
    //  line no 210 , L523794808 , bytecode index = 
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[9].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    method_exit(runtime);
    return stack[sp - 1].i;
    L193864812:
    //  line no 212 , L193864812 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    ; 
    //  line no 213 , L2092066079 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L627746290;
    L1678889928:
    //  line no 214 , L1678889928 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
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

void bridge_java_lang_String_compareTo__Ljava_lang_String_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_compareTo__Ljava_lang_String_2_I(runtime, ins);
}


// locals: 8
// stack: 3
// args: 2
s8 func_java_lang_String_startsWith__Ljava_lang_String_2I_Z(JThreadRuntime *runtime, struct java_lang_String* p0, s32 p1){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1821, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 218 , L1041638599 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 218;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 219 , L1656318404 , bytecode index = 
    stack[sp++].i = local[2].i;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 220 , L231498257 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 221 , L1206678562 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 222 , L1213419524 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L1213419524
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[7].i = stack[--sp].i;
    ; 
    //  line no 224 , L1628305283 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  < 0) goto L255839577;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L1628305283
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[7].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L727119352;
    L255839577:
    //  line no 225 , L255839577 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L727119352:
    //  line no 227 , L727119352 , bytecode index = 
    // iinc slot 7 value -1
    local[7].i += -1;
    stack[sp++].i = local[7].i;
    if(stack[--sp].i  < 0) goto L2044150758;
    ; 
    //  line no 228 , L2003305136 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // iinc slot 4 value 1
    local[4].i += 1;
    // arrload u16  ,  L2003305136 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[6].i;
    // iinc slot 6 value 1
    local[6].i += 1;
    // arrload u16  ,  L2003305136 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L727119352;
    ; 
    //  line no 229 , L105663489 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L2044150758:
    //  line no 232 , L2044150758 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
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

void bridge_java_lang_String_startsWith__Ljava_lang_String_2I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_startsWith__Ljava_lang_String_2I_Z(runtime, ins, para[0].i);
}


// locals: 2
// stack: 3
// args: 1
s8 func_java_lang_String_startsWith__Ljava_lang_String_2_Z(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1822, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 236 , L1495414981 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 236;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/lang/String.startsWith(Ljava/lang/String;I)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_String*,s32) = find_method(__ins->vm_table, 50, 13);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
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

void bridge_java_lang_String_startsWith__Ljava_lang_String_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_startsWith__Ljava_lang_String_2_Z(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
s8 func_java_lang_String_endsWith__Ljava_lang_String_2_Z(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1823, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 240 , L169916747 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 240;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L169916747
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L169916747
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokevirtual java/lang/String.startsWith(Ljava/lang/String;I)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_String*,s32) = find_method(__ins->vm_table, 50, 13);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
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

void bridge_java_lang_String_endsWith__Ljava_lang_String_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_endsWith__Ljava_lang_String_2_Z(runtime, ins);
}


// locals: 4
// stack: 3
// args: 0
s32 func_java_lang_String_hashCode___I(JThreadRuntime *runtime){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1824, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 244 , L351520508 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 244;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String hash I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->hash_0;
    sp += 0;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 245 , L1020632821 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  != 0) goto L867205829;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L1020632821
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    if(stack[--sp].i  <= 0) goto L867205829;
    ; 
    //  line no 246 , L369573800 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 248 , L482987954 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    L217827560:
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L217827560
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1005245720;
    ; 
    //  line no 249 , L348084146 , bytecode index = 
    //  bipush 31
    stack[sp++].i = 31;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // arrload u16  ,  L348084146 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 248 , L1188671176 , bytecode index = 
    // iinc slot 3 value 1
    local[3].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L217827560;
    L1005245720:
    //  line no 251 , L1005245720 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield java/lang/String hash I
    sp -= 2;
    ((struct java_lang_String*)rstack[sp + 0].obj)->hash_0 = stack[sp + 1].i;
    L867205829:
    //  line no 253 , L867205829 , bytecode index = 
    stack[sp++].i = local[1].i;
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

void bridge_java_lang_String_hashCode___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_hashCode___I(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
s32 func_java_lang_String_indexOf__Ljava_lang_String_2_I(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1825, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 257 , L2031667192 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 257;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/lang/String.indexOf(Ljava/lang/String;I)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_String*,s32) = find_method(__ins->vm_table, 50, 18);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
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

void bridge_java_lang_String_indexOf__Ljava_lang_String_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_indexOf__Ljava_lang_String_2_I(runtime, ins);
}


// locals: 3
// stack: 7
// args: 2
s32 func_java_lang_String_indexOf__Ljava_lang_String_2I_I(JThreadRuntime *runtime, struct java_lang_String* p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1826, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 261 , L475024998 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 261;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L475024998
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L475024998
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[2].i;
    // invokestatic java/lang/String.indexOf([CII[CIII)I
    {
        sp -= 8;
        stack[sp].i = func_java_lang_String_indexOf___3CII_3CIII_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i);
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

void bridge_java_lang_String_indexOf__Ljava_lang_String_2I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_indexOf__Ljava_lang_String_2I_I(runtime, ins, para[0].i);
}


// locals: 5
// stack: 7
// args: 6
s32 func_java_lang_String_indexOf___3CIILjava_lang_String_2I_I(JThreadRuntime *runtime, struct java_lang_String* p0, JArray * p1, s32 p2, s32 p3, struct java_lang_String* p4, s32 p5){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1827, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    local[5].i = p5;
    ; 
    //  line no 267 , L197449185 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 267;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L197449185
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[4].i;
    // invokestatic java/lang/String.indexOf([CII[CIII)I
    {
        sp -= 8;
        stack[sp].i = func_java_lang_String_indexOf___3CII_3CIII_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i);
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

void bridge_java_lang_String_indexOf___3CIILjava_lang_String_2I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_indexOf___3CIILjava_lang_String_2I_I(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i, para[4].obj, para[5].i);
}


// locals: 13
// stack: 3
// args: 8
s32 func_java_lang_String_indexOf___3CII_3CIII_I(JThreadRuntime *runtime, struct java_lang_String* p0, JArray * p1, s32 p2, s32 p3, JArray * p4, s32 p5, s32 p6, s32 p7){
    
    StackItem local[13] = {0};
    RStackItem rlocal[13] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1828, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    local[5].i = p5;
    local[6].i = p6;
    local[7].i = p7;
    ; 
    //  line no 275 , L576191199 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 275;
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1900307803;
    ; 
    //  line no 276 , L1552076111 , bytecode index = 
    stack[sp++].i = local[5].i;
    if(stack[--sp].i  != 0) goto L897801829;
    stack[sp++].i = local[2].i;
    goto L681564936;
    L897801829:
    // iconst_-1
    stack[sp++].i = -1;
    L681564936:
    method_exit(runtime);
    return stack[sp - 1].i;
    L1900307803:
    //  line no 278 , L1900307803 , bytecode index = 
    stack[sp++].i = local[6].i;
    if(stack[--sp].i  >= 0) goto L2049121789;
    ; 
    //  line no 279 , L813780803 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    L2049121789:
    //  line no 281 , L2049121789 , bytecode index = 
    stack[sp++].i = local[5].i;
    if(stack[--sp].i  != 0) goto L534662976;
    ; 
    //  line no 282 , L1238339624 , bytecode index = 
    stack[sp++].i = local[6].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L534662976:
    //  line no 285 , L534662976 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // arrload u16  ,  L534662976 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    local[7].i = stack[--sp].i;
    ; 
    //  line no 286 , L727818265 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[8].i = stack[--sp].i;
    ; 
    //  line no 288 , L295700833 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[9].i = stack[--sp].i;
    L2095702106:
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[8].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1234329919;
    ; 
    //  line no 290 , L1876259196 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[9].i;
    // arrload u16  ,  L1876259196 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    stack[sp++].i = local[7].i;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L2117043942;
    L1299661385:
    //  line no 291 , L1299661385 , bytecode index = 
    // iinc slot 9 value 1
    local[9].i += 1;
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[8].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L2117043942;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[9].i;
    // arrload u16  ,  L1299661385 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    stack[sp++].i = local[7].i;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L2117043942;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1299661385;
    L2117043942:
    //  line no 295 , L2117043942 , bytecode index = 
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[8].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L397822273;
    ; 
    //  line no 296 , L1403815002 , bytecode index = 
    stack[sp++].i = local[9].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[10].i = stack[--sp].i;
    ; 
    //  line no 297 , L1362501759 , bytecode index = 
    stack[sp++].i = local[10].i;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[11].i = stack[--sp].i;
    ; 
    //  line no 298 , L648303898 , bytecode index = 
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[12].i = stack[--sp].i;
    L66972878:
    stack[sp++].i = local[10].i;
    stack[sp++].i = local[11].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L876881599;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[10].i;
    // arrload u16  ,  L66972878 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[12].i;
    // arrload u16  ,  L66972878 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L876881599;
    ; 
    //  line no 299 , L1410456976 , bytecode index = 
    // iinc slot 10 value 1
    local[10].i += 1;
    // iinc slot 12 value 1
    local[12].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L66972878;
    L876881599:
    //  line no 302 , L876881599 , bytecode index = 
    stack[sp++].i = local[10].i;
    stack[sp++].i = local[11].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L397822273;
    ; 
    //  line no 304 , L1343835789 , bytecode index = 
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    method_exit(runtime);
    return stack[sp - 1].i;
    L397822273:
    //  line no 288 , L397822273 , bytecode index = 
    // iinc slot 9 value 1
    local[9].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2095702106;
    L1234329919:
    //  line no 308 , L1234329919 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
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

void bridge_java_lang_String_indexOf___3CII_3CIII_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_indexOf___3CII_3CIII_I(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i, para[4].obj, para[5].i, para[6].i, para[7].i);
}


// locals: 2
// stack: 3
// args: 1
s32 func_java_lang_String_lastIndexOf__Ljava_lang_String_2_I(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1829, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 312 , L688581408 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 312;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L688581408
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokevirtual java/lang/String.lastIndexOf(Ljava/lang/String;I)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_String*,s32) = find_method(__ins->vm_table, 50, 20);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
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

void bridge_java_lang_String_lastIndexOf__Ljava_lang_String_2_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_lastIndexOf__Ljava_lang_String_2_I(runtime, ins);
}


// locals: 3
// stack: 7
// args: 2
s32 func_java_lang_String_lastIndexOf__Ljava_lang_String_2I_I(JThreadRuntime *runtime, struct java_lang_String* p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1830, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 316 , L1775897362 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 316;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L1775897362
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L1775897362
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[2].i;
    // invokestatic java/lang/String.lastIndexOf([CII[CIII)I
    {
        sp -= 8;
        stack[sp].i = func_java_lang_String_lastIndexOf___3CII_3CIII_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i);
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

void bridge_java_lang_String_lastIndexOf__Ljava_lang_String_2I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_lastIndexOf__Ljava_lang_String_2I_I(runtime, ins, para[0].i);
}


// locals: 5
// stack: 7
// args: 6
s32 func_java_lang_String_lastIndexOf___3CIILjava_lang_String_2I_I(JThreadRuntime *runtime, struct java_lang_String* p0, JArray * p1, s32 p2, s32 p3, struct java_lang_String* p4, s32 p5){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[8];
    RStackItem rstack[8];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1831, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    local[5].i = p5;
    ; 
    //  line no 322 , L1497983329 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 322;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L1497983329
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[4].i;
    // invokestatic java/lang/String.lastIndexOf([CII[CIII)I
    {
        sp -= 8;
        stack[sp].i = func_java_lang_String_lastIndexOf___3CII_3CIII_I(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj, stack[sp + 5].i, stack[sp + 6].i, stack[sp + 7].i);
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

void bridge_java_lang_String_lastIndexOf___3CIILjava_lang_String_2I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_lastIndexOf___3CIILjava_lang_String_2I_I(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i, para[4].obj, para[5].i);
}


// locals: 15
// stack: 3
// args: 8
s32 func_java_lang_String_lastIndexOf___3CII_3CIII_I(JThreadRuntime *runtime, struct java_lang_String* p0, JArray * p1, s32 p2, s32 p3, JArray * p4, s32 p5, s32 p6, s32 p7){
    
    StackItem local[15] = {0};
    RStackItem rlocal[15] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1832, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    local[2].i = p2;
    local[3].i = p3;
    rlocal[4].obj = p4;
    local[5].i = p5;
    local[6].i = p6;
    local[7].i = p7;
    ; 
    //  line no 334 , L2041611826 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 334;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 335 , L2021601975 , bytecode index = 
    stack[sp++].i = local[6].i;
    if(stack[--sp].i  >= 0) goto L1794068152;
    ; 
    //  line no 336 , L1992630936 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1794068152:
    //  line no 338 , L1794068152 , bytecode index = 
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[7].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L196717412;
    ; 
    //  line no 339 , L173197870 , bytecode index = 
    stack[sp++].i = local[7].i;
    local[6].i = stack[--sp].i;
    L196717412:
    //  line no 342 , L196717412 , bytecode index = 
    stack[sp++].i = local[5].i;
    if(stack[--sp].i  != 0) goto L450420562;
    ; 
    //  line no 343 , L1171713907 , bytecode index = 
    stack[sp++].i = local[6].i;
    method_exit(runtime);
    return stack[sp - 1].i;
    L450420562:
    //  line no 346 , L450420562 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[8].i = stack[--sp].i;
    ; 
    //  line no 347 , L66231846 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[8].i;
    // arrload u16  ,  L66231846 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    local[9].i = stack[--sp].i;
    ; 
    //  line no 348 , L527247308 , bytecode index = 
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[10].i = stack[--sp].i;
    ; 
    //  line no 349 , L1133730108 , bytecode index = 
    stack[sp++].i = local[10].i;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[11].i = stack[--sp].i;
    L827099978:
    //  line no 353 , L827099978 , bytecode index = 
    stack[sp++].i = local[11].i;
    stack[sp++].i = local[10].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L651698411;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[11].i;
    // arrload u16  ,  L827099978 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    stack[sp++].i = local[9].i;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L651698411;
    ; 
    //  line no 354 , L1350377659 , bytecode index = 
    // iinc slot 11 value -1
    local[11].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L827099978;
    L651698411:
    //  line no 356 , L651698411 , bytecode index = 
    stack[sp++].i = local[11].i;
    stack[sp++].i = local[10].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L167692593;
    ; 
    //  line no 357 , L1555895711 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L167692593:
    //  line no 359 , L167692593 , bytecode index = 
    stack[sp++].i = local[11].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[12].i = stack[--sp].i;
    ; 
    //  line no 360 , L990226843 , bytecode index = 
    stack[sp++].i = local[12].i;
    stack[sp++].i = local[5].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[13].i = stack[--sp].i;
    ; 
    //  line no 361 , L46415544 , bytecode index = 
    stack[sp++].i = local[8].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[14].i = stack[--sp].i;
    L2097989776:
    //  line no 363 , L2097989776 , bytecode index = 
    stack[sp++].i = local[12].i;
    stack[sp++].i = local[13].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1227438915;
    ; 
    //  line no 364 , L1609960076 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[12].i;
    // iinc slot 12 value -1
    local[12].i += -1;
    // arrload u16  ,  L1609960076 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[14].i;
    // iinc slot 14 value -1
    local[14].i += -1;
    // arrload u16  ,  L1609960076 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L2097989776;
    ; 
    //  line no 365 , L2095373876 , bytecode index = 
    // iinc slot 11 value -1
    local[11].i += -1;
    ; 
    //  line no 366 , L1740095856 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L827099978;
    L1227438915:
    //  line no 369 , L1227438915 , bytecode index = 
    stack[sp++].i = local[13].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
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

void bridge_java_lang_String_lastIndexOf___3CII_3CIII_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_lastIndexOf___3CII_3CIII_I(runtime, para[0].obj, para[1].obj, para[2].i, para[3].i, para[4].obj, para[5].i, para[6].i, para[7].i);
}


// locals: 2
// stack: 3
// args: 1
struct java_lang_String* func_java_lang_String_substring__I_Ljava_lang_String_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1833, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 374 , L143251944 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 374;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
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

void bridge_java_lang_String_substring__I_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_substring__I_Ljava_lang_String_2(runtime, ins);
}


// locals: 4
// stack: 5
// args: 2
struct java_lang_String* func_java_lang_String_substring__II_Ljava_lang_String_2(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1834, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 378 , L195253450 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 378;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  >= 0) goto L1280263013;
    ; 
    //  line no 379 , L181372317 , bytecode index = 
    // new java/lang/ArrayIndexOutOfBoundsException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 6);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[1].i;
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
    // invokespecial java/lang/ArrayIndexOutOfBoundsException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_ArrayIndexOutOfBoundsException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L181372317 in labeltable is :L181372317
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 379;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1280263013:
    //  line no 381 , L1280263013 , bytecode index = 
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1844700236;
    ; 
    //  line no 382 , L2095573052 , bytecode index = 
    // new java/lang/ArrayIndexOutOfBoundsException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 6);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[2].i;
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
    // invokespecial java/lang/ArrayIndexOutOfBoundsException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_ArrayIndexOutOfBoundsException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L2095573052 in labeltable is :L2095573052
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 382;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1844700236:
    //  line no 384 , L1844700236 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 385 , L1241897134 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  >= 0) goto L1016090398;
    ; 
    //  line no 386 , L1320357188 , bytecode index = 
    // new java/lang/ArrayIndexOutOfBoundsException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 6);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[3].i;
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
    // invokespecial java/lang/ArrayIndexOutOfBoundsException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_ArrayIndexOutOfBoundsException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1320357188 in labeltable is :L1320357188
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 386;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1016090398:
    //  line no 388 , L1016090398 , bytecode index = 
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  != 0) goto L223783590;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L223783590;
    rstack[sp++].obj = rlocal[0].obj;
    goto L1769128714;
    L223783590:
    //  line no 389 , L223783590 , bytecode index = 
    // new java/lang/String
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 50);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // invokespecial java/lang/String.<init>(II[C)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_String__init___II_3C_V(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1769128714:
    //  line no 388 , L1769128714 , bytecode index = 
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

void bridge_java_lang_String_substring__II_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_substring__II_Ljava_lang_String_2(runtime, ins, para[0].i);
}


// locals: 3
// stack: 3
// args: 2
struct java_lang_CharSequence* func_java_lang_String_subSequence__II_Ljava_lang_CharSequence_2(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1835, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 394 , L28010264 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 394;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
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

void bridge_java_lang_String_subSequence__II_Ljava_lang_CharSequence_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_subSequence__II_Ljava_lang_CharSequence_2(runtime, ins, para[0].i);
}


// locals: 12
// stack: 4
// args: 2
struct java_lang_String* func_java_lang_String_replace__Ljava_lang_String_2Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_String* p1){
    
    StackItem local[12] = {0};
    RStackItem rlocal[12] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1836, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 398 , L1174737066 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 398;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L891175246;
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  == NULL) goto L891175246;
    rstack[sp++].obj = rlocal[1].obj;
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
    if(stack[--sp].i  != 0) goto L1876390738;
    L891175246:
    //  line no 399 , L891175246 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1876390738:
    //  line no 401 , L1876390738 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 402 , L1359603919 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 403 , L1063723524 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 405 , L2025066647 , bytecode index = 
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 41);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
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
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 406 , L741191984 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[7].i = stack[--sp].i;
    L847018986:
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L881662115;
    ; 
    //  line no 407 , L1818592781 , bytecode index = 
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[8].i = stack[--sp].i;
    ; 
    //  line no 408 , L754978432 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    stack[sp++].i = local[8].i;
    // arrload u16  ,  L754978432 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    local[9].i = stack[--sp].i;
    ; 
    //  line no 409 , L2096268257 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[10].i = stack[--sp].i;
    ; 
    //  line no 410 , L551994588 , bytecode index = 
    stack[sp++].i = local[9].i;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // arrload u16  ,  L551994588 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1618180899;
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1618180899;
    ; 
    //  line no 411 , L1294605731 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[10].i = stack[--sp].i;
    ; 
    //  line no 412 , L623862380 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[11].i = stack[--sp].i;
    L871989809:
    stack[sp++].i = local[11].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1618180899;
    ; 
    //  line no 413 , L1210600718 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload u16  ,  L1210600718 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[11].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload u16  ,  L1210600718 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1433568941;
    ; 
    //  line no 414 , L185639533 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[10].i = stack[--sp].i;
    ; 
    //  line no 415 , L1946636596 , bytecode index = 
    goto L1618180899;
    L1433568941:
    //  line no 412 , L1433568941 , bytecode index = 
    // iinc slot 11 value 1
    local[11].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L871989809;
    L1618180899:
    //  line no 419 , L1618180899 , bytecode index = 
    stack[sp++].i = local[10].i;
    if(stack[--sp].i  == 0) goto L2118984327;
    ; 
    //  line no 420 , L1061913613 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rstack[sp++].obj = rlocal[2].obj;
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
    --sp; //pop
    ; 
    //  line no 421 , L826690115 , bytecode index = 
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[7].i = stack[--sp].i;
    goto L2139501486;
    L2118984327:
    //  line no 423 , L2118984327 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    stack[sp++].i = local[9].i;
    // invokevirtual java/lang/StringBuilder.append(C)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,u16) = find_method(__ins->vm_table, 41, 6);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 424 , L1757970371 , bytecode index = 
    // iinc slot 7 value 1
    local[7].i += 1;
    L2139501486:
    //  line no 426 , L2139501486 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L847018986;
    L881662115:
    //  line no 427 , L881662115 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
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

void bridge_java_lang_String_replace__Ljava_lang_String_2Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_replace__Ljava_lang_String_2Ljava_lang_String_2_Ljava_lang_String_2(runtime, ins, para[0].obj);
}


// locals: 9
// stack: 5
// args: 2
struct java_lang_String* func_java_lang_String_replace__CC_Ljava_lang_String_2(JThreadRuntime *runtime, u16 p0, u16 p1){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1837, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 431 , L148353618 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 431;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1182985125;
    ; 
    //  line no 432 , L1839182545 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 433 , L1643838324 , bytecode index = 
    // iconst_-1
    stack[sp++].i = -1;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 434 , L1409978427 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 435 , L92575452 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    local[6].i = stack[--sp].i;
    L354268551:
    //  line no 437 , L354268551 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L596299019;
    ; 
    //  line no 438 , L595663369 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload u16  ,  L595663369 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    stack[sp++].i = local[1].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L354268551;
    ; 
    //  line no 439 , L34757331 , bytecode index = 
    goto L596299019;
    L596299019:
    //  line no 442 , L596299019 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1182985125;
    ; 
    //  line no 443 , L2052814491 , bytecode index = 
    stack[sp++].i = local[3].i;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 444 , L256642638 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[8].i = stack[--sp].i;
    L607526140:
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L887230059;
    ; 
    //  line no 445 , L363616706 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    stack[sp++].i = local[8].i;
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload u16  ,  L363616706 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    // arrstore u16  ,  L363616706 bc index = 
    {
        ;
        u16 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_u16_arr[idx] = value;
    }
    ; 
    //  line no 444 , L2055019335 , bytecode index = 
    // iinc slot 8 value 1
    local[8].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L607526140;
    L887230059:
    //  line no 447 , L887230059 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1857562888;
    ; 
    //  line no 448 , L1250816994 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    stack[sp++].i = local[6].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload u16  ,  L1250816994 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    local[8].i = stack[--sp].i;
    ; 
    //  line no 449 , L1033425208 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L791499503;
    stack[sp++].i = local[2].i;
    goto L15912555;
    L791499503:
    stack[sp++].i = local[8].i;
    L15912555:
    // arrstore u16  ,  L15912555 bc index = 
    {
        ;
        u16 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_u16_arr[idx] = value;
    }
    ; 
    //  line no 450 , L633683828 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    ; 
    //  line no 451 , L1580153829 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L887230059;
    L1857562888:
    //  line no 452 , L1857562888 , bytecode index = 
    // new java/lang/String
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 50);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[7].obj;
    // invokespecial java/lang/String.<init>(II[C)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_String__init___II_3C_V(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1182985125:
    //  line no 455 , L1182985125 , bytecode index = 
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

void bridge_java_lang_String_replace__CC_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_replace__CC_Ljava_lang_String_2(runtime, ins, para[0].i);
}


// locals: 1
// stack: 1
// args: 0
JArray * func_java_lang_String_getBytes____3B(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1838, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 459 , L231191650 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 459;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/lang/VM.utf16ToUtf8(Ljava/lang/String;)[B
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_VM_utf16ToUtf8__Ljava_lang_String_2__3B(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_java_lang_String_getBytes____3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_getBytes____3B(runtime, ins);
}


// locals: 2
// stack: 4
// args: 1
JArray * func_java_lang_String_getBytes__Ljava_lang_String_2__3B(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1839, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 463 , L648214521 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 463;
    rstack[sp++].obj = rlocal[1].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1461);
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
    if(stack[--sp].i  == 0) goto L954936400;
    ; 
    //  line no 464 , L146799499 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic java/lang/VM.utf16ToUtf8(Ljava/lang/String;)[B
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_VM_utf16ToUtf8__Ljava_lang_String_2__3B(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L954936400:
    //  line no 466 , L954936400 , bytecode index = 
    // new java/lang/UnsupportedEncodingException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 293);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3156);
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
    rstack[sp++].obj = rlocal[1].obj;
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
    // invokespecial java/lang/UnsupportedEncodingException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_UnsupportedEncodingException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L954936400 in labeltable is :L954936400
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 466;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_lang_String_getBytes__Ljava_lang_String_2__3B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_getBytes__Ljava_lang_String_2__3B(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
s8 func_java_lang_String_contains__Ljava_lang_String_2_Z(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1840, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 471 , L284034271 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 471;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/String.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 50, 35);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/String.indexOf(Ljava/lang/String;)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 50, 17);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1904620350;
    // iconst_1
    stack[sp++].i = 1;
    goto L110296358;
    L1904620350:
    // iconst_0
    stack[sp++].i = 0;
    L110296358:
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

void bridge_java_lang_String_contains__Ljava_lang_String_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_String_contains__Ljava_lang_String_2_Z(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
JArray * func_java_lang_String_split__Ljava_lang_String_2__3Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1841, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 475 , L1457075858 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 475;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/lang/String.split(Ljava/lang/String;I)[Ljava/lang/String;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *,struct java_lang_String*,s32) = find_method(__ins->vm_table, 50, 30);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
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

void bridge_java_lang_String_split__Ljava_lang_String_2__3Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_split__Ljava_lang_String_2__3Ljava_lang_String_2(runtime, ins);
}


// locals: 9
// stack: 8
// args: 2
JArray * func_java_lang_String_split__Ljava_lang_String_2I__3Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0, s32 p1){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[9];
    RStackItem rstack[9];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1842, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 479 , L124540047 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 479;
    // iconst_0
    stack[sp++].i = 0;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/String; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(592));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 480 , L956365425 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 481 , L645015141 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L131096911:
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1652393238;
    ; 
    //  line no 482 , L1544562778 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload u16  ,  L1544562778 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    local[6].i = stack[--sp].i;
    ; 
    //  line no 483 , L1801878707 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 484 , L1865982601 , bytecode index = 
    stack[sp++].i = local[6].i;
    rstack[sp++].obj = rlocal[1].obj;
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
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1642319693;
    ; 
    //  line no 485 , L1022130643 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 486 , L1689717017 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[8].i = stack[--sp].i;
    L1311884268:
    stack[sp++].i = local[8].i;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1642319693;
    ; 
    //  line no 487 , L827843776 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1856643544;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[8].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload u16  ,  L827843776 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[8].i;
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
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L847839957;
    L1856643544:
    //  line no 488 , L1856643544 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 489 , L1927776715 , bytecode index = 
    goto L1642319693;
    L847839957:
    //  line no 486 , L847839957 , bytecode index = 
    // iinc slot 8 value 1
    local[8].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1311884268;
    L1642319693:
    //  line no 493 , L1642319693 , bytecode index = 
    stack[sp++].i = local[7].i;
    if(stack[--sp].i  == 0) goto L2081952435;
    ; 
    //  line no 494 , L1124288521 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual java/lang/String.expandArr([Ljava/lang/String;)[Ljava/lang/String;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *,JArray *) = find_method(__ins->vm_table, 50, 31);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 495 , L971404566 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // arraylength  label  L971404566
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // new java/lang/String
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 50);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokespecial java/lang/String.<init>([CII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_String__init____3CII_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L971404566 bc index = 
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
    //  line no 496 , L1996556848 , bytecode index = 
    stack[sp++].i = local[5].i;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 497 , L1269826537 , bytecode index = 
    stack[sp++].i = local[5].i;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 498 , L313149846 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  <= 0) goto L418299920;
    rstack[sp++].obj = rlocal[3].obj;
    // arraylength  label  L313149846
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L418299920;
    ; 
    //  line no 499 , L1740708279 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L2081952435:
    //  line no 502 , L2081952435 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    L418299920:
    //  line no 504 , L418299920 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L131096911;
    L1652393238:
    //  line no 505 , L1652393238 , bytecode index = 
    // new java/lang/String
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 50);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokespecial java/lang/String.<init>([CII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_String__init____3CII_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 506 , L749072877 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual java/lang/String.expandArr([Ljava/lang/String;)[Ljava/lang/String;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *,JArray *) = find_method(__ins->vm_table, 50, 31);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 507 , L1812200214 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // arraylength  label  L1812200214
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[5].obj;
    // arrstore __refer  ,  L1812200214 bc index = 
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
    //  line no 508 , L42158278 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
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

void bridge_java_lang_String_split__Ljava_lang_String_2I__3Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_split__Ljava_lang_String_2I__3Ljava_lang_String_2(runtime, ins, para[0].i);
}


// locals: 3
// stack: 5
// args: 1
JArray * func_java_lang_String_expandArr___3Ljava_lang_String_2__3Ljava_lang_String_2(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1843, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 512 , L1850301256 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 512;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1850301256
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // ; newarray/multiarray Dimension Array: [Ljava/lang/String; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(592));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 513 , L492947164 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L492947164
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 514 , L87845070 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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

void bridge_java_lang_String_expandArr___3Ljava_lang_String_2__3Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_expandArr___3Ljava_lang_String_2__3Ljava_lang_String_2(runtime, ins);
}


// locals: 4
// stack: 3
// args: 0
struct java_lang_String* func_java_lang_String_trim___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1844, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 519 , L1261257916 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 519;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L1261257916
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    local[1].i = stack[--sp].i;
    ; 
    //  line no 520 , L1491676195 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    ; 
    //  line no 521 , L1047873000 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rlocal[3].obj = rstack[--sp].obj;
    L123629835:
    //  line no 524 , L123629835 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L653774328;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[2].i;
    // arrload u16  ,  L123629835 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    //  bipush 32
    stack[sp++].i = 32;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L653774328;
    ; 
    //  line no 525 , L929985841 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L123629835;
    L653774328:
    //  line no 527 , L653774328 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L589311025;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload u16  ,  L653774328 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    //  bipush 32
    stack[sp++].i = 32;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L589311025;
    ; 
    //  line no 528 , L1468192631 , bytecode index = 
    // iinc slot 1 value -1
    local[1].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L653774328;
    L589311025:
    //  line no 530 , L589311025 , bytecode index = 
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  > 0) goto L1333938290;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // arraylength  label  L589311025
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L184642382;
    L1333938290:
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
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
    goto L694329275;
    L184642382:
    rstack[sp++].obj = rlocal[0].obj;
    L694329275:
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

void bridge_java_lang_String_trim___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_trim___Ljava_lang_String_2(runtime, ins);
}


// locals: 3
// stack: 5
// args: 0
struct java_lang_String* func_java_lang_String_toLowerCase___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1845, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 538 , L889640998 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 538;
    // iconst_0
    stack[sp++].i = 0;
    local[1].i = stack[--sp].i;
    L903716563:
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L150950036;
    ; 
    //  line no 539 , L910101408 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload u16  ,  L910101408 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 540 , L905650857 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[2].i;
    // invokestatic java/lang/Character.toLowerCase(C)C
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Character_toLowerCase__C_C(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1820920259;
    ; 
    //  line no 541 , L503353142 , bytecode index = 
    goto L1353512285;
    L1820920259:
    //  line no 538 , L1820920259 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L903716563;
    L150950036:
    //  line no 544 , L150950036 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1353512285:
    //  line no 547 , L1353512285 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 549 , L1018067851 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[1].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L407747276:
    //  line no 551 , L407747276 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L45019084;
    ; 
    //  line no 552 , L899675353 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload u16  ,  L899675353 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    // invokestatic java/lang/Character.toLowerCase(C)C
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Character_toLowerCase__C_C(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore u16  ,  L899675353 bc index = 
    {
        ;
        u16 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_u16_arr[idx] = value;
    }
    ; 
    //  line no 551 , L2049090498 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L407747276;
    L45019084:
    //  line no 554 , L45019084 , bytecode index = 
    // new java/lang/String
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 50);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial java/lang/String.<init>(II[C)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_String__init___II_3C_V(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj);
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

void bridge_java_lang_String_toLowerCase___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_toLowerCase___Ljava_lang_String_2(runtime, ins);
}


// locals: 3
// stack: 5
// args: 0
struct java_lang_String* func_java_lang_String_toUpperCase___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1846, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 562 , L2062132026 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 562;
    // iconst_0
    stack[sp++].i = 0;
    local[1].i = stack[--sp].i;
    L807053698:
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1607020784;
    ; 
    //  line no 563 , L922871524 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload u16  ,  L922871524 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 564 , L13001549 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[2].i;
    // invokestatic java/lang/Character.toUpperCase(C)C
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Character_toUpperCase__C_C(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1710591086;
    ; 
    //  line no 565 , L1940749968 , bytecode index = 
    goto L1269006535;
    L1710591086:
    //  line no 562 , L1710591086 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L807053698;
    L1607020784:
    //  line no 568 , L1607020784 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1269006535:
    //  line no 571 , L1269006535 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 573 , L2018270965 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[1].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L823343982:
    //  line no 575 , L823343982 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L693275170;
    ; 
    //  line no 576 , L2124448375 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String offset I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->offset_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // arrload u16  ,  L2124448375 bc index = 
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
        stack[sp].i = arr->prop.as_u16_arr[idx];
        sp += 1;
    }
    // invokestatic java/lang/Character.toUpperCase(C)C
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Character_toUpperCase__C_C(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore u16  ,  L2124448375 bc index = 
    {
        ;
        u16 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_u16_arr[idx] = value;
    }
    ; 
    //  line no 575 , L1677840544 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L823343982;
    L693275170:
    //  line no 578 , L693275170 , bytecode index = 
    // new java/lang/String
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 50);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/String count I
    stack[sp - 1].i = ((struct java_lang_String*)rstack[sp - 1].obj)->count_3;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial java/lang/String.<init>(II[C)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_String__init___II_3C_V(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj);
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

void bridge_java_lang_String_toUpperCase___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_toUpperCase___Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_java_lang_String_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1847, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 583 , L1910492961 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 583;
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

void bridge_java_lang_String_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_toString___Ljava_lang_String_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 2
struct java_lang_String* func_java_lang_String_valueOf__Ljava_lang_Object_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_Object* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1848, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 587 , L1643646293 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 587;
    rstack[sp++].obj = rlocal[0].obj;
    if(rstack[--sp].obj  != NULL) goto L665317128;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 677);
    goto L672041498;
    L665317128:
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/lang/Object.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 5, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L672041498:
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

void bridge_java_lang_String_valueOf__Ljava_lang_Object_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_valueOf__Ljava_lang_Object_2_Ljava_lang_String_2(runtime, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 3
// args: 2
struct java_lang_String* func_java_lang_String_valueOf___3C_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0, JArray * p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1849, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 591 , L810557024 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 591;
    // new java/lang/String
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 50);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/String.<init>([C)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_String__init____3C_V(runtime, rstack[sp + 0].obj);
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

void bridge_java_lang_String_valueOf___3C_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_valueOf___3C_Ljava_lang_String_2(runtime, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 1
// args: 2
struct java_lang_String* func_java_lang_String_valueOf__Z_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0, s8 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1850, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 595 , L1955948959 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 595;
    stack[sp++].i = local[0].i;
    if(stack[--sp].i  == 0) goto L2082673402;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3191);
    goto L1286643712;
    L2082673402:
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 3192);
    L1286643712:
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

void bridge_java_lang_String_valueOf__Z_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_valueOf__Z_Ljava_lang_String_2(runtime, para[0].obj, para[1].i);
}


// locals: 2
// stack: 5
// args: 2
struct java_lang_String* func_java_lang_String_valueOf__C_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0, u16 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1851, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 599 , L7646139 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 599;
    // iconst_1
    stack[sp++].i = 1;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[0].i;
    // arrstore u16  ,  L7646139 bc index = 
    {
        ;
        u16 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        arr->prop.as_u16_arr[idx] = value;
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 600 , L1688526221 , bytecode index = 
    // new java/lang/String
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 50);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/lang/String.<init>(II[C)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_String__init___II_3C_V(runtime, stack[sp + 0].i, stack[sp + 1].i, rstack[sp + 2].obj);
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

void bridge_java_lang_String_valueOf__C_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_valueOf__C_Ljava_lang_String_2(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 1
// args: 2
struct java_lang_String* func_java_lang_String_valueOf__I_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1852, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 604 , L1705366777 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 604;
    stack[sp++].i = local[0].i;
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

void bridge_java_lang_String_valueOf__I_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_valueOf__I_Ljava_lang_String_2(runtime, para[0].obj, para[1].i);
}


// locals: 2
// stack: 2
// args: 2
struct java_lang_String* func_java_lang_String_valueOf__J_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0, s64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1853, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].j = p1;
    ; 
    //  line no 608 , L35874744 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 608;
    stack[sp].j = local[0].j;
    sp += 2;
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

void bridge_java_lang_String_valueOf__J_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_valueOf__J_Ljava_lang_String_2(runtime, para[0].obj, para[1].j);
}


// locals: 1
// stack: 1
// args: 2
struct java_lang_String* func_java_lang_String_valueOf__F_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0, f32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1854, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].f = p1;
    ; 
    //  line no 612 , L184133791 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 612;
    stack[sp++].f = local[0].f;
    // invokestatic java/lang/Float.toString(F)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Float_toString__F_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].f);
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

void bridge_java_lang_String_valueOf__F_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_valueOf__F_Ljava_lang_String_2(runtime, para[0].obj, para[1].f);
}


// locals: 2
// stack: 2
// args: 2
struct java_lang_String* func_java_lang_String_valueOf__D_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0, f64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1855, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    ; 
    //  line no 616 , L533698361 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 616;
    stack[sp].d = local[0].d;
    sp += 2;
    // invokestatic java/lang/Double.toString(D)Ljava/lang/String;
    {
        sp -= 3;
        rstack[sp].obj = func_java_lang_Double_toString__D_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
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

void bridge_java_lang_String_valueOf__D_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_String_valueOf__D_Ljava_lang_String_2(runtime, para[0].obj, para[1].d);
}


