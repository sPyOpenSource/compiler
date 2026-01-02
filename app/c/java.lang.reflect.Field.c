// CLASS: java/lang/reflect/Field extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_lang_reflect_Field_static {};



__refer arr_vmtable_java_lang_reflect_Field_from_java_lang_reflect_Field[] = {
    func_java_lang_reflect_Field_getName___Ljava_lang_String_2  //0
};
__refer arr_vmtable_java_lang_reflect_Field_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_reflect_Field[] = {
    {374, 1, arr_vmtable_java_lang_reflect_Field_from_java_lang_reflect_Field}, //0
    {5, 10, arr_vmtable_java_lang_reflect_Field_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_java_lang_reflect_Field__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2741, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 3 , L926837661 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 3;
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

void bridge_java_lang_reflect_Field__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_reflect_Field__init____V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_java_lang_reflect_Field_getName___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 13 , L1454942961 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/reflect/Field name Ljava/lang/String;
    rstack[sp - 1].obj = ((struct java_lang_reflect_Field*)rstack[sp - 1].obj)->name_2;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_java_lang_reflect_Field_getName___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_reflect_Field_getName___Ljava_lang_String_2(runtime, ins);
}


