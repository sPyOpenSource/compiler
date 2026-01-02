// CLASS: java/lang/reflect/Method extends java/lang/Object
#include "metadata.h"

struct java_lang_Object* func_java_lang_reflect_Method_invoke__Ljava_lang_Object_2_3Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_Object* p0, JArray * p1);

// generation
// globals
//struct java_lang_reflect_Method_static {};



__refer arr_vmtable_java_lang_reflect_Method_from_java_lang_reflect_Method[] = {
    func_java_lang_reflect_Method_match__Ljava_lang_String_2_3Ljava_lang_Class_2_Z,  //0
    func_java_lang_reflect_Method_getName___Ljava_lang_String_2,  //1
    func_java_lang_reflect_Method_invoke__Ljava_lang_Object_2_3Ljava_lang_Object_2_Ljava_lang_Object_2  //2
};
__refer arr_vmtable_java_lang_reflect_Method_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_reflect_Method[] = {
    {222, 3, arr_vmtable_java_lang_reflect_Method_from_java_lang_reflect_Method}, //0
    {5, 10, arr_vmtable_java_lang_reflect_Method_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_java_lang_reflect_Method__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1257, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 6 , L575360353 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 6;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
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

void bridge_java_lang_reflect_Method__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_reflect_Method__init____V(runtime, ins);
}


// locals: 9
// stack: 4
// args: 2
s8 func_java_lang_reflect_Method_match__Ljava_lang_String_2_3Ljava_lang_Class_2_Z(JThreadRuntime *runtime, struct java_lang_String* p0, JArray * p1){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1258, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 15 , L809383315 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 15;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/reflect/Method name Ljava/lang/String;
    rstack[sp - 1].obj = ((struct java_lang_reflect_Method*)rstack[sp - 1].obj)->name_2;
    sp += 0;
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
    if(stack[--sp].i  != 0) goto L1324514662;
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1324514662:
    //  line no 16 , L1324514662 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 17 , L908722588 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/reflect/Method desc Ljava/lang/String;
    rstack[sp - 1].obj = ((struct java_lang_reflect_Method*)rstack[sp - 1].obj)->desc_3;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/reflect/Method desc Ljava/lang/String;
    rstack[sp - 1].obj = ((struct java_lang_reflect_Method*)rstack[sp - 1].obj)->desc_3;
    sp += 0;
    //  bipush 41
    stack[sp++].i = 41;
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
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 18 , L496757837 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // invokestatic java/lang/reflect/Method.splitSignature(Ljava/lang/String;)Ljava/util/List;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_reflect_Method_splitSignature__Ljava_lang_String_2_Ljava_util_List_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 19 , L1548271808 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // arraylength  label  L1548271808
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    rstack[sp++].obj = rlocal[5].obj;
    // invokeinterface java/util/List.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 74, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L17600354;
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L17600354:
    //  line no 20 , L17600354 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    // invokeinterface java/util/List.iterator()Ljava/util/Iterator;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_util_Iterator* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 74, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    L1733056574:
    rstack[sp++].obj = rlocal[6].obj;
    // invokeinterface java/util/Iterator.hasNext()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 80, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L636959006;
    rstack[sp++].obj = rlocal[6].obj;
    // invokeinterface java/util/Iterator.next()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 80, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast java/lang/String
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 32);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 22 , L1059300256 , bytecode index = 
    rstack[sp++].obj = rlocal[7].obj;
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
    rlocal[8].obj = rstack[--sp].obj;
    ; 
    //  line no 23 , L1521568953 , bytecode index = 
    rstack[sp++].obj = rlocal[8].obj;
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // iinc slot 3 value 1
    local[3].i += 1;
    // arrload __refer  ,  L1521568953 bc index = 
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
    sp -= 2;
    if(rstack[sp + 0].obj  == rstack[sp + 1].obj) goto L1605988985;
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1605988985:
    //  line no 24 , L1605988985 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1733056574;
    L636959006:
    //  line no 25 , L636959006 , bytecode index = 
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

void bridge_java_lang_reflect_Method_match__Ljava_lang_String_2_3Ljava_lang_Class_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_reflect_Method_match__Ljava_lang_String_2_3Ljava_lang_Class_2_Z(runtime, ins, para[0].obj);
}


// locals: 8
// stack: 3
// args: 2
struct java_util_List* func_java_lang_reflect_Method_splitSignature__Ljava_lang_String_2_Ljava_util_List_2(JThreadRuntime *runtime, struct java_lang_reflect_Method* p0, struct java_lang_String* p1){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1259, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 30 , L1636178473 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 30;
    // new java/util/ArrayList
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 221);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/ArrayList.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_ArrayList__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 32 , L822232612 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rlocal[2].obj = rstack[--sp].obj;
    L633131207:
    //  line no 34 , L633131207 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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
    if(stack[--sp].i  <= 0) goto L852190062;
    ; 
    //  line no 35 , L1674403916 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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
    local[3].i = stack[--sp].i;
    ; 
    //  line no 36 , L1088239991 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 617);
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 37 , L61137731 , bytecode index = 
    stack[sp++].i = local[3].i;
    switch(stack[--sp].i){
        case 66:
            goto L1658511941;
        case 67:
            goto L1658511941;
        case 68:
            goto L1658511941;
        case 69:
            goto L1780293706;
        case 70:
            goto L1658511941;
        case 71:
            goto L1780293706;
        case 72:
            goto L1780293706;
        case 73:
            goto L1658511941;
        case 74:
            goto L1658511941;
        case 75:
            goto L1780293706;
        case 76:
            goto L1264941544;
        case 77:
            goto L1780293706;
        case 78:
            goto L1780293706;
        case 79:
            goto L1780293706;
        case 80:
            goto L1780293706;
        case 81:
            goto L1780293706;
        case 82:
            goto L1780293706;
        case 83:
            goto L1658511941;
        case 84:
            goto L1780293706;
        case 85:
            goto L1780293706;
        case 86:
            goto L1780293706;
        case 87:
            goto L1780293706;
        case 88:
            goto L1780293706;
        case 89:
            goto L1780293706;
        case 90:
            goto L1658511941;
        case 91:
            goto L1878992188;
        default:
            goto L1780293706;
    }
    L1658511941:
    //  line no 46 , L1658511941 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_1
    stack[sp++].i = 1;
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
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 47 , L1818449913 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[5].obj;
    // invokeinterface java/util/List.add(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 74, 6);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 48 , L1495161082 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 49 , L961859592 , bytecode index = 
    goto L1780293706;
    L1264941544:
    //  line no 52 , L1264941544 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 53 , L798278875 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[6].i = stack[--sp].i;
    L1497268815:
    //  line no 54 , L1497268815 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[6].i;
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[3].i = stack[--sp].i;
    //  bipush 59
    stack[sp++].i = 59;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1926027290;
    stack[sp++].i = local[5].i;
    if(stack[--sp].i  == 0) goto L1837601499;
    L1926027290:
    //  line no 55 , L1926027290 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  bipush 60
    stack[sp++].i = 60;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1690050988;
    // iinc slot 5 value 1
    local[5].i += 1;
    L1690050988:
    //  line no 56 , L1690050988 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  bipush 62
    stack[sp++].i = 62;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1228798862;
    // iinc slot 5 value -1
    local[5].i += -1;
    L1228798862:
    //  line no 57 , L1228798862 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1497268815;
    L1837601499:
    //  line no 59 , L1837601499 , bytecode index = 
    // iinc slot 6 value 1
    local[6].i += 1;
    ; 
    //  line no 60 , L1562764987 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[6].i;
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
    rlocal[7].obj = rstack[--sp].obj;
    ; 
    //  line no 61 , L216376974 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[7].obj;
    // invokeinterface java/util/List.add(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 74, 6);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 62 , L164714495 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[6].i;
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
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 63 , L789982400 , bytecode index = 
    goto L1780293706;
    L1878992188:
    //  line no 66 , L1878992188 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[5].i = stack[--sp].i;
    L1576277927:
    //  line no 67 , L1576277927 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[5].i;
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
    //  bipush 91
    stack[sp++].i = 91;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2080643905;
    ; 
    //  line no 68 , L2137642385 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1576277927;
    L2080643905:
    //  line no 70 , L2080643905 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[5].i;
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
    //  bipush 76
    stack[sp++].i = 76;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1627883152;
    ; 
    //  line no 71 , L481553464 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[6].i = stack[--sp].i;
    L1076966140:
    //  line no 72 , L1076966140 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[5].i;
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
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[3].i = stack[--sp].i;
    //  bipush 59
    stack[sp++].i = 59;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1908781622;
    stack[sp++].i = local[6].i;
    if(stack[--sp].i  == 0) goto L749443480;
    L1908781622:
    //  line no 73 , L1908781622 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  bipush 60
    stack[sp++].i = 60;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L796553753;
    // iinc slot 6 value 1
    local[6].i += 1;
    L796553753:
    //  line no 74 , L796553753 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  bipush 62
    stack[sp++].i = 62;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1721045976;
    // iinc slot 6 value -1
    local[6].i += -1;
    L1721045976:
    //  line no 75 , L1721045976 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1076966140;
    L749443480:
    //  line no 77 , L749443480 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    ; 
    //  line no 78 , L975001918 , bytecode index = 
    goto L1250582716;
    L1627883152:
    //  line no 79 , L1627883152 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    L1250582716:
    //  line no 81 , L1250582716 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[5].i;
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
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 82 , L907815246 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[6].obj;
    // invokeinterface java/util/List.add(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 74, 6);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 83 , L2019157894 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[5].i;
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
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 84 , L677217562 , bytecode index = 
    goto L1780293706;
    L1780293706:
    //  line no 88 , L1780293706 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L633131207;
    L852190062:
    //  line no 90 , L852190062 , bytecode index = 
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

void bridge_java_lang_reflect_Method_splitSignature__Ljava_lang_String_2_Ljava_util_List_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_reflect_Method_splitSignature__Ljava_lang_String_2_Ljava_util_List_2(runtime, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_java_lang_reflect_Method_getName___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 94 , L1716164115 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/reflect/Method name Ljava/lang/String;
    rstack[sp - 1].obj = ((struct java_lang_reflect_Method*)rstack[sp - 1].obj)->name_2;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_lang_reflect_Method_getName___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_reflect_Method_getName___Ljava_lang_String_2(runtime, ins);
}

void bridge_java_lang_reflect_Method_invoke__Ljava_lang_Object_2_3Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_reflect_Method_invoke__Ljava_lang_Object_2_3Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins, para[0].obj);
}


