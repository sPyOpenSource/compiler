// CLASS: org/luaj/vm2/Varargs$ArrayPartVarargs extends org/luaj/vm2/Varargs
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_Varargs_00024ArrayPartVarargs_static {};



__refer arr_vmtable_org_luaj_vm2_Varargs_00024ArrayPartVarargs_from_org_luaj_vm2_Varargs_00024ArrayPartVarargs[] = {
    func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_arg__I_Lorg_luaj_vm2_LuaValue_2,  //0
    func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_narg___I,  //1
    func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_arg1___Lorg_luaj_vm2_LuaValue_2,  //2
    func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_subargs__I_Lorg_luaj_vm2_Varargs_2,  //3
    func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_copyto___3Lorg_luaj_vm2_LuaValue_2II_V  //4
};
__refer arr_vmtable_org_luaj_vm2_Varargs_00024ArrayPartVarargs_from_org_luaj_vm2_Varargs[] = {
    func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_arg__I_Lorg_luaj_vm2_LuaValue_2,  //0
    func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_narg___I,  //1
    func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_arg1___Lorg_luaj_vm2_LuaValue_2,  //2
    func_org_luaj_vm2_Varargs_eval___Lorg_luaj_vm2_Varargs_2,  //3
    func_org_luaj_vm2_Varargs_isTailcall___Z,  //4
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
    func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_subargs__I_Lorg_luaj_vm2_Varargs_2,  //60
    func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_copyto___3Lorg_luaj_vm2_LuaValue_2II_V,  //61
    func_org_luaj_vm2_Varargs_dealias___Lorg_luaj_vm2_Varargs_2  //62
};
__refer arr_vmtable_org_luaj_vm2_Varargs_00024ArrayPartVarargs_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_Varargs_00024ArrayPartVarargs[] = {
    {53, 5, arr_vmtable_org_luaj_vm2_Varargs_00024ArrayPartVarargs_from_org_luaj_vm2_Varargs_00024ArrayPartVarargs}, //0
    {2, 63, arr_vmtable_org_luaj_vm2_Varargs_00024ArrayPartVarargs_from_org_luaj_vm2_Varargs}, //1
    {5, 10, arr_vmtable_org_luaj_vm2_Varargs_00024ArrayPartVarargs_from_java_lang_Object}, //2
};



// locals: 4
// stack: 2
// args: 3
void func_org_luaj_vm2_Varargs_00024ArrayPartVarargs__init____3Lorg_luaj_vm2_LuaValue_2II_V(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1655, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 654 , L1044965465 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 654;
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
    //  line no 655 , L836621476 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/Varargs$ArrayPartVarargs v [Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp + 0].obj)->v_1 = rstack[sp + 1].obj;
    ; 
    //  line no 656 , L442465916 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield org/luaj/vm2/Varargs$ArrayPartVarargs offset I
    sp -= 2;
    ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp + 0].obj)->offset_0 = stack[sp + 1].i;
    ; 
    //  line no 657 , L1529002352 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // putfield org/luaj/vm2/Varargs$ArrayPartVarargs length I
    sp -= 2;
    ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp + 0].obj)->length_2 = stack[sp + 1].i;
    ; 
    //  line no 658 , L584157293 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getstatic org/luaj/vm2/LuaValue NONE Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NONE_16;
    sp += 1;
    // putfield org/luaj/vm2/Varargs$ArrayPartVarargs more Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp + 0].obj)->more_3 = rstack[sp + 1].obj;
    ; 
    //  line no 659 , L2113273959 , bytecode index = 
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

void bridge_org_luaj_vm2_Varargs_00024ArrayPartVarargs__init____3Lorg_luaj_vm2_LuaValue_2II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Varargs_00024ArrayPartVarargs__init____3Lorg_luaj_vm2_LuaValue_2II_V(runtime, ins, para[0].i, para[1].i);
}


// locals: 5
// stack: 2
// args: 4
void func_org_luaj_vm2_Varargs_00024ArrayPartVarargs__init____3Lorg_luaj_vm2_LuaValue_2IILorg_luaj_vm2_Varargs_2_V(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2, struct org_luaj_vm2_Varargs* p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1656, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    rlocal[3].obj = p3;
    ; 
    //  line no 667 , L1386020581 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 667;
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
    //  line no 668 , L2090894907 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/Varargs$ArrayPartVarargs v [Lorg/luaj/vm2/LuaValue;
    sp -= 2;
    ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp + 0].obj)->v_1 = rstack[sp + 1].obj;
    ; 
    //  line no 669 , L832066800 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[2].i;
    // putfield org/luaj/vm2/Varargs$ArrayPartVarargs offset I
    sp -= 2;
    ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp + 0].obj)->offset_0 = stack[sp + 1].i;
    ; 
    //  line no 670 , L1955587357 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[3].i;
    // putfield org/luaj/vm2/Varargs$ArrayPartVarargs length I
    sp -= 2;
    ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp + 0].obj)->length_2 = stack[sp + 1].i;
    ; 
    //  line no 671 , L1095849663 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // putfield org/luaj/vm2/Varargs$ArrayPartVarargs more Lorg/luaj/vm2/Varargs;
    sp -= 2;
    ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp + 0].obj)->more_3 = rstack[sp + 1].obj;
    ; 
    //  line no 672 , L960004592 , bytecode index = 
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

void bridge_org_luaj_vm2_Varargs_00024ArrayPartVarargs__init____3Lorg_luaj_vm2_LuaValue_2IILorg_luaj_vm2_Varargs_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Varargs_00024ArrayPartVarargs__init____3Lorg_luaj_vm2_LuaValue_2IILorg_luaj_vm2_Varargs_2_V(runtime, ins, para[0].i, para[1].i, para[2].obj);
}


// locals: 2
// stack: 3
// args: 1
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_arg__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1657, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 674 , L1096343229 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 674;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L183995527;
    // getstatic org/luaj/vm2/LuaValue NIL Lorg/luaj/vm2/LuaValue;
    rstack[sp].obj =static_var_org_luaj_vm2_LuaValue.NIL_13;
    sp += 1;
    goto L2000530216;
    L183995527:
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->length_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L516934601;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs v [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->offset_0;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // arrload __refer  ,  L183995527 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    goto L2000530216;
    L516934601:
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs more Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->more_3;
    sp += 0;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->length_2;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
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
    L2000530216:
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

void bridge_org_luaj_vm2_Varargs_00024ArrayPartVarargs_arg__I_Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_arg__I_Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
s32 func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_narg___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1658, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 677 , L801142660 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 677;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->length_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs more Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->more_3;
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
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
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

void bridge_org_luaj_vm2_Varargs_00024ArrayPartVarargs_narg___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_narg___I(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
struct org_luaj_vm2_LuaValue* func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_arg1___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1659, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 680 , L1439693138 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 680;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->length_2;
    sp += 0;
    if(stack[--sp].i  <= 0) goto L1711641083;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs v [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->offset_0;
    sp += 0;
    // arrload __refer  ,  L1439693138 bc index = 
    {
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 6, 
            goto __ExceptionHandler;
        }
        rstack[sp].obj = arr->prop.as_obj_arr[idx];
        sp += 1;
    }
    goto L1247127272;
    L1711641083:
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs more Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->more_3;
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
    L1247127272:
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

void bridge_org_luaj_vm2_Varargs_00024ArrayPartVarargs_arg1___Lorg_luaj_vm2_LuaValue_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_arg1___Lorg_luaj_vm2_LuaValue_2(runtime, ins);
}


// locals: 2
// stack: 5
// args: 1
struct org_luaj_vm2_Varargs* func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_subargs__I_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1660, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 683 , L577442875 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 683;
    stack[sp++].i = local[1].i;
    if(stack[--sp].i  > 0) goto L1747702724;
    ; 
    //  line no 684 , L254692047 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 31);
    // invokestatic org/luaj/vm2/LuaValue.argerror(ILjava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 3;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_argerror__ILjava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, stack[sp + 1].i, rstack[sp + 2].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1747702724:
    //  line no 685 , L1747702724 , bytecode index = 
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L604602011;
    ; 
    //  line no 686 , L1589214445 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    method_exit(runtime);
    return rstack[sp - 1].obj;
    L604602011:
    //  line no 687 , L604602011 , bytecode index = 
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->length_2;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1757032717;
    ; 
    //  line no 688 , L356476647 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs more Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->more_3;
    sp += 0;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->length_2;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
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
    L1757032717:
    //  line no 689 , L1757032717 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs v [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->offset_0;
    sp += 0;
    stack[sp++].i = local[1].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->length_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs more Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->more_3;
    sp += 0;
    // invokestatic org/luaj/vm2/LuaValue.varargsOf([Lorg/luaj/vm2/LuaValue;IILorg/luaj/vm2/Varargs;)Lorg/luaj/vm2/Varargs;
    {
        sp -= 5;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_varargsOf___3Lorg_luaj_vm2_LuaValue_2IILorg_luaj_vm2_Varargs_2_Lorg_luaj_vm2_Varargs_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, stack[sp + 3].i, rstack[sp + 4].obj);
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

void bridge_org_luaj_vm2_Varargs_00024ArrayPartVarargs_subargs__I_Lorg_luaj_vm2_Varargs_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_subargs__I_Lorg_luaj_vm2_Varargs_2(runtime, ins);
}


// locals: 5
// stack: 5
// args: 3
void func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_copyto___3Lorg_luaj_vm2_LuaValue_2II_V(JThreadRuntime *runtime, JArray * p0, s32 p1, s32 p2){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1661, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 692 , L1868987089 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 692;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs length I
    stack[sp - 1].i = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->length_2;
    sp += 0;
    stack[sp++].i = local[3].i;
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
    local[4].i = stack[--sp].i;
    ; 
    //  line no 693 , L1449987177 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs v [Lorg/luaj/vm2/LuaValue;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->v_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs offset I
    stack[sp - 1].i = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->offset_0;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[4].i;
    // invokestatic java/lang/System.arraycopy(Ljava/lang/Object;ILjava/lang/Object;II)V
    {
        sp -= 6;
        func_java_lang_System_arraycopy__Ljava_lang_Object_2ILjava_lang_Object_2II_V(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj, stack[sp + 2].i, rstack[sp + 3].obj, stack[sp + 4].i, stack[sp + 5].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 694 , L948650013 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/Varargs$ArrayPartVarargs more Lorg/luaj/vm2/Varargs;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_Varargs_00024ArrayPartVarargs*)rstack[sp - 1].obj)->more_3;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[3].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // invokevirtual org/luaj/vm2/Varargs.copyto([Lorg/luaj/vm2/LuaValue;II)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,s32) = find_method(__ins->vm_table, 2, 61);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 695 , L734971558 , bytecode index = 
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

void bridge_org_luaj_vm2_Varargs_00024ArrayPartVarargs_copyto___3Lorg_luaj_vm2_LuaValue_2II_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_Varargs_00024ArrayPartVarargs_copyto___3Lorg_luaj_vm2_LuaValue_2II_V(runtime, ins, para[0].i, para[1].i);
}


