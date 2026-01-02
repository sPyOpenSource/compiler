// CLASS: jx/zero/CycleTime extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_CycleTime_static {};



__refer arr_vmtable_jx_zero_CycleTime_from_jx_zero_CycleTime[] = {
    func_jx_zero_CycleTime_subtract__Ljx_zero_CycleTime_2_Ljx_zero_CycleTime_2  //0
};
__refer arr_vmtable_jx_zero_CycleTime_from_java_lang_Object[] = {
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
VMTable vmtable_jx_zero_CycleTime[] = {
    {23, 1, arr_vmtable_jx_zero_CycleTime_from_jx_zero_CycleTime}, //0
    {5, 10, arr_vmtable_jx_zero_CycleTime_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_jx_zero_CycleTime__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 72, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 4 , L905654280 , bytecode index = 
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

void bridge_jx_zero_CycleTime__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_CycleTime__init____V(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
struct jx_zero_CycleTime* func_jx_zero_CycleTime_subtract__Ljx_zero_CycleTime_2_Ljx_zero_CycleTime_2(JThreadRuntime *runtime, struct jx_zero_CycleTime* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 73, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 9 , L1419810764 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 9;
    // new jx/zero/CycleTime
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 23);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial jx/zero/CycleTime.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_jx_zero_CycleTime__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 10 , L922151033 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/zero/CycleTime low I
    stack[sp - 1].i = ((struct jx_zero_CycleTime*)rstack[sp - 1].obj)->low_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].u = stack[sp - 2].u >> stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 11 , L1516369375 , bytecode index = 
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield jx/zero/CycleTime low I
    stack[sp - 1].i = ((struct jx_zero_CycleTime*)rstack[sp - 1].obj)->low_0;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].u = stack[sp - 2].u >> stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[3].i = stack[--sp].i;
    ; 
    //  line no 12 , L55909012 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[3].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i << stack[sp - 1].i; 
    --sp;
    // putfield jx/zero/CycleTime low I
    sp -= 2;
    ((struct jx_zero_CycleTime*)rstack[sp + 0].obj)->low_0 = stack[sp + 1].i;
    ; 
    //  line no 13 , L1394336709 , bytecode index = 
    stack[sp++].i = local[3].i;
    if(stack[--sp].i  < 0) goto L1387228415;
    ; 
    //  line no 14 , L120960120 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/zero/CycleTime high I
    stack[sp - 1].i = ((struct jx_zero_CycleTime*)rstack[sp - 1].obj)->high_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield jx/zero/CycleTime high I
    stack[sp - 1].i = ((struct jx_zero_CycleTime*)rstack[sp - 1].obj)->high_1;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield jx/zero/CycleTime high I
    sp -= 2;
    ((struct jx_zero_CycleTime*)rstack[sp + 0].obj)->high_1 = stack[sp + 1].i;
    goto L748658608;
    L1387228415:
    //  line no 16 , L1387228415 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/zero/CycleTime high I
    stack[sp - 1].i = ((struct jx_zero_CycleTime*)rstack[sp - 1].obj)->high_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield jx/zero/CycleTime high I
    stack[sp - 1].i = ((struct jx_zero_CycleTime*)rstack[sp - 1].obj)->high_1;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield jx/zero/CycleTime high I
    sp -= 2;
    ((struct jx_zero_CycleTime*)rstack[sp + 0].obj)->high_1 = stack[sp + 1].i;
    L748658608:
    //  line no 18 , L748658608 , bytecode index = 
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

void bridge_jx_zero_CycleTime_subtract__Ljx_zero_CycleTime_2_Ljx_zero_CycleTime_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_zero_CycleTime_subtract__Ljx_zero_CycleTime_2_Ljx_zero_CycleTime_2(runtime, ins);
}


