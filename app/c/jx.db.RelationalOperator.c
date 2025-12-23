// CLASS: jx/db/RelationalOperator extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_db_RelationalOperator_static {s32 ERR_1EMPTY_1SEARCH_0;  };
struct jx_db_RelationalOperator_static static_var_jx_db_RelationalOperator = {0};


__refer arr_vmtable_jx_db_RelationalOperator_from_jx_db_RelationalOperator[] = {
    func_jx_db_RelationalOperator_close___V,  //0
    func_jx_db_RelationalOperator_moveToNext___Z,  //1
    func_jx_db_RelationalOperator_moveToFirst___Z,  //2
    func_jx_db_RelationalOperator_moveToPrev___Z,  //3
    func_jx_db_RelationalOperator_getCurrent___Ljx_db_TupleReader_2,  //4
    func_jx_db_RelationalOperator_getTupleDesc___Ljx_db_TupleDescriptor_2,  //5
    func_jx_db_RelationalOperator_isEmpty___Z  //6
};
__refer arr_vmtable_jx_db_RelationalOperator_from_java_lang_Object[] = {
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
VMTable vmtable_jx_db_RelationalOperator[] = {
    {254, 7, arr_vmtable_jx_db_RelationalOperator_from_jx_db_RelationalOperator}, //0
    {10, 11, arr_vmtable_jx_db_RelationalOperator_from_java_lang_Object}, //1
};



// locals: 0
// stack: 0
// args: 0
void func_jx_db_RelationalOperator_close___V(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 643, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_db_RelationalOperator_close___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_db_RelationalOperator_close___V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_jx_db_RelationalOperator_moveToNext___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 644, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_db_RelationalOperator_moveToNext___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_db_RelationalOperator_moveToNext___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_jx_db_RelationalOperator_moveToFirst___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 645, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_db_RelationalOperator_moveToFirst___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_db_RelationalOperator_moveToFirst___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_jx_db_RelationalOperator_moveToPrev___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 646, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_db_RelationalOperator_moveToPrev___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_db_RelationalOperator_moveToPrev___Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_db_TupleReader* func_jx_db_RelationalOperator_getCurrent___Ljx_db_TupleReader_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 647, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_db_RelationalOperator_getCurrent___Ljx_db_TupleReader_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_db_RelationalOperator_getCurrent___Ljx_db_TupleReader_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct jx_db_TupleDescriptor* func_jx_db_RelationalOperator_getTupleDesc___Ljx_db_TupleDescriptor_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 648, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_jx_db_RelationalOperator_getTupleDesc___Ljx_db_TupleDescriptor_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_db_RelationalOperator_getTupleDesc___Ljx_db_TupleDescriptor_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_jx_db_RelationalOperator_isEmpty___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 649, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_db_RelationalOperator_isEmpty___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_db_RelationalOperator_isEmpty___Z(runtime, ins);
}


