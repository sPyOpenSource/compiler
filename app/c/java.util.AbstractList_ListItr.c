// CLASS: java/util/AbstractList$ListItr extends java/util/AbstractList$Itr
#include "metadata.h"


// generation
// globals
//struct java_util_AbstractList_00024ListItr_static {};



__refer arr_vmtable_java_util_AbstractList_00024ListItr_from_java_util_AbstractList_00024ListItr[] = {
    func_java_util_AbstractList_00024ListItr_hasPrevious___Z,  //0
    func_java_util_AbstractList_00024ListItr_previous___Ljava_lang_Object_2,  //1
    func_java_util_AbstractList_00024ListItr_nextIndex___I,  //2
    func_java_util_AbstractList_00024ListItr_previousIndex___I,  //3
    func_java_util_AbstractList_00024ListItr_set__Ljava_lang_Object_2_V,  //4
    func_java_util_AbstractList_00024ListItr_add__Ljava_lang_Object_2_V  //5
};
__refer arr_vmtable_java_util_AbstractList_00024ListItr_from_java_util_AbstractList_00024Itr[] = {
    func_java_util_AbstractList_00024Itr_hasNext___Z,  //0
    func_java_util_AbstractList_00024Itr_next___Ljava_lang_Object_2,  //1
    func_java_util_AbstractList_00024Itr_remove___V,  //2
    func_java_util_AbstractList_00024Itr_checkForComodification___V  //3
};
__refer arr_vmtable_java_util_AbstractList_00024ListItr_from_java_lang_Object[] = {
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
__refer arr_vmtable_java_util_AbstractList_00024ListItr_from_java_util_Iterator[] = {
    func_java_util_AbstractList_00024Itr_hasNext___Z,  //0
    func_java_util_AbstractList_00024Itr_next___Ljava_lang_Object_2,  //1
    func_java_util_AbstractList_00024Itr_remove___V  //2
};
__refer arr_vmtable_java_util_AbstractList_00024ListItr_from_java_util_ListIterator[] = {
    func_java_util_AbstractList_00024Itr_hasNext___Z,  //0
    func_java_util_AbstractList_00024Itr_next___Ljava_lang_Object_2,  //1
    func_java_util_AbstractList_00024ListItr_hasPrevious___Z,  //2
    func_java_util_AbstractList_00024ListItr_previous___Ljava_lang_Object_2,  //3
    func_java_util_AbstractList_00024ListItr_nextIndex___I,  //4
    func_java_util_AbstractList_00024ListItr_previousIndex___I,  //5
    func_java_util_AbstractList_00024Itr_remove___V,  //6
    func_java_util_AbstractList_00024ListItr_set__Ljava_lang_Object_2_V,  //7
    func_java_util_AbstractList_00024ListItr_add__Ljava_lang_Object_2_V  //8
};
VMTable vmtable_java_util_AbstractList_00024ListItr[] = {
    {155, 6, arr_vmtable_java_util_AbstractList_00024ListItr_from_java_util_AbstractList_00024ListItr}, //0
    {75, 4, arr_vmtable_java_util_AbstractList_00024ListItr_from_java_util_AbstractList_00024Itr}, //1
    {5, 10, arr_vmtable_java_util_AbstractList_00024ListItr_from_java_lang_Object}, //2
    {80, 3, arr_vmtable_java_util_AbstractList_00024ListItr_from_java_util_Iterator}, //3
    {156, 9, arr_vmtable_java_util_AbstractList_00024ListItr_from_java_util_ListIterator}, //4
};



// locals: 3
// stack: 3
// args: 2
void func_java_util_AbstractList_00024ListItr__init___Ljava_util_AbstractList_2I_V(JThreadRuntime *runtime, struct java_util_AbstractList* p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 822, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 143 , L665698670 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 143;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/util/AbstractList$ListItr this$0 Ljava/util/AbstractList;
    sp -= 2;
    ((struct java_util_AbstractList_00024ListItr*)rstack[sp + 0].obj)->this_000240_4 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // invokespecial java/util/AbstractList$Itr.<init>(Ljava/util/AbstractList;Ljava/util/AbstractList$1;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_AbstractList_00024Itr__init___Ljava_util_AbstractList_2Ljava_util_AbstractList_000241_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 144 , L193178046 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield java/util/AbstractList$ListItr cursor I
    sp -= 2;
    ((struct java_util_AbstractList_00024ListItr*)rstack[sp + 0].obj)->cursor_0 = stack[sp + 1].i;
    ; 
    //  line no 145 , L638169719 , bytecode index = 
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

void bridge_java_util_AbstractList_00024ListItr__init___Ljava_util_AbstractList_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_AbstractList_00024ListItr__init___Ljava_util_AbstractList_2I_V(runtime, ins, para[0].i);
}


// locals: 1
// stack: 1
// args: 0
s8 func_java_util_AbstractList_00024ListItr_hasPrevious___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 823, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 148 , L1446922577 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 148;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$ListItr cursor I
    stack[sp - 1].i = ((struct java_util_AbstractList_00024ListItr*)rstack[sp - 1].obj)->cursor_0;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1080476785;
    // iconst_1
    stack[sp++].i = 1;
    goto L722951168;
    L1080476785:
    // iconst_0
    stack[sp++].i = 0;
    L722951168:
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

void bridge_java_util_AbstractList_00024ListItr_hasPrevious___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractList_00024ListItr_hasPrevious___Z(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_AbstractList_00024ListItr_previous___Ljava_lang_Object_2[] = {
    { , , 141}
};
ExceptionTable extable_func_java_util_AbstractList_00024ListItr_previous___Ljava_lang_Object_2 = {1, arr_extable_func_java_util_AbstractList_00024ListItr_previous___Ljava_lang_Object_2};

// locals: 3
// stack: 4
// args: 0
struct java_lang_Object* func_java_util_AbstractList_00024ListItr_previous___Ljava_lang_Object_2(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 824, &rstack[0], &rlocal[0], &sp);
    // try catch :L451460284 L1826334428 L2101153819 (
    ; 
    //  line no 152 , L51152513 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 152;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractList$ListItr.checkForComodification()V
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
    L451460284:
    __frame->bytecodeIndex = 
    //  line no 154 , L451460284 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$ListItr cursor I
    stack[sp - 1].i = ((struct java_util_AbstractList_00024ListItr*)rstack[sp - 1].obj)->cursor_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[1].i = stack[--sp].i;
    ; 
    //  line no 155 , L1558103808 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$ListItr this$0 Ljava/util/AbstractList;
    rstack[sp - 1].obj = ((struct java_util_AbstractList_00024ListItr*)rstack[sp - 1].obj)->this_000240_4;
    sp += 0;
    stack[sp++].i = local[1].i;
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
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 156 , L1828873985 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // dup x1
    stack[sp - 0].j = stack[sp - 1].j; 
    stack[sp - 1].j = stack[sp - 2].j; 
    stack[sp - 2].j = stack[sp + 0].j; 
    rstack[sp - 0].obj = rstack[sp - 1].obj; 
    rstack[sp - 1].obj = rstack[sp - 2].obj; 
    rstack[sp - 2].obj = rstack[sp + 0].obj; 
    ++sp;
    // putfield java/util/AbstractList$ListItr cursor I
    sp -= 2;
    ((struct java_util_AbstractList_00024ListItr*)rstack[sp + 0].obj)->cursor_0 = stack[sp + 1].i;
    // putfield java/util/AbstractList$ListItr lastRet I
    sp -= 2;
    ((struct java_util_AbstractList_00024ListItr*)rstack[sp + 0].obj)->lastRet_1 = stack[sp + 1].i;
    ; 
    //  line no 157 , L2024415090 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    L1826334428:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L2101153819:
    //  line no 158 , L2101153819 , bytecode index = 
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 159 , L527804008 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractList$ListItr.checkForComodification()V
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
    //  line no 160 , L892965953 , bytecode index = 
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
    //     L892965953 in labeltable is :L892965953
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 160;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L2101153819;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_util_AbstractList_00024ListItr_previous___Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_util_AbstractList_00024ListItr_previous___Ljava_lang_Object_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_util_AbstractList_00024ListItr_nextIndex___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 165 , L1661210650 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$ListItr cursor I
    stack[sp - 1].i = ((struct java_util_AbstractList_00024ListItr*)rstack[sp - 1].obj)->cursor_0;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_util_AbstractList_00024ListItr_nextIndex___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractList_00024ListItr_nextIndex___I(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s32 func_java_util_AbstractList_00024ListItr_previousIndex___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 826, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 169 , L672313607 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 169;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$ListItr cursor I
    stack[sp - 1].i = ((struct java_util_AbstractList_00024ListItr*)rstack[sp - 1].obj)->cursor_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
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

void bridge_java_util_AbstractList_00024ListItr_previousIndex___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_util_AbstractList_00024ListItr_previousIndex___I(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_AbstractList_00024ListItr_set__Ljava_lang_Object_2_V[] = {
    { , , 141}
};
ExceptionTable extable_func_java_util_AbstractList_00024ListItr_set__Ljava_lang_Object_2_V = {1, arr_extable_func_java_util_AbstractList_00024ListItr_set__Ljava_lang_Object_2_V};

// locals: 3
// stack: 3
// args: 1
void func_java_util_AbstractList_00024ListItr_set__Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 827, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L1311844206 L443721024 L668312960 (
    ; 
    //  line no 173 , L428696898 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 173;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$ListItr lastRet I
    stack[sp - 1].i = ((struct java_util_AbstractList_00024ListItr*)rstack[sp - 1].obj)->lastRet_1;
    sp += 0;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1581267786;
    ; 
    //  line no 174 , L1360518503 , bytecode index = 
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
    //     L1360518503 in labeltable is :L1360518503
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 174;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1581267786:
    //  line no 175 , L1581267786 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractList$ListItr.checkForComodification()V
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
    L1311844206:
    __frame->bytecodeIndex = 
    //  line no 178 , L1311844206 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$ListItr this$0 Ljava/util/AbstractList;
    rstack[sp - 1].obj = ((struct java_util_AbstractList_00024ListItr*)rstack[sp - 1].obj)->this_000240_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$ListItr lastRet I
    stack[sp - 1].i = ((struct java_util_AbstractList_00024ListItr*)rstack[sp - 1].obj)->lastRet_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/AbstractList.set(ILjava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,s32,struct java_lang_Object*) = find_method(__ins->vm_table, 76, 2);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 179 , L1541708640 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$ListItr this$0 Ljava/util/AbstractList;
    rstack[sp - 1].obj = ((struct java_util_AbstractList_00024ListItr*)rstack[sp - 1].obj)->this_000240_4;
    sp += 0;
    // getfield java/util/AbstractList modCount I
    stack[sp - 1].i = ((struct java_util_AbstractList*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // putfield java/util/AbstractList$ListItr expectedModCount I
    sp -= 2;
    ((struct java_util_AbstractList_00024ListItr*)rstack[sp + 0].obj)->expectedModCount_2 = stack[sp + 1].i;
    L443721024:
    __frame->bytecodeIndex = 
    //  line no 182 , L443721024 , bytecode index = 
    goto L691098155;
    L668312960:
    //  line no 180 , L668312960 , bytecode index = 
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 181 , L1987360300 , bytecode index = 
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
    //     L1987360300 in labeltable is :L1987360300
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 181;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L691098155:
    //  line no 183 , L691098155 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L668312960;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_util_AbstractList_00024ListItr_set__Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_AbstractList_00024ListItr_set__Ljava_lang_Object_2_V(runtime, ins);
}

ExceptionItem arr_extable_func_java_util_AbstractList_00024ListItr_add__Ljava_lang_Object_2_V[] = {
    { , , 141}
};
ExceptionTable extable_func_java_util_AbstractList_00024ListItr_add__Ljava_lang_Object_2_V = {1, arr_extable_func_java_util_AbstractList_00024ListItr_add__Ljava_lang_Object_2_V};

// locals: 3
// stack: 5
// args: 1
void func_java_util_AbstractList_00024ListItr_add__Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 828, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    // try catch :L1713833639 L1168420930 L380812044 (
    ; 
    //  line no 186 , L846918683 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 186;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual java/util/AbstractList$ListItr.checkForComodification()V
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
    L1713833639:
    __frame->bytecodeIndex = 
    //  line no 189 , L1713833639 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$ListItr this$0 Ljava/util/AbstractList;
    rstack[sp - 1].obj = ((struct java_util_AbstractList_00024ListItr*)rstack[sp - 1].obj)->this_000240_4;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield java/util/AbstractList$ListItr cursor I
    stack[sp - 1].i = ((struct java_util_AbstractList_00024ListItr*)rstack[sp - 1].obj)->cursor_0;
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
    // putfield java/util/AbstractList$ListItr cursor I
    sp -= 2;
    ((struct java_util_AbstractList_00024ListItr*)rstack[sp + 0].obj)->cursor_0 = stack[sp + 1].i;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/AbstractList.add(ILjava/lang/Object;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,struct java_lang_Object*) = find_method(__ins->vm_table, 76, 3);
        __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 190 , L1823923917 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_-1
    stack[sp++].i = -1;
    // putfield java/util/AbstractList$ListItr lastRet I
    sp -= 2;
    ((struct java_util_AbstractList_00024ListItr*)rstack[sp + 0].obj)->lastRet_1 = stack[sp + 1].i;
    ; 
    //  line no 191 , L208684473 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/util/AbstractList$ListItr this$0 Ljava/util/AbstractList;
    rstack[sp - 1].obj = ((struct java_util_AbstractList_00024ListItr*)rstack[sp - 1].obj)->this_000240_4;
    sp += 0;
    // getfield java/util/AbstractList modCount I
    stack[sp - 1].i = ((struct java_util_AbstractList*)rstack[sp - 1].obj)->modCount_0;
    sp += 0;
    // putfield java/util/AbstractList$ListItr expectedModCount I
    sp -= 2;
    ((struct java_util_AbstractList_00024ListItr*)rstack[sp + 0].obj)->expectedModCount_2 = stack[sp + 1].i;
    L1168420930:
    __frame->bytecodeIndex = 
    //  line no 194 , L1168420930 , bytecode index = 
    goto L261748192;
    L380812044:
    //  line no 192 , L380812044 , bytecode index = 
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 193 , L1789268516 , bytecode index = 
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
    //     L1789268516 in labeltable is :L1789268516
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 193;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L261748192:
    //  line no 195 , L261748192 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L380812044;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_util_AbstractList_00024ListItr_add__Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_AbstractList_00024ListItr_add__Ljava_lang_Object_2_V(runtime, ins);
}


