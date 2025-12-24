// CLASS: org/jnode/driver/bus/usb/spi/AbstractUSBControlRequest extends org/jnode/driver/bus/usb/spi/AbstractUSBDataRequest
#include "metadata.h"


// generation
// globals
//struct org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest_static {};



__refer arr_vmtable_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest_from_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest[] = {
    func_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest_getSetupPacket___Lorg_jnode_driver_bus_usb_SetupPacket_2  //0
};
__refer arr_vmtable_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest_from_org_jnode_driver_bus_usb_spi_AbstractUSBDataRequest[] = {
    func_org_jnode_driver_bus_usb_spi_AbstractUSBDataRequest_getDataPacket___Lorg_jnode_driver_bus_usb_USBPacket_2  //0
};
__refer arr_vmtable_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest_from_org_jnode_driver_bus_usb_spi_AbstractUSBRequest[] = {
    func_org_jnode_driver_bus_usb_spi_AbstractUSBRequest_getActualLength___I,  //0
    func_org_jnode_driver_bus_usb_spi_AbstractUSBRequest_isCompleted___Z,  //1
    func_org_jnode_driver_bus_usb_spi_AbstractUSBRequest_getStatus___I,  //2
    func_org_jnode_driver_bus_usb_spi_AbstractUSBRequest_setActualLength__I_V,  //3
    func_org_jnode_driver_bus_usb_spi_AbstractUSBRequest_setCompleted__Z_V,  //4
    func_org_jnode_driver_bus_usb_spi_AbstractUSBRequest_setStatus__I_V,  //5
    func_org_jnode_driver_bus_usb_spi_AbstractUSBRequest_waitUntilComplete__J_V  //6
};
__refer arr_vmtable_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest_from_java_lang_Object[] = {
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
__refer arr_vmtable_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest_from_org_jnode_driver_bus_usb_USBRequest[] = {
    func_org_jnode_driver_bus_usb_spi_AbstractUSBRequest_getActualLength___I,  //0
    func_org_jnode_driver_bus_usb_spi_AbstractUSBRequest_isCompleted___Z,  //1
    func_org_jnode_driver_bus_usb_spi_AbstractUSBRequest_getStatus___I,  //2
    func_org_jnode_driver_bus_usb_spi_AbstractUSBRequest_waitUntilComplete__J_V  //3
};
VMTable vmtable_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest[] = {
    {263, 1, arr_vmtable_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest_from_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest}, //0
    {264, 1, arr_vmtable_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest_from_org_jnode_driver_bus_usb_spi_AbstractUSBDataRequest}, //1
    {158, 7, arr_vmtable_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest_from_org_jnode_driver_bus_usb_spi_AbstractUSBRequest}, //2
    {10, 11, arr_vmtable_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest_from_java_lang_Object}, //3
    {161, 4, arr_vmtable_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest_from_org_jnode_driver_bus_usb_USBRequest}, //4
};



// locals: 3
// stack: 2
// args: 2
void func_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest__init___Lorg_jnode_driver_bus_usb_SetupPacket_2Lorg_jnode_driver_bus_usb_USBPacket_2_V(JThreadRuntime *runtime, struct org_jnode_driver_bus_usb_SetupPacket* p0, struct org_jnode_driver_bus_usb_USBPacket* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 704, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 38 , L1527152775 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 38;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokespecial org/jnode/driver/bus/usb/spi/AbstractUSBDataRequest.<init>(Lorg/jnode/driver/bus/usb/USBPacket;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_org_jnode_driver_bus_usb_spi_AbstractUSBDataRequest__init___Lorg_jnode_driver_bus_usb_USBPacket_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 39 , L1863655430 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/jnode/driver/bus/usb/spi/AbstractUSBControlRequest setupPacket Lorg/jnode/driver/bus/usb/SetupPacket;
    sp -= 2;
    ((struct org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest*)rstack[sp + 0].obj)->setupPacket_4 = rstack[sp + 1].obj;
    ; 
    //  line no 40 , L976827477 , bytecode index = 
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

void bridge_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest__init___Lorg_jnode_driver_bus_usb_SetupPacket_2Lorg_jnode_driver_bus_usb_USBPacket_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest__init___Lorg_jnode_driver_bus_usb_SetupPacket_2Lorg_jnode_driver_bus_usb_USBPacket_2_V(runtime, ins, para[0].obj);
}


// locals: 1
// stack: 1
// args: 0
struct org_jnode_driver_bus_usb_SetupPacket* func_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest_getSetupPacket___Lorg_jnode_driver_bus_usb_SetupPacket_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 46 , L2092709730 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/jnode/driver/bus/usb/spi/AbstractUSBControlRequest setupPacket Lorg/jnode/driver/bus/usb/SetupPacket;
    rstack[sp - 1].obj = ((struct org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest*)rstack[sp - 1].obj)->setupPacket_4;
    sp += 0;
    return rstack[sp - 1].obj;
    ; 
}

void bridge_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest_getSetupPacket___Lorg_jnode_driver_bus_usb_SetupPacket_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_jnode_driver_bus_usb_spi_AbstractUSBControlRequest_getSetupPacket___Lorg_jnode_driver_bus_usb_SetupPacket_2(runtime, ins);
}


