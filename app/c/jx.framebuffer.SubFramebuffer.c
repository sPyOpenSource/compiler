// CLASS: jx/framebuffer/SubFramebuffer extends jx/framebuffer/PackedFramebufferImpl
#include "metadata.h"


// generation
// globals
//struct jx_framebuffer_SubFramebuffer_static {};



__refer arr_vmtable_jx_framebuffer_SubFramebuffer_from_jx_framebuffer_SubFramebuffer[] = {
    func_jx_framebuffer_SubFramebuffer_transformClippings___3Ljx_framebuffer_ClippingRectangle_2__3Ljx_framebuffer_ClippingRectangle_2,  //0
    func_jx_framebuffer_SubFramebuffer_framebufferType___Ljava_lang_String_2  //1
};
__refer arr_vmtable_jx_framebuffer_SubFramebuffer_from_jx_framebuffer_PackedFramebufferImpl[] = {
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
    func_jx_framebuffer_SubFramebuffer_framebufferType___Ljava_lang_String_2  //10
};
__refer arr_vmtable_jx_framebuffer_SubFramebuffer_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_framebuffer_SubFramebuffer_from_jx_framebuffer_PackedFramebuffer[] = {
    func_jx_framebuffer_PackedFramebufferImpl_width___I,  //0
    func_jx_framebuffer_PackedFramebufferImpl_height___I,  //1
    func_jx_framebuffer_PackedFramebufferImpl_depth___I,  //2
    func_jx_framebuffer_PackedFramebufferImpl_startAddress___I,  //3
    func_jx_framebuffer_PackedFramebufferImpl_scanlineOffset___I,  //4
    func_jx_framebuffer_PackedFramebufferImpl_pixelOffset___I,  //5
    func_jx_framebuffer_PackedFramebufferImpl_memObj___Ljx_zero_Memory_2,  //6
    func_jx_framebuffer_PackedFramebufferImpl_clear___V,  //7
    func_jx_framebuffer_SubFramebuffer_framebufferType___Ljava_lang_String_2  //8
};
__refer arr_vmtable_jx_framebuffer_SubFramebuffer_from_jx_framebuffer_ClippingTransformer[] = {
    func_jx_framebuffer_SubFramebuffer_transformClippings___3Ljx_framebuffer_ClippingRectangle_2__3Ljx_framebuffer_ClippingRectangle_2  //0
};
VMTable vmtable_jx_framebuffer_SubFramebuffer[] = {
    {243, 2, arr_vmtable_jx_framebuffer_SubFramebuffer_from_jx_framebuffer_SubFramebuffer}, //0
    {137, 11, arr_vmtable_jx_framebuffer_SubFramebuffer_from_jx_framebuffer_PackedFramebufferImpl}, //1
    {10, 11, arr_vmtable_jx_framebuffer_SubFramebuffer_from_java_lang_Object}, //2
    {138, 9, arr_vmtable_jx_framebuffer_SubFramebuffer_from_jx_framebuffer_PackedFramebuffer}, //3
    {245, 1, arr_vmtable_jx_framebuffer_SubFramebuffer_from_jx_framebuffer_ClippingTransformer}, //4
};



// locals: 6
// stack: 8
// args: 5
void func_jx_framebuffer_SubFramebuffer__init___Ljx_framebuffer_PackedFramebuffer_2IIII_V(JThreadRuntime *runtime, struct jx_framebuffer_PackedFramebuffer* p0, s32 p1, s32 p2, s32 p3, s32 p4){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[9];
    RStackItem rstack[9];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 619, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    local[3].i = p3;
    local[4].i = p4;
    ; 
    //  line no 10 , L408069119 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 10;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    ; 
    //  line no 11 , L1912850431 , bytecode index = 
    // invokeinterface jx/framebuffer/PackedFramebuffer.width()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 138, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[4].i;
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_0
    stack[sp++].i = 0;
    // invokestatic java/lang/Math.max(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_max__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    ; 
    //  line no 12 , L633326333 , bytecode index = 
    // invokeinterface jx/framebuffer/PackedFramebuffer.height()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 138, 1);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[3].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    // invokestatic java/lang/Math.min(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_min__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // iconst_0
    stack[sp++].i = 0;
    // invokestatic java/lang/Math.max(II)I
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Math_max__II_I(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    ; 
    //  line no 13 , L1265012928 , bytecode index = 
    // invokeinterface jx/framebuffer/PackedFramebuffer.depth()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 138, 2);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    ; 
    //  line no 14 , L1176932104 , bytecode index = 
    // invokeinterface jx/framebuffer/PackedFramebuffer.startAddress()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 138, 3);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[3].i;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface jx/framebuffer/PackedFramebuffer.scanlineOffset()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 138, 4);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface jx/framebuffer/PackedFramebuffer.pixelOffset()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 138, 5);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[1].obj;
    ; 
    //  line no 15 , L712410124 , bytecode index = 
    // invokeinterface jx/framebuffer/PackedFramebuffer.pixelOffset()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 138, 5);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    ; 
    //  line no 16 , L1900366749 , bytecode index = 
    // invokeinterface jx/framebuffer/PackedFramebuffer.scanlineOffset()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 138, 4);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    ; 
    //  line no 17 , L249177573 , bytecode index = 
    // invokeinterface jx/framebuffer/PackedFramebuffer.memObj()Ljx/zero/Memory;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_Memory* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 138, 6);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 10 , L2096539129 , bytecode index = 
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
    //  line no 20 , L1648232591 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield jx/framebuffer/SubFramebuffer xoff I
    sp -= 2;
    ((struct jx_framebuffer_SubFramebuffer*)rstack[sp + 0].obj)->xoff_7 = stack[sp + 1].i;
    ; 
    //  line no 21 , L972865270 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // putfield jx/framebuffer/SubFramebuffer yoff I
    sp -= 2;
    ((struct jx_framebuffer_SubFramebuffer*)rstack[sp + 0].obj)->yoff_8 = stack[sp + 1].i;
    ; 
    //  line no 22 , L1716932897 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[4].i;
    // putfield jx/framebuffer/SubFramebuffer width I
    sp -= 2;
    ((struct jx_framebuffer_SubFramebuffer*)rstack[sp + 0].obj)->width_9 = stack[sp + 1].i;
    ; 
    //  line no 23 , L801569151 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    // putfield jx/framebuffer/SubFramebuffer height I
    sp -= 2;
    ((struct jx_framebuffer_SubFramebuffer*)rstack[sp + 0].obj)->height_10 = stack[sp + 1].i;
    ; 
    //  line no 29 , L1026483832 , bytecode index = 
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

void bridge_jx_framebuffer_SubFramebuffer__init___Ljx_framebuffer_PackedFramebuffer_2IIII_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_framebuffer_SubFramebuffer__init___Ljx_framebuffer_PackedFramebuffer_2IIII_V(runtime, ins, para[0].i, para[1].i, para[2].i, para[3].i);
}


// locals: 5
// stack: 9
// args: 1
JArray * func_jx_framebuffer_SubFramebuffer_transformClippings___3Ljx_framebuffer_ClippingRectangle_2__3Ljx_framebuffer_ClippingRectangle_2(JThreadRuntime *runtime, JArray * p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[10];
    RStackItem rstack[10];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 620, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 33 , L905080434 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 33;
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
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
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual jx/framebuffer/SubFramebuffer.framebufferType()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 243, 1);
        rstack[sp].obj = __func_p(runtime);
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
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1578);
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
    // getfield jx/framebuffer/SubFramebuffer xoff I
    stack[sp - 1].i = ((struct jx_framebuffer_SubFramebuffer*)rstack[sp - 1].obj)->xoff_7;
    sp += 0;
    stack[sp - 1].i = -stack[sp - 1].i; 
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 3, 2);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 461);
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
    // getfield jx/framebuffer/SubFramebuffer yoff I
    stack[sp - 1].i = ((struct jx_framebuffer_SubFramebuffer*)rstack[sp - 1].obj)->yoff_8;
    sp += 0;
    stack[sp - 1].i = -stack[sp - 1].i; 
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 3, 2);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
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
    // invokevirtual jx/zero/debug/DebugPrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 0, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 35 , L761750706 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L761750706
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    // ; newarray/multiarray Dimension Array: [Ljx/framebuffer/ClippingRectangle; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1580));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 38 , L1731217984 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[4].i = stack[--sp].i;
    L1237762639:
    stack[sp++].i = local[4].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L1237762639
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1877062907;
    ; 
    //  line no 39 , L2033524545 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[4].i;
    // arrload __refer  ,  L2033524545 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 40 , L473053293 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    if(rstack[--sp].obj  == NULL) goto L1670993182;
    ; 
    //  line no 41 , L20804602 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    stack[sp++].i = local[4].i;
    // new jx/framebuffer/ClippingRectangle
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 244);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield jx/framebuffer/ClippingRectangle xmin I
    stack[sp - 1].i = ((struct jx_framebuffer_ClippingRectangle*)rstack[sp - 1].obj)->xmin_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/framebuffer/SubFramebuffer xoff I
    stack[sp - 1].i = ((struct jx_framebuffer_SubFramebuffer*)rstack[sp - 1].obj)->xoff_7;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield jx/framebuffer/ClippingRectangle ymin I
    stack[sp - 1].i = ((struct jx_framebuffer_ClippingRectangle*)rstack[sp - 1].obj)->ymin_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/framebuffer/SubFramebuffer yoff I
    stack[sp - 1].i = ((struct jx_framebuffer_SubFramebuffer*)rstack[sp - 1].obj)->yoff_8;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield jx/framebuffer/ClippingRectangle xmax I
    stack[sp - 1].i = ((struct jx_framebuffer_ClippingRectangle*)rstack[sp - 1].obj)->xmax_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/framebuffer/SubFramebuffer xoff I
    stack[sp - 1].i = ((struct jx_framebuffer_SubFramebuffer*)rstack[sp - 1].obj)->xoff_7;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield jx/framebuffer/ClippingRectangle ymax I
    stack[sp - 1].i = ((struct jx_framebuffer_ClippingRectangle*)rstack[sp - 1].obj)->ymax_3;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/framebuffer/SubFramebuffer yoff I
    stack[sp - 1].i = ((struct jx_framebuffer_SubFramebuffer*)rstack[sp - 1].obj)->yoff_8;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokespecial jx/framebuffer/ClippingRectangle.<init>(IIII)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_framebuffer_ClippingRectangle__init___IIII_V(runtime, stack[sp + 0].i, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L20804602 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    L1670993182:
    //  line no 38 , L1670993182 , bytecode index = 
    // iinc slot 4 value 1
    local[4].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1237762639;
    L1877062907:
    //  line no 43 , L1877062907 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
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

void bridge_jx_framebuffer_SubFramebuffer_transformClippings___3Ljx_framebuffer_ClippingRectangle_2__3Ljx_framebuffer_ClippingRectangle_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_framebuffer_SubFramebuffer_transformClippings___3Ljx_framebuffer_ClippingRectangle_2__3Ljx_framebuffer_ClippingRectangle_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct java_lang_String* func_jx_framebuffer_SubFramebuffer_framebufferType___Ljava_lang_String_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 621, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 48 , L1566511282 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 48;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1581);
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

void bridge_jx_framebuffer_SubFramebuffer_framebufferType___Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_jx_framebuffer_SubFramebuffer_framebufferType___Ljava_lang_String_2(runtime, ins);
}


