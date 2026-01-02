// CLASS: jx/zero/DiskEmulation extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_DiskEmulation_static {};



__refer arr_vmtable_jx_zero_DiskEmulation_from_jx_zero_DiskEmulation[] = {
    func_jx_zero_DiskEmulation_getCapacity___I,  //0
    func_jx_zero_DiskEmulation_getSectorSize___I,  //1
    func_jx_zero_DiskEmulation_readSectors__IILjx_zero_Memory_2Z_V,  //2
    func_jx_zero_DiskEmulation_writeSectors__IILjx_zero_Memory_2Z_V  //3
};
__refer arr_vmtable_jx_zero_DiskEmulation_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_DiskEmulation_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_DiskEmulation[] = {
    {330, 4, arr_vmtable_jx_zero_DiskEmulation_from_jx_zero_DiskEmulation}, //0
    {5, 10, arr_vmtable_jx_zero_DiskEmulation_from_java_lang_Object}, //1
    {60, 0, arr_vmtable_jx_zero_DiskEmulation_from_jx_zero_Portal}, //2
};



// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_DiskEmulation_getCapacity___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2182, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_DiskEmulation_getCapacity___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_DiskEmulation_getCapacity___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
s32 func_jx_zero_DiskEmulation_getSectorSize___I(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2183, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_zero_DiskEmulation_getSectorSize___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_zero_DiskEmulation_getSectorSize___I(runtime, ins);
}


// locals: 0
// stack: 0
// args: 4
void func_jx_zero_DiskEmulation_readSectors__IILjx_zero_Memory_2Z_V(JThreadRuntime *runtime, s32 p0, s32 p1, struct jx_zero_Memory* p2, s8 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2184, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_DiskEmulation_readSectors__IILjx_zero_Memory_2Z_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_DiskEmulation_readSectors__IILjx_zero_Memory_2Z_V(runtime, ins, para[0].i, para[1].obj, para[2].i);
}


// locals: 0
// stack: 0
// args: 4
void func_jx_zero_DiskEmulation_writeSectors__IILjx_zero_Memory_2Z_V(JThreadRuntime *runtime, s32 p0, s32 p1, struct jx_zero_Memory* p2, s8 p3){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2185, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_jx_zero_DiskEmulation_writeSectors__IILjx_zero_Memory_2Z_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_zero_DiskEmulation_writeSectors__IILjx_zero_Memory_2Z_V(runtime, ins, para[0].i, para[1].obj, para[2].i);
}


