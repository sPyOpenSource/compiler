// CLASS: java/lang/ref/ReferenceQueue extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_lang_ref_ReferenceQueue_static {};



__refer arr_vmtable_java_lang_ref_ReferenceQueue_from_java_lang_ref_ReferenceQueue[] = {
    func_java_lang_ref_ReferenceQueue_poll___Ljava_lang_ref_Reference_2,  //0
    func_java_lang_ref_ReferenceQueue_add__Ljava_lang_ref_Reference_2_V  //1
};
__refer arr_vmtable_java_lang_ref_ReferenceQueue_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_ref_ReferenceQueue[] = {
    {189, 2, arr_vmtable_java_lang_ref_ReferenceQueue_from_java_lang_ref_ReferenceQueue}, //0
    {5, 10, arr_vmtable_java_lang_ref_ReferenceQueue_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_java_lang_ref_ReferenceQueue__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2892, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 4 , L1296450832 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 4;
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

void bridge_java_lang_ref_ReferenceQueue__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ref_ReferenceQueue__init____V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 0
struct java_lang_ref_Reference* func_java_lang_ref_ReferenceQueue_poll___Ljava_lang_ref_Reference_2(JThreadRuntime *runtime){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2893, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 9 , L622396011 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 9;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ref/ReferenceQueue front Ljava/lang/ref/Reference;
    rstack[sp - 1].obj = ((struct java_lang_ref_ReferenceQueue*)rstack[sp - 1].obj)->front_0;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 10 , L1066270324 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ref/ReferenceQueue front Ljava/lang/ref/Reference;
    rstack[sp - 1].obj = ((struct java_lang_ref_ReferenceQueue*)rstack[sp - 1].obj)->front_0;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1075593808;
    ; 
    //  line no 11 , L445976541 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ref/ReferenceQueue front Ljava/lang/ref/Reference;
    rstack[sp - 1].obj = ((struct java_lang_ref_ReferenceQueue*)rstack[sp - 1].obj)->front_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ref/ReferenceQueue front Ljava/lang/ref/Reference;
    rstack[sp - 1].obj = ((struct java_lang_ref_ReferenceQueue*)rstack[sp - 1].obj)->front_0;
    sp += 0;
    // getfield java/lang/ref/Reference jNext Ljava/lang/ref/Reference;
    rstack[sp - 1].obj = ((struct java_lang_ref_Reference*)rstack[sp - 1].obj)->jNext_2;
    sp += 0;
    sp -= 2;
    if(rstack[sp + 0].obj  != rstack[sp + 1].obj) goto L2003979454;
    ; 
    //  line no 12 , L668754554 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield java/lang/ref/ReferenceQueue front Ljava/lang/ref/Reference;
    sp -= 2;
    ((struct java_lang_ref_ReferenceQueue*)rstack[sp + 0].obj)->front_0 = rstack[sp + 1].obj;
    goto L1075593808;
    L2003979454:
    //  line no 14 , L2003979454 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ref/ReferenceQueue front Ljava/lang/ref/Reference;
    rstack[sp - 1].obj = ((struct java_lang_ref_ReferenceQueue*)rstack[sp - 1].obj)->front_0;
    sp += 0;
    // getfield java/lang/ref/Reference jNext Ljava/lang/ref/Reference;
    rstack[sp - 1].obj = ((struct java_lang_ref_Reference*)rstack[sp - 1].obj)->jNext_2;
    sp += 0;
    // putfield java/lang/ref/ReferenceQueue front Ljava/lang/ref/Reference;
    sp -= 2;
    ((struct java_lang_ref_ReferenceQueue*)rstack[sp + 0].obj)->front_0 = rstack[sp + 1].obj;
    L1075593808:
    //  line no 17 , L1075593808 , bytecode index = 
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

void bridge_java_lang_ref_ReferenceQueue_poll___Ljava_lang_ref_Reference_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_ref_ReferenceQueue_poll___Ljava_lang_ref_Reference_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_lang_ref_ReferenceQueue_add__Ljava_lang_ref_Reference_2_V(JThreadRuntime *runtime, struct java_lang_ref_Reference* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2894, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 21 , L933869191 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 21;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ref/ReferenceQueue front Ljava/lang/ref/Reference;
    rstack[sp - 1].obj = ((struct java_lang_ref_ReferenceQueue*)rstack[sp - 1].obj)->front_0;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1381702512;
    ; 
    //  line no 22 , L382762227 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/lang/ref/Reference jNext Ljava/lang/ref/Reference;
    sp -= 2;
    ((struct java_lang_ref_Reference*)rstack[sp + 0].obj)->jNext_2 = rstack[sp + 1].obj;
    goto L384887832;
    L1381702512:
    //  line no 24 , L1381702512 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/ref/ReferenceQueue front Ljava/lang/ref/Reference;
    rstack[sp - 1].obj = ((struct java_lang_ref_ReferenceQueue*)rstack[sp - 1].obj)->front_0;
    sp += 0;
    // putfield java/lang/ref/Reference jNext Ljava/lang/ref/Reference;
    sp -= 2;
    ((struct java_lang_ref_Reference*)rstack[sp + 0].obj)->jNext_2 = rstack[sp + 1].obj;
    L384887832:
    //  line no 26 , L384887832 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield java/lang/ref/ReferenceQueue front Ljava/lang/ref/Reference;
    sp -= 2;
    ((struct java_lang_ref_ReferenceQueue*)rstack[sp + 0].obj)->front_0 = rstack[sp + 1].obj;
    ; 
    //  line no 27 , L1821867471 , bytecode index = 
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

void bridge_java_lang_ref_ReferenceQueue_add__Ljava_lang_ref_Reference_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_ref_ReferenceQueue_add__Ljava_lang_ref_Reference_2_V(runtime, ins);
}


