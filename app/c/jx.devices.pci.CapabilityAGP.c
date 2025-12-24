// CLASS: jx/devices/pci/CapabilityAGP extends jx/devices/pci/PCICapability
#include "metadata.h"


// generation
// globals
//struct jx_devices_pci_CapabilityAGP_static {s32 AGP_1REV_3; s32 AGP_1REV_1MASK_4; s32 AGP_1REV_1SHIFT_5; s32 AGP_1STATUS_6; s32 AGP_1COMMAND_7;  };
struct jx_devices_pci_CapabilityAGP_static static_var_jx_devices_pci_CapabilityAGP = {0, 0, 0, 0, 0};


__refer arr_vmtable_jx_devices_pci_CapabilityAGP_from_jx_devices_pci_CapabilityAGP[] = {
    func_jx_devices_pci_CapabilityAGP_getRevision___B,  //0
    func_jx_devices_pci_CapabilityAGP_getStatus___I,  //1
    func_jx_devices_pci_CapabilityAGP_getCommand___I,  //2
    func_jx_devices_pci_CapabilityAGP_setCommand__II_V,  //3
    func_jx_devices_pci_CapabilityAGP_toString___Ljava_lang_String_2  //4
};
__refer arr_vmtable_jx_devices_pci_CapabilityAGP_from_jx_devices_pci_PCICapability[] = {
    func_jx_devices_pci_PCICapability_getID___B,  //0
    func_jx_devices_pci_PCICapability_getBaseRegister___I,  //1
    func_jx_devices_pci_CapabilityAGP_toString___Ljava_lang_String_2  //2
};
__refer arr_vmtable_jx_devices_pci_CapabilityAGP_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_jx_devices_pci_CapabilityAGP_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
VMTable vmtable_jx_devices_pci_CapabilityAGP[] = {
    {32, 5, arr_vmtable_jx_devices_pci_CapabilityAGP_from_jx_devices_pci_CapabilityAGP}, //0
    {33, 3, arr_vmtable_jx_devices_pci_CapabilityAGP_from_jx_devices_pci_PCICapability}, //1
    {10, 11, arr_vmtable_jx_devices_pci_CapabilityAGP_from_java_lang_Object}, //2
};



// locals: 3
// stack: 4
// args: 2
void func_jx_devices_pci_CapabilityAGP__init___Ljx_devices_pci_PCIDevice_2I_V(JThreadRuntime *runtime, struct jx_devices_pci_PCIDevice* p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 33, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 11 , L921760190 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 11;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_2
    stack[sp++].i = 2;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // invokespecial jx/devices/pci/PCICapability.<init>(BLjx/devices/pci/PCIDevice;I)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_devices_pci_PCICapability__init___BLjx_devices_pci_PCIDevice_2I_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 12 , L360067785 , bytecode index = 
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

void bridge_jx_devices_pci_CapabilityAGP__init___Ljx_devices_pci_PCIDevice_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_devices_pci_CapabilityAGP__init___Ljx_devices_pci_PCIDevice_2I_V(runtime, ins, para[0].i);
}


// locals: 1
// stack: 4
// args: 0
s8 func_jx_devices_pci_CapabilityAGP_getRevision___B(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 34, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 15 , L1426329391 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 15;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/devices/pci/CapabilityAGP device Ljx/devices/pci/PCIDevice;
    rstack[sp - 1].obj = ((struct jx_devices_pci_CapabilityAGP*)rstack[sp - 1].obj)->device_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/devices/pci/CapabilityAGP baseRegister I
    stack[sp - 1].i = ((struct jx_devices_pci_CapabilityAGP*)rstack[sp - 1].obj)->baseRegister_1;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  ldc 
    stack[sp++].i = 0xff0000;
    //  bipush 16
    stack[sp++].i = 16;
    // invokeinterface jx/devices/pci/PCIDevice.readPackedConfig(III)I
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 31, 10);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
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

void bridge_jx_devices_pci_CapabilityAGP_getRevision___B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_devices_pci_CapabilityAGP_getRevision___B(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
s32 func_jx_devices_pci_CapabilityAGP_getStatus___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 35, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 19 , L1074593562 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 19;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/devices/pci/CapabilityAGP device Ljx/devices/pci/PCIDevice;
    rstack[sp - 1].obj = ((struct jx_devices_pci_CapabilityAGP*)rstack[sp - 1].obj)->device_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/devices/pci/CapabilityAGP baseRegister I
    stack[sp - 1].i = ((struct jx_devices_pci_CapabilityAGP*)rstack[sp - 1].obj)->baseRegister_1;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokeinterface jx/devices/pci/PCIDevice.readConfig(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 8);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
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

void bridge_jx_devices_pci_CapabilityAGP_getStatus___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_devices_pci_CapabilityAGP_getStatus___I(runtime, ins);
}


// locals: 1
// stack: 3
// args: 0
s32 func_jx_devices_pci_CapabilityAGP_getCommand___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 36, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 23 , L1381965390 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 23;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/devices/pci/CapabilityAGP device Ljx/devices/pci/PCIDevice;
    rstack[sp - 1].obj = ((struct jx_devices_pci_CapabilityAGP*)rstack[sp - 1].obj)->device_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/devices/pci/CapabilityAGP baseRegister I
    stack[sp - 1].i = ((struct jx_devices_pci_CapabilityAGP*)rstack[sp - 1].obj)->baseRegister_1;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokeinterface jx/devices/pci/PCIDevice.readConfig(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 8);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
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

void bridge_jx_devices_pci_CapabilityAGP_getCommand___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_devices_pci_CapabilityAGP_getCommand___I(runtime, ins);
}


// locals: 3
// stack: 4
// args: 2
void func_jx_devices_pci_CapabilityAGP_setCommand__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 37, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 26 , L1386883398 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 26;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/devices/pci/CapabilityAGP device Ljx/devices/pci/PCIDevice;
    rstack[sp - 1].obj = ((struct jx_devices_pci_CapabilityAGP*)rstack[sp - 1].obj)->device_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/devices/pci/CapabilityAGP baseRegister I
    stack[sp - 1].i = ((struct jx_devices_pci_CapabilityAGP*)rstack[sp - 1].obj)->baseRegister_1;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    // invokeinterface jx/devices/pci/PCIDevice.writePackedConfig(III)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32,s32,s32) = find_method(__ins->vm_table, 31, 11);
        __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 27 , L1306854175 , bytecode index = 
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

void bridge_jx_devices_pci_CapabilityAGP_setCommand__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_devices_pci_CapabilityAGP_setCommand__II_V(runtime, ins, para[0].i);
}


// locals: 1
// stack: 2
// args: 0
struct java_lang_String* func_jx_devices_pci_CapabilityAGP_toString___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 38, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 30 , L1564984895 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 30;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 3);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuilder__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 155);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/devices/pci/CapabilityAGP baseRegister I
    stack[sp - 1].i = ((struct jx_devices_pci_CapabilityAGP*)rstack[sp - 1].obj)->baseRegister_1;
    sp += 0;
    // invokestatic java/lang/Integer.toHexString(I)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Integer_toHexString__I_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 156);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 3, 9);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
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

void bridge_jx_devices_pci_CapabilityAGP_toString___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_devices_pci_CapabilityAGP_toString___Ljava_lang_String_2(runtime, ins);
}


