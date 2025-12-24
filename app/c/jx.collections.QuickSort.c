// CLASS: jx/collections/QuickSort extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_collections_QuickSort_static {};



__refer arr_vmtable_jx_collections_QuickSort_from_jx_collections_QuickSort[] = {
    func_jx_collections_QuickSort_iterator___Ljx_collections_Iterator_2,  //0
    func_jx_collections_QuickSort_sort___V,  //1
    func_jx_collections_QuickSort_add__Ljava_lang_Object_2_V,  //2
    func_jx_collections_QuickSort_size___I,  //3
    func_jx_collections_QuickSort_sort3__Ljava_util_Vector_2II_V,  //4
    func_jx_collections_QuickSort_sort2__Ljava_util_Vector_2II_V,  //5
    func_jx_collections_QuickSort_sort2__Ljava_util_Vector_2_V  //6
};
__refer arr_vmtable_jx_collections_QuickSort_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_collections_QuickSort_from_jx_collections_SortedList[] = {
    func_jx_collections_QuickSort_iterator___Ljx_collections_Iterator_2  //0
};
__refer arr_vmtable_jx_collections_QuickSort_from_jx_collections_Collection[] = {
    func_jx_collections_QuickSort_iterator___Ljx_collections_Iterator_2,  //0
    func_jx_collections_QuickSort_add__Ljava_lang_Object_2_V,  //1
    func_jx_collections_QuickSort_size___I  //2
};
VMTable vmtable_jx_collections_QuickSort[] = {
    {211, 7, arr_vmtable_jx_collections_QuickSort_from_jx_collections_QuickSort}, //0
    {10, 11, arr_vmtable_jx_collections_QuickSort_from_java_lang_Object}, //1
    {214, 1, arr_vmtable_jx_collections_QuickSort_from_jx_collections_SortedList}, //2
    {215, 3, arr_vmtable_jx_collections_QuickSort_from_jx_collections_Collection}, //3
};



// locals: 3
// stack: 2
// args: 2
void func_jx_collections_QuickSort__init___Ljx_collections_Comparator_2Ljava_util_Vector_2_V(JThreadRuntime *runtime, struct jx_collections_Comparator* p0, struct java_util_Vector* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 524, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 10 , L2106165633 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 10;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 11 , L1221991240 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield jx/collections/QuickSort comparator Ljx/collections/Comparator;
    sp -= 2;
    ((struct jx_collections_QuickSort*)rstack[sp + 0].obj)->comparator_0 = rstack[sp + 1].obj;
    ; 
    //  line no 12 , L1758624236 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield jx/collections/QuickSort elements Ljava/util/Vector;
    sp -= 2;
    ((struct jx_collections_QuickSort*)rstack[sp + 0].obj)->elements_1 = rstack[sp + 1].obj;
    ; 
    //  line no 13 , L630028734 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual jx/collections/QuickSort.sort()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 211, 1);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 14 , L351877391 , bytecode index = 
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

void bridge_jx_collections_QuickSort__init___Ljx_collections_Comparator_2Ljava_util_Vector_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_collections_QuickSort__init___Ljx_collections_Comparator_2Ljava_util_Vector_2_V(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 4
// args: 1
void func_jx_collections_QuickSort__init___Ljx_collections_Comparator_2_V(JThreadRuntime *runtime, struct jx_collections_Comparator* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 525, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 16 , L392918519 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 16;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
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
    // invokespecial jx/collections/QuickSort.<init>(Ljx/collections/Comparator;Ljava/util/Vector;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_collections_QuickSort__init___Ljx_collections_Comparator_2Ljava_util_Vector_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 17 , L1499840045 , bytecode index = 
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

void bridge_jx_collections_QuickSort__init___Ljx_collections_Comparator_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_collections_QuickSort__init___Ljx_collections_Comparator_2_V(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
struct jx_collections_Iterator* func_jx_collections_QuickSort_iterator___Ljx_collections_Iterator_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 526, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 20 , L65488937 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 20;
    // new jx/collections/QuickSort$1
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 212);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial jx/collections/QuickSort$1.<init>(Ljx/collections/QuickSort;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_collections_QuickSort_000241__init___Ljx_collections_QuickSort_2_V(runtime, rstack[sp + 0].obj);
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

void bridge_jx_collections_QuickSort_iterator___Ljx_collections_Iterator_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_collections_QuickSort_iterator___Ljx_collections_Iterator_2(runtime, ins);
}


// locals: 1
// stack: 5
// args: 0
void func_jx_collections_QuickSort_sort___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 527, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 32 , L999230073 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 32;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/collections/QuickSort elements Ljava/util/Vector;
    rstack[sp - 1].obj = ((struct jx_collections_QuickSort*)rstack[sp - 1].obj)->elements_1;
    sp += 0;
    // invokevirtual java/util/Vector.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 179, 5);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_2
    stack[sp++].i = 2;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1910936570;
    method_exit(runtime);
    return;
    L1910936570:
    //  line no 33 , L1910936570 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/collections/QuickSort elements Ljava/util/Vector;
    rstack[sp - 1].obj = ((struct jx_collections_QuickSort*)rstack[sp - 1].obj)->elements_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/collections/QuickSort elements Ljava/util/Vector;
    rstack[sp - 1].obj = ((struct jx_collections_QuickSort*)rstack[sp - 1].obj)->elements_1;
    sp += 0;
    // invokevirtual java/util/Vector.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 179, 5);
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
    // invokevirtual jx/collections/QuickSort.sort3(Ljava/util/Vector;II)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_util_Vector*,s32,s32) = find_method(__ins->vm_table, 211, 4);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 35 , L1215904751 , bytecode index = 
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

void bridge_jx_collections_QuickSort_sort___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_collections_QuickSort_sort___V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_jx_collections_QuickSort_add__Ljava_lang_Object_2_V(JThreadRuntime *runtime, struct java_lang_Object* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 528, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 38 , L1052212904 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 38;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/collections/QuickSort elements Ljava/util/Vector;
    rstack[sp - 1].obj = ((struct jx_collections_QuickSort*)rstack[sp - 1].obj)->elements_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
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
    //  line no 39 , L2072724423 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual jx/collections/QuickSort.sort()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 211, 1);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 40 , L2058135834 , bytecode index = 
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

void bridge_jx_collections_QuickSort_add__Ljava_lang_Object_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_collections_QuickSort_add__Ljava_lang_Object_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_jx_collections_QuickSort_size___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 529, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 43 , L1090541608 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 43;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/collections/QuickSort elements Ljava/util/Vector;
    rstack[sp - 1].obj = ((struct jx_collections_QuickSort*)rstack[sp - 1].obj)->elements_1;
    sp += 0;
    // invokevirtual java/util/Vector.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 179, 5);
        stack[sp].i = __func_p(runtime);
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

void bridge_jx_collections_QuickSort_size___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_collections_QuickSort_size___I(runtime, ins);
}


// locals: 5
// stack: 4
// args: 3
void func_jx_collections_QuickSort_qsort__Ljava_util_Vector_2II_V(JThreadRuntime *runtime, struct java_util_Vector* p0, s32 p1, s32 p2){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 530, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 48 , L2144284609 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 48;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L34871826;
    ; 
    //  line no 49 , L1100399456 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokespecial jx/collections/QuickSort.quickPartition(Ljava/util/Vector;II)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_jx_collections_QuickSort_quickPartition__Ljava_util_Vector_2II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 50 , L68326648 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[4].i;
    // invokespecial jx/collections/QuickSort.qsort(Ljava/util/Vector;II)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_collections_QuickSort_qsort__Ljava_util_Vector_2II_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 51 , L35984028 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    // invokespecial jx/collections/QuickSort.qsort(Ljava/util/Vector;II)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_collections_QuickSort_qsort__Ljava_util_Vector_2II_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L34871826:
    //  line no 53 , L34871826 , bytecode index = 
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

void bridge_jx_collections_QuickSort_qsort__Ljava_util_Vector_2II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_collections_QuickSort_qsort__Ljava_util_Vector_2II_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 7
// stack: 4
// args: 3
void func_jx_collections_QuickSort_sort3__Ljava_util_Vector_2II_V(JThreadRuntime *runtime, struct java_util_Vector* p0, s32 p1, s32 p2){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 531, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 56 , L1463355115 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 56;
    stack[sp++].i = local[2].i;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 57 , L1201466784 , bytecode index = 
    stack[sp++].i = local[3].i;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 60 , L1829217853 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i >> stack[sp - 1].i; 
    --sp;
    // invokevirtual java/util/Vector.elementAt(I)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 179, 9);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    L1461474945:
    //  line no 66 , L1461474945 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/collections/QuickSort comparator Ljx/collections/Comparator;
    rstack[sp - 1].obj = ((struct jx_collections_QuickSort*)rstack[sp - 1].obj)->comparator_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual java/util/Vector.elementAt(I)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 179, 9);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[6].obj;
    // invokeinterface jx/collections/Comparator.compare(Ljava/lang/Object;Ljava/lang/Object;)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_Object*) = find_method(__ins->vm_table, 213, 0);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  >= 0) goto L1217207511;
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1461474945;
    L1217207511:
    //  line no 70 , L1217207511 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/collections/QuickSort comparator Ljx/collections/Comparator;
    rstack[sp - 1].obj = ((struct jx_collections_QuickSort*)rstack[sp - 1].obj)->comparator_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[5].i;
    // invokevirtual java/util/Vector.elementAt(I)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 179, 9);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[6].obj;
    // invokeinterface jx/collections/Comparator.compare(Ljava/lang/Object;Ljava/lang/Object;)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_Object*) = find_method(__ins->vm_table, 213, 0);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  <= 0) goto L1759250827;
    // iinc slot 5 value -1
    local[5].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1217207511;
    L1759250827:
    //  line no 72 , L1759250827 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L951741667;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    // invokespecial jx/collections/QuickSort.swap(Ljava/util/Vector;II)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_collections_QuickSort_swap__Ljava_util_Vector_2II_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iinc slot 4 value 1
    local[4].i += 1;
    // iinc slot 5 value -1
    local[5].i += -1;
    L951741667:
    //  line no 74 , L951741667 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1461474945;
    ; 
    //  line no 76 , L220695851 , bytecode index = 
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L762074108;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[5].i;
    // invokevirtual jx/collections/QuickSort.sort3(Ljava/util/Vector;II)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_util_Vector*,s32,s32) = find_method(__ins->vm_table, 211, 4);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L762074108:
    //  line no 78 , L762074108 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L636782475;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[3].i;
    // invokevirtual jx/collections/QuickSort.sort3(Ljava/util/Vector;II)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_util_Vector*,s32,s32) = find_method(__ins->vm_table, 211, 4);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L636782475:
    //  line no 80 , L636782475 , bytecode index = 
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

void bridge_jx_collections_QuickSort_sort3__Ljava_util_Vector_2II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_collections_QuickSort_sort3__Ljava_util_Vector_2II_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 7
// stack: 4
// args: 3
s32 func_jx_collections_QuickSort_quickPartition__Ljava_util_Vector_2II_I(JThreadRuntime *runtime, struct java_util_Vector* p0, s32 p1, s32 p2){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 532, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 83 , L2143139988 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 83;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual java/util/Vector.elementAt(I)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 179, 9);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 84 , L813823788 , bytecode index = 
    stack[sp++].i = local[2].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 85 , L826865256 , bytecode index = 
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[6].i = stack[--sp].i;
    L1845517769:
    //  line no 88 , L1845517769 , bytecode index = 
    // iinc slot 6 value -1
    local[6].i += -1;
    ; 
    //  line no 89 , L2095788421 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/collections/QuickSort comparator Ljx/collections/Comparator;
    rstack[sp - 1].obj = ((struct jx_collections_QuickSort*)rstack[sp - 1].obj)->comparator_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[6].i;
    // invokevirtual java/util/Vector.elementAt(I)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 179, 9);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[4].obj;
    // invokeinterface jx/collections/Comparator.compare(Ljava/lang/Object;Ljava/lang/Object;)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_Object*) = find_method(__ins->vm_table, 213, 0);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  > 0) goto L1845517769;
    L1131184547:
    //  line no 91 , L1131184547 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    ; 
    //  line no 92 , L895599632 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/collections/QuickSort comparator Ljx/collections/Comparator;
    rstack[sp - 1].obj = ((struct jx_collections_QuickSort*)rstack[sp - 1].obj)->comparator_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[5].i;
    // invokevirtual java/util/Vector.elementAt(I)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 179, 9);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[4].obj;
    // invokeinterface jx/collections/Comparator.compare(Ljava/lang/Object;Ljava/lang/Object;)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_Object*) = find_method(__ins->vm_table, 213, 0);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    if(stack[--sp].i  < 0) goto L1131184547;
    ; 
    //  line no 93 , L1508059488 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L2082557120;
    ; 
    //  line no 94 , L1533524862 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    // invokespecial jx/collections/QuickSort.swap(Ljava/util/Vector;II)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_collections_QuickSort_swap__Ljava_util_Vector_2II_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1845517769;
    L2082557120:
    //  line no 96 , L2082557120 , bytecode index = 
    stack[sp++].i = local[6].i;
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

void bridge_jx_collections_QuickSort_quickPartition__Ljava_util_Vector_2II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_collections_QuickSort_quickPartition__Ljava_util_Vector_2II_I(runtime, ins, para[0].i, para[1].i);
}


// locals: 8
// stack: 4
// args: 3
void func_jx_collections_QuickSort_sort2__Ljava_util_Vector_2II_V(JThreadRuntime *runtime, struct java_util_Vector* p0, s32 p1, s32 p2){
    
    StackItem local[8] = {0};
    RStackItem rlocal[8] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 533, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 102 , L552937500 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 102;
    stack[sp++].i = local[2].i;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 103 , L1455695758 , bytecode index = 
    stack[sp++].i = local[3].i;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 104 , L807328355 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1025797795;
    ; 
    //  line no 105 , L873993427 , bytecode index = 
    method_exit(runtime);
    return;
    L1025797795:
    //  line no 107 , L1025797795 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_2
    stack[sp++].i = 2;
    if (!stack[sp - 1].i) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 4, 
        goto __ExceptionHandler;
    }
    stack[sp - 2].i = stack[sp - 2].i / stack[sp - 1].i; 
    --sp;
    // invokevirtual java/util/Vector.elementAt(I)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 179, 9);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    L1134013833:
    //  line no 108 , L1134013833 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L94157402;
    L466853180:
    //  line no 109 , L466853180 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1863953433;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/collections/QuickSort comparator Ljx/collections/Comparator;
    rstack[sp - 1].obj = ((struct jx_collections_QuickSort*)rstack[sp - 1].obj)->comparator_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual java/util/Vector.elementAt(I)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 179, 9);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[6].obj;
    // invokeinterface jx/collections/Comparator.compare(Ljava/lang/Object;Ljava/lang/Object;)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_Object*) = find_method(__ins->vm_table, 213, 0);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  <= 0) goto L1863953433;
    ; 
    //  line no 110 , L295485334 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L466853180;
    L1863953433:
    //  line no 112 , L1863953433 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1899141525;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/collections/QuickSort comparator Ljx/collections/Comparator;
    rstack[sp - 1].obj = ((struct jx_collections_QuickSort*)rstack[sp - 1].obj)->comparator_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[5].i;
    // invokevirtual java/util/Vector.elementAt(I)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 179, 9);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[6].obj;
    // invokeinterface jx/collections/Comparator.compare(Ljava/lang/Object;Ljava/lang/Object;)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_Object*) = find_method(__ins->vm_table, 213, 0);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  >= 0) goto L1899141525;
    ; 
    //  line no 113 , L1989132530 , bytecode index = 
    // iinc slot 5 value -1
    local[5].i += -1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1863953433;
    L1899141525:
    //  line no 115 , L1899141525 , bytecode index = 
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1134013833;
    ; 
    //  line no 116 , L1414845278 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    // invokespecial jx/collections/QuickSort.swap(Ljava/util/Vector;II)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_collections_QuickSort_swap__Ljava_util_Vector_2II_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1134013833;
    L94157402:
    //  line no 119 , L94157402 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L549496397;
    ; 
    //  line no 120 , L1163619825 , bytecode index = 
    stack[sp++].i = local[4].i;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 121 , L1306246648 , bytecode index = 
    stack[sp++].i = local[5].i;
    local[4].i = stack[--sp].i;
    ; 
    //  line no 122 , L1063737662 , bytecode index = 
    stack[sp++].i = local[4].i;
    local[5].i = stack[--sp].i;
    L549496397:
    //  line no 124 , L549496397 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[4].i;
    // invokevirtual jx/collections/QuickSort.sort2(Ljava/util/Vector;II)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_util_Vector*,s32,s32) = find_method(__ins->vm_table, 211, 5);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 125 , L447767121 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L68857875;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    goto L348055829;
    L68857875:
    stack[sp++].i = local[4].i;
    L348055829:
    stack[sp++].i = local[3].i;
    // invokevirtual jx/collections/QuickSort.sort2(Ljava/util/Vector;II)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_util_Vector*,s32,s32) = find_method(__ins->vm_table, 211, 5);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 126 , L286649365 , bytecode index = 
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

void bridge_jx_collections_QuickSort_sort2__Ljava_util_Vector_2II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_collections_QuickSort_sort2__Ljava_util_Vector_2II_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 2
// stack: 5
// args: 1
void func_jx_collections_QuickSort_sort2__Ljava_util_Vector_2_V(JThreadRuntime *runtime, struct java_util_Vector* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 534, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 129 , L1508181426 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 129;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/Vector.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 179, 5);
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
    // invokevirtual jx/collections/QuickSort.sort2(Ljava/util/Vector;II)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_util_Vector*,s32,s32) = find_method(__ins->vm_table, 211, 5);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 130 , L988850650 , bytecode index = 
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

void bridge_jx_collections_QuickSort_sort2__Ljava_util_Vector_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_collections_QuickSort_sort2__Ljava_util_Vector_2_V(runtime, ins);
}


// locals: 5
// stack: 3
// args: 3
void func_jx_collections_QuickSort_swap__Ljava_util_Vector_2II_V(JThreadRuntime *runtime, struct java_util_Vector* p0, s32 p1, s32 p2){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 535, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 136 , L2044482328 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 136;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual java/util/Vector.elementAt(I)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 179, 9);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 137 , L149225732 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[3].i;
    // invokevirtual java/util/Vector.elementAt(I)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 179, 9);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[2].i;
    // invokevirtual java/util/Vector.setElementAt(Ljava/lang/Object;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_Object*,s32) = find_method(__ins->vm_table, 179, 23);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 138 , L937744315 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[4].obj;
    stack[sp++].i = local[3].i;
    // invokevirtual java/util/Vector.setElementAt(Ljava/lang/Object;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_Object*,s32) = find_method(__ins->vm_table, 179, 23);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 139 , L1870209957 , bytecode index = 
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

void bridge_jx_collections_QuickSort_swap__Ljava_util_Vector_2II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_collections_QuickSort_swap__Ljava_util_Vector_2II_V(runtime, ins, para[0].i, para[1].i);
}


