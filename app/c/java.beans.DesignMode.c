// CLASS: java/beans/DesignMode extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_beans_DesignMode_static {struct java_lang_String* PROPERTYNAME_0;  };
struct java_beans_DesignMode_static static_var_java_beans_DesignMode = {NULL};


__refer arr_vmtable_java_beans_DesignMode_from_java_beans_DesignMode[] = {
    func_java_beans_DesignMode_setDesignTime__Z_V,  //0
    func_java_beans_DesignMode_isDesignTime___Z  //1
};
__refer arr_vmtable_java_beans_DesignMode_from_java_lang_Object[] = {
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
VMTable vmtable_java_beans_DesignMode[] = {
    {224, 2, arr_vmtable_java_beans_DesignMode_from_java_beans_DesignMode}, //0
    {10, 11, arr_vmtable_java_beans_DesignMode_from_java_lang_Object}, //1
};



// locals: 0
// stack: 0
// args: 1
void func_java_beans_DesignMode_setDesignTime__Z_V(JThreadRuntime *runtime, s8 p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 558, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_beans_DesignMode_setDesignTime__Z_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_beans_DesignMode_setDesignTime__Z_V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s8 func_java_beans_DesignMode_isDesignTime___Z(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 559, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_beans_DesignMode_isDesignTime___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_beans_DesignMode_isDesignTime___Z(runtime, ins);
}


