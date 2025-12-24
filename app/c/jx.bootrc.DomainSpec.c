// CLASS: jx/bootrc/DomainSpec extends jx/bootrc/Spec
#include "metadata.h"


// generation
// globals
//struct jx_bootrc_DomainSpec_static {};



__refer arr_vmtable_jx_bootrc_DomainSpec_from_jx_bootrc_DomainSpec[] = {
    func_jx_bootrc_DomainSpec_setComponents___3Ljx_bootrc_ComponentSpec_2_V,  //0
    func_jx_bootrc_DomainSpec_getComponents____3Ljx_bootrc_ComponentSpec_2  //1
};
__refer arr_vmtable_jx_bootrc_DomainSpec_from_jx_bootrc_Spec[] = {
    func_jx_bootrc_Spec_getString__Ljava_lang_String_2_Ljava_lang_String_2,  //0
    func_jx_bootrc_Spec_getInt__Ljava_lang_String_2_I,  //1
    func_jx_bootrc_Spec_getStringArray__Ljava_lang_String_2__3Ljava_lang_String_2,  //2
    func_jx_bootrc_Spec_find__Ljava_lang_String_2_Ljava_lang_String_2  //3
};
__refer arr_vmtable_jx_bootrc_DomainSpec_from_java_lang_Object[] = {
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
VMTable vmtable_jx_bootrc_DomainSpec[] = {
    {143, 2, arr_vmtable_jx_bootrc_DomainSpec_from_jx_bootrc_DomainSpec}, //0
    {144, 4, arr_vmtable_jx_bootrc_DomainSpec_from_jx_bootrc_Spec}, //1
    {10, 11, arr_vmtable_jx_bootrc_DomainSpec_from_java_lang_Object}, //2
};



// locals: 1
// stack: 1
// args: 0
void func_jx_bootrc_DomainSpec__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 398, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 3 , L901205084 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 3;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial jx/bootrc/Spec.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_bootrc_Spec__init____V(runtime);
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

void bridge_jx_bootrc_DomainSpec__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_bootrc_DomainSpec__init____V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_jx_bootrc_DomainSpec_setComponents___3Ljx_bootrc_ComponentSpec_2_V(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    rlocal[0].obj = p0;
    ; 
    //  line no 6 , L193388045 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield jx/bootrc/DomainSpec comp [Ljx/bootrc/ComponentSpec;
    sp -= 2;
    ((struct jx_bootrc_DomainSpec*)rstack[sp + 0].obj)->comp_1 = rstack[sp + 1].obj;
    ; 
    //  line no 7 , L136157810 , bytecode index = 
    return;
    ; 
}

void bridge_jx_bootrc_DomainSpec_setComponents___3Ljx_bootrc_ComponentSpec_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_bootrc_DomainSpec_setComponents___3Ljx_bootrc_ComponentSpec_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
JArray * func_jx_bootrc_DomainSpec_getComponents____3Ljx_bootrc_ComponentSpec_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 9 , L292138977 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/bootrc/DomainSpec comp [Ljx/bootrc/ComponentSpec;
    rstack[sp - 1].obj = ((struct jx_bootrc_DomainSpec*)rstack[sp - 1].obj)->comp_1;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_jx_bootrc_DomainSpec_getComponents____3Ljx_bootrc_ComponentSpec_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_bootrc_DomainSpec_getComponents____3Ljx_bootrc_ComponentSpec_2(runtime, ins);
}


