// CLASS: java/io/PrintStream extends java/io/OutputStream
#include "metadata.h"


// generation
// globals
//struct java_io_PrintStream_static {};



__refer arr_vmtable_java_io_PrintStream_from_java_io_PrintStream[] = {
    func_java_io_PrintStream_write__I_V,  //0
    func_java_io_PrintStream_write___3BII_V,  //1
    func_java_io_PrintStream_println___V,  //2
    func_java_io_PrintStream_print__Ljava_lang_String_2_V,  //3
    func_java_io_PrintStream_println__Ljava_lang_String_2_V,  //4
    func_java_io_PrintStream_print__Ljava_lang_Object_2_V,  //5
    func_java_io_PrintStream_println__Ljava_lang_Object_2_V,  //6
    func_java_io_PrintStream_print__I_V,  //7
    func_java_io_PrintStream_println__I_V,  //8
    func_java_io_PrintStream_print__C_V,  //9
    func_java_io_PrintStream_println__C_V,  //10
    func_java_io_PrintStream_print__J_V,  //11
    func_java_io_PrintStream_println__J_V,  //12
    func_java_io_PrintStream_print__F_V,  //13
    func_java_io_PrintStream_println__F_V,  //14
    func_java_io_PrintStream_print__D_V,  //15
    func_java_io_PrintStream_println__D_V,  //16
    func_java_io_PrintStream_flush___V,  //17
    func_java_io_PrintStream_close___V  //18
};
__refer arr_vmtable_java_io_PrintStream_from_java_io_OutputStream[] = {
    func_java_io_PrintStream_write__I_V,  //0
    func_java_io_OutputStream_write___3B_V,  //1
    func_java_io_PrintStream_write___3BII_V,  //2
    func_java_io_PrintStream_flush___V,  //3
    func_java_io_PrintStream_close___V  //4
};
__refer arr_vmtable_java_io_PrintStream_from_java_lang_Object[] = {
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
VMTable vmtable_java_io_PrintStream[] = {
    {123, 19, arr_vmtable_java_io_PrintStream_from_java_io_PrintStream}, //0
    {122, 5, arr_vmtable_java_io_PrintStream_from_java_io_OutputStream}, //1
    {5, 10, arr_vmtable_java_io_PrintStream_from_java_lang_Object}, //2
};



// locals: 2
// stack: 2
// args: 1
void func_java_io_PrintStream__init___Ljava_io_OutputStream_2_V(JThreadRuntime *runtime, struct java_io_OutputStream* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 698, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 8 , L1183231938 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 8;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/OutputStream.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_OutputStream__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 9 , L504053874 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/io/PrintStream out Ljava/io/OutputStream;
    sp -= 2;
    ((struct java_io_PrintStream*)rstack[sp + 0].obj)->out_0 = rstack[sp + 1].obj;
    ; 
    //  line no 10 , L2032079962 , bytecode index = 
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

void bridge_java_io_PrintStream__init___Ljava_io_OutputStream_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream__init___Ljava_io_OutputStream_2_V(runtime, ins);
}

ExceptionItem arr_extable_func_java_io_PrintStream_newLine___V[] = {
    { , , 141}
};
ExceptionTable extable_func_java_io_PrintStream_newLine___V = {1, arr_extable_func_java_io_PrintStream_newLine___V};

// locals: 2
// stack: 2
// args: 0
void func_java_io_PrintStream_newLine___V(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 699, &rstack[0], &rlocal[0], &sp);
    // try catch :L1262854901 L252277567 L238357312 (
    L1262854901:
    __frame->bytecodeIndex = 
    //  line no 14 , L1262854901 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 14;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/PrintStream out Ljava/io/OutputStream;
    rstack[sp - 1].obj = ((struct java_io_PrintStream*)rstack[sp - 1].obj)->out_0;
    sp += 0;
    //  bipush 10
    stack[sp++].i = 10;
    // invokevirtual java/io/OutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 122, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L252277567:
    __frame->bytecodeIndex = 
    //  line no 16 , L252277567 , bytecode index = 
    goto L1101048445;
    L238357312:
    //  line no 15 , L238357312 , bytecode index = 
    rlocal[1].obj = rstack[--sp].obj;
    L1101048445:
    //  line no 17 , L1101048445 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L238357312;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_io_PrintStream_newLine___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_newLine___V(runtime, ins);
}

ExceptionItem arr_extable_func_java_io_PrintStream_write__I_V[] = {
    { , , -1}, 
    { , , -1}, 
    { , , 1457}
};
ExceptionTable extable_func_java_io_PrintStream_write__I_V = {3, arr_extable_func_java_io_PrintStream_write__I_V};

// locals: 4
// stack: 2
// args: 1
void func_java_io_PrintStream_write__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 700, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    // try catch :L1665197552 L1158258131 L20853837 (
    // try catch :L20853837 L33533830 L20853837 (
    // try catch :L1702143276 L1813666644 L477533894 (
    L1702143276:
    __frame->bytecodeIndex = 
    //  line no 21 , L1702143276 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 21;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[2].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1665197552:
    __frame->bytecodeIndex = 
    //  line no 22 , L1665197552 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/PrintStream out Ljava/io/OutputStream;
    rstack[sp - 1].obj = ((struct java_io_PrintStream*)rstack[sp - 1].obj)->out_0;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokevirtual java/io/OutputStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 122, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 23 , L1611241809 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1158258131:
    __frame->bytecodeIndex = 
    goto L1813666644;
    L20853837:
    __frame->bytecodeIndex = 
    rlocal[3].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L33533830:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[3].obj;
    // athrow
    //     L33533830 in labeltable is :L33533830
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 23;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1813666644:
    __frame->bytecodeIndex = 
    //  line no 25 , L1813666644 , bytecode index = 
    goto L538185145;
    L477533894:
    //  line no 24 , L477533894 , bytecode index = 
    rlocal[2].obj = rstack[--sp].obj;
    L538185145:
    //  line no 26 , L538185145 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L20853837;
        case 1 : goto L20853837;
        case 2 : goto L477533894;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_io_PrintStream_write__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_write__I_V(runtime, ins);
}

ExceptionItem arr_extable_func_java_io_PrintStream_write___3BII_V[] = {
    { , , -1}, 
    { , , -1}, 
    { , , 1457}
};
ExceptionTable extable_func_java_io_PrintStream_write___3BII_V = {3, arr_extable_func_java_io_PrintStream_write___3BII_V};

// locals: 6
// stack: 4
// args: 3
void func_java_io_PrintStream_write___3BII_V(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 701, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    // try catch :L914507705 L443384617 L445918232 (
    // try catch :L445918232 L1436633036 L445918232 (
    // try catch :L1908043086 L121167003 L1014486152 (
    L1908043086:
    __frame->bytecodeIndex = 
    //  line no 30 , L1908043086 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 30;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[4].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L914507705:
    __frame->bytecodeIndex = 
    //  line no 31 , L914507705 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/PrintStream out Ljava/io/OutputStream;
    rstack[sp - 1].obj = ((struct java_io_PrintStream*)rstack[sp - 1].obj)->out_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokevirtual java/io/OutputStream.write([BII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 122, 2);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 32 , L1664576493 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L443384617:
    __frame->bytecodeIndex = 
    goto L121167003;
    L445918232:
    __frame->bytecodeIndex = 
    rlocal[5].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1436633036:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[5].obj;
    // athrow
    //     L1436633036 in labeltable is :L1436633036
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 32;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L121167003:
    __frame->bytecodeIndex = 
    //  line no 34 , L121167003 , bytecode index = 
    goto L1095088856;
    L1014486152:
    //  line no 33 , L1014486152 , bytecode index = 
    rlocal[4].obj = rstack[--sp].obj;
    L1095088856:
    //  line no 35 , L1095088856 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L445918232;
        case 1 : goto L445918232;
        case 2 : goto L1014486152;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_io_PrintStream_write___3BII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_write___3BII_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 1
// stack: 1
// args: 0
void func_java_io_PrintStream_println___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 702, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 38 , L42544488 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 38;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/PrintStream.newLine()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_PrintStream_newLine___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 39 , L1522095831 , bytecode index = 
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

void bridge_java_io_PrintStream_println___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_println___V(runtime, ins);
}

ExceptionItem arr_extable_func_java_io_PrintStream_print__Ljava_lang_String_2_V[] = {
    { , , -1}, 
    { , , -1}, 
    { , , 141}
};
ExceptionTable extable_func_java_io_PrintStream_print__Ljava_lang_String_2_V = {3, arr_extable_func_java_io_PrintStream_print__Ljava_lang_String_2_V};

// locals: 5
// stack: 2
// args: 1
void func_java_io_PrintStream_print__Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 703, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L1963862935 L1042786867 L775445710 (
    // try catch :L775445710 L769432223 L775445710 (
    // try catch :L696933920 L712974096 L1187903677 (
    ; 
    //  line no 42 , L252480153 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 42;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L696933920;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 677);
    rlocal[1].obj = rstack[--sp].obj;
    L696933920:
    __frame->bytecodeIndex = 
    //  line no 45 , L696933920 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1461);
    // invokevirtual java/lang/String.getBytes(Ljava/lang/String;)[B
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 50, 27);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 46 , L1946988038 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rlocal[3].obj = rstack[--sp].obj;
    // monitorenter
    --sp;
    jthread_lock(runtime, rstack[sp].obj);
    L1963862935:
    __frame->bytecodeIndex = 
    //  line no 47 , L1963862935 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/PrintStream out Ljava/io/OutputStream;
    rstack[sp - 1].obj = ((struct java_io_PrintStream*)rstack[sp - 1].obj)->out_0;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/io/OutputStream.write([B)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *) = find_method(__ins->vm_table, 122, 1);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 48 , L651802632 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L1042786867:
    __frame->bytecodeIndex = 
    goto L712974096;
    L775445710:
    __frame->bytecodeIndex = 
    rlocal[4].obj = rstack[--sp].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // monitorexit
    --sp;
    jthread_unlock(runtime, rstack[sp].obj);
    L769432223:
    __frame->bytecodeIndex = 
    rstack[sp++].obj = rlocal[4].obj;
    // athrow
    //     L769432223 in labeltable is :L769432223
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 48;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L712974096:
    __frame->bytecodeIndex = 
    //  line no 50 , L712974096 , bytecode index = 
    goto L259564670;
    L1187903677:
    //  line no 49 , L1187903677 , bytecode index = 
    rlocal[2].obj = rstack[--sp].obj;
    L259564670:
    //  line no 51 , L259564670 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L775445710;
        case 1 : goto L775445710;
        case 2 : goto L1187903677;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_io_PrintStream_print__Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_print__Ljava_lang_String_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_io_PrintStream_println__Ljava_lang_String_2_V(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 704, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 54 , L1965445467 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 54;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 123, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 55 , L517254671 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/PrintStream.newLine()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_PrintStream_newLine___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 56 , L1422238463 , bytecode index = 
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

void bridge_java_io_PrintStream_println__Ljava_lang_String_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_println__Ljava_lang_String_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_io_PrintStream_print__Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 705, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 59 , L707157673 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 59;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L288958772;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 677);
    goto L1754444726;
    L288958772:
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
    L1754444726:
    // invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 123, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 60 , L1852777344 , bytecode index = 
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

void bridge_java_io_PrintStream_print__Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_print__Ljava_lang_Object_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_io_PrintStream_println__Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 706, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 63 , L780934299 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 63;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  != NULL) goto L1409160703;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 677);
    goto L1150963491;
    L1409160703:
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
    L1150963491:
    // invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 123, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 64 , L355518265 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/PrintStream.newLine()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_PrintStream_newLine___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 65 , L1528195520 , bytecode index = 
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

void bridge_java_io_PrintStream_println__Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_println__Ljava_lang_Object_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_io_PrintStream_print__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 707, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 68 , L1855026648 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 68;
    rstack[sp++].obj = rlocal[0].obj;
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
    // invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 123, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 69 , L2097905212 , bytecode index = 
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

void bridge_java_io_PrintStream_print__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_print__I_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_io_PrintStream_println__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 708, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 72 , L1265900909 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 72;
    rstack[sp++].obj = rlocal[0].obj;
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
    // invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 123, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 73 , L783191662 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/PrintStream.newLine()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_PrintStream_newLine___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 74 , L150138649 , bytecode index = 
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

void bridge_java_io_PrintStream_println__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_println__I_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_io_PrintStream_print__C_V(JThreadRuntime *runtime, u16 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 709, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 77 , L754177595 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 77;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual java/io/PrintStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 123, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 78 , L1987375157 , bytecode index = 
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

void bridge_java_io_PrintStream_print__C_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_print__C_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_io_PrintStream_println__C_V(JThreadRuntime *runtime, u16 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 710, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 81 , L389993238 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 81;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // invokevirtual java/io/PrintStream.write(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 123, 0);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 82 , L634297796 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/PrintStream.newLine()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_PrintStream_newLine___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 83 , L1961501712 , bytecode index = 
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

void bridge_java_io_PrintStream_println__C_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_println__C_V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
void func_java_io_PrintStream_print__J_V(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 711, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    ; 
    //  line no 86 , L1991371192 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 86;
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
    // invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 123, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 87 , L658532887 , bytecode index = 
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

void bridge_java_io_PrintStream_print__J_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_print__J_V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
void func_java_io_PrintStream_println__J_V(JThreadRuntime *runtime, s64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 712, &rstack[0], &rlocal[0], &sp);
    local[0].j = p0;
    ; 
    //  line no 90 , L613298587 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 90;
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
    // invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 123, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 91 , L1561063579 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/PrintStream.newLine()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_PrintStream_newLine___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 92 , L2034182655 , bytecode index = 
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

void bridge_java_io_PrintStream_println__J_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_println__J_V(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
void func_java_io_PrintStream_print__F_V(JThreadRuntime *runtime, f32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 713, &rstack[0], &rlocal[0], &sp);
    local[0].f = p0;
    ; 
    //  line no 95 , L1446983876 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 95;
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
    // invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 123, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 96 , L1412601264 , bytecode index = 
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

void bridge_java_io_PrintStream_print__F_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_print__F_V(runtime, ins);
}


// locals: 2
// stack: 3
// args: 1
void func_java_io_PrintStream_println__F_V(JThreadRuntime *runtime, f32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 714, &rstack[0], &rlocal[0], &sp);
    local[0].f = p0;
    ; 
    //  line no 99 , L292641216 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 99;
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
    // invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 123, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 100 , L1042790962 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/PrintStream.newLine()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_PrintStream_newLine___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 101 , L2130192211 , bytecode index = 
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

void bridge_java_io_PrintStream_println__F_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_println__F_V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
void func_java_io_PrintStream_print__D_V(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 715, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 104 , L539690370 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 104;
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
    // invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 123, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 105 , L593415583 , bytecode index = 
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

void bridge_java_io_PrintStream_print__D_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_print__D_V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
void func_java_io_PrintStream_println__D_V(JThreadRuntime *runtime, f64 p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 716, &rstack[0], &rlocal[0], &sp);
    local[0].d = p0;
    ; 
    //  line no 108 , L1489743810 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 108;
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
    // invokevirtual java/io/PrintStream.print(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 123, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 109 , L540325452 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/io/PrintStream.newLine()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_io_PrintStream_newLine___V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 110 , L1976804832 , bytecode index = 
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

void bridge_java_io_PrintStream_println__D_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_println__D_V(runtime, ins);
}

ExceptionItem arr_extable_func_java_io_PrintStream_flush___V[] = {
    { , , 141}
};
ExceptionTable extable_func_java_io_PrintStream_flush___V = {1, arr_extable_func_java_io_PrintStream_flush___V};

// locals: 2
// stack: 1
// args: 0
void func_java_io_PrintStream_flush___V(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 717, &rstack[0], &rlocal[0], &sp);
    // try catch :L1902237905 L1961002599 L485937598 (
    L1902237905:
    __frame->bytecodeIndex = 
    //  line no 114 , L1902237905 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 114;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/PrintStream out Ljava/io/OutputStream;
    rstack[sp - 1].obj = ((struct java_io_PrintStream*)rstack[sp - 1].obj)->out_0;
    sp += 0;
    // invokevirtual java/io/OutputStream.flush()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 122, 3);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1961002599:
    __frame->bytecodeIndex = 
    //  line no 116 , L1961002599 , bytecode index = 
    goto L1715248762;
    L485937598:
    //  line no 115 , L485937598 , bytecode index = 
    rlocal[1].obj = rstack[--sp].obj;
    L1715248762:
    //  line no 117 , L1715248762 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L485937598;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_io_PrintStream_flush___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_flush___V(runtime, ins);
}

ExceptionItem arr_extable_func_java_io_PrintStream_close___V[] = {
    { , , 141}
};
ExceptionTable extable_func_java_io_PrintStream_close___V = {1, arr_extable_func_java_io_PrintStream_close___V};

// locals: 2
// stack: 1
// args: 0
void func_java_io_PrintStream_close___V(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 718, &rstack[0], &rlocal[0], &sp);
    // try catch :L2035616217 L1392794732 L1363793720 (
    L2035616217:
    __frame->bytecodeIndex = 
    //  line no 121 , L2035616217 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 121;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/io/PrintStream out Ljava/io/OutputStream;
    rstack[sp - 1].obj = ((struct java_io_PrintStream*)rstack[sp - 1].obj)->out_0;
    sp += 0;
    // invokevirtual java/io/OutputStream.close()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 122, 4);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1392794732:
    __frame->bytecodeIndex = 
    //  line no 123 , L1392794732 , bytecode index = 
    goto L1807648168;
    L1363793720:
    //  line no 122 , L1363793720 , bytecode index = 
    rlocal[1].obj = rstack[--sp].obj;
    L1807648168:
    //  line no 124 , L1807648168 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1363793720;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_io_PrintStream_close___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_PrintStream_close___V(runtime, ins);
}


