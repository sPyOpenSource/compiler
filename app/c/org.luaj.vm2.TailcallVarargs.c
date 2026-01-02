// CLASS: org/luaj/vm2/TailcallVarargs extends org/luaj/vm2/Varargs
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_TailcallVarargs_static {};



__refer arr_vmtable_org_luaj_vm2_TailcallVarargs_from_org_luaj_vm2_TailcallVarargs[] = {
    func_org_luaj_vm2_TailcallVarargs_isTailcall___Z,  //0
    func_org_luaj_vm2_TailcallVarargs_eval___Lorg_luaj_vm2_Varargs_2,  //1
    func_org_luaj_vm2_TailcallVarargs_arg__I_Lorg_luaj_vm2_LuaValue_2,  //2
    func_org_luaj_vm2_TailcallVarargs_arg1___Lorg_luaj_vm2_LuaValue_2,  //3
    func_org_luaj_vm2_TailcallVarargs_narg___I,  //4
    func_org_luaj_vm2_TailcallVarargs_subargs__I_Lorg_luaj_vm2_Varargs_2  //5
};
__refer arr_vmtable_org_luaj_vm2_TailcallVarargs_from_org_luaj_vm2_Varargs[] = {
    func_org_luaj_vm2_TailcallVarargs_arg__I_Lorg_luaj_vm2_LuaValue_2,  //0
    func_org_luaj_vm2_TailcallVarargs_narg___I,  //1
    func_org_luaj_vm2_TailcallVarargs_arg1___Lorg_luaj_vm2_LuaValue_2,  //2
    func_org_luaj_vm2_TailcallVarargs_eval___Lorg_luaj_vm2_Varargs_2,  //3
    func_org_luaj_vm2_TailcallVarargs_isTailcall___Z,  //4
    func_org_luaj_vm2_Varargs_type__I_I,  //5
    func_org_luaj_vm2_Varargs_isnil__I_Z,  //6
    func_org_luaj_vm2_Varargs_isfunction__I_Z,  //7
    func_org_luaj_vm2_Varargs_isnumber__I_Z,  //8
    func_org_luaj_vm2_Varargs_isstring__I_Z,  //9
    func_org_luaj_vm2_Varargs_istable__I_Z,  //10
    func_org_luaj_vm2_Varargs_isthread__I_Z,  //11
    func_org_luaj_vm2_Varargs_isuserdata__I_Z,  //12
    func_org_luaj_vm2_Varargs_isvalue__I_Z,  //13
    func_org_luaj_vm2_Varargs_optboolean__IZ_Z,  //14
    func_org_luaj_vm2_Varargs_optclosure__ILorg_luaj_vm2_LuaClosure_2_Lorg_luaj_vm2_LuaClosure_2,  //15
    func_org_luaj_vm2_Varargs_optdouble__ID_D,  //16
    func_org_luaj_vm2_Varargs_optfunction__ILorg_luaj_vm2_LuaFunction_2_Lorg_luaj_vm2_LuaFunction_2,  //17
    func_org_luaj_vm2_Varargs_optint__II_I,  //18
    func_org_luaj_vm2_Varargs_optinteger__ILorg_luaj_vm2_LuaInteger_2_Lorg_luaj_vm2_LuaInteger_2,  //19
    func_org_luaj_vm2_Varargs_optlong__IJ_J,  //20
    func_org_luaj_vm2_Varargs_optnumber__ILorg_luaj_vm2_LuaNumber_2_Lorg_luaj_vm2_LuaNumber_2,  //21
    func_org_luaj_vm2_Varargs_optjstring__ILjava_lang_String_2_Ljava_lang_String_2,  //22
    func_org_luaj_vm2_Varargs_optstring__ILorg_luaj_vm2_LuaString_2_Lorg_luaj_vm2_LuaString_2,  //23
    func_org_luaj_vm2_Varargs_opttable__ILorg_luaj_vm2_LuaTable_2_Lorg_luaj_vm2_LuaTable_2,  //24
    func_org_luaj_vm2_Varargs_optthread__ILorg_luaj_vm2_LuaThread_2_Lorg_luaj_vm2_LuaThread_2,  //25
    func_org_luaj_vm2_Varargs_optuserdata__ILjava_lang_Object_2_Ljava_lang_Object_2,  //26
    func_org_luaj_vm2_Varargs_optuserdata__ILjava_lang_Class_2Ljava_lang_Object_2_Ljava_lang_Object_2,  //27
    func_org_luaj_vm2_Varargs_optvalue__ILorg_luaj_vm2_LuaValue_2_Lorg_luaj_vm2_LuaValue_2,  //28
    func_org_luaj_vm2_Varargs_checkboolean__I_Z,  //29
    func_org_luaj_vm2_Varargs_checkclosure__I_Lorg_luaj_vm2_LuaClosure_2,  //30
    func_org_luaj_vm2_Varargs_checkdouble__I_D,  //31
    func_org_luaj_vm2_Varargs_checkfunction__I_Lorg_luaj_vm2_LuaFunction_2,  //32
    func_org_luaj_vm2_Varargs_checkint__I_I,  //33
    func_org_luaj_vm2_Varargs_checkinteger__I_Lorg_luaj_vm2_LuaInteger_2,  //34
    func_org_luaj_vm2_Varargs_checklong__I_J,  //35
    func_org_luaj_vm2_Varargs_checknumber__I_Lorg_luaj_vm2_LuaNumber_2,  //36
    func_org_luaj_vm2_Varargs_checkjstring__I_Ljava_lang_String_2,  //37
    func_org_luaj_vm2_Varargs_checkstring__I_Lorg_luaj_vm2_LuaString_2,  //38
    func_org_luaj_vm2_Varargs_checktable__I_Lorg_luaj_vm2_LuaTable_2,  //39
    func_org_luaj_vm2_Varargs_checkthread__I_Lorg_luaj_vm2_LuaThread_2,  //40
    func_org_luaj_vm2_Varargs_checkuserdata__I_Ljava_lang_Object_2,  //41
    func_org_luaj_vm2_Varargs_checkuserdata__ILjava_lang_Class_2_Ljava_lang_Object_2,  //42
    func_org_luaj_vm2_Varargs_checkvalue__I_Lorg_luaj_vm2_LuaValue_2,  //43
    func_org_luaj_vm2_Varargs_checknotnil__I_Lorg_luaj_vm2_LuaValue_2,  //44
    func_org_luaj_vm2_Varargs_argcheck__ZILjava_lang_String_2_V,  //45
    func_org_luaj_vm2_Varargs_isnoneornil__I_Z,  //46
    func_org_luaj_vm2_Varargs_toboolean__I_Z,  //47
    func_org_luaj_vm2_Varargs_tobyte__I_B,  //48
    func_org_luaj_vm2_Varargs_tochar__I_C,  //49
    func_org_luaj_vm2_Varargs_todouble__I_D,  //50
    func_org_luaj_vm2_Varargs_tofloat__I_F,  //51
    func_org_luaj_vm2_Varargs_toint__I_I,  //52
    func_org_luaj_vm2_Varargs_tolong__I_J,  //53
    func_org_luaj_vm2_Varargs_tojstring__I_Ljava_lang_String_2,  //54
    func_org_luaj_vm2_Varargs_toshort__I_S,  //55
    func_org_luaj_vm2_Varargs_touserdata__I_Ljava_lang_Object_2,  //56
    func_org_luaj_vm2_Varargs_touserdata__ILjava_lang_Class_2_Ljava_lang_Object_2,  //57
    func_org_luaj_vm2_Varargs_tojstring___Ljava_lang_String_2,  //58
    func_org_luaj_vm2_Varargs_toString___Ljava_lang_String_2,  //59
    func_org_luaj_vm2_TailcallVarargs_subargs__I_Lorg_luaj_vm2_Varargs_2,  //60
    func_org_luaj_vm2_Varargs_copyto___3Lorg_luaj_vm2_LuaValue_2II_V,  //61
    func_org_luaj_vm2_Varargs_dealias___Lorg_luaj_vm2_Varargs_2  //62
};
__refer arr_vmtable_org_luaj_vm2_TailcallVarargs_from_java_lang_Object[] = {
    func_org_luaj_vm2_Varargs_toString___Ljava_lang_String_2,  //0
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
VMTable vmtable_org_luaj_vm2_TailcallVarargs[] = {
    {4, 6, arr_vmtable_org_luaj_vm2_TailcallVarargs_from_org_luaj_vm2_TailcallVarargs}, //0
    {2, 63, arr_vmtable_org_luaj_vm2_TailcallVarargs_from_org_luaj_vm2_Varargs}, //1
    {5, 10, arr_vmtable_org_luaj_vm2_TailcallVarargs_from_java_lang_Object}, //2
};



// locals: 3
// stack: 2
// args: 2
void func_org_luaj_vm2_TailcallVarargs__init___Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0, struct org_luaj_vm2_Varargs* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 0, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 49 , L124313277 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 49;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/Varargs.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Varargs__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 50 , L1712536284 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/TailcallVarargs func Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp + 0].obj)->func_0 = rstack[sp + 1].obj;
    ; 
    //  line no 51 , L2080166188 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // putfield org/luaj/vm2/TailcallVarargs args Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp + 0].obj)->args_1 = rstack[sp + 1].obj;
    ; 
    //  line no 52 , L1123225098 , bytecode index = 
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

void bridge_org_luaj_vm2_TailcallVarargs__init___Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_TailcallVarargs__init___Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_V(runtime, ins, para[0].obj);
}


// locals: 4
// stack: 3
// args: 3
void func_org_luaj_vm2_TailcallVarargs__init___Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_LuaValue* p0, struct org_luaj_vm2_LuaValue* p1, struct org_luaj_vm2_Varargs* p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    ; 
    //  line no 54 , L1528637575 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 54;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial org/luaj/vm2/Varargs.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_org_luaj_vm2_Varargs__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 55 , L1190524793 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/LuaValue.get(Lorg/luaj/vm2/LuaValue;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaValue*) = find_method(__ins->vm_table, 1, 71);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/TailcallVarargs func Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp + 0].obj)->func_0 = rstack[sp + 1].obj;
    ; 
    //  line no 56 , L1989972246 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[3].obj;
    // invokestatic org/luaj/vm2/LuaValue.varargsOf(Lorg/luaj/vm2/LuaValue;Lorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_varargsOf__Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/TailcallVarargs args Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp + 0].obj)->args_1 = rstack[sp + 1].obj;
    ; 
    //  line no 57 , L1791930789 , bytecode index = 
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

void bridge_org_luaj_vm2_TailcallVarargs__init___Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_TailcallVarargs__init___Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_LuaValue_2Lorg_luaj_vm2_Varargs_2_V(runtime, ins, para[0].obj, para[1].obj);
}


// locals: 1
// stack: 1
// args: 0
s8 func_org_luaj_vm2_TailcallVarargs_isTailcall___Z(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 60 , L12209492 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 60;
    // iconst_1
    stack[sp++].i = 1;
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

void bridge_org_luaj_vm2_TailcallVarargs_isTailcall___Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_TailcallVarargs_isTailcall___Z(runtime, ins);
}


// locals: 3
// stack: 2
// args: 0
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_TailcallVarargs_eval___Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 3, &rstack[0], &rlocal[0], &sp);
    L232824863:
    //  line no 64 , L232824863 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 64;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/TailcallVarargs result Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp - 1].obj)->result_2;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1282788025;
    ; 
    //  line no 65 , L519569038 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/TailcallVarargs func Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp - 1].obj)->func_0;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/TailcallVarargs args Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp - 1].obj)->args_1;
    sp += 0;
    // invokevirtual org/luaj/vm2/LuaValue.onInvoke(Lorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Varargs* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_Varargs*) = find_method(__ins->vm_table, 1, 207);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 66 , L1870252780 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual org/luaj/vm2/Varargs.isTailcall()Z
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 2, 4);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1729199940;
    ; 
    //  line no 67 , L97730845 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // checkcast org/luaj/vm2/TailcallVarargs
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 3);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 3, 
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 68 , L611437735 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/TailcallVarargs func Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp - 1].obj)->func_0;
    sp += 0;
    // putfield org/luaj/vm2/TailcallVarargs func Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp + 0].obj)->func_0 = rstack[sp + 1].obj;
    ; 
    //  line no 69 , L100555887 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // getfield org/luaj/vm2/TailcallVarargs args Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp - 1].obj)->args_1;
    sp += 0;
    // putfield org/luaj/vm2/TailcallVarargs args Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp + 0].obj)->args_1 = rstack[sp + 1].obj;
    ; 
    //  line no 70 , L1769597131 , bytecode index = 
    goto L1983747920;
    L1729199940:
    //  line no 72 , L1729199940 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/TailcallVarargs result Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp + 0].obj)->result_2 = rstack[sp + 1].obj;
    ; 
    //  line no 73 , L1543727556 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/TailcallVarargs func Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp + 0].obj)->func_0 = rstack[sp + 1].obj;
    ; 
    //  line no 74 , L736709391 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // aconst null
    rstack[sp++].obj = NULL;
    // putfield org/luaj/vm2/TailcallVarargs args Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp + 0].obj)->args_1 = rstack[sp + 1].obj;
    L1983747920:
    //  line no 76 , L1983747920 , bytecode index = 
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L232824863;
    L1282788025:
    //  line no 77 , L1282788025 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/TailcallVarargs result Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp - 1].obj)->result_2;
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

void bridge_org_luaj_vm2_TailcallVarargs_eval___Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_TailcallVarargs_eval___Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_TailcallVarargs_arg__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 4, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 81 , L401424608 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 81;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/TailcallVarargs result Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp - 1].obj)->result_2;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L1348949648;
    ; 
    //  line no 82 , L834133664 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/TailcallVarargs.eval()Lorg/luaj/vm2/Varargs;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Varargs* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 4, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1348949648:
    //  line no 83 , L1348949648 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/TailcallVarargs result Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp - 1].obj)->result_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/Varargs.arg(I)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 2, 0);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
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

void bridge_org_luaj_vm2_TailcallVarargs_arg__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_TailcallVarargs_arg__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_TailcallVarargs_arg1___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 5, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 87 , L1205044462 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 87;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/TailcallVarargs result Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp - 1].obj)->result_2;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L761960786;
    ; 
    //  line no 88 , L581374081 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/TailcallVarargs.eval()Lorg/luaj/vm2/Varargs;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Varargs* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 4, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L761960786:
    //  line no 89 , L761960786 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/TailcallVarargs result Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp - 1].obj)->result_2;
    sp += 0;
    // invokevirtual org/luaj/vm2/Varargs.arg1()Lorg/luaj/vm2/LuaValue;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaValue* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 2, 2);
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

void bridge_org_luaj_vm2_TailcallVarargs_arg1___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_TailcallVarargs_arg1___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_org_luaj_vm2_TailcallVarargs_narg___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 6, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 93 , L1654589030 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 93;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/TailcallVarargs result Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp - 1].obj)->result_2;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L466002798;
    ; 
    //  line no 94 , L33524623 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/TailcallVarargs.eval()Lorg/luaj/vm2/Varargs;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Varargs* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 4, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L466002798:
    //  line no 95 , L466002798 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/TailcallVarargs result Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp - 1].obj)->result_2;
    sp += 0;
    // invokevirtual org/luaj/vm2/Varargs.narg()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 2, 1);
        stack[sp].i = __func_p(runtime);
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

void bridge_org_luaj_vm2_TailcallVarargs_narg___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_TailcallVarargs_narg___I(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_TailcallVarargs_subargs__I_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 7, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 99 , L575335780 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 99;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/TailcallVarargs result Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp - 1].obj)->result_2;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L205125520;
    ; 
    //  line no 100 , L1911006827 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokevirtual org/luaj/vm2/TailcallVarargs.eval()Lorg/luaj/vm2/Varargs;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Varargs* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 4, 1);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L205125520:
    //  line no 101 , L205125520 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/TailcallVarargs result Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_TailcallVarargs*)rstack[sp - 1].obj)->result_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    // invokevirtual org/luaj/vm2/Varargs.subargs(I)Lorg/luaj/vm2/Varargs;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Varargs* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 2, 60);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
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

void bridge_org_luaj_vm2_TailcallVarargs_subargs__I_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_TailcallVarargs_subargs__I_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


