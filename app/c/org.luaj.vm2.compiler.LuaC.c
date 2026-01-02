// CLASS: org/luaj/vm2/compiler/LuaC extends org/luaj/vm2/compiler/Constants
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_compiler_LuaC_static {struct org_luaj_vm2_compiler_LuaC* instance_103;  };
struct org_luaj_vm2_compiler_LuaC_static static_var_org_luaj_vm2_compiler_LuaC = {NULL};


__refer arr_vmtable_org_luaj_vm2_compiler_LuaC_from_org_luaj_vm2_compiler_LuaC[] = {
    func_org_luaj_vm2_compiler_LuaC_compile__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2,  //0
    func_org_luaj_vm2_compiler_LuaC_load__Lorg_luaj_vm2_Prototype_2Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaFunction_2,  //1
    func_org_luaj_vm2_compiler_LuaC_load__Ljava_io_InputStream_2Ljava_lang_String_2Lorg_luaj_vm2_Globals_2_Lorg_luaj_vm2_LuaValue_2  //2
};
__refer arr_vmtable_org_luaj_vm2_compiler_LuaC_from_org_luaj_vm2_compiler_Constants[] = {
    NULL
};
__refer arr_vmtable_org_luaj_vm2_compiler_LuaC_from_org_luaj_vm2_Lua[] = {
    NULL
};
__refer arr_vmtable_org_luaj_vm2_compiler_LuaC_from_java_lang_Object[] = {
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
__refer arr_vmtable_org_luaj_vm2_compiler_LuaC_from_org_luaj_vm2_Globals_00024Compiler[] = {
    func_org_luaj_vm2_compiler_LuaC_compile__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2  //0
};
__refer arr_vmtable_org_luaj_vm2_compiler_LuaC_from_org_luaj_vm2_Globals_00024Loader[] = {
    func_org_luaj_vm2_compiler_LuaC_load__Lorg_luaj_vm2_Prototype_2Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaFunction_2  //0
};
VMTable vmtable_org_luaj_vm2_compiler_LuaC[] = {
    {421, 3, arr_vmtable_org_luaj_vm2_compiler_LuaC_from_org_luaj_vm2_compiler_LuaC}, //0
    {269, 0, arr_vmtable_org_luaj_vm2_compiler_LuaC_from_org_luaj_vm2_compiler_Constants}, //1
    {270, 0, arr_vmtable_org_luaj_vm2_compiler_LuaC_from_org_luaj_vm2_Lua}, //2
    {5, 10, arr_vmtable_org_luaj_vm2_compiler_LuaC_from_java_lang_Object}, //3
    {218, 1, arr_vmtable_org_luaj_vm2_compiler_LuaC_from_org_luaj_vm2_Globals_00024Compiler}, //4
    {289, 1, arr_vmtable_org_luaj_vm2_compiler_LuaC_from_org_luaj_vm2_Globals_00024Loader}, //5
};



// locals: 1
// stack: 2
// args: 2
void func_org_luaj_vm2_compiler_LuaC_install__Lorg_luaj_vm2_Globals_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LuaC* p0, struct org_luaj_vm2_Globals* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3374, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 86 , L1243800791 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 86;
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/compiler/LuaC instance Lorg/luaj/vm2/compiler/LuaC;
    rstack[sp].obj =static_var_org_luaj_vm2_compiler_LuaC.instance_103;
    sp += 1;
    // putfield org/luaj/vm2/Globals compiler Lorg/luaj/vm2/Globals$Compiler;
    sp -= 2;
    ((struct org_luaj_vm2_Globals*)rstack[sp + 0].obj)->compiler_60 = rstack[sp + 1].obj;
    ; 
    //  line no 87 , L227030447 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/compiler/LuaC instance Lorg/luaj/vm2/compiler/LuaC;
    rstack[sp].obj =static_var_org_luaj_vm2_compiler_LuaC.instance_103;
    sp += 1;
    // putfield org/luaj/vm2/Globals loader Lorg/luaj/vm2/Globals$Loader;
    sp -= 2;
    ((struct org_luaj_vm2_Globals*)rstack[sp + 0].obj)->loader_59 = rstack[sp + 1].obj;
    ; 
    //  line no 88 , L375918615 , bytecode index = 
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

void bridge_org_luaj_vm2_compiler_LuaC_install__Lorg_luaj_vm2_Globals_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LuaC_install__Lorg_luaj_vm2_Globals_2_V(runtime, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 1
// args: 0
void func_org_luaj_vm2_compiler_LuaC__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3375, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 90 , L930569137 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 90;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/compiler/Constants.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_Constants__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
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

void bridge_org_luaj_vm2_compiler_LuaC__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LuaC__init____V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 2
struct org_luaj_vm2_Prototype* func_org_luaj_vm2_compiler_LuaC_compile__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime, struct java_io_InputStream* p0, struct java_lang_String* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3376, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 100 , L757099121 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 100;
    // new org/luaj/vm2/compiler/LuaC$CompileState
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 265);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/LuaC$CompileState.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LuaC_00024CompileState__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/LuaC$CompileState.luaY_parser(Ljava/io/InputStream;Ljava/lang/String;)Lorg/luaj/vm2/Prototype;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Prototype* (*__func_p) (JThreadRuntime *,struct java_io_InputStream*,struct java_lang_String*) = find_method(__ins->vm_table, 265, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_org_luaj_vm2_compiler_LuaC_compile__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LuaC_compile__Ljava_io_InputStream_2Ljava_lang_String_2_Lorg_luaj_vm2_Prototype_2(runtime, ins, para[0].obj);
}


// locals: 4
// stack: 4
// args: 3
struct org_luaj_vm2_LuaFunction* func_org_luaj_vm2_compiler_LuaC_load__Lorg_luaj_vm2_Prototype_2Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaFunction_2(JThreadRuntime *runtime, struct org_luaj_vm2_Prototype* p0, struct java_lang_String* p1, struct org_luaj_vm2_LuaValue* p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3377, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 105 , L977320786 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 105;
    // new org/luaj/vm2/LuaClosure
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 164);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokespecial org/luaj/vm2/LuaClosure.<init>(Lorg/luaj/vm2/Prototype;Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaClosure__init___Lorg_luaj_vm2_Prototype_2Lorg_luaj_vm2_LuaValue_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_org_luaj_vm2_compiler_LuaC_load__Lorg_luaj_vm2_Prototype_2Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaFunction_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LuaC_load__Lorg_luaj_vm2_Prototype_2Ljava_lang_String_2Lorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaFunction_2(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 4
// stack: 5
// args: 3
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_compiler_LuaC_load__Ljava_io_InputStream_2Ljava_lang_String_2Lorg_luaj_vm2_Globals_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, struct java_io_InputStream* p0, struct java_lang_String* p1, struct org_luaj_vm2_Globals* p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3378, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 113 , L505693686 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 113;
    // new org/luaj/vm2/LuaClosure
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 164);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/compiler/LuaC.compile(Ljava/io/InputStream;Ljava/lang/String;)Lorg/luaj/vm2/Prototype;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Prototype* (*__func_p) (JThreadRuntime *,struct java_io_InputStream*,struct java_lang_String*) = find_method(__ins->vm_table, 421, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[3].obj;
    // invokespecial org/luaj/vm2/LuaClosure.<init>(Lorg/luaj/vm2/Prototype;Lorg/luaj/vm2/LuaValue;)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_LuaClosure__init___Lorg_luaj_vm2_Prototype_2Lorg_luaj_vm2_LuaValue_2_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
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

void bridge_org_luaj_vm2_compiler_LuaC_load__Ljava_io_InputStream_2Ljava_lang_String_2Lorg_luaj_vm2_Globals_2_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_compiler_LuaC_load__Ljava_io_InputStream_2Ljava_lang_String_2Lorg_luaj_vm2_Globals_2_Lorg_luaj_vm2_LuaValue_2(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 0
// stack: 2
// args: 1
void func_org_luaj_vm2_compiler_LuaC__clinit____V(JThreadRuntime *runtime, struct org_luaj_vm2_compiler_LuaC* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3379, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 78 , L675909854 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 78;
    // new org/luaj/vm2/compiler/LuaC
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 421);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial org/luaj/vm2/compiler/LuaC.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_compiler_LuaC__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic org/luaj/vm2/compiler/LuaC instance Lorg/luaj/vm2/compiler/LuaC;
    sp -= 1;
    static_var_org_luaj_vm2_compiler_LuaC.instance_103 = rstack[sp].obj;
    method_exit(runtime);
    return;
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_org_luaj_vm2_compiler_LuaC__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_compiler_LuaC__clinit____V(runtime, para[0].obj);
}


