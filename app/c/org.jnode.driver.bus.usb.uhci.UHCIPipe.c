// CLASS: org/jnode/driver/bus/usb/uhci/UHCIPipe extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_jnode_driver_bus_usb_uhci_UHCIPipe_static {};



__refer arr_vmtable_org_jnode_driver_bus_usb_uhci_UHCIPipe_from_org_jnode_driver_bus_usb_uhci_UHCIPipe[] = {
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isControlPipe___Z,  //0
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isInterruptPipe___Z,  //1
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isIsochronousPipe___Z,  //2
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isBulkPipe___Z,  //3
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isOpen___Z,  //4
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_open___V,  //5
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_close___V,  //6
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_asyncSubmit__Lorg_jnode_driver_bus_usb_USBRequest_2_V,  //7
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_syncSubmit__Lorg_jnode_driver_bus_usb_USBRequest_2J_V,  //8
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_addListener__Lorg_jnode_driver_bus_usb_USBPipeListener_2_V,  //9
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_removeListener__Lorg_jnode_driver_bus_usb_USBPipeListener_2_V,  //10
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_handleInterrupt___V,  //11
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_firePipeEvent__Lorg_jnode_driver_bus_usb_uhci_UHCIRequest_2_V,  //12
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_createTD__IZLjx_zero_Memory_2IIZ_Lorg_jnode_driver_bus_usb_uhci_TransferDescriptor_2,  //13
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_getMaxPacketSize___I,  //14
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_getEndPoint___Lorg_jnode_driver_bus_usb_USBEndPoint_2  //15
};
__refer arr_vmtable_org_jnode_driver_bus_usb_uhci_UHCIPipe_from_java_lang_Object[] = {
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
__refer arr_vmtable_org_jnode_driver_bus_usb_uhci_UHCIPipe_from_org_jnode_driver_bus_usb_USBPipe[] = {
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isControlPipe___Z,  //0
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isInterruptPipe___Z,  //1
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isIsochronousPipe___Z,  //2
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isBulkPipe___Z,  //3
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isOpen___Z,  //4
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_open___V,  //5
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_close___V,  //6
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_asyncSubmit__Lorg_jnode_driver_bus_usb_USBRequest_2_V,  //7
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_syncSubmit__Lorg_jnode_driver_bus_usb_USBRequest_2J_V,  //8
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_addListener__Lorg_jnode_driver_bus_usb_USBPipeListener_2_V,  //9
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_removeListener__Lorg_jnode_driver_bus_usb_USBPipeListener_2_V  //10
};
__refer arr_vmtable_org_jnode_driver_bus_usb_uhci_UHCIPipe_from_org_jnode_driver_bus_usb_USBConstants[] = {
    NULL
};
VMTable vmtable_org_jnode_driver_bus_usb_uhci_UHCIPipe[] = {
    {160, 16, arr_vmtable_org_jnode_driver_bus_usb_uhci_UHCIPipe_from_org_jnode_driver_bus_usb_uhci_UHCIPipe}, //0
    {10, 11, arr_vmtable_org_jnode_driver_bus_usb_uhci_UHCIPipe_from_java_lang_Object}, //1
    {166, 11, arr_vmtable_org_jnode_driver_bus_usb_uhci_UHCIPipe_from_org_jnode_driver_bus_usb_USBPipe}, //2
    {167, 0, arr_vmtable_org_jnode_driver_bus_usb_uhci_UHCIPipe_from_org_jnode_driver_bus_usb_USBConstants}, //3
};



// locals: 7
// stack: 4
// args: 6
void func_org_jnode_driver_bus_usb_uhci_UHCIPipe__init___Lorg_jnode_driver_bus_usb_uhci_UHCIPipeManager_2Ljx_zero_MemoryManager_2Lorg_jnode_driver_bus_usb_USBDevice_2Lorg_jnode_driver_bus_usb_USBEndPoint_2ILorg_jnode_driver_bus_usb_uhci_QueueHead_2_V(JThreadRuntime *runtime, struct org_jnode_driver_bus_usb_uhci_UHCIPipeManager* p0, struct jx_zero_MemoryManager* p1, struct org_jnode_driver_bus_usb_USBDevice* p2, struct org_jnode_driver_bus_usb_USBEndPoint* p3, s32 p4, struct org_jnode_driver_bus_usb_uhci_QueueHead* p5){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 411, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    rlocal[3].obj = p3;
    local[4].i = p4;
    rlocal[5].obj = p5;
    ; 
    //  line no 112 , L516537656 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 112;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 95 , L1160649162 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/ArrayList
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 151);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/ArrayList.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_ArrayList__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/jnode/driver/bus/usb/uhci/UHCIPipe listeners Ljava/util/ArrayList;
    sp -= 2;
    ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp + 0].obj)->listeners_11 = rstack[sp + 1].obj;
    ; 
    //  line no 113 , L1796047085 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/jnode/driver/bus/usb/uhci/UHCIPipe pm Lorg/jnode/driver/bus/usb/uhci/UHCIPipeManager;
    sp -= 2;
    ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp + 0].obj)->pm_0 = rstack[sp + 1].obj;
    ; 
    //  line no 114 , L1871612052 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield org/jnode/driver/bus/usb/uhci/UHCIPipe rm Ljx/zero/MemoryManager;
    sp -= 2;
    ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp + 0].obj)->rm_1 = rstack[sp + 1].obj;
    ; 
    //  line no 115 , L1023268896 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // putfield org/jnode/driver/bus/usb/uhci/UHCIPipe device Lorg/jnode/driver/bus/usb/USBDevice;
    sp -= 2;
    ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp + 0].obj)->device_3 = rstack[sp + 1].obj;
    ; 
    //  line no 116 , L153646652 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // putfield org/jnode/driver/bus/usb/uhci/UHCIPipe endPoint Lorg/jnode/driver/bus/usb/USBEndPoint;
    sp -= 2;
    ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp + 0].obj)->endPoint_5 = rstack[sp + 1].obj;
    ; 
    //  line no 117 , L237344028 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    // putfield org/jnode/driver/bus/usb/uhci/UHCIPipe transferType I
    sp -= 2;
    ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp + 0].obj)->transferType_2 = stack[sp + 1].i;
    ; 
    //  line no 118 , L368342628 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe endPoint Lorg/jnode/driver/bus/usb/USBEndPoint;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->endPoint_5;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1192923170;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe endPoint Lorg/jnode/driver/bus/usb/USBEndPoint;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->endPoint_5;
    sp += 0;
    // invokevirtual org/jnode/driver/bus/usb/USBEndPoint.getDescriptor()Lorg/jnode/driver/bus/usb/EndPointDescriptor;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct org_jnode_driver_bus_usb_EndPointDescriptor* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 152, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/jnode/driver/bus/usb/EndPointDescriptor.getEndPointNumber()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 153, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L231311211;
    L1192923170:
    // iconst_0
    stack[sp++].i = 0;
    L231311211:
    // putfield org/jnode/driver/bus/usb/uhci/UHCIPipe endPointNum I
    sp -= 2;
    ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp + 0].obj)->endPointNum_4 = stack[sp + 1].i;
    ; 
    //  line no 119 , L795242171 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new org/jnode/driver/bus/usb/uhci/QueueHead
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 154);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial org/jnode/driver/bus/usb/uhci/QueueHead.<init>(Ljx/zero/MemoryManager;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_org_jnode_driver_bus_usb_uhci_QueueHead__init___Ljx_zero_MemoryManager_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/jnode/driver/bus/usb/uhci/UHCIPipe qh Lorg/jnode/driver/bus/usb/uhci/QueueHead;
    sp -= 2;
    ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp + 0].obj)->qh_8 = rstack[sp + 1].obj;
    ; 
    //  line no 120 , L429353573 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[6].obj;
    // putfield org/jnode/driver/bus/usb/uhci/UHCIPipe skelQH Lorg/jnode/driver/bus/usb/uhci/QueueHead;
    sp -= 2;
    ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp + 0].obj)->skelQH_7 = rstack[sp + 1].obj;
    ; 
    //  line no 121 , L169833205 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new AI/util/AIQueue
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 155);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial AI/util/AIQueue.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_AI_util_AIQueue__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/jnode/driver/bus/usb/uhci/UHCIPipe queue Ljava/util/Queue;
    sp -= 2;
    ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp + 0].obj)->queue_9 = rstack[sp + 1].obj;
    ; 
    //  line no 122 , L1261198850 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe endPoint Lorg/jnode/driver/bus/usb/USBEndPoint;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->endPoint_5;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1470358122;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe endPoint Lorg/jnode/driver/bus/usb/USBEndPoint;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->endPoint_5;
    sp += 0;
    // invokevirtual org/jnode/driver/bus/usb/USBEndPoint.getDescriptor()Lorg/jnode/driver/bus/usb/EndPointDescriptor;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct org_jnode_driver_bus_usb_EndPointDescriptor* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 152, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/jnode/driver/bus/usb/EndPointDescriptor.getMaxPacketSize()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 153, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1975873209;
    L1470358122:
    // iconst_-1
    stack[sp++].i = -1;
    L1975873209:
    // putfield org/jnode/driver/bus/usb/uhci/UHCIPipe maxPktSize I
    sp -= 2;
    ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp + 0].obj)->maxPktSize_12 = stack[sp + 1].i;
    ; 
    //  line no 123 , L79438382 , bytecode index = 
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

void bridge_org_jnode_driver_bus_usb_uhci_UHCIPipe__init___Lorg_jnode_driver_bus_usb_uhci_UHCIPipeManager_2Ljx_zero_MemoryManager_2Lorg_jnode_driver_bus_usb_USBDevice_2Lorg_jnode_driver_bus_usb_USBEndPoint_2ILorg_jnode_driver_bus_usb_uhci_QueueHead_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe__init___Lorg_jnode_driver_bus_usb_uhci_UHCIPipeManager_2Ljx_zero_MemoryManager_2Lorg_jnode_driver_bus_usb_USBDevice_2Lorg_jnode_driver_bus_usb_USBEndPoint_2ILorg_jnode_driver_bus_usb_uhci_QueueHead_2_V(runtime, ins, para[0].obj, para[1].obj, para[2].obj, para[3].i, para[4].obj);
}


// locals: 1
// stack: 1
// args: 0
s8 func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isControlPipe___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 412, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 130 , L1697752980 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 130;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe transferType I
    stack[sp - 1].i = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->transferType_2;
    sp += 0;
    if(stack[--sp].i  != 0) goto L996125997;
    // iconst_1
    stack[sp++].i = 1;
    goto L1578587450;
    L996125997:
    // iconst_0
    stack[sp++].i = 0;
    L1578587450:
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

void bridge_org_jnode_driver_bus_usb_uhci_UHCIPipe_isControlPipe___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isControlPipe___Z(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s8 func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isInterruptPipe___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 413, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 138 , L1457263953 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 138;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe transferType I
    stack[sp - 1].i = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->transferType_2;
    sp += 0;
    // iconst_3
    stack[sp++].i = 3;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L271379554;
    // iconst_1
    stack[sp++].i = 1;
    goto L1962329560;
    L271379554:
    // iconst_0
    stack[sp++].i = 0;
    L1962329560:
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

void bridge_org_jnode_driver_bus_usb_uhci_UHCIPipe_isInterruptPipe___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isInterruptPipe___Z(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s8 func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isIsochronousPipe___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 414, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 146 , L884603232 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 146;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe transferType I
    stack[sp - 1].i = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->transferType_2;
    sp += 0;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1124162665;
    // iconst_1
    stack[sp++].i = 1;
    goto L26970580;
    L1124162665:
    // iconst_0
    stack[sp++].i = 0;
    L26970580:
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

void bridge_org_jnode_driver_bus_usb_uhci_UHCIPipe_isIsochronousPipe___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isIsochronousPipe___Z(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s8 func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isBulkPipe___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 415, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 154 , L817299424 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 154;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe transferType I
    stack[sp - 1].i = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->transferType_2;
    sp += 0;
    // iconst_2
    stack[sp++].i = 2;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2031951755;
    // iconst_1
    stack[sp++].i = 1;
    goto L605420629;
    L2031951755:
    // iconst_0
    stack[sp++].i = 0;
    L605420629:
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

void bridge_org_jnode_driver_bus_usb_uhci_UHCIPipe_isBulkPipe___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isBulkPipe___Z(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s8 func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isOpen___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 162 , L331122245 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe open Z
    stack[sp - 1].i = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->open_6;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_org_jnode_driver_bus_usb_uhci_UHCIPipe_isOpen___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_jnode_driver_bus_usb_uhci_UHCIPipe_isOpen___Z(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_org_jnode_driver_bus_usb_uhci_UHCIPipe_open___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 417, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 171 , L154173878 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 171;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe open Z
    stack[sp - 1].i = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->open_6;
    sp += 0;
    if(stack[--sp].i  != 0) goto L215082566;
    ; 
    //  line no 172 , L2074658615 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe pm Lorg/jnode/driver/bus/usb/uhci/UHCIPipeManager;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->pm_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/UHCIPipeManager.add(Lorg/jnode/driver/bus/usb/uhci/UHCIPipe;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_jnode_driver_bus_usb_uhci_UHCIPipe*) = find_method(__ins->vm_table, 156, 2);
        jthread_lock(runtime, __ins);
        __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 173 , L412111214 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe skelQH Lorg/jnode/driver/bus/usb/uhci/QueueHead;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->skelQH_7;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe qh Lorg/jnode/driver/bus/usb/uhci/QueueHead;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->qh_8;
    sp += 0;
    // invokevirtual org/jnode/driver/bus/usb/uhci/QueueHead.insertLink(Lorg/jnode/driver/bus/usb/uhci/QueueHead;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_jnode_driver_bus_usb_uhci_QueueHead*) = find_method(__ins->vm_table, 154, 2);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 174 , L362827515 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield org/jnode/driver/bus/usb/uhci/UHCIPipe open Z
    sp -= 2;
    ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp + 0].obj)->open_6 = stack[sp + 1].i;
    L215082566:
    //  line no 176 , L215082566 , bytecode index = 
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

void bridge_org_jnode_driver_bus_usb_uhci_UHCIPipe_open___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_open___V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_org_jnode_driver_bus_usb_uhci_UHCIPipe_close___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 418, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 182 , L736920911 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 182;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe open Z
    stack[sp - 1].i = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->open_6;
    sp += 0;
    if(stack[--sp].i  == 0) goto L837659261;
    ; 
    //  line no 183 , L648936749 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe skelQH Lorg/jnode/driver/bus/usb/uhci/QueueHead;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->skelQH_7;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe qh Lorg/jnode/driver/bus/usb/uhci/QueueHead;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->qh_8;
    sp += 0;
    // invokevirtual org/jnode/driver/bus/usb/uhci/QueueHead.removeLink(Lorg/jnode/driver/bus/usb/uhci/QueueHead;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_jnode_driver_bus_usb_uhci_QueueHead*) = find_method(__ins->vm_table, 154, 4);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 184 , L859236022 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe pm Lorg/jnode/driver/bus/usb/uhci/UHCIPipeManager;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->pm_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/UHCIPipeManager.remove(Lorg/jnode/driver/bus/usb/uhci/UHCIPipe;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_jnode_driver_bus_usb_uhci_UHCIPipe*) = find_method(__ins->vm_table, 156, 3);
        jthread_lock(runtime, __ins);
        __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 185 , L2084559714 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/jnode/driver/bus/usb/uhci/UHCIPipe open Z
    sp -= 2;
    ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp + 0].obj)->open_6 = stack[sp + 1].i;
    L837659261:
    //  line no 187 , L837659261 , bytecode index = 
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

void bridge_org_jnode_driver_bus_usb_uhci_UHCIPipe_close___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_close___V(runtime, ins);
}


// locals: 4
// stack: 3
// args: 1
void func_org_jnode_driver_bus_usb_uhci_UHCIPipe_asyncSubmit__Lorg_jnode_driver_bus_usb_USBRequest_2_V(JThreadRuntime *runtime, struct org_jnode_driver_bus_usb_USBRequest* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 419, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 196 , L1766911337 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 196;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe open Z
    stack[sp - 1].i = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->open_6;
    sp += 0;
    if(stack[--sp].i  != 0) goto L1842853283;
    ; 
    //  line no 197 , L1865516976 , bytecode index = 
    // new org/jnode/driver/bus/usb/USBException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 157);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 999);
    // invokespecial org/jnode/driver/bus/usb/USBException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_org_jnode_driver_bus_usb_USBException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1865516976 in labeltable is :L1865516976
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 197;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1842853283:
    //  line no 199 , L1842853283 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/jnode/driver/bus/usb/uhci/UHCIRequest
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 1000);
    if(stack[--sp].i  != 0) goto L644082020;
    ; 
    //  line no 200 , L1219916644 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1001);
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1219916644 in labeltable is :L1219916644
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 200;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L644082020:
    //  line no 202 , L644082020 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // instanceof org/jnode/driver/bus/usb/spi/AbstractUSBRequest
    stack[sp - 1].i = instance_of_classname_index(rstack[sp - 1].obj, 1002);
    if(stack[--sp].i  != 0) goto L412925308;
    ; 
    //  line no 203 , L2079565272 , bytecode index = 
    // new java/lang/IllegalArgumentException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 2);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1003);
    // invokespecial java/lang/IllegalArgumentException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_IllegalArgumentException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L2079565272 in labeltable is :L2079565272
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 203;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L412925308:
    //  line no 205 , L412925308 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast org/jnode/driver/bus/usb/uhci/UHCIRequest
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1000);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 206 , L1122130699 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast org/jnode/driver/bus/usb/spi/AbstractUSBRequest
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1002);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 207 , L968113504 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/jnode/driver/bus/usb/spi/AbstractUSBRequest.setCompleted(Z)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 158, 4);
        jthread_lock(runtime, __ins);
        __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 208 , L1153302647 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/jnode/driver/bus/usb/spi/AbstractUSBRequest.setActualLength(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 158, 3);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 209 , L570794077 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/jnode/driver/bus/usb/spi/AbstractUSBRequest.setStatus(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 158, 5);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 210 , L1928301845 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe qh Lorg/jnode/driver/bus/usb/uhci/QueueHead;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->qh_8;
    sp += 0;
    // invokevirtual org/jnode/driver/bus/usb/uhci/QueueHead.isEmpty()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 154, 9);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1789452565;
    ; 
    //  line no 211 , L1579280783 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial org/jnode/driver/bus/usb/uhci/UHCIPipe.activateRequest(Lorg/jnode/driver/bus/usb/uhci/UHCIRequest;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_org_jnode_driver_bus_usb_uhci_UHCIPipe_activateRequest__Lorg_jnode_driver_bus_usb_uhci_UHCIRequest_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1370074462;
    L1789452565:
    //  line no 213 , L1789452565 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe queue Ljava/util/Queue;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->queue_9;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface java/util/Queue.add(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 159, 0);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1370074462:
    //  line no 215 , L1370074462 , bytecode index = 
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

void bridge_org_jnode_driver_bus_usb_uhci_UHCIPipe_asyncSubmit__Lorg_jnode_driver_bus_usb_USBRequest_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_asyncSubmit__Lorg_jnode_driver_bus_usb_USBRequest_2_V(runtime, ins);
}


// locals: 5
// stack: 4
// args: 2
void func_org_jnode_driver_bus_usb_uhci_UHCIPipe_syncSubmit__Lorg_jnode_driver_bus_usb_USBRequest_2J_V(JThreadRuntime *runtime, struct org_jnode_driver_bus_usb_USBRequest* p0, s64 p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 420, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].j = p1;
    ; 
    //  line no 225 , L1923999715 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 225;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/UHCIPipe.asyncSubmit(Lorg/jnode/driver/bus/usb/USBRequest;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_jnode_driver_bus_usb_USBRequest*) = find_method(__ins->vm_table, 160, 7);
        jthread_lock(runtime, __ins);
        __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 226 , L596706728 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp].j = local[2].j;
    sp += 2;
    // invokeinterface org/jnode/driver/bus/usb/USBRequest.waitUntilComplete(J)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s64) = find_method(__ins->vm_table, 161, 3);
        __func_p(runtime, stack[sp + 0].j);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 227 , L1070501849 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface org/jnode/driver/bus/usb/USBRequest.isCompleted()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 161, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1620823990;
    ; 
    //  line no 228 , L2106900153 , bytecode index = 
    // new org/jnode/driver/bus/usb/USBException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 157);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1008);
    // invokespecial org/jnode/driver/bus/usb/USBException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_org_jnode_driver_bus_usb_USBException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L2106900153 in labeltable is :L2106900153
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 228;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1620823990:
    //  line no 230 , L1620823990 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface org/jnode/driver/bus/usb/USBRequest.getStatus()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 161, 2);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[4].i = stack[--sp].i;
    ; 
    //  line no 231 , L1443055846 , bytecode index = 
    stack[sp++].i = local[4].i;
    //  bipush 63
    stack[sp++].i = 63;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  == 0) goto L502838712;
    ; 
    //  line no 232 , L589311950 , bytecode index = 
    // new org/jnode/driver/bus/usb/USBException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 157);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1009);
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
    stack[sp++].i = local[4].i;
    // invokestatic org/jnode/util/NumberUtils.hex(I)Ljava/lang/String;
    {
        sp -= 2;
        rstack[sp].obj = func_org_jnode_util_NumberUtils_hex__I_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
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
    // invokespecial org/jnode/driver/bus/usb/USBException.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_org_jnode_driver_bus_usb_USBException__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L589311950 in labeltable is :L589311950
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 232;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L502838712:
    //  line no 234 , L502838712 , bytecode index = 
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

void bridge_org_jnode_driver_bus_usb_uhci_UHCIPipe_syncSubmit__Lorg_jnode_driver_bus_usb_USBRequest_2J_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_syncSubmit__Lorg_jnode_driver_bus_usb_USBRequest_2J_V(runtime, ins, para[0].j);
}


// locals: 2
// stack: 2
// args: 1
void func_org_jnode_driver_bus_usb_uhci_UHCIPipe_addListener__Lorg_jnode_driver_bus_usb_USBPipeListener_2_V(JThreadRuntime *runtime, struct org_jnode_driver_bus_usb_USBPipeListener* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 421, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 243 , L932257672 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 243;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe listeners Ljava/util/ArrayList;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->listeners_11;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/ArrayList.add(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 151, 13);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 244 , L1864116663 , bytecode index = 
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

void bridge_org_jnode_driver_bus_usb_uhci_UHCIPipe_addListener__Lorg_jnode_driver_bus_usb_USBPipeListener_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_addListener__Lorg_jnode_driver_bus_usb_USBPipeListener_2_V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_org_jnode_driver_bus_usb_uhci_UHCIPipe_removeListener__Lorg_jnode_driver_bus_usb_USBPipeListener_2_V(JThreadRuntime *runtime, struct org_jnode_driver_bus_usb_USBPipeListener* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 422, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 253 , L2133344792 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 253;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe listeners Ljava/util/ArrayList;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->listeners_11;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/ArrayList.remove(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 151, 16);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 254 , L1081769770 , bytecode index = 
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

void bridge_org_jnode_driver_bus_usb_uhci_UHCIPipe_removeListener__Lorg_jnode_driver_bus_usb_USBPipeListener_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_removeListener__Lorg_jnode_driver_bus_usb_USBPipeListener_2_V(runtime, ins);
}

ExceptionItem arr_extable_func_org_jnode_driver_bus_usb_uhci_UHCIPipe_handleInterrupt___V[] = {
    { , , 998}, 
    { , , 998}
};
ExceptionTable extable_func_org_jnode_driver_bus_usb_uhci_UHCIPipe_handleInterrupt___V = {2, arr_extable_func_org_jnode_driver_bus_usb_uhci_UHCIPipe_handleInterrupt___V};

// locals: 5
// stack: 2
// args: 0
void func_org_jnode_driver_bus_usb_uhci_UHCIPipe_handleInterrupt___V(JThreadRuntime *runtime){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 423, &rstack[0], &rlocal[0], &sp);
    // try catch :L44559647 L1067599825 L749927456 (
    // try catch :L1330400026 L1916700921 L1594873248 (
    ; 
    //  line no 260 , L1692885405 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 260;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe open Z
    stack[sp - 1].i = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->open_6;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1230955136;
    ; 
    //  line no 261 , L1336001042 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe activeRequest Lorg/jnode/driver/bus/usb/uhci/UHCIRequest;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->activeRequest_10;
    sp += 0;
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 262 , L1856158867 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    if(rstack[--sp].obj  == NULL) goto L823575379;
    ; 
    //  line no 263 , L258112787 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/jnode/driver/bus/usb/uhci/UHCIPipe.handleInterrupt(Lorg/jnode/driver/bus/usb/uhci/UHCIRequest;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_org_jnode_driver_bus_usb_uhci_UHCIPipe_handleInterrupt__Lorg_jnode_driver_bus_usb_uhci_UHCIRequest_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 264 , L1318227903 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface org/jnode/driver/bus/usb/uhci/UHCIRequest.isCompleted()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 161, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L823575379;
    ; 
    //  line no 265 , L892335322 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe qh Lorg/jnode/driver/bus/usb/uhci/QueueHead;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->qh_8;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/QueueHead.remove(Lorg/jnode/driver/bus/usb/uhci/UHCIRequest;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_jnode_driver_bus_usb_uhci_UHCIRequest*) = find_method(__ins->vm_table, 154, 7);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 266 , L841262455 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/jnode/driver/bus/usb/uhci/UHCIPipe activeRequest Lorg/jnode/driver/bus/usb/uhci/UHCIRequest;
    sp -= 2;
    ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp + 0].obj)->activeRequest_10 = rstack[sp + 1].obj;
    ; 
    //  line no 268 , L775081157 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/UHCIPipe.isInterruptPipe()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 160, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L823575379;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe open Z
    stack[sp - 1].i = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->open_6;
    sp += 0;
    if(stack[--sp].i  == 0) goto L823575379;
    L44559647:
    __frame->bytecodeIndex = 
    //  line no 270 , L44559647 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/UHCIPipe.asyncSubmit(Lorg/jnode/driver/bus/usb/USBRequest;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_jnode_driver_bus_usb_USBRequest*) = find_method(__ins->vm_table, 160, 7);
        jthread_lock(runtime, __ins);
        __func_p(runtime, rstack[sp + 0].obj);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1067599825:
    __frame->bytecodeIndex = 
    //  line no 273 , L1067599825 , bytecode index = 
    goto L823575379;
    L749927456:
    //  line no 271 , L749927456 , bytecode index = 
    rlocal[2].obj = rstack[--sp].obj;
    L823575379:
    //  line no 277 , L823575379 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe queue Ljava/util/Queue;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->queue_9;
    sp += 0;
    // invokeinterface java/util/Queue.isEmpty()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 75, 5);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  != 0) goto L1230955136;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe qh Lorg/jnode/driver/bus/usb/uhci/QueueHead;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->qh_8;
    sp += 0;
    // invokevirtual org/jnode/driver/bus/usb/uhci/QueueHead.isEmpty()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 154, 9);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1230955136;
    ; 
    //  line no 278 , L1955021259 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe queue Ljava/util/Queue;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->queue_9;
    sp += 0;
    // invokeinterface java/util/Queue.poll()Ljava/lang/Object;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 159, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast org/jnode/driver/bus/usb/uhci/UHCIRequest
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1000);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    L1330400026:
    __frame->bytecodeIndex = 
    //  line no 280 , L1330400026 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial org/jnode/driver/bus/usb/uhci/UHCIPipe.activateRequest(Lorg/jnode/driver/bus/usb/uhci/UHCIRequest;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_org_jnode_driver_bus_usb_uhci_UHCIPipe_activateRequest__Lorg_jnode_driver_bus_usb_uhci_UHCIRequest_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1916700921:
    __frame->bytecodeIndex = 
    //  line no 286 , L1916700921 , bytecode index = 
    goto L1230955136;
    L1594873248:
    //  line no 281 , L1594873248 , bytecode index = 
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 282 , L1044705957 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // checkcast org/jnode/driver/bus/usb/spi/AbstractUSBRequest
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1002);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 283 , L693958407 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    //  bipush 16
    stack[sp++].i = 16;
    // invokevirtual org/jnode/driver/bus/usb/spi/AbstractUSBRequest.setStatus(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 158, 5);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 284 , L288379405 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/jnode/driver/bus/usb/spi/AbstractUSBRequest.setCompleted(Z)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 158, 4);
        jthread_lock(runtime, __ins);
        __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1230955136:
    //  line no 289 , L1230955136 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L749927456;
        case 1 : goto L1594873248;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_org_jnode_driver_bus_usb_uhci_UHCIPipe_handleInterrupt___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_handleInterrupt___V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 1
void func_org_jnode_driver_bus_usb_uhci_UHCIPipe_activateRequest__Lorg_jnode_driver_bus_usb_uhci_UHCIRequest_2_V(JThreadRuntime *runtime, struct org_jnode_driver_bus_usb_uhci_UHCIRequest* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 424, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 298 , L1178587240 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 298;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface org/jnode/driver/bus/usb/uhci/UHCIRequest.getFirstTD()Lorg/jnode/driver/bus/usb/uhci/TransferDescriptor;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct org_jnode_driver_bus_usb_uhci_TransferDescriptor* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 162, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 299 , L144040807 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  != NULL) goto L455501890;
    ; 
    //  line no 301 , L2050462663 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokeinterface org/jnode/driver/bus/usb/uhci/UHCIRequest.createTDs(Lorg/jnode/driver/bus/usb/uhci/UHCIPipe;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_jnode_driver_bus_usb_uhci_UHCIPipe*) = find_method(__ins->vm_table, 162, 0);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1119072377;
    L455501890:
    //  line no 303 , L455501890 , bytecode index = 
    // getstatic java/lang/System out Ljava/io/PrintStream;
    rstack[sp].obj =static_var_java_lang_System.out_1;
    sp += 1;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1017);
    // invokevirtual java/io/PrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 84, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1696263571:
    //  line no 305 , L1696263571 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  == NULL) goto L1119072377;
    ; 
    //  line no 306 , L1305935114 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/TransferDescriptor.resetStatus()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 163, 0);
        __func_p(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 307 , L196732636 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/TransferDescriptor.getNextTD()Lorg/jnode/driver/bus/usb/uhci/TransferDescriptor;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct org_jnode_driver_bus_usb_uhci_TransferDescriptor* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 163, 17);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1696263571;
    L1119072377:
    //  line no 310 , L1119072377 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/jnode/driver/bus/usb/uhci/UHCIPipe activeRequest Lorg/jnode/driver/bus/usb/uhci/UHCIRequest;
    sp -= 2;
    ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp + 0].obj)->activeRequest_10 = rstack[sp + 1].obj;
    ; 
    //  line no 311 , L1414967210 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe qh Lorg/jnode/driver/bus/usb/uhci/QueueHead;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->qh_8;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/QueueHead.add(Lorg/jnode/driver/bus/usb/uhci/UHCIRequest;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_jnode_driver_bus_usb_uhci_UHCIRequest*) = find_method(__ins->vm_table, 154, 6);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 313 , L1720891078 , bytecode index = 
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

void bridge_org_jnode_driver_bus_usb_uhci_UHCIPipe_activateRequest__Lorg_jnode_driver_bus_usb_uhci_UHCIRequest_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_activateRequest__Lorg_jnode_driver_bus_usb_uhci_UHCIRequest_2_V(runtime, ins);
}


// locals: 7
// stack: 2
// args: 1
void func_org_jnode_driver_bus_usb_uhci_UHCIPipe_handleInterrupt__Lorg_jnode_driver_bus_usb_uhci_UHCIRequest_2_V(JThreadRuntime *runtime, struct org_jnode_driver_bus_usb_uhci_UHCIRequest* p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 425, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 322 , L1486726131 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 322;
    // aconst null
    rstack[sp++].obj = NULL;
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 323 , L970419381 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface org/jnode/driver/bus/usb/uhci/UHCIRequest.getFirstTD()Lorg/jnode/driver/bus/usb/uhci/TransferDescriptor;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct org_jnode_driver_bus_usb_uhci_TransferDescriptor* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 162, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 324 , L1241569743 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L1731656333:
    //  line no 325 , L1731656333 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L1384210339;
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  != NULL) goto L1384210339;
    ; 
    //  line no 326 , L1345401730 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/TransferDescriptor.isAnyError()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 163, 12);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L481511146;
    ; 
    //  line no 328 , L1275143523 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rlocal[2].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1731656333;
    L481511146:
    //  line no 329 , L481511146 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/TransferDescriptor.isActive()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 163, 5);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L346359559;
    ; 
    //  line no 331 , L1297189682 , bytecode index = 
    method_exit(runtime);
    return;
    L346359559:
    //  line no 333 , L346359559 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/TransferDescriptor.getNextTD()Lorg/jnode/driver/bus/usb/uhci/TransferDescriptor;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct org_jnode_driver_bus_usb_uhci_TransferDescriptor* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 163, 17);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1731656333;
    L1384210339:
    //  line no 337 , L1384210339 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 338 , L1272123492 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  == NULL) goto L238816832;
    ; 
    //  line no 339 , L849198527 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/TransferDescriptor.isStalled()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 163, 6);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1934932165;
    ; 
    //  line no 340 , L551016187 , bytecode index = 
    stack[sp++].i = local[5].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    L1934932165:
    //  line no 342 , L1934932165 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/TransferDescriptor.isDataBufferError()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 163, 7);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1324843695;
    ; 
    //  line no 343 , L299413131 , bytecode index = 
    stack[sp++].i = local[5].i;
    // iconst_4
    stack[sp++].i = 4;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    L1324843695:
    //  line no 345 , L1324843695 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/TransferDescriptor.isBabbleDetected()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 163, 8);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1201454821;
    ; 
    //  line no 346 , L1508038883 , bytecode index = 
    stack[sp++].i = local[5].i;
    //  bipush 32
    stack[sp++].i = 32;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    L1201454821:
    //  line no 348 , L1201454821 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/TransferDescriptor.isNAKReceived()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 163, 9);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L728943498;
    ; 
    //  line no 349 , L2139788441 , bytecode index = 
    stack[sp++].i = local[5].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    L728943498:
    //  line no 351 , L728943498 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/TransferDescriptor.isCRCTimeOutError()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 163, 10);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1564698139;
    ; 
    //  line no 352 , L304715920 , bytecode index = 
    stack[sp++].i = local[5].i;
    //  bipush 8
    stack[sp++].i = 8;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    L1564698139:
    //  line no 354 , L1564698139 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/TransferDescriptor.isBitstuffError()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 163, 11);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L800735172;
    ; 
    //  line no 355 , L79644918 , bytecode index = 
    stack[sp++].i = local[5].i;
    //  bipush 16
    stack[sp++].i = 16;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    goto L800735172;
    L238816832:
    //  line no 358 , L238816832 , bytecode index = 
    stack[sp++].i = local[5].i;
    //  ldc 
    stack[sp++].i = 0x8000;
    stack[sp - 2].i = stack[sp - 2].i | stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    L800735172:
    //  line no 360 , L800735172 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast org/jnode/driver/bus/usb/spi/AbstractUSBRequest
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1002);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 361 , L1107985860 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    stack[sp++].i = local[5].i;
    // invokevirtual org/jnode/driver/bus/usb/spi/AbstractUSBRequest.setStatus(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 158, 5);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 362 , L473524237 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual org/jnode/driver/bus/usb/spi/AbstractUSBRequest.setActualLength(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 158, 3);
        __func_p(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 363 , L1652764753 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual org/jnode/driver/bus/usb/spi/AbstractUSBRequest.setCompleted(Z)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 158, 4);
        jthread_lock(runtime, __ins);
        __func_p(runtime, stack[sp + 0].i);
        jthread_unlock(runtime, __ins);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 364 , L478489615 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/UHCIPipe.firePipeEvent(Lorg/jnode/driver/bus/usb/uhci/UHCIRequest;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_jnode_driver_bus_usb_uhci_UHCIRequest*) = find_method(__ins->vm_table, 160, 12);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 365 , L171421438 , bytecode index = 
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

void bridge_org_jnode_driver_bus_usb_uhci_UHCIPipe_handleInterrupt__Lorg_jnode_driver_bus_usb_uhci_UHCIRequest_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_handleInterrupt__Lorg_jnode_driver_bus_usb_uhci_UHCIRequest_2_V(runtime, ins);
}


// locals: 7
// stack: 2
// args: 1
void func_org_jnode_driver_bus_usb_uhci_UHCIPipe_firePipeEvent__Lorg_jnode_driver_bus_usb_uhci_UHCIRequest_2_V(JThreadRuntime *runtime, struct org_jnode_driver_bus_usb_uhci_UHCIRequest* p0){
    
    StackItem local[7] = {0};
    RStackItem rlocal[7] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 426, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 373 , L644052207 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 373;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe listeners Ljava/util/ArrayList;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->listeners_11;
    sp += 0;
    // invokevirtual java/util/ArrayList.size()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 151, 2);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 374 , L330551672 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface org/jnode/driver/bus/usb/uhci/UHCIRequest.getStatus()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 161, 2);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 375 , L616881582 , bytecode index = 
    stack[sp++].i = local[3].i;
    //  bipush 63
    stack[sp++].i = 63;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  == 0) goto L939199469;
    // iconst_1
    stack[sp++].i = 1;
    goto L176342513;
    L939199469:
    // iconst_0
    stack[sp++].i = 0;
    L176342513:
    local[4].i = stack[--sp].i;
    ; 
    //  line no 376 , L129498568 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  == 0) goto L85748029;
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/UHCIPipe.isInterruptPipe()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 160, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L85748029;
    ; 
    //  line no 377 , L1784131088 , bytecode index = 
    stack[sp++].i = local[3].i;
    // iconst_2
    stack[sp++].i = 2;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    if(stack[--sp].i  == 0) goto L85748029;
    ; 
    //  line no 379 , L1986417638 , bytecode index = 
    method_exit(runtime);
    return;
    L85748029:
    //  line no 382 , L85748029 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[5].i = stack[--sp].i;
    L1309129055:
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L682910755;
    ; 
    //  line no 383 , L2143582219 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe listeners Ljava/util/ArrayList;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->listeners_11;
    sp += 0;
    stack[sp++].i = local[5].i;
    // invokevirtual java/util/ArrayList.get(I)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 151, 11);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast org/jnode/driver/bus/usb/USBPipeListener
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1020);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rlocal[6].obj = rstack[--sp].obj;
    ; 
    //  line no 384 , L997850486 , bytecode index = 
    stack[sp++].i = local[4].i;
    if(stack[--sp].i  == 0) goto L1221027335;
    ; 
    //  line no 385 , L1129944640 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface org/jnode/driver/bus/usb/USBPipeListener.requestFailed(Lorg/jnode/driver/bus/usb/USBRequest;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_jnode_driver_bus_usb_USBRequest*) = find_method(__ins->vm_table, 164, 1);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L528591360;
    L1221027335:
    //  line no 387 , L1221027335 , bytecode index = 
    rstack[sp++].obj = rlocal[6].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface org/jnode/driver/bus/usb/USBPipeListener.requestCompleted(Lorg/jnode/driver/bus/usb/USBRequest;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_jnode_driver_bus_usb_USBRequest*) = find_method(__ins->vm_table, 164, 0);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L528591360:
    //  line no 382 , L528591360 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1309129055;
    L682910755:
    //  line no 390 , L682910755 , bytecode index = 
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

void bridge_org_jnode_driver_bus_usb_uhci_UHCIPipe_firePipeEvent__Lorg_jnode_driver_bus_usb_uhci_UHCIRequest_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_jnode_driver_bus_usb_uhci_UHCIPipe_firePipeEvent__Lorg_jnode_driver_bus_usb_uhci_UHCIRequest_2_V(runtime, ins);
}


// locals: 10
// stack: 13
// args: 6
struct org_jnode_driver_bus_usb_uhci_TransferDescriptor* func_org_jnode_driver_bus_usb_uhci_UHCIPipe_createTD__IZLjx_zero_Memory_2IIZ_Lorg_jnode_driver_bus_usb_uhci_TransferDescriptor_2(JThreadRuntime *runtime, s32 p0, s8 p1, struct jx_zero_Memory* p2, s32 p3, s32 p4, s8 p5){
    
    StackItem local[10] = {0};
    RStackItem rlocal[10] = {0};
    StackItem stack[14];
    RStackItem rstack[14];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 427, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    rlocal[2].obj = p2;
    local[3].i = p3;
    local[4].i = p4;
    local[5].i = p5;
    ; 
    //  line no 405 , L409195262 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 405;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe device Lorg/jnode/driver/bus/usb/USBDevice;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->device_3;
    sp += 0;
    // invokevirtual org/jnode/driver/bus/usb/USBDevice.getUSBDeviceId()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 165, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[7].i = stack[--sp].i;
    ; 
    //  line no 406 , L394771492 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/jnode/driver/bus/usb/uhci/UHCIPipe.isIsochronousPipe()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 160, 2);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[8].i = stack[--sp].i;
    ; 
    //  line no 407 , L88397182 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe device Lorg/jnode/driver/bus/usb/USBDevice;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->device_3;
    sp += 0;
    // invokevirtual org/jnode/driver/bus/usb/USBDevice.isLowSpeed()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 165, 4);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[9].i = stack[--sp].i;
    ; 
    //  line no 408 , L1438988851 , bytecode index = 
    // new org/jnode/driver/bus/usb/uhci/TransferDescriptor
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 163);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe rm Ljx/zero/MemoryManager;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->rm_1;
    sp += 0;
    stack[sp++].i = local[7].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe endPointNum I
    stack[sp - 1].i = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->endPointNum_4;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[8].i;
    stack[sp++].i = local[9].i;
    stack[sp++].i = local[6].i;
    // invokespecial org/jnode/driver/bus/usb/uhci/TransferDescriptor.<init>(Ljx/zero/MemoryManager;IIIZLjx/zero/Memory;IIZZZ)V
    {
        sp -= 11;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_org_jnode_driver_bus_usb_uhci_TransferDescriptor__init___Ljx_zero_MemoryManager_2IIIZLjx_zero_Memory_2IIZZZ_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, rstack[sp + 5].obj, stack[sp + 6].i, stack[sp + 7].i, stack[sp + 8].i, stack[sp + 9].i, stack[sp + 10].i);
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

void bridge_org_jnode_driver_bus_usb_uhci_UHCIPipe_createTD__IZLjx_zero_Memory_2IIZ_Lorg_jnode_driver_bus_usb_uhci_TransferDescriptor_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_jnode_driver_bus_usb_uhci_UHCIPipe_createTD__IZLjx_zero_Memory_2IIZ_Lorg_jnode_driver_bus_usb_uhci_TransferDescriptor_2(runtime, ins, para[0].i, para[1].obj, para[2].i, para[3].i, para[4].i);
}


// locals: 1
// stack: 2
// args: 0
s32 func_org_jnode_driver_bus_usb_uhci_UHCIPipe_getMaxPacketSize___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 428, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 416 , L2038105753 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 416;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe maxPktSize I
    stack[sp - 1].i = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->maxPktSize_12;
    sp += 0;
    if(stack[--sp].i  <= 0) goto L1513608173;
    ; 
    //  line no 417 , L652176954 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe maxPktSize I
    stack[sp - 1].i = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->maxPktSize_12;
    sp += 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    L1513608173:
    //  line no 419 , L1513608173 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe device Lorg/jnode/driver/bus/usb/USBDevice;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->device_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe endPointNum I
    stack[sp - 1].i = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->endPointNum_4;
    sp += 0;
    // invokevirtual org/jnode/driver/bus/usb/USBDevice.getMaxPacketSize(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 165, 7);
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

void bridge_org_jnode_driver_bus_usb_uhci_UHCIPipe_getMaxPacketSize___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_jnode_driver_bus_usb_uhci_UHCIPipe_getMaxPacketSize___I(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_jnode_driver_bus_usb_USBEndPoint* func_org_jnode_driver_bus_usb_uhci_UHCIPipe_getEndPoint___Lorg_jnode_driver_bus_usb_USBEndPoint_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 427 , L1800976873 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/uhci/UHCIPipe endPoint Lorg/jnode/driver/bus/usb/USBEndPoint;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_uhci_UHCIPipe*)rstack[sp - 1].obj)->endPoint_5;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_org_jnode_driver_bus_usb_uhci_UHCIPipe_getEndPoint___Lorg_jnode_driver_bus_usb_USBEndPoint_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_jnode_driver_bus_usb_uhci_UHCIPipe_getEndPoint___Lorg_jnode_driver_bus_usb_USBEndPoint_2(runtime, ins);
}


