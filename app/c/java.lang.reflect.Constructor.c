// CLASS: java/lang/reflect/Constructor extends java/lang/reflect/Method
#include "metadata.h"

struct java_lang_Object* func_java_lang_reflect_Constructor_newInstanceWithoutInit__Ljava_lang_Class_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_reflect_Constructor* p0, struct java_lang_Class* p1);

// generation
// globals
//struct java_lang_reflect_Constructor_static {};



__refer arr_vmtable_java_lang_reflect_Constructor_from_java_lang_reflect_Constructor[] = {
    func_java_lang_reflect_Constructor_newInstance___3Ljava_lang_Object_2_Ljava_lang_Object_2  //0
};
__refer arr_vmtable_java_lang_reflect_Constructor_from_java_lang_reflect_Method[] = {
    func_java_lang_reflect_Method_match__Ljava_lang_String_2_3Ljava_lang_Class_2_Z,  //0
    func_java_lang_reflect_Method_getName___Ljava_lang_String_2,  //1
    func_java_lang_reflect_Method_invoke__Ljava_lang_Object_2_3Ljava_lang_Object_2_Ljava_lang_Object_2  //2
};
__refer arr_vmtable_java_lang_reflect_Constructor_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_reflect_Constructor[] = {
    {369, 1, arr_vmtable_java_lang_reflect_Constructor_from_java_lang_reflect_Constructor}, //0
    {222, 3, arr_vmtable_java_lang_reflect_Constructor_from_java_lang_reflect_Method}, //1
    {5, 10, arr_vmtable_java_lang_reflect_Constructor_from_java_lang_Object}, //2
};



// locals: 1
// stack: 1
// args: 0
void func_java_lang_reflect_Constructor__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2733, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 3 , L2066066225 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 3;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/reflect/Method.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_reflect_Method__init____V(runtime);
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

void bridge_java_lang_reflect_Constructor__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_reflect_Constructor__init____V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
struct java_lang_Object* func_java_lang_reflect_Constructor_newInstance___3Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2734, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 6 , L1759368213 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 6;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/reflect/Constructor clazz Ljava/lang/Class;
    rstack[sp - 1].obj = ((struct java_lang_reflect_Constructor*)rstack[sp - 1].obj)->clazz_1;
    sp += 0;
    // invokestatic java/lang/reflect/Constructor.newInstanceWithoutInit(Ljava/lang/Class;)Ljava/lang/Object;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_reflect_Constructor_newInstanceWithoutInit__Ljava_lang_Class_2_Ljava_lang_Object_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 7 , L812415990 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/lang/reflect/Constructor.invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*,JArray *) = find_method(__ins->vm_table, 222, 2);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 8 , L1715876585 , bytecode index = 
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

void bridge_java_lang_reflect_Constructor_newInstance___3Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_reflect_Constructor_newInstance___3Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins);
}

void bridge_java_lang_reflect_Constructor_newInstanceWithoutInit__Ljava_lang_Class_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_reflect_Constructor_newInstanceWithoutInit__Ljava_lang_Class_2_Ljava_lang_Object_2(runtime, para[0].obj, para[1].obj);
}


