// CLASS: org/luaj/vm2/compiler/LuaC$CompileState extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_compiler_LuaC_00024CompileState_static {};



__refer arr_vmtable_org_luaj_vm2_compiler_LuaC_00024CompileState_from_org_luaj_vm2_compiler_LuaC_00024CompileState[] = {
    func_org_luaj_vm2_compiler_LuaC_00024CompileState_luaY_1parser__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2,  //0
    func_org_luaj_vm2_compiler_LuaC_00024CompileState_newTString__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2,  //1
    func_org_luaj_vm2_compiler_LuaC_00024CompileState_newTString__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2,  //2
    func_org_luaj_vm2_compiler_LuaC_00024CompileState_cachedLuaString__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2,  //3
    func_org_luaj_vm2_compiler_LuaC_00024CompileState_pushfstring__Ljava_lang_String_2_Ljava_lang_String_2  //4
};
__refer arr_vmtable_org_luaj_vm2_compiler_LuaC_00024CompileState_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_compiler_LuaC_00024CompileState[] = {
    {265, 5, arr_vmtable_org_luaj_vm2_compiler_LuaC_00024CompileState_from_org_luaj_vm2_compiler_LuaC_00024CompileState}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_compiler_LuaC_00024CompileState_from_java_lang_Object}, //1
};



// locals: 1
// stack: 3
// args: 0
void func_org_luaj_vm2_compiler_LuaC_00024CompileState__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3087, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 119 , L446613518 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 119;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 117 , L2144659477 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield org/luaj/vm2/compiler/LuaC$CompileState nCcalls I
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LuaC_00024CompileState*)rstack[sp + 0].obj)->nCcalls_0 = stack[sp + 1].i;
    ; 
    //  line no 118 , L1600869357 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new java/util/HashMap
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 27);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/util/HashMap.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/LuaC$CompileState strings Ljava/util/HashMap;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LuaC_00024CompileState*)rstack[sp + 0].obj)->strings_1 = rstack[sp + 1].obj;
    ; 
    //  line no 119 , L550351186 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LuaC_00024CompileState__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LuaC_00024CompileState__init____V(runtime, ins);
}


// locals: 5
// stack: 5
// args: 2
struct org_luaj_vm2_Prototype* func_org_luaj_vm2_compiler_LuaC_00024CompileState_luaY_1parser__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime, struct java_io_InputStream* p0, struct java_lang_String* p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3088, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 123 , L347282999 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 123;
    // new org/luaj/vm2/compiler/LexState
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 266);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial org/luaj/vm2/compiler/LexState.<init>(Lorg/luaj/vm2/compiler/LuaC$CompileState;Ljava/io/InputStream;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LexState__init___Lorg_luaj_vm2_compiler_LuaC_00024CompileState_2Ljava_io_InputStream_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 124 , L289592183 , bytecode index = 
    // new org/luaj/vm2/compiler/FuncState
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 264);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/FuncState.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_FuncState__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 126 , L1548269356 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // putfield org/luaj/vm2/compiler/LexState fs Lorg/luaj/vm2/compiler/FuncState;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_LexState*)rstack[sp + 0].obj)->fs_157 = rstack[sp + 1].obj;
    ; 
    //  line no 127 , L1847256931 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/io/InputStream.read()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 66, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic org/luaj/vm2/LuaValue.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/LexState.setinput(Lorg/luaj/vm2/compiler/LuaC$CompileState;ILjava/io/InputStream;Lorg/luaj/vm2/LuaString;)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_LuaC_00024CompileState*,s32,struct java_io_InputStream*,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 266, 11);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 129 , L1658064433 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // new org/luaj/vm2/Prototype
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 128);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/Prototype.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Prototype__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    sp -= 2;
    ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp + 0].obj)->f_103 = rstack[sp + 1].obj;
    ; 
    //  line no 130 , L1695195255 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // invokestatic org/luaj/vm2/LuaValue.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/Prototype source Lorg/luaj/vm2/LuaString;
    sp -= 2;
    ((struct org_luaj_vm2_Prototype*)rstack[sp + 0].obj)->source_6 = rstack[sp + 1].obj;
    ; 
    //  line no 131 , L2095225389 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual org/luaj/vm2/compiler/LexState.mainfunc(Lorg/luaj/vm2/compiler/FuncState;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_compiler_FuncState*) = find_method(__ins->vm_table, 266, 97);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 132 , L1165646637 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/compiler/FuncState prev Lorg/luaj/vm2/compiler/FuncState;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->prev_105;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L127758389;
    // iconst_1
    stack[sp++].i = 1;
    goto L925131177;
    L127758389:
    // iconst_0
    stack[sp++].i = 0;
    L925131177:
    // invokestatic org/luaj/vm2/compiler/LuaC._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 134 , L1610593938 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    if(rstack[--sp].obj  == NULL) goto L1221274995;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_actvar I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1actvar_1;
    sp += 0;
    if(stack[--sp].i  != 0) goto L607907975;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_gt I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1gt_3;
    sp += 0;
    if(stack[--sp].i  != 0) goto L607907975;
    rstack[sp++].obj = rlocal[3].obj;
    // getfield org/luaj/vm2/compiler/LexState dyd Lorg/luaj/vm2/compiler/LexState$Dyndata;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LexState*)rstack[sp - 1].obj)->dyd_162;
    sp += 0;
    // getfield org/luaj/vm2/compiler/LexState$Dyndata n_label I
    stack[sp - 1].i = ((struct org_luaj_vm2_compiler_LexState_00024Dyndata*)rstack[sp - 1].obj)->n_1label_5;
    sp += 0;
    if(stack[--sp].i  != 0) goto L607907975;
    L1221274995:
    // iconst_1
    stack[sp++].i = 1;
    goto L814150784;
    L607907975:
    // iconst_0
    stack[sp++].i = 0;
    L814150784:
    // invokestatic org/luaj/vm2/compiler/LuaC._assert(Z)V
    {
        sp -= 2;
        func_org_luaj_vm2_compiler_Constants__1assert__Z_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 136 , L309301028 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // getfield org/luaj/vm2/compiler/FuncState f Lorg/luaj/vm2/Prototype;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_FuncState*)rstack[sp - 1].obj)->f_103;
    sp += 0;
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

void bridge_org_luaj_vm2_compiler_LuaC_00024CompileState_luaY_1parser__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LuaC_00024CompileState_luaY_1parser__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(runtime, ins, para[0].obj);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_compiler_LuaC_00024CompileState_newTString__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3089, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 141 , L2015035275 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 141;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokestatic org/luaj/vm2/LuaString.valueOf(Ljava/lang/String;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaString_valueOf__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/compiler/LuaC$CompileState.cachedLuaString(Lorg/luaj/vm2/LuaString;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 265, 3);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
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

void bridge_org_luaj_vm2_compiler_LuaC_00024CompileState_newTString__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LuaC_00024CompileState_newTString__Ljava_lang_String_2_Lorg_luaj_vm2_LuaString_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_compiler_LuaC_00024CompileState_newTString__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3090, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 146 , L298287232 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 146;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/compiler/LuaC$CompileState.cachedLuaString(Lorg/luaj/vm2/LuaString;)Lorg/luaj/vm2/LuaString;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 265, 3);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
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

void bridge_org_luaj_vm2_compiler_LuaC_00024CompileState_newTString__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LuaC_00024CompileState_newTString__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
struct org_luaj_vm2_LuaString* func_org_luaj_vm2_compiler_LuaC_00024CompileState_cachedLuaString__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, struct org_luaj_vm2_LuaString* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3091, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 150 , L1231205406 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 150;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LuaC$CompileState strings Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LuaC_00024CompileState*)rstack[sp - 1].obj)->strings_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/HashMap.get(Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 27, 3);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast org/luaj/vm2/LuaString
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 240);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 151 , L1340928776 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    if(rstack[--sp].obj  == NULL) goto L1652734453;
    ; 
    //  line no 152 , L1532989443 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L1652734453:
    //  line no 153 , L1652734453 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/compiler/LuaC$CompileState strings Ljava/util/HashMap;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_compiler_LuaC_00024CompileState*)rstack[sp - 1].obj)->strings_1;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/util/HashMap.put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_Object* (*__func_p) (JThreadRuntime *,struct java_lang_Object*,struct java_lang_Object*) = find_method(__ins->vm_table, 27, 6);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 154 , L130096434 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
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

void bridge_org_luaj_vm2_compiler_LuaC_00024CompileState_cachedLuaString__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LuaC_00024CompileState_cachedLuaString__Lorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2(runtime, ins);
}


// locals: 2
// stack: 1
// args: 1
struct java_lang_String* func_org_luaj_vm2_compiler_LuaC_00024CompileState_pushfstring__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3092, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 158 , L1478984550 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 158;
    rstack[sp++].obj = rlocal[1].obj;
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

void bridge_org_luaj_vm2_compiler_LuaC_00024CompileState_pushfstring__Ljava_lang_String_2_Ljava_lang_String_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LuaC_00024CompileState_pushfstring__Ljava_lang_String_2_Ljava_lang_String_2(runtime, ins);
}


