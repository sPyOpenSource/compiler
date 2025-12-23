// CLASS: jx/framebuffer/MemoryFramebuffer extends jx/framebuffer/PackedFramebufferImpl
#include "metadata.h"


// generation
// globals
//struct jx_framebuffer_MemoryFramebuffer_static {};



__refer arr_vmtable_jx_framebuffer_MemoryFramebuffer_from_jx_framebuffer_MemoryFramebuffer[] = {
    func_jx_framebuffer_MemoryFramebuffer_framebufferType___Ljava_lang_String_2  //0
};
__refer arr_vmtable_jx_framebuffer_MemoryFramebuffer_from_jx_framebuffer_PackedFramebufferImpl[] = {
    func_jx_framebuffer_PackedFramebufferImpl_setNewStartAddress__I_V,  //0
    func_jx_framebuffer_PackedFramebufferImpl_width___I,  //1
    func_jx_framebuffer_PackedFramebufferImpl_height___I,  //2
    func_jx_framebuffer_PackedFramebufferImpl_depth___I,  //3
    func_jx_framebuffer_PackedFramebufferImpl_startAddress___I,  //4
    func_jx_framebuffer_PackedFramebufferImpl_scanlineOffset___I,  //5
    func_jx_framebuffer_PackedFramebufferImpl_pixelOffset___I,  //6
    func_jx_framebuffer_PackedFramebufferImpl_memObj___Ljx_zero_Memory_2,  //7
    func_jx_framebuffer_PackedFramebufferImpl_toString___Ljava_lang_String_2,  //8
    func_jx_framebuffer_PackedFramebufferImpl_clear___V,  //9
    func_jx_framebuffer_MemoryFramebuffer_framebufferType___Ljava_lang_String_2  //10
};
__refer arr_vmtable_jx_framebuffer_MemoryFramebuffer_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_jx_framebuffer_PackedFramebufferImpl_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
__refer arr_vmtable_jx_framebuffer_MemoryFramebuffer_from_jx_framebuffer_PackedFramebuffer[] = {
    func_jx_framebuffer_PackedFramebufferImpl_width___I,  //0
    func_jx_framebuffer_PackedFramebufferImpl_height___I,  //1
    func_jx_framebuffer_PackedFramebufferImpl_depth___I,  //2
    func_jx_framebuffer_PackedFramebufferImpl_startAddress___I,  //3
    func_jx_framebuffer_PackedFramebufferImpl_scanlineOffset___I,  //4
    func_jx_framebuffer_PackedFramebufferImpl_pixelOffset___I,  //5
    func_jx_framebuffer_PackedFramebufferImpl_memObj___Ljx_zero_Memory_2,  //6
    func_jx_framebuffer_PackedFramebufferImpl_clear___V,  //7
    func_jx_framebuffer_MemoryFramebuffer_framebufferType___Ljava_lang_String_2  //8
};
VMTable vmtable_jx_framebuffer_MemoryFramebuffer[] = {
    {136, 1, arr_vmtable_jx_framebuffer_MemoryFramebuffer_from_jx_framebuffer_MemoryFramebuffer}, //0
    {137, 11, arr_vmtable_jx_framebuffer_MemoryFramebuffer_from_jx_framebuffer_PackedFramebufferImpl}, //1
    {10, 11, arr_vmtable_jx_framebuffer_MemoryFramebuffer_from_java_lang_Object}, //2
    {138, 9, arr_vmtable_jx_framebuffer_MemoryFramebuffer_from_jx_framebuffer_PackedFramebuffer}, //3
};



// locals: 4
// stack: 5
// args: 3
void func_jx_framebuffer_MemoryFramebuffer__init___III_V(JThreadRuntime *runtime, s32 p0, s32 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 375, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 8 , L613784740 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 8;
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic jx/zero/InitialNaming.getInitialNaming()Ljx/zero/Naming;
    {
        sp -= 1;
        rstack[sp].obj = func_jx_zero_InitialNaming_getInitialNaming___Ljx_zero_Naming_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 907);
    // invokeinterface jx/zero/Naming.lookup(Ljava/lang/String;)Ljx/zero/Portal;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_Portal* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 90, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast jx/zero/MemoryManager
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 908);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[1].i;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    // invokespecial jx/framebuffer/MemoryFramebuffer.<init>(Ljx/zero/MemoryManager;III)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_framebuffer_MemoryFramebuffer__init___Ljx_zero_MemoryManager_2III_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 10 , L271095942 , bytecode index = 
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

void bridge_jx_framebuffer_MemoryFramebuffer__init___III_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_framebuffer_MemoryFramebuffer__init___III_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 5
// stack: 8
// args: 4
void func_jx_framebuffer_MemoryFramebuffer__init___Ljx_zero_DeviceMemory_2III_V(JThreadRuntime *runtime, struct jx_zero_DeviceMemory* p0, s32 p1, s32 p2, s32 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[9];
    RStackItem rstack[9];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 376, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 13 , L1176164144 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 13;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial jx/framebuffer/PackedFramebufferImpl.<init>(IIIIIILjx/zero/Memory;)V
    {
        sp -= 7;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_framebuffer_PackedFramebufferImpl__init___IIIIIILjx_zero_Memory_2_V(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, rstack[sp + 6].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 14 , L1323434987 , bytecode index = 
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

void bridge_jx_framebuffer_MemoryFramebuffer__init___Ljx_zero_DeviceMemory_2III_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_framebuffer_MemoryFramebuffer__init___Ljx_zero_DeviceMemory_2III_V(runtime, ins, para[0].i, para[1].i, para[2].i);
}


// locals: 5
// stack: 10
// args: 4
void func_jx_framebuffer_MemoryFramebuffer__init___Ljx_zero_MemoryManager_2III_V(JThreadRuntime *runtime, struct jx_zero_MemoryManager* p0, s32 p1, s32 p2, s32 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[11];
    RStackItem rstack[11];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 377, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    ; 
    //  line no 17 , L1885922916 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 17;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[4].i;
    ; 
    //  line no 19 , L1624972302 , bytecode index = 
    // invokestatic jx/framebuffer/MemoryFramebuffer.depthToBPP(I)I
    {
        sp -= 2;
        stack[sp].i = func_jx_framebuffer_PackedFramebufferImpl_depthToBPP__I_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    // iconst_4
    stack[sp++].i = 4;
    // invokeinterface jx/zero/MemoryManager.allocAligned(II)Ljx/zero/Memory;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_Memory* (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 135, 1);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 17 , L1048098469 , bytecode index = 
    // invokespecial jx/framebuffer/PackedFramebufferImpl.<init>(IIIIIILjx/zero/Memory;)V
    {
        sp -= 7;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_framebuffer_PackedFramebufferImpl__init___IIIIIILjx_zero_Memory_2_V(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i, stack[sp + 4].i, stack[sp + 5].i, rstack[sp + 6].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 20 , L1989811701 , bytecode index = 
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

void bridge_jx_framebuffer_MemoryFramebuffer__init___Ljx_zero_MemoryManager_2III_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_framebuffer_MemoryFramebuffer__init___Ljx_zero_MemoryManager_2III_V(runtime, ins, para[0].i, para[1].i, para[2].i);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_jx_framebuffer_MemoryFramebuffer_framebufferType___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 378, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 24 , L2037764568 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 24;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 912);
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

void bridge_jx_framebuffer_MemoryFramebuffer_framebufferType___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_framebuffer_MemoryFramebuffer_framebufferType___Ljava_lang_String_2(runtime, ins);
}


