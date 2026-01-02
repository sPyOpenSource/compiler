// CLASS: org/luaj/vm2/lib/StringLib$FormatDesc extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct org_luaj_vm2_lib_StringLib_00024FormatDesc_static {s32 MAX_1FLAGS_5;  };
struct org_luaj_vm2_lib_StringLib_00024FormatDesc_static static_var_org_luaj_vm2_lib_StringLib_00024FormatDesc = {0};


__refer arr_vmtable_org_luaj_vm2_lib_StringLib_00024FormatDesc_from_org_luaj_vm2_lib_StringLib_00024FormatDesc[] = {
    func_org_luaj_vm2_lib_StringLib_00024FormatDesc_format__Lorg_luaj_vm2_Buffer_2B_V,  //0
    func_org_luaj_vm2_lib_StringLib_00024FormatDesc_format__Lorg_luaj_vm2_Buffer_2J_V,  //1
    func_org_luaj_vm2_lib_StringLib_00024FormatDesc_format__Lorg_luaj_vm2_Buffer_2D_V,  //2
    func_org_luaj_vm2_lib_StringLib_00024FormatDesc_format__Lorg_luaj_vm2_Buffer_2Lorg_luaj_vm2_LuaString_2_V,  //3
    func_org_luaj_vm2_lib_StringLib_00024FormatDesc_pad__Lorg_luaj_vm2_Buffer_2CI_V  //4
};
__refer arr_vmtable_org_luaj_vm2_lib_StringLib_00024FormatDesc_from_java_lang_Object[] = {
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
VMTable vmtable_org_luaj_vm2_lib_StringLib_00024FormatDesc[] = {
    {117, 5, arr_vmtable_org_luaj_vm2_lib_StringLib_00024FormatDesc_from_org_luaj_vm2_lib_StringLib_00024FormatDesc}, //0
    {5, 10, arr_vmtable_org_luaj_vm2_lib_StringLib_00024FormatDesc_from_java_lang_Object}, //1
};



// locals: 9
// stack: 4
// args: 4
void func_org_luaj_vm2_lib_StringLib_00024FormatDesc__init___Lorg_luaj_vm2_lib_StringLib_2Lorg_luaj_vm2_Varargs_2Lorg_luaj_vm2_LuaString_2I_V(JThreadRuntime *runtime, struct org_luaj_vm2_lib_StringLib* p0, struct org_luaj_vm2_Varargs* p1, struct org_luaj_vm2_LuaString* p2, s32 p3){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1285, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    local[3].i = p3;
    ; 
    //  line no 350 , L176041373 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 350;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // putfield org/luaj/vm2/lib/StringLib$FormatDesc this$0 Lorg/luaj/vm2/lib/StringLib;
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp + 0].obj)->this_000240_11 = rstack[sp + 1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 351 , L1967617997 , bytecode index = 
    stack[sp++].i = local[4].i;
    local[5].i = stack[--sp].i;
    ; 
    rstack[sp++].obj = rlocal[3].obj;
    // invokevirtual org/luaj/vm2/LuaString.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 85);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[6].i = stack[--sp].i;
    ; 
    //  line no 352 , L925803196 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[7].i = stack[--sp].i;
    ; 
    //  line no 354 , L1288135425 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    local[8].i = stack[--sp].i;
    L49318987:
    //  line no 355 , L49318987 , bytecode index = 
    stack[sp++].i = local[8].i;
    if(stack[--sp].i  == 0) goto L1058650291;
    ; 
    //  line no 356 , L2111882926 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L172518776;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[5].i;
    // iinc slot 5 value 1
    local[5].i += 1;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L215759534;
    L172518776:
    // iconst_0
    stack[sp++].i = 0;
    L215759534:
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    local[7].i = stack[--sp].i;
    switch(stack[--sp].i){
        case 32:
            goto L98351968;
        case 35:
            goto L1278616846;
        case 43:
            goto L559050604;
        case 45:
            goto L1240843015;
        case 48:
            goto L697460450;
        default:
            goto L2129844134;
    }
    L1240843015:
    //  line no 357 , L1240843015 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield org/luaj/vm2/lib/StringLib$FormatDesc leftAdjust Z
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp + 0].obj)->leftAdjust_0 = stack[sp + 1].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L49318987;
    L559050604:
    //  line no 358 , L559050604 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield org/luaj/vm2/lib/StringLib$FormatDesc explicitPlus Z
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp + 0].obj)->explicitPlus_2 = stack[sp + 1].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L49318987;
    L98351968:
    //  line no 359 , L98351968 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield org/luaj/vm2/lib/StringLib$FormatDesc space Z
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp + 0].obj)->space_3 = stack[sp + 1].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L49318987;
    L1278616846:
    //  line no 360 , L1278616846 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield org/luaj/vm2/lib/StringLib$FormatDesc alternateForm Z
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp + 0].obj)->alternateForm_4 = stack[sp + 1].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L49318987;
    L697460450:
    //  line no 361 , L697460450 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_1
    stack[sp++].i = 1;
    // putfield org/luaj/vm2/lib/StringLib$FormatDesc zeroPad Z
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp + 0].obj)->zeroPad_1 = stack[sp + 1].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L49318987;
    L2129844134:
    //  line no 362 , L2129844134 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[8].i = stack[--sp].i;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L49318987;
    L1058650291:
    //  line no 365 , L1058650291 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // iconst_5
    stack[sp++].i = 5;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1416706187;
    ; 
    //  line no 366 , L1726616678 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2359);
    // invokestatic org/luaj/vm2/LuaValue.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_error__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1416706187:
    //  line no 368 , L1416706187 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_-1
    stack[sp++].i = -1;
    // putfield org/luaj/vm2/lib/StringLib$FormatDesc width I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp + 0].obj)->width_6 = stack[sp + 1].i;
    ; 
    //  line no 369 , L23076423 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // invokestatic java/lang/Character.isDigit(C)Z
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Character_isDigit__C_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1006624255;
    ; 
    //  line no 370 , L1721180011 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[7].i;
    //  bipush 48
    stack[sp++].i = 48;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$FormatDesc width I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp + 0].obj)->width_6 = stack[sp + 1].i;
    ; 
    //  line no 371 , L1349025531 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1367068823;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[5].i;
    // iinc slot 5 value 1
    local[5].i += 1;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L338620258;
    L1367068823:
    // iconst_0
    stack[sp++].i = 0;
    L338620258:
    local[7].i = stack[--sp].i;
    ; 
    //  line no 372 , L1251788491 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // invokestatic java/lang/Character.isDigit(C)Z
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Character_isDigit__C_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1006624255;
    ; 
    //  line no 373 , L1502668485 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc width I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->width_6;
    sp += 0;
    //  bipush 10
    stack[sp++].i = 10;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[7].i;
    //  bipush 48
    stack[sp++].i = 48;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$FormatDesc width I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp + 0].obj)->width_6 = stack[sp + 1].i;
    ; 
    //  line no 374 , L1457551880 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L903268937;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[5].i;
    // iinc slot 5 value 1
    local[5].i += 1;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L424732838;
    L903268937:
    // iconst_0
    stack[sp++].i = 0;
    L424732838:
    local[7].i = stack[--sp].i;
    L1006624255:
    //  line no 378 , L1006624255 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_-1
    stack[sp++].i = -1;
    // putfield org/luaj/vm2/lib/StringLib$FormatDesc precision I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp + 0].obj)->precision_7 = stack[sp + 1].i;
    ; 
    //  line no 379 , L1193841543 , bytecode index = 
    stack[sp++].i = local[7].i;
    //  bipush 46
    stack[sp++].i = 46;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L315461968;
    ; 
    //  line no 380 , L290096578 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L255941269;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[5].i;
    // iinc slot 5 value 1
    local[5].i += 1;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L217470033;
    L255941269:
    // iconst_0
    stack[sp++].i = 0;
    L217470033:
    local[7].i = stack[--sp].i;
    ; 
    //  line no 381 , L1917784974 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // invokestatic java/lang/Character.isDigit(C)Z
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Character_isDigit__C_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L315461968;
    ; 
    //  line no 382 , L938405008 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[7].i;
    //  bipush 48
    stack[sp++].i = 48;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$FormatDesc precision I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp + 0].obj)->precision_7 = stack[sp + 1].i;
    ; 
    //  line no 383 , L855547146 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L211031000;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[5].i;
    // iinc slot 5 value 1
    local[5].i += 1;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L105751207;
    L211031000:
    // iconst_0
    stack[sp++].i = 0;
    L105751207:
    local[7].i = stack[--sp].i;
    ; 
    //  line no 384 , L1174881426 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // invokestatic java/lang/Character.isDigit(C)Z
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Character_isDigit__C_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L315461968;
    ; 
    //  line no 385 , L14124949 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc precision I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->precision_7;
    sp += 0;
    //  bipush 10
    stack[sp++].i = 10;
    stack[sp - 2].i = stack[sp - 2].i * stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[7].i;
    //  bipush 48
    stack[sp++].i = 48;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$FormatDesc precision I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp + 0].obj)->precision_7 = stack[sp + 1].i;
    ; 
    //  line no 386 , L745627268 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[6].i;
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1195542839;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[5].i;
    // iinc slot 5 value 1
    local[5].i += 1;
    // invokevirtual org/luaj/vm2/LuaString.luaByte(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 31, 87);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    goto L1000171161;
    L1195542839:
    // iconst_0
    stack[sp++].i = 0;
    L1000171161:
    local[7].i = stack[--sp].i;
    L315461968:
    //  line no 391 , L315461968 , bytecode index = 
    stack[sp++].i = local[7].i;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    // invokestatic java/lang/Character.isDigit(C)Z
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Character_isDigit__C_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L130721104;
    ; 
    //  line no 392 , L560549459 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 2360);
    // invokestatic org/luaj/vm2/LuaValue.error(Ljava/lang/String;)Lorg/luaj/vm2/LuaValue;
    {
        sp -= 2;
        rstack[sp].obj = func_org_luaj_vm2_LuaValue_error__Ljava_lang_String_2_Lorg_luaj_vm2_LuaValue_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L130721104:
    //  line no 394 , L130721104 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc zeroPad Z
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->zeroPad_1;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc leftAdjust Z
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->leftAdjust_0;
    sp += 0;
    if(stack[--sp].i  != 0) goto L1924227192;
    // iconst_1
    stack[sp++].i = 1;
    goto L583559449;
    L1924227192:
    // iconst_0
    stack[sp++].i = 0;
    L583559449:
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$FormatDesc zeroPad Z
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp + 0].obj)->zeroPad_1 = stack[sp + 1].i;
    ; 
    //  line no 395 , L1895479349 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[7].i;
    // putfield org/luaj/vm2/lib/StringLib$FormatDesc conversion I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp + 0].obj)->conversion_8 = stack[sp + 1].i;
    ; 
    //  line no 396 , L453671855 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[4].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    // putfield org/luaj/vm2/lib/StringLib$FormatDesc length I
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp + 0].obj)->length_9 = stack[sp + 1].i;
    ; 
    //  line no 397 , L1648458262 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    stack[sp++].i = local[4].i;
    // iconst_1
    stack[sp++].i = 1;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[5].i;
    // invokevirtual org/luaj/vm2/LuaString.substring(II)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 31, 76);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/LuaString.tojstring()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 31, 4);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield org/luaj/vm2/lib/StringLib$FormatDesc src Ljava/lang/String;
    sp -= 2;
    ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp + 0].obj)->src_10 = rstack[sp + 1].obj;
    ; 
    //  line no 398 , L52451302 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_StringLib_00024FormatDesc__init___Lorg_luaj_vm2_lib_StringLib_2Lorg_luaj_vm2_Varargs_2Lorg_luaj_vm2_LuaString_2I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_StringLib_00024FormatDesc__init___Lorg_luaj_vm2_lib_StringLib_2Lorg_luaj_vm2_Varargs_2Lorg_luaj_vm2_LuaString_2I_V(runtime, ins, para[0].obj, para[1].obj, para[2].i);
}


// locals: 3
// stack: 2
// args: 2
void func_org_luaj_vm2_lib_StringLib_00024FormatDesc_format__Lorg_luaj_vm2_Buffer_2B_V(JThreadRuntime *runtime, struct org_luaj_vm2_Buffer* p0, s8 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1286, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 402 , L1856093404 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 402;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // invokevirtual org/luaj/vm2/Buffer.append(B)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 48, 5);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 403 , L123337428 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_StringLib_00024FormatDesc_format__Lorg_luaj_vm2_Buffer_2B_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_StringLib_00024FormatDesc_format__Lorg_luaj_vm2_Buffer_2B_V(runtime, ins, para[0].i);
}


// locals: 9
// stack: 4
// args: 2
void func_org_luaj_vm2_lib_StringLib_00024FormatDesc_format__Lorg_luaj_vm2_Buffer_2J_V(JThreadRuntime *runtime, struct org_luaj_vm2_Buffer* p0, s64 p1){
    
    StackItem local[9] = {0};
    RStackItem rlocal[9] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1287, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].j = p1;
    ; 
    //  line no 408 , L1397333381 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 408;
    stack[sp].j = local[2].j;
    sp += 2;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L820878444;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc precision I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->precision_7;
    sp += 0;
    if(stack[--sp].i  != 0) goto L820878444;
    ; 
    //  line no 409 , L2016038911 , bytecode index = 
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 617);
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    goto L1509713998;
    L820878444:
    //  line no 412 , L820878444 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc conversion I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->conversion_8;
    sp += 0;
    switch(stack[--sp].i){
        case 88:
            goto L802255644;
        case 111:
            goto L1525114112;
        case 120:
            goto L802255644;
        default:
            goto L95322593;
    }
    L802255644:
    //  line no 415 , L802255644 , bytecode index = 
    //  bipush 16
    stack[sp++].i = 16;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 416 , L1617156106 , bytecode index = 
    goto L288615534;
    L1525114112:
    //  line no 418 , L1525114112 , bytecode index = 
    //  bipush 8
    stack[sp++].i = 8;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 419 , L895366343 , bytecode index = 
    goto L288615534;
    L95322593:
    //  line no 421 , L95322593 , bytecode index = 
    //  bipush 10
    stack[sp++].i = 10;
    local[5].i = stack[--sp].i;
    L288615534:
    //  line no 424 , L288615534 , bytecode index = 
    stack[sp].j = local[2].j;
    sp += 2;
    stack[sp++].i = local[5].i;
    // invokestatic java/lang/Long.toString(JI)Ljava/lang/String;
    {
        sp -= 4;
        rstack[sp].obj = func_java_lang_Long_toString__JI_Ljava_lang_String_2(runtime, rstack[sp + 0].obj, stack[sp + 1].j, stack[sp + 3].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 425 , L1416665097 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc conversion I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->conversion_8;
    sp += 0;
    //  bipush 88
    stack[sp++].i = 88;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1509713998;
    ; 
    //  line no 426 , L707635461 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual java/lang/String.toUpperCase()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 50, 34);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    L1509713998:
    //  line no 429 , L1509713998 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual java/lang/String.length()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 50, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[5].i = stack[--sp].i;
    ; 
    //  line no 430 , L619929778 , bytecode index = 
    stack[sp++].i = local[5].i;
    local[6].i = stack[--sp].i;
    ; 
    //  line no 433 , L1624211687 , bytecode index = 
    stack[sp].j = local[2].j;
    sp += 2;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L808447015;
    ; 
    //  line no 434 , L1997344422 , bytecode index = 
    // iinc slot 6 value -1
    local[6].i += -1;
    goto L1220806149;
    L808447015:
    //  line no 435 , L808447015 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc explicitPlus Z
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->explicitPlus_2;
    sp += 0;
    if(stack[--sp].i  != 0) goto L1410367298;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc space Z
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->space_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1220806149;
    L1410367298:
    //  line no 436 , L1410367298 , bytecode index = 
    // iinc slot 5 value 1
    local[5].i += 1;
    L1220806149:
    //  line no 439 , L1220806149 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc precision I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->precision_7;
    sp += 0;
    stack[sp++].i = local[6].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L454160179;
    ; 
    //  line no 440 , L74885833 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc precision I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->precision_7;
    sp += 0;
    stack[sp++].i = local[6].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[7].i = stack[--sp].i;
    ; 
    goto L1004009692;
    L454160179:
    //  line no 441 , L454160179 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc precision I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->precision_7;
    sp += 0;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L791408866;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc zeroPad Z
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->zeroPad_1;
    sp += 0;
    if(stack[--sp].i  == 0) goto L791408866;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc width I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->width_6;
    sp += 0;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L791408866;
    ; 
    //  line no 442 , L515520300 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc width I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->width_6;
    sp += 0;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    local[7].i = stack[--sp].i;
    ; 
    goto L1004009692;
    L791408866:
    //  line no 444 , L791408866 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[7].i = stack[--sp].i;
    L1004009692:
    //  line no 446 , L1004009692 , bytecode index = 
    stack[sp++].i = local[5].i;
    stack[sp++].i = local[7].i;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    local[5].i = stack[--sp].i;
    ; 
    //  line no 447 , L637091966 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc width I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->width_6;
    sp += 0;
    stack[sp++].i = local[5].i;
    sp -= 2;
    if(stack[sp + 0].i  <= stack[sp + 1].i) goto L1428494531;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc width I
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->width_6;
    sp += 0;
    stack[sp++].i = local[5].i;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    goto L443110940;
    L1428494531:
    // iconst_0
    stack[sp++].i = 0;
    L443110940:
    local[8].i = stack[--sp].i;
    ; 
    //  line no 449 , L1504321715 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc leftAdjust Z
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->leftAdjust_0;
    sp += 0;
    if(stack[--sp].i  != 0) goto L910123336;
    ; 
    //  line no 450 , L1260487756 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 32
    stack[sp++].i = 32;
    stack[sp++].i = local[8].i;
    // invokevirtual org/luaj/vm2/lib/StringLib$FormatDesc.pad(Lorg/luaj/vm2/Buffer;CI)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_Buffer*,u16,s32) = find_method(__ins->vm_table, 117, 4);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L910123336:
    //  line no 452 , L910123336 , bytecode index = 
    stack[sp].j = local[2].j;
    sp += 2;
    //  lconst 0
    stack[sp].j = 0;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  >= 0) goto L455668354;
    ; 
    //  line no 453 , L328197868 , bytecode index = 
    stack[sp++].i = local[7].i;
    if(stack[--sp].i  <= 0) goto L1584918772;
    ; 
    //  line no 454 , L431164562 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 45
    stack[sp++].i = 45;
    // invokevirtual org/luaj/vm2/Buffer.append(B)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 48, 5);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 455 , L1163088324 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    // iconst_1
    stack[sp++].i = 1;
    // invokevirtual java/lang/String.substring(I)Ljava/lang/String;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 50, 21);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    goto L1584918772;
    L455668354:
    //  line no 457 , L455668354 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc explicitPlus Z
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->explicitPlus_2;
    sp += 0;
    if(stack[--sp].i  == 0) goto L696739588;
    ; 
    //  line no 458 , L1209451152 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 43
    stack[sp++].i = 43;
    // invokevirtual org/luaj/vm2/Buffer.append(B)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 48, 5);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    goto L1584918772;
    L696739588:
    //  line no 459 , L696739588 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc space Z
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->space_3;
    sp += 0;
    if(stack[--sp].i  == 0) goto L1584918772;
    ; 
    //  line no 460 , L1228963996 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 32
    stack[sp++].i = 32;
    // invokevirtual org/luaj/vm2/Buffer.append(B)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 48, 5);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L1584918772:
    //  line no 463 , L1584918772 , bytecode index = 
    stack[sp++].i = local[7].i;
    if(stack[--sp].i  <= 0) goto L373437697;
    ; 
    //  line no 464 , L82825098 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 48
    stack[sp++].i = 48;
    stack[sp++].i = local[7].i;
    // invokevirtual org/luaj/vm2/lib/StringLib$FormatDesc.pad(Lorg/luaj/vm2/Buffer;CI)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_Buffer*,u16,s32) = find_method(__ins->vm_table, 117, 4);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L373437697:
    //  line no 466 , L373437697 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 468 , L2048102341 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc leftAdjust Z
    stack[sp - 1].i = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->leftAdjust_0;
    sp += 0;
    if(stack[--sp].i  == 0) goto L932885627;
    ; 
    //  line no 469 , L813131188 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 32
    stack[sp++].i = 32;
    stack[sp++].i = local[8].i;
    // invokevirtual org/luaj/vm2/lib/StringLib$FormatDesc.pad(Lorg/luaj/vm2/Buffer;CI)V
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_Buffer*,u16,s32) = find_method(__ins->vm_table, 117, 4);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L932885627:
    //  line no 470 , L932885627 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_StringLib_00024FormatDesc_format__Lorg_luaj_vm2_Buffer_2J_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_StringLib_00024FormatDesc_format__Lorg_luaj_vm2_Buffer_2J_V(runtime, ins, para[0].j);
}


// locals: 4
// stack: 5
// args: 2
void func_org_luaj_vm2_lib_StringLib_00024FormatDesc_format__Lorg_luaj_vm2_Buffer_2D_V(JThreadRuntime *runtime, struct org_luaj_vm2_Buffer* p0, f64 p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1288, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    ; 
    //  line no 473 , L748006558 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 473;
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc this$0 Lorg/luaj/vm2/lib/StringLib;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->this_000240_11;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield org/luaj/vm2/lib/StringLib$FormatDesc src Ljava/lang/String;
    rstack[sp - 1].obj = ((struct org_luaj_vm2_lib_StringLib_00024FormatDesc*)rstack[sp - 1].obj)->src_10;
    sp += 0;
    stack[sp].d = local[2].d;
    sp += 2;
    // invokevirtual org/luaj/vm2/lib/StringLib.format(Ljava/lang/String;D)Ljava/lang/String;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *,struct java_lang_String*,f64) = find_method(__ins->vm_table, 237, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual org/luaj/vm2/Buffer.append(Ljava/lang/String;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 48, 8);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 474 , L1313799195 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_StringLib_00024FormatDesc_format__Lorg_luaj_vm2_Buffer_2D_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_StringLib_00024FormatDesc_format__Lorg_luaj_vm2_Buffer_2D_V(runtime, ins, para[0].d);
}


// locals: 4
// stack: 3
// args: 2
void func_org_luaj_vm2_lib_StringLib_00024FormatDesc_format__Lorg_luaj_vm2_Buffer_2Lorg_luaj_vm2_LuaString_2_V(JThreadRuntime *runtime, struct org_luaj_vm2_Buffer* p0, struct org_luaj_vm2_LuaString* p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1289, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 477 , L2093319848 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 477;
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    // iconst_0
    stack[sp++].i = 0;
    // invokevirtual org/luaj/vm2/LuaString.indexOf(BI)I
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s8,s32) = find_method(__ins->vm_table, 31, 94);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[3].i = stack[--sp].i;
    ; 
    //  line no 478 , L2109027570 , bytecode index = 
    stack[sp++].i = local[3].i;
    // iconst_-1
    stack[sp++].i = -1;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L1151512955;
    ; 
    //  line no 479 , L2052489518 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[3].i;
    // invokevirtual org/luaj/vm2/LuaString.substring(II)Lorg/luaj/vm2/LuaString;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_LuaString* (*__func_p) (JThreadRuntime *,s32,s32) = find_method(__ins->vm_table, 31, 76);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    L1151512955:
    //  line no 480 , L1151512955 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // invokevirtual org/luaj/vm2/Buffer.append(Lorg/luaj/vm2/LuaString;)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,struct org_luaj_vm2_LuaString*) = find_method(__ins->vm_table, 48, 7);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    ; 
    //  line no 481 , L712423434 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_StringLib_00024FormatDesc_format__Lorg_luaj_vm2_Buffer_2Lorg_luaj_vm2_LuaString_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_StringLib_00024FormatDesc_format__Lorg_luaj_vm2_Buffer_2Lorg_luaj_vm2_LuaString_2_V(runtime, ins, para[0].obj);
}


// locals: 5
// stack: 2
// args: 3
void func_org_luaj_vm2_lib_StringLib_00024FormatDesc_pad__Lorg_luaj_vm2_Buffer_2CI_V(JThreadRuntime *runtime, struct org_luaj_vm2_Buffer* p0, u16 p1, s32 p2){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 1290, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 484 , L793269462 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 484;
    stack[sp++].i = local[2].i;
    stack[sp - 1].i = (s8)stack[sp - 1].i; 
    local[4].i = stack[--sp].i;
    L1641672672:
    //  line no 485 , L1641672672 , bytecode index = 
    stack[sp++].i = local[3].i;
    // iinc slot 3 value -1
    local[3].i += -1;
    if(stack[--sp].i  <= 0) goto L2121317689;
    ; 
    //  line no 486 , L15094126 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[4].i;
    // invokevirtual org/luaj/vm2/Buffer.append(B)Lorg/luaj/vm2/Buffer;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        struct org_luaj_vm2_Buffer* (*__func_p) (JThreadRuntime *,s8) = find_method(__ins->vm_table, 48, 5);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L1641672672;
    L2121317689:
    //  line no 487 , L2121317689 , bytecode index = 
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

void bridge_org_luaj_vm2_lib_StringLib_00024FormatDesc_pad__Lorg_luaj_vm2_Buffer_2CI_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_org_luaj_vm2_lib_StringLib_00024FormatDesc_pad__Lorg_luaj_vm2_Buffer_2CI_V(runtime, ins, para[0].i, para[1].i);
}


