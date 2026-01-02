// CLASS: jx/zero/FBEmulationEvent extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_FBEmulationEvent_static {s32 TYPE_1KEY_1PRESS_0; s32 TYPE_1KEY_1RELEASE_1; s32 TYPE_1BUTTON_1PRESS_2; s32 TYPE_1BUTTON_1RELEASE_3; s32 TYPE_1MOUSE_1MOVE_4; s32 STATE_1BUTTON1_5; s32 STATE_1BUTTON2_6; s32 STATE_1BUTTON3_7; s32 STATE_1SHIFT_8;  };
struct jx_zero_FBEmulationEvent_static static_var_jx_zero_FBEmulationEvent = {0, 0, 0, 0, 0, 0, 0, 0, 0};


__refer arr_vmtable_jx_zero_FBEmulationEvent_from_jx_zero_FBEmulationEvent[] = {
    NULL
};
__refer arr_vmtable_jx_zero_FBEmulationEvent_from_java_lang_Object[] = {
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
VMTable vmtable_jx_zero_FBEmulationEvent[] = {
    {301, 0, arr_vmtable_jx_zero_FBEmulationEvent_from_jx_zero_FBEmulationEvent}, //0
    {5, 10, arr_vmtable_jx_zero_FBEmulationEvent_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_jx_zero_FBEmulationEvent__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1902, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 3 , L2128859746 , bytecode index = 
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

void bridge_jx_zero_FBEmulationEvent__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_FBEmulationEvent__init____V(runtime, ins);
}


