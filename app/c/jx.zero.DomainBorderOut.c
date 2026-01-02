// CLASS: jx/zero/DomainBorderOut extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_DomainBorderOut_static {};



__refer arr_vmtable_jx_zero_DomainBorderOut_from_jx_zero_DomainBorderOut[] = {
    func_jx_zero_DomainBorderOut_outBound__Ljx_zero_InterceptOutboundInfo_2_Z  //0
};
__refer arr_vmtable_jx_zero_DomainBorderOut_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_DomainBorderOut_from_jx_zero_DomainBorder[] = {
    func_jx_zero_DomainBorder_createPortal__Ljx_zero_PortalInfo_2_Z,  //0
    func_jx_zero_DomainBorder_destroyPortal__Ljx_zero_PortalInfo_2_V  //1
};
__refer arr_vmtable_jx_zero_DomainBorderOut_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_DomainBorderOut[] = {
    {367, 1, arr_vmtable_jx_zero_DomainBorderOut_from_jx_zero_DomainBorderOut}, //0
    {5, 10, arr_vmtable_jx_zero_DomainBorderOut_from_java_lang_Object}, //1
    {368, 2, arr_vmtable_jx_zero_DomainBorderOut_from_jx_zero_DomainBorder}, //2
    {60, 0, arr_vmtable_jx_zero_DomainBorderOut_from_jx_zero_Portal}, //3
};



// locals: 0
// stack: 0
// args: 1
s8 func_jx_zero_DomainBorderOut_outBound__Ljx_zero_InterceptOutboundInfo_2_Z(JThreadRuntime *runtime, struct jx_zero_InterceptOutboundInfo* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2627, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_DomainBorderOut_outBound__Ljx_zero_InterceptOutboundInfo_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_DomainBorderOut_outBound__Ljx_zero_InterceptOutboundInfo_2_Z(runtime, ins);
}


