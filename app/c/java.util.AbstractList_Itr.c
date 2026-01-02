// CLASS: java/util/AbstractList$Itr extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_util_AbstractList_00024Itr_static {};



__refer arr_vmtable_java_util_AbstractList_00024Itr_from_java_util_AbstractList_00024Itr[] = {
    func_java_util_AbstractList_00024Itr_hasNext___Z,  //0
    func_java_util_AbstractList_00024Itr_next___Ljava_lang_Object_2,  //1
    func_java_util_AbstractList_00024Itr_remove___V,  //2
    func_java_util_AbstractList_00024Itr_checkForComodification___V  //3
};
__refer arr_vmtable_java_util_AbstractList_00024Itr_from_java_lang_Object[] = {
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
__refer arr_vmtable_java_util_AbstractList_00024Itr_from_java_util_Iterator[] = {
    func_java_util_AbstractList_00024Itr_hasNext___Z,  //0
    func_java_util_AbstractList_00024Itr_next___Ljava_lang_Object_2,  //1
    func_java_util_AbstractList_00024Itr_remove___V  //2
};
VMTable vmtable_java_util_AbstractList_00024Itr[] = {
    {75, 4, arr_vmtable_java_util_AbstractList_00024Itr_from_java_util_AbstractList_00024Itr}, //0
    {5, 10, arr_vmtable_java_util_AbstractList_00024Itr_from_java_lang_Object}, //1
    {80, 3, arr_vmtable_java_util_AbstractList_00024Itr_from_java_util_Iterator}, //2
};



// locals: 2
// stack: 2
// args: 1
void func_java_util_AbstractList_00024Itr__init___Ljava_util_AbstractList_2_V(JThreadRuntime *runtime, struct java_util_AbstractList* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 416, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 94 , L889729797 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 94;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/AbstractList$Itr this$0 Ljava/util/AbstractList;
    sp -= 2;
    ((struct java_util_AbstractList_00024Itr*)rstack[sp + 0].obj)->this_000240_3 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 96 , L148912029 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/util/AbstractList$Itr cursor I
    sp -= 2;
    ((struct java_util_AbstractList_00024Itr*)rstack[sp + 0].obj)->cursor_0 = stack[sp + 1].i;
    ; 
    //  line no 99 , L874217650 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_-1
    stack[sp++].i = -1;
    // putfield java/util/AbstractList$Itr lastRet I
    sp -= 2;
    ((struct java_util_AbstractList_00024Itr*)rstack[sp + 0].obj)->lastRet_1 = stack[sp + 1].i;
    ; 
    //  line no 102 , L1436664465 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$Itr this$0 Ljava/util/AbstractList;
    rstack[sp - 1].obj = ((struct java_util_AbstractList_00024Itr*)rstack[sp - 1].obj)->this_000240_3;
    sp += 0;
    // getfield java/util/AbstractList modCount I
    stack[sp - 1].i = ((struct java_util_AbstractList*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // putfield java/util/AbstractList$Itr expectedModCount I
    sp -= 2;
    ((struct java_util_AbstractList_00024Itr*)rstack[sp + 0].obj)->expectedModCount_2 = stack[sp + 1].i;
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

void bridge_java_util_AbstractList_00024Itr__init___Ljava_util_AbstractList_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_AbstractList_00024Itr__init___Ljava_util_AbstractList_2_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s8 func_java_util_AbstractList_00024Itr_hasNext___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 417, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 105 , L680576081 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 105;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$Itr cursor I
    stack[sp - 1].i = ((struct java_util_AbstractList_00024Itr*)rstack[sp - 1].obj)->cursor_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$Itr this$0 Ljava/util/AbstractList;
    rstack[sp - 1].obj = ((struct java_util_AbstractList_00024Itr*)rstack[sp - 1].obj)->this_000240_3;
    sp += 0;
    // invokevirtual java/util/AbstractList.size()I
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
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1088872417;
    // iconst_1
    stack[sp++].i = 1;
    goto L453523494;
    L1088872417:
    // iconst_0
    stack[sp++].i = 0;
    L453523494:
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

void bridge_java_util_AbstractList_00024Itr_hasNext___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractList_00024Itr_hasNext___Z(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_AbstractList_00024Itr_next___Ljava_lang_Object_2[] = {
    { , , 141}
};
ExceptionTable extable_func_java_util_AbstractList_00024Itr_next___Ljava_lang_Object_2 = {1, arr_extable_func_java_util_AbstractList_00024Itr_next___Ljava_lang_Object_2};

// locals: 2
// stack: 5
// args: 0
struct java_lang_Object* func_java_util_AbstractList_00024Itr_next___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 418, &rstack[0], &rlocal[0], &sp);
    // try catch :L1052967153 L1210898719 L306123060 (
    ; 
    //  line no 109 , L2104028992 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 109;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractList$Itr.checkForComodification()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 75, 3);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1052967153:
    __frame->bytecodeIndex = 
    //  line no 111 , L1052967153 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$Itr this$0 Ljava/util/AbstractList;
    rstack[sp - 1].obj = ((struct java_util_AbstractList_00024Itr*)rstack[sp - 1].obj)->this_000240_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$Itr cursor I
    stack[sp - 1].i = ((struct java_util_AbstractList_00024Itr*)rstack[sp - 1].obj)->cursor_0;
    sp += 0;
    // invokevirtual java/util/AbstractList.get(I)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 76, 1);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 112 , L1527430292 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/AbstractList$Itr cursor I
    stack[sp - 1].i = ((struct java_util_AbstractList_00024Itr*)rstack[sp - 1].obj)->cursor_0;
    sp += 0;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield java/util/AbstractList$Itr cursor I
    sp -= 2;
    ((struct java_util_AbstractList_00024Itr*)rstack[sp + 0].obj)->cursor_0 = stack[sp + 1].i;
    // putfield java/util/AbstractList$Itr lastRet I
    sp -= 2;
    ((struct java_util_AbstractList_00024Itr*)rstack[sp + 0].obj)->lastRet_1 = stack[sp + 1].i;
    ; 
    //  line no 113 , L1975546571 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    L1210898719:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L306123060:
    //  line no 114 , L306123060 , bytecode index = 
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 115 , L521960438 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractList$Itr.checkForComodification()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 75, 3);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 116 , L632587706 , bytecode index = 
    // new java/util/NoSuchElementException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 77);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/NoSuchElementException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_NoSuchElementException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L632587706 in labeltable is :L632587706
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 116;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L306123060;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_AbstractList_00024Itr_next___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_AbstractList_00024Itr_next___Ljava_lang_Object_2(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_AbstractList_00024Itr_remove___V[] = {
    { , , 141}
};
ExceptionTable extable_func_java_util_AbstractList_00024Itr_remove___V = {1, arr_extable_func_java_util_AbstractList_00024Itr_remove___V};

// locals: 2
// stack: 3
// args: 0
void func_java_util_AbstractList_00024Itr_remove___V(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 419, &rstack[0], &rlocal[0], &sp);
    // try catch :L1567885839 L558569884 L550752602 (
    ; 
    //  line no 121 , L680779399 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 121;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$Itr lastRet I
    stack[sp - 1].i = ((struct java_util_AbstractList_00024Itr*)rstack[sp - 1].obj)->lastRet_1;
    sp += 0;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1439337960;
    ; 
    //  line no 122 , L741669172 , bytecode index = 
    // new java/lang/IllegalStateException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 78);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/IllegalStateException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalStateException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L741669172 in labeltable is :L741669172
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 122;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1439337960:
    //  line no 123 , L1439337960 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractList$Itr.checkForComodification()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 75, 3);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1567885839:
    __frame->bytecodeIndex = 
    //  line no 126 , L1567885839 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$Itr this$0 Ljava/util/AbstractList;
    rstack[sp - 1].obj = ((struct java_util_AbstractList_00024Itr*)rstack[sp - 1].obj)->this_000240_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$Itr lastRet I
    stack[sp - 1].i = ((struct java_util_AbstractList_00024Itr*)rstack[sp - 1].obj)->lastRet_1;
    sp += 0;
    // invokevirtual java/util/AbstractList.remove(I)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 76, 4);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 127 , L315860201 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$Itr lastRet I
    stack[sp - 1].i = ((struct java_util_AbstractList_00024Itr*)rstack[sp - 1].obj)->lastRet_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$Itr cursor I
    stack[sp - 1].i = ((struct java_util_AbstractList_00024Itr*)rstack[sp - 1].obj)->cursor_0;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L604125138;
    ; 
    //  line no 128 , L631659383 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/AbstractList$Itr cursor I
    stack[sp - 1].i = ((struct java_util_AbstractList_00024Itr*)rstack[sp - 1].obj)->cursor_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield java/util/AbstractList$Itr cursor I
    sp -= 2;
    ((struct java_util_AbstractList_00024Itr*)rstack[sp + 0].obj)->cursor_0 = stack[sp + 1].i;
    L604125138:
    //  line no 129 , L604125138 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_-1
    stack[sp++].i = -1;
    // putfield java/util/AbstractList$Itr lastRet I
    sp -= 2;
    ((struct java_util_AbstractList_00024Itr*)rstack[sp + 0].obj)->lastRet_1 = stack[sp + 1].i;
    ; 
    //  line no 130 , L785447854 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$Itr this$0 Ljava/util/AbstractList;
    rstack[sp - 1].obj = ((struct java_util_AbstractList_00024Itr*)rstack[sp - 1].obj)->this_000240_3;
    sp += 0;
    // getfield java/util/AbstractList modCount I
    stack[sp - 1].i = ((struct java_util_AbstractList*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // putfield java/util/AbstractList$Itr expectedModCount I
    sp -= 2;
    ((struct java_util_AbstractList_00024Itr*)rstack[sp + 0].obj)->expectedModCount_2 = stack[sp + 1].i;
    L558569884:
    __frame->bytecodeIndex = 
    //  line no 133 , L558569884 , bytecode index = 
    goto L556529265;
    L550752602:
    //  line no 131 , L550752602 , bytecode index = 
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 132 , L346224929 , bytecode index = 
    // new java/util/ConcurrentModificationException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 79);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/ConcurrentModificationException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_ConcurrentModificationException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L346224929 in labeltable is :L346224929
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 132;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L556529265:
    //  line no 134 , L556529265 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L550752602;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_util_AbstractList_00024Itr_remove___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_AbstractList_00024Itr_remove___V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_java_util_AbstractList_00024Itr_checkForComodification___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 420, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 137 , L720167805 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 137;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$Itr this$0 Ljava/util/AbstractList;
    rstack[sp - 1].obj = ((struct java_util_AbstractList_00024Itr*)rstack[sp - 1].obj)->this_000240_3;
    sp += 0;
    // getfield java/util/AbstractList modCount I
    stack[sp - 1].i = ((struct java_util_AbstractList*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$Itr expectedModCount I
    stack[sp - 1].i = ((struct java_util_AbstractList_00024Itr*)rstack[sp - 1].obj)->expectedModCount_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1418334255;
    ; 
    //  line no 138 , L1466073198 , bytecode index = 
    // new java/util/ConcurrentModificationException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 79);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/ConcurrentModificationException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_ConcurrentModificationException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1466073198 in labeltable is :L1466073198
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 138;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1418334255:
    //  line no 139 , L1418334255 , bytecode index = 
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

void bridge_java_util_AbstractList_00024Itr_checkForComodification___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_AbstractList_00024Itr_checkForComodification___V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 2
void func_java_util_AbstractList_00024Itr__init___Ljava_util_AbstractList_2Ljava_util_AbstractList_000241_2_V(JThreadRuntime *runtime, struct java_util_AbstractList* p0, struct java_util_AbstractList_000241* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 421, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 94 , L1526298704 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 94;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial java/util/AbstractList$Itr.<init>(Ljava/util/AbstractList;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_AbstractList_00024Itr__init___Ljava_util_AbstractList_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_java_util_AbstractList_00024Itr__init___Ljava_util_AbstractList_2Ljava_util_AbstractList_000241_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_AbstractList_00024Itr__init___Ljava_util_AbstractList_2Ljava_util_AbstractList_000241_2_V(runtime, ins, para[0].obj);
}


