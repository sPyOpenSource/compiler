// CLASS: jx/bootrc/ConfigFile extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_bootrc_ConfigFile_static {s32 NEWLINE_4; s32 MAXLINE_5;  };
struct jx_bootrc_ConfigFile_static static_var_jx_bootrc_ConfigFile = {0, 0};


__refer arr_vmtable_jx_bootrc_ConfigFile_from_jx_bootrc_ConfigFile[] = {
    func_jx_bootrc_ConfigFile_get__Ljava_lang_String_2_Ljava_lang_String_2  //0
};
__refer arr_vmtable_jx_bootrc_ConfigFile_from_java_lang_Object[] = {
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
VMTable vmtable_jx_bootrc_ConfigFile[] = {
    {181, 1, arr_vmtable_jx_bootrc_ConfigFile_from_jx_bootrc_ConfigFile}, //0
    {10, 11, arr_vmtable_jx_bootrc_ConfigFile_from_java_lang_Object}, //1
};



// locals: 5
// stack: 5
// args: 1
void func_jx_bootrc_ConfigFile__init___Ljx_zero_ReadOnlyMemory_2_V(JThreadRuntime *runtime, struct jx_zero_ReadOnlyMemory* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 453, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 10 , L297490204 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 10;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 7 , L2085745483 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/Vector
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 179);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/Vector.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_Vector__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield jx/bootrc/ConfigFile pairs Ljava/util/Vector;
    sp -= 2;
    ((struct jx_bootrc_ConfigFile*)rstack[sp + 0].obj)->pairs_0 = rstack[sp + 1].obj;
    ; 
    //  line no 8 , L1419064126 , bytecode index = 
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
    // putfield jx/bootrc/ConfigFile name2value Ljava/util/Hashtable;
    sp -= 2;
    ((struct jx_bootrc_ConfigFile*)rstack[sp + 0].obj)->name2value_1 = rstack[sp + 1].obj;
    ; 
    //  line no 33 , L706895319 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  sipush 256
    stack[sp++].i = 256;
    // ; newarray/multiarray Dimension Array: [C 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(200));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // putfield jx/bootrc/ConfigFile data [C
    sp -= 2;
    ((struct jx_bootrc_ConfigFile*)rstack[sp + 0].obj)->data_6 = rstack[sp + 1].obj;
    ; 
    //  line no 11 , L1642785848 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield jx/bootrc/ConfigFile mem Ljx/zero/ReadOnlyMemory;
    sp -= 2;
    ((struct jx_bootrc_ConfigFile*)rstack[sp + 0].obj)->mem_2 = rstack[sp + 1].obj;
    ; 
    //  line no 12 , L307400933 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield jx/bootrc/ConfigFile mem Ljx/zero/ReadOnlyMemory;
    sp -= 2;
    ((struct jx_bootrc_ConfigFile*)rstack[sp + 0].obj)->mem_2 = rstack[sp + 1].obj;
    L1872973138:
    //  line no 14 , L1872973138 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial jx/bootrc/ConfigFile.readline()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = func_jx_bootrc_ConfigFile_readline___Ljava_lang_String_2(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 15 , L1465346452 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  != NULL) goto L1634387050;
    goto L1740223770;
    L1634387050:
    //  line no 16 , L1634387050 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual java/lang/String.trim()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 9, 23);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 17 , L302366050 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  == 0) goto L1872973138;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual java/lang/String.charAt(I)C
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        u16 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 9, 3);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  bipush 35
    stack[sp++].i = 35;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2129821055;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1872973138;
    L2129821055:
    //  line no 18 , L2129821055 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    //  bipush 61
    stack[sp++].i = 61;
    // invokestatic jx/bootrc/BootRC2.splitByChar(Ljava/lang/String;C)[Ljava/lang/String;
    {
        sp -= 3;
        rstack[sp].obj = func_jx_bootrc_BootRC2_splitByChar__Ljava_lang_String_2C__3Ljava_lang_String_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 19 , L1225568095 , bytecode index = 
    // new jx/bootrc/Pair
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 180);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    // arrload __refer  ,  L1225568095 bc index = 
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
    // invokevirtual java/lang/String.trim()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 9, 23);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_1
    stack[sp++].i = 1;
    // arrload __refer  ,  L1225568095 bc index = 
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
    // invokevirtual java/lang/String.trim()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 9, 23);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial jx/bootrc/Pair.<init>(Ljava/lang/String;Ljava/lang/String;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_bootrc_Pair__init___Ljava_lang_String_2Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 22 , L1664598529 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bootrc/ConfigFile pairs Ljava/util/Vector;
    rstack[sp - 1].obj = ((struct jx_bootrc_ConfigFile*)rstack[sp - 1].obj)->pairs_0;
    sp += 0;
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual java/util/Vector.addElement(Ljava/lang/Object;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 179, 3);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 23 , L1550228904 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bootrc/ConfigFile name2value Ljava/util/Hashtable;
    rstack[sp - 1].obj = ((struct jx_bootrc_ConfigFile*)rstack[sp - 1].obj)->name2value_1;
    sp += 0;
    rstack[sp++].obj = rlocal[4].obj;
    // getfield jx/bootrc/Pair name Ljava/lang/String;
    rstack[sp - 1].obj = ((struct jx_bootrc_Pair*)rstack[sp - 1].obj)->name_0;
    sp += 0;
    rstack[sp++].obj = rlocal[4].obj;
    // getfield jx/bootrc/Pair value Ljava/lang/String;
    rstack[sp - 1].obj = ((struct jx_bootrc_Pair*)rstack[sp - 1].obj)->value_1;
    sp += 0;
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
    //  line no 24 , L831654622 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1872973138;
    L1740223770:
    //  line no 25 , L1740223770 , bytecode index = 
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

void bridge_jx_bootrc_ConfigFile__init___Ljx_zero_ReadOnlyMemory_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_bootrc_ConfigFile__init___Ljx_zero_ReadOnlyMemory_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct java_lang_String* func_jx_bootrc_ConfigFile_get__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 454, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 27 , L1077072774 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 27;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bootrc/ConfigFile name2value Ljava/util/Hashtable;
    rstack[sp - 1].obj = ((struct jx_bootrc_ConfigFile*)rstack[sp - 1].obj)->name2value_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
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
    // checkcast java/lang/String
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 8);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
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

void bridge_jx_bootrc_ConfigFile_get__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_bootrc_ConfigFile_get__Ljava_lang_String_2_Ljava_lang_String_2(runtime, ins);
}


// locals: 4
// stack: 5
// args: 0
struct java_lang_String* func_jx_bootrc_ConfigFile_readline___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 455, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 37 , L154449611 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 37;
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L1439632660:
    //  line no 38 , L1439632660 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bootrc/ConfigFile pos I
    stack[sp - 1].i = ((struct jx_bootrc_ConfigFile*)rstack[sp - 1].obj)->pos_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bootrc/ConfigFile mem Ljx/zero/ReadOnlyMemory;
    rstack[sp - 1].obj = ((struct jx_bootrc_ConfigFile*)rstack[sp - 1].obj)->mem_2;
    sp += 0;
    // invokeinterface jx/zero/ReadOnlyMemory.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 83, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L62343880;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bootrc/ConfigFile mem Ljx/zero/ReadOnlyMemory;
    rstack[sp - 1].obj = ((struct jx_bootrc_ConfigFile*)rstack[sp - 1].obj)->mem_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bootrc/ConfigFile pos I
    stack[sp - 1].i = ((struct jx_bootrc_ConfigFile*)rstack[sp - 1].obj)->pos_3;
    sp += 0;
    // invokeinterface jx/zero/ReadOnlyMemory.get8(I)B
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 83, 0);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[1].i = stack[--sp].i;
    ; 
    //  bipush 10
    stack[sp++].i = 10;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L62343880;
    ; 
    //  line no 39 , L193178046 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bootrc/ConfigFile data [C
    rstack[sp - 1].obj = ((struct jx_bootrc_ConfigFile*)rstack[sp - 1].obj)->data_6;
    sp += 0;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[1].i;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // arrstore u16  ,  L193178046 bc index = 
    {
        ;
        u16 value = stack[--sp].i;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_u16_arr[idx] = value;
    }
    ; 
    //  line no 40 , L638169719 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield jx/bootrc/ConfigFile pos I
    stack[sp - 1].i = ((struct jx_bootrc_ConfigFile*)rstack[sp - 1].obj)->pos_3;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield jx/bootrc/ConfigFile pos I
    sp -= 2;
    ((struct jx_bootrc_ConfigFile*)rstack[sp + 0].obj)->pos_3 = stack[sp + 1].i;
    ; 
    //  line no 41 , L533810548 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1439632660;
    L62343880:
    //  line no 43 , L62343880 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bootrc/ConfigFile pos I
    stack[sp - 1].i = ((struct jx_bootrc_ConfigFile*)rstack[sp - 1].obj)->pos_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bootrc/ConfigFile mem Ljx/zero/ReadOnlyMemory;
    rstack[sp - 1].obj = ((struct jx_bootrc_ConfigFile*)rstack[sp - 1].obj)->mem_2;
    sp += 0;
    // invokeinterface jx/zero/ReadOnlyMemory.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 83, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1446922577;
    stack[sp++].i = local[2].i;
    if(stack[--sp].i  != 0) goto L1446922577;
    // aconst null
    rstack[sp++].obj = NULL;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1446922577:
    //  line no 44 , L1446922577 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield jx/bootrc/ConfigFile pos I
    stack[sp - 1].i = ((struct jx_bootrc_ConfigFile*)rstack[sp - 1].obj)->pos_3;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield jx/bootrc/ConfigFile pos I
    sp -= 2;
    ((struct jx_bootrc_ConfigFile*)rstack[sp + 0].obj)->pos_3 = stack[sp + 1].i;
    ; 
    //  line no 45 , L1080476785 , bytecode index = 
    // new java/lang/String
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 9);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bootrc/ConfigFile data [C
    rstack[sp - 1].obj = ((struct jx_bootrc_ConfigFile*)rstack[sp - 1].obj)->data_6;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[2].i;
    // invokespecial java/lang/String.<init>([CII)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_String__init____3CII_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 46 , L722951168 , bytecode index = 
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

void bridge_jx_bootrc_ConfigFile_readline___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_bootrc_ConfigFile_readline___Ljava_lang_String_2(runtime, ins);
}


