// CLASS: org/luaj/vm2/compiler/LexState$expdesc extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_compiler_LexState_00024expdesc_static {};



__refer arr_vmtable_org_luaj_vm2_compiler_LexState_00024expdesc_from_org_luaj_vm2_compiler_LexState_00024expdesc[] = {
    func_org_luaj_vm2_compiler_LexState_00024expdesc_init__II_V,  //0
    func_org_luaj_vm2_compiler_LexState_00024expdesc_hasjumps___Z,  //1
    func_org_luaj_vm2_compiler_LexState_00024expdesc_isnumeral___Z,  //2
    func_org_luaj_vm2_compiler_LexState_00024expdesc_setvalue__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V  //3
};
__refer arr_vmtable_org_luaj_vm2_compiler_LexState_00024expdesc_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_compiler_LexState_00024expdesc[] = {
    {197, 4, arr_vmtable_org_luaj_vm2_compiler_LexState_00024expdesc_from_org_luaj_vm2_compiler_LexState_00024expdesc}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_compiler_LexState_00024expdesc_from_java_lang_Object}, //1
};



// locals: 1
// stack: 3
// args: 0
void func_org_luaj_vm2_compiler_LexState_00024expdesc__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3121, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 756 , L177267393 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 756;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 771 , L144486215 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new org/luaj/vm2/compiler/LexState$expdesc$U
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 268);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/LexState$expdesc$U.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState_00024expdesc_00024U__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->u_1 = rstack[sp + 1].obj;
    ; 
    //  line no 772 , L923727115 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new org/luaj/vm2/compiler/IntPtr
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 132);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/IntPtr.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_IntPtr__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->t_2 = rstack[sp + 1].obj;
    ; 
    //  line no 773 , L730298964 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new org/luaj/vm2/compiler/IntPtr
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 132);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/IntPtr.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_IntPtr__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->f_3 = rstack[sp + 1].obj;
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

void bridge_org_luaj_vm2_compiler_LexState_00024expdesc__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_00024expdesc__init____V(runtime, ins);
}


// locals: 3
// stack: 2
// args: 2
void func_org_luaj_vm2_compiler_LexState_00024expdesc_init__II_V(JThreadRuntime *runtime, s32 p0, s32 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3122, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    local[1].i = p1;
    ; 
    //  line no 775 , L1267168782 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 775;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->f_3;
    sp += 0;
    // iconst_-1
    stack[sp++].i = -1;
    // putfield org/luaj/vm2/compiler/IntPtr i I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp + 0].obj)->i_0 = stack[sp + 1].i;
    ; 
    //  line no 776 , L199320792 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->t_2;
    sp += 0;
    // iconst_-1
    stack[sp++].i = -1;
    // putfield org/luaj/vm2/compiler/IntPtr i I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp + 0].obj)->i_0 = stack[sp + 1].i;
    ; 
    //  line no 777 , L455404074 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    ; 
    //  line no 778 , L1576408634 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    stack[sp++].i = local[2].i;
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->info_4 = stack[sp + 1].i;
    ; 
    //  line no 779 , L758201484 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_00024expdesc_init__II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_00024expdesc_init__II_V(runtime, ins, para[0].i);
}


// locals: 1
// stack: 2
// args: 0
s8 func_org_luaj_vm2_compiler_LexState_00024expdesc_hasjumps___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3123, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 782 , L289378424 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 782;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->t_2;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->f_3;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L2081751971;
    // iconst_1
    stack[sp++].i = 1;
    goto L1482986993;
    L2081751971:
    // iconst_0
    stack[sp++].i = 0;
    L1482986993:
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

void bridge_org_luaj_vm2_compiler_LexState_00024expdesc_hasjumps___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_00024expdesc_hasjumps___Z(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s8 func_org_luaj_vm2_compiler_LexState_00024expdesc_isnumeral___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3124, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 786 , L705602706 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 786;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    // iconst_5
    stack[sp++].i = 5;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2119344747;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->t_2;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2119344747;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->f_3;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L2119344747;
    // iconst_1
    stack[sp++].i = 1;
    goto L48589645;
    L2119344747:
    // iconst_0
    stack[sp++].i = 0;
    L48589645:
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

void bridge_org_luaj_vm2_compiler_LexState_00024expdesc_isnumeral___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_compiler_LexState_00024expdesc_isnumeral___Z(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_org_luaj_vm2_compiler_LexState_00024expdesc_setvalue__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LexState_00024expdesc* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3125, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 790 , L1617983326 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 790;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->f_3;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc f Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->f_3;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // putfield org/luaj/vm2/compiler/IntPtr i I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp + 0].obj)->i_0 = stack[sp + 1].i;
    ; 
    //  line no 791 , L190496961 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc k I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->k_0;
    sp += 0;
    // putfield org/luaj/vm2/compiler/LexState$expdesc k I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp + 0].obj)->k_0 = stack[sp + 1].i;
    ; 
    //  line no 792 , L575438308 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->t_2;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc t Lorg/luaj/vm2/compiler/IntPtr;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->t_2;
    sp += 0;
    // getfield org/luaj/vm2/compiler/IntPtr i I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp - 1].obj)->i_0;
    sp += 0;
    // putfield org/luaj/vm2/compiler/IntPtr i I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_IntPtr*)rstack[sp + 0].obj)->i_0 = stack[sp + 1].i;
    ; 
    //  line no 793 , L917316251 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // invokestatic org/luaj/vm2/compiler/LexState$expdesc$U.access$200(Lorg/luaj/vm2/compiler/LexState$expdesc$U;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_access_00024200__Lorg_luaj_vm2_compiler_LexState_00024expdesc_00024U_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokestatic org/luaj/vm2/compiler/LexState$expdesc$U.access$202(Lorg/luaj/vm2/compiler/LexState$expdesc$U;Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_compiler_LexState_00024expdesc_00024U_access_00024202__Lorg_luaj_vm2_compiler_LexState_00024expdesc_00024U_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 794 , L1434741143 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U ind_idx S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->ind_1idx_0;
    sp += 0;
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U ind_idx S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->ind_1idx_0 = stack[sp + 1].i;
    ; 
    //  line no 795 , L134604590 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U ind_t S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->ind_1t_1;
    sp += 0;
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U ind_t S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->ind_1t_1 = stack[sp + 1].i;
    ; 
    //  line no 796 , L1231493271 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U ind_vt S
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->ind_1vt_2;
    sp += 0;
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U ind_vt S
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->ind_1vt_2 = stack[sp + 1].i;
    ; 
    //  line no 797 , L377570010 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield org/luaj/vm2/compiler/LexState$expdesc u Lorg/luaj/vm2/compiler/LexState$expdesc$U;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState_00024expdesc*)rstack[sp - 1].obj)->u_1;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp - 1].obj)->info_4;
    sp += 0;
    // putfield org/luaj/vm2/compiler/LexState$expdesc$U info I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState_00024expdesc_00024U*)rstack[sp + 0].obj)->info_4 = stack[sp + 1].i;
    ; 
    //  line no 798 , L1623148876 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LexState_00024expdesc_setvalue__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LexState_00024expdesc_setvalue__Lorg_luaj_vm2_compiler_LexState_00024expdesc_2_V(runtime, ins);
}


