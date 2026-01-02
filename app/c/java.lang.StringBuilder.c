// CLASS: java/lang/StringBuilder extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_lang_StringBuilder_static {};



__refer arr_vmtable_java_lang_StringBuilder_from_java_lang_StringBuilder[] = {
    func_java_lang_StringBuilder_length___I,  //0
    func_java_lang_StringBuilder_append__Ljava_lang_String_2_Ljava_lang_StringBuilder_2,  //1
    func_java_lang_StringBuilder_append__D_Ljava_lang_StringBuilder_2,  //2
    func_java_lang_StringBuilder_append__F_Ljava_lang_StringBuilder_2,  //3
    func_java_lang_StringBuilder_append__J_Ljava_lang_StringBuilder_2,  //4
    func_java_lang_StringBuilder_append__I_Ljava_lang_StringBuilder_2,  //5
    func_java_lang_StringBuilder_append__C_Ljava_lang_StringBuilder_2,  //6
    func_java_lang_StringBuilder_append__Ljava_lang_Object_2_Ljava_lang_StringBuilder_2,  //7
    func_java_lang_StringBuilder_toString___Ljava_lang_String_2,  //8
    func_java_lang_StringBuilder_expand__I_V,  //9
    func_java_lang_StringBuilder_reverse___V  //10
};
__refer arr_vmtable_java_lang_StringBuilder_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_StringBuilder[] = {
    {41, 11, arr_vmtable_java_lang_StringBuilder_from_java_lang_StringBuilder}, //0
    {5, 10, arr_vmtable_java_lang_StringBuilder_from_java_lang_Object}, //1
};



// locals: 1
// stack: 2
// args: 0
void func_java_lang_StringBuilder__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 362, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 13 , L683962652 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 13;
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
    //  line no 14 , L1500608548 , bytecode index = 
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

void bridge_java_lang_StringBuilder__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_StringBuilder__init____V(runtime, ins);
}


// locals: 2
// stack: 5
// args: 1
void func_java_lang_StringBuilder__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 363, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 16 , L513700442 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 16;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 10 , L366590980 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/lang/StringBuilder count I
    sp -= 2;
    ((struct java_lang_StringBuilder*)rstack[sp + 0].obj)->count_1 = stack[sp + 1].i;
    ; 
    //  line no 17 , L1195067075 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L1366025231;
    ; 
    //  line no 18 , L1007309018 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 677);
    rlocal[1].obj = rstack[--sp].obj;
    L1366025231:
    //  line no 20 , L1366025231 , bytecode index = 
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
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/lang/StringBuilder value [C
    sp -= 2;
    ((struct java_lang_StringBuilder*)rstack[sp + 0].obj)->value_0 = rstack[sp + 1].obj;
    ; 
    //  line no 21 , L1684792003 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/lang/String value [C
    rstack[sp - 1].obj = ((struct java_lang_String*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder value [C
    rstack[sp - 1].obj = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->value_0;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder value [C
    rstack[sp - 1].obj = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->value_0;
    sp += 0;
    // arraylength  label  L1684792003
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
    //  line no 22 , L2038148563 , bytecode index = 
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

void bridge_java_lang_StringBuilder__init___Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_StringBuilder__init___Ljava_lang_String_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_lang_StringBuilder__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 364, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 24 , L433874882 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 24;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 10 , L572191680 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/lang/StringBuilder count I
    sp -= 2;
    ((struct java_lang_StringBuilder*)rstack[sp + 0].obj)->count_1 = stack[sp + 1].i;
    ; 
    //  line no 25 , L103536485 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/lang/StringBuilder value [C
    sp -= 2;
    ((struct java_lang_StringBuilder*)rstack[sp + 0].obj)->value_0 = rstack[sp + 1].obj;
    ; 
    //  line no 26 , L37380050 , bytecode index = 
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

void bridge_java_lang_StringBuilder__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_StringBuilder__init___I_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_lang_StringBuilder_length___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 29 , L231977479 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder count I
    stack[sp - 1].i = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->count_1;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_lang_StringBuilder_length___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_StringBuilder_length___I(runtime, ins);
}


// locals: 3
// stack: 5
// args: 1
struct java_lang_StringBuilder* func_java_lang_StringBuilder_append__Ljava_lang_String_2_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 366, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 33 , L93314457 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 33;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L1796371666;
    ; 
    //  line no 34 , L2076287037 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 677);
    rlocal[1].obj = rstack[--sp].obj;
    L1796371666:
    //  line no 36 , L1796371666 , bytecode index = 
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
    local[2].i = stack[--sp].i;
    ; 
    //  line no 37 , L1890627974 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual java/lang/StringBuilder.expand(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 41, 9);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 38 , L195615004 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder value [C
    rstack[sp - 1].obj = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->value_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder count I
    stack[sp - 1].i = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->count_1;
    sp += 0;
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
    //  line no 39 , L1935972447 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/lang/StringBuilder count I
    stack[sp - 1].i = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->count_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/lang/StringBuilder count I
    sp -= 2;
    ((struct java_lang_StringBuilder*)rstack[sp + 0].obj)->count_1 = stack[sp + 1].i;
    ; 
    //  line no 40 , L97652294 , bytecode index = 
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

void bridge_java_lang_StringBuilder_append__Ljava_lang_String_2_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuilder_append__Ljava_lang_String_2_Ljava_lang_StringBuilder_2(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
struct java_lang_StringBuilder* func_java_lang_StringBuilder_append__D_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 367, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 44 , L1027007693 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 44;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].d = local[1].d;
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

void bridge_java_lang_StringBuilder_append__D_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuilder_append__D_Ljava_lang_StringBuilder_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct java_lang_StringBuilder* func_java_lang_StringBuilder_append__F_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, f32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 368, &rstack[0], &rlocal[0], &sp);
    local[0].f = p0;
    ; 
    //  line no 48 , L2146608740 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 48;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].f = local[1].f;
    stack[sp - 1].d = (f64)stack[sp - 1].f; 
    ++sp;
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

void bridge_java_lang_StringBuilder_append__F_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuilder_append__F_Ljava_lang_StringBuilder_2(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
struct java_lang_StringBuilder* func_java_lang_StringBuilder_append__J_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 369, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    ; 
    //  line no 52 , L1489092624 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 52;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp].j = local[1].j;
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

void bridge_java_lang_StringBuilder_append__J_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuilder_append__J_Ljava_lang_StringBuilder_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct java_lang_StringBuilder* func_java_lang_StringBuilder_append__I_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 370, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 56 , L1641313620 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 56;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
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

void bridge_java_lang_StringBuilder_append__I_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuilder_append__I_Ljava_lang_StringBuilder_2(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
struct java_lang_StringBuilder* func_java_lang_StringBuilder_append__C_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, u16 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 371, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 60 , L1059063940 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 60;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual java/lang/StringBuilder.expand(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 41, 9);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 61 , L1295226194 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder value [C
    rstack[sp - 1].obj = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->value_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder count I
    stack[sp - 1].i = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->count_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrstore u16  ,  L1295226194 bc index = 
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
    //  line no 62 , L252651381 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/lang/StringBuilder count I
    stack[sp - 1].i = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->count_1;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/lang/StringBuilder count I
    sp -= 2;
    ((struct java_lang_StringBuilder*)rstack[sp + 0].obj)->count_1 = stack[sp + 1].i;
    ; 
    //  line no 63 , L1514840818 , bytecode index = 
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

void bridge_java_lang_StringBuilder_append__C_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuilder_append__C_Ljava_lang_StringBuilder_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_StringBuilder* func_java_lang_StringBuilder_append__Ljava_lang_Object_2_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 372, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 67 , L878274034 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 67;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L1117509763;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
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
    goto L1296674576;
    L1117509763:
    //  line no 68 , L1117509763 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 677);
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
    L1296674576:
    //  line no 69 , L1296674576 , bytecode index = 
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

void bridge_java_lang_StringBuilder_append__Ljava_lang_Object_2_Ljava_lang_StringBuilder_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuilder_append__Ljava_lang_Object_2_Ljava_lang_StringBuilder_2(runtime, ins);
}


// locals: 1
// stack: 5
// args: 0
struct java_lang_String* func_java_lang_StringBuilder_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 373, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 74 , L1477657879 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 74;
    // new java/lang/String
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 50);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder value [C
    rstack[sp - 1].obj = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->value_0;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder count I
    stack[sp - 1].i = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->count_1;
    sp += 0;
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

void bridge_java_lang_StringBuilder_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_StringBuilder_toString___Ljava_lang_String_2(runtime, ins);
}


// locals: 3
// stack: 5
// args: 1
void func_java_lang_StringBuilder_expand__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 374, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 78 , L1147258851 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 78;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder value [C
    rstack[sp - 1].obj = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->value_0;
    sp += 0;
    // arraylength  label  L1147258851
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder count I
    stack[sp - 1].i = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->count_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L891095110;
    ; 
    //  line no 79 , L2011482127 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder value [C
    rstack[sp - 1].obj = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->value_0;
    sp += 0;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 80 , L905735620 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder count I
    stack[sp - 1].i = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->count_1;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(678));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield java/lang/StringBuilder value [C
    sp -= 2;
    ((struct java_lang_StringBuilder*)rstack[sp + 0].obj)->value_0 = rstack[sp + 1].obj;
    ; 
    //  line no 81 , L2145970759 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder value [C
    rstack[sp - 1].obj = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->value_0;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder count I
    stack[sp - 1].i = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->count_1;
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
    L891095110:
    //  line no 83 , L891095110 , bytecode index = 
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

void bridge_java_lang_StringBuilder_expand__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_StringBuilder_expand__I_V(runtime, ins);
}


// locals: 3
// stack: 5
// args: 0
void func_java_lang_StringBuilder_reverse___V(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 375, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 86 , L1931444790 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 86;
    // iconst_0
    stack[sp++].i = 0;
    local[1].i = stack[--sp].i;
    L626742236:
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder count I
    stack[sp - 1].i = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->count_1;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 58, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L500772834;
    ; 
    //  line no 87 , L1800659519 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder value [C
    rstack[sp - 1].obj = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->value_0;
    sp += 0;
    stack[sp++].i = local[1].i;
    // arrload u16  ,  L1800659519 bc index = 
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
    //  line no 88 , L1691538257 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder value [C
    rstack[sp - 1].obj = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->value_0;
    sp += 0;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder value [C
    rstack[sp - 1].obj = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->value_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder count I
    stack[sp - 1].i = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->count_1;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload u16  ,  L1691538257 bc index = 
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
    // arrstore u16  ,  L1691538257 bc index = 
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
    //  line no 89 , L459848100 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder value [C
    rstack[sp - 1].obj = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->value_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/StringBuilder count I
    stack[sp - 1].i = ((struct java_lang_StringBuilder*)rstack[sp - 1].obj)->count_1;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    // arrstore u16  ,  L459848100 bc index = 
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
    //  line no 86 , L1335505684 , bytecode index = 
    // iinc slot 1 value 1
    local[1].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L626742236;
    L500772834:
    //  line no 91 , L500772834 , bytecode index = 
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

void bridge_java_lang_StringBuilder_reverse___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_StringBuilder_reverse___V(runtime, ins);
}


