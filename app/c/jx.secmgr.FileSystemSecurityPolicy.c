// CLASS: jx/secmgr/FileSystemSecurityPolicy extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_secmgr_FileSystemSecurityPolicy_static {s8 doNothing_0; s8 doOpenOnly_1; s8 debug_2;  };
struct jx_secmgr_FileSystemSecurityPolicy_static static_var_jx_secmgr_FileSystemSecurityPolicy = {0, 0, 0};


__refer arr_vmtable_jx_secmgr_FileSystemSecurityPolicy_from_jx_secmgr_FileSystemSecurityPolicy[] = {
    func_jx_secmgr_FileSystemSecurityPolicy_inBound__Ljx_zero_InterceptInboundInfo_2_Z,  //0
    func_jx_secmgr_FileSystemSecurityPolicy_createPortal__Ljx_zero_PortalInfo_2_Z,  //1
    func_jx_secmgr_FileSystemSecurityPolicy_destroyPortal__Ljx_zero_PortalInfo_2_V  //2
};
__refer arr_vmtable_jx_secmgr_FileSystemSecurityPolicy_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_lang_Object_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
__refer arr_vmtable_jx_secmgr_FileSystemSecurityPolicy_from_jx_zero_DomainBorderIn[] = {
    func_jx_secmgr_FileSystemSecurityPolicy_inBound__Ljx_zero_InterceptInboundInfo_2_Z  //0
};
__refer arr_vmtable_jx_secmgr_FileSystemSecurityPolicy_from_jx_zero_DomainBorder[] = {
    func_jx_secmgr_FileSystemSecurityPolicy_createPortal__Ljx_zero_PortalInfo_2_Z,  //0
    func_jx_secmgr_FileSystemSecurityPolicy_destroyPortal__Ljx_zero_PortalInfo_2_V  //1
};
__refer arr_vmtable_jx_secmgr_FileSystemSecurityPolicy_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_secmgr_FileSystemSecurityPolicy[] = {
    {234, 3, arr_vmtable_jx_secmgr_FileSystemSecurityPolicy_from_jx_secmgr_FileSystemSecurityPolicy}, //0
    {10, 11, arr_vmtable_jx_secmgr_FileSystemSecurityPolicy_from_java_lang_Object}, //1
    {235, 1, arr_vmtable_jx_secmgr_FileSystemSecurityPolicy_from_jx_zero_DomainBorderIn}, //2
    {236, 2, arr_vmtable_jx_secmgr_FileSystemSecurityPolicy_from_jx_zero_DomainBorder}, //3
    {35, 0, arr_vmtable_jx_secmgr_FileSystemSecurityPolicy_from_jx_zero_Portal}, //4
};



// locals: 3
// stack: 5
// args: 0
void func_jx_secmgr_FileSystemSecurityPolicy__init____V(JThreadRuntime *runtime){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 564, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 31 , L1741786839 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 31;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 32 , L746115872 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // new jx/secmgr/Principal_impl
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 226);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1431);
    // iconst_0
    stack[sp++].i = 0;
    // invokespecial jx/secmgr/Principal_impl.<init>(Ljava/lang/String;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_secmgr_Principal_1impl__init___Ljava_lang_String_2I_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield jx/secmgr/FileSystemSecurityPolicy tcb Ljx/zero/Principal;
    sp -= 2;
    ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp + 0].obj)->tcb_3 = rstack[sp + 1].obj;
    ; 
    //  line no 33 , L20111564 , bytecode index = 
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
    // putfield jx/secmgr/FileSystemSecurityPolicy naming Ljx/zero/Naming;
    sp -= 2;
    ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp + 0].obj)->naming_4 = rstack[sp + 1].obj;
    ; 
    //  line no 34 , L2065718717 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy naming Ljx/zero/Naming;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->naming_4;
    sp += 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1432);
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
    // checkcast jx/zero/CentralSecurityManager
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1433);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // putfield jx/secmgr/FileSystemSecurityPolicy secMgr Ljx/zero/CentralSecurityManager;
    sp -= 2;
    ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp + 0].obj)->secMgr_6 = rstack[sp + 1].obj;
    ; 
    //  line no 35 , L275563320 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy secMgr Ljx/zero/CentralSecurityManager;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->secMgr_6;
    sp += 0;
    if(rstack[--sp].obj  != NULL) goto L2053628870;
    // new java/lang/Error
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 7);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1434);
    // invokespecial java/lang/Error.<init>(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_Error__init___Ljava_lang_String_2_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L275563320 in labeltable is :L275563320
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 35;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L2053628870:
    //  line no 36 , L2053628870 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy naming Ljx/zero/Naming;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->naming_4;
    sp += 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 648);
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
    // checkcast jx/zero/CPUManager
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 650);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // putfield jx/secmgr/FileSystemSecurityPolicy cpuManager Ljx/zero/CPUManager;
    sp -= 2;
    ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp + 0].obj)->cpuManager_5 = rstack[sp + 1].obj;
    ; 
    //  line no 39 , L1824872646 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy cpuManager Ljx/zero/CPUManager;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->cpuManager_5;
    sp += 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1435);
    // invokeinterface jx/zero/CPUManager.getClass(Ljava/lang/String;)Ljx/zero/VMClass;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_VMClass* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 91, 26);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield jx/secmgr/FileSystemSecurityPolicy refFilesystemImpl Ljx/zero/VMClass;
    sp -= 2;
    ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp + 0].obj)->refFilesystemImpl_7 = rstack[sp + 1].obj;
    ; 
    //  line no 40 , L359742806 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy cpuManager Ljx/zero/CPUManager;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->cpuManager_5;
    sp += 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1436);
    // invokeinterface jx/zero/CPUManager.getClass(Ljava/lang/String;)Ljx/zero/VMClass;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_VMClass* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 91, 26);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield jx/secmgr/FileSystemSecurityPolicy refDirectoryImpl Ljx/zero/VMClass;
    sp -= 2;
    ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp + 0].obj)->refDirectoryImpl_8 = rstack[sp + 1].obj;
    ; 
    //  line no 41 , L1676827075 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy cpuManager Ljx/zero/CPUManager;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->cpuManager_5;
    sp += 0;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1437);
    // invokeinterface jx/zero/CPUManager.getClass(Ljava/lang/String;)Ljx/zero/VMClass;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_VMClass* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 91, 26);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield jx/secmgr/FileSystemSecurityPolicy refRegularFileImpl Ljx/zero/VMClass;
    sp -= 2;
    ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp + 0].obj)->refRegularFileImpl_9 = rstack[sp + 1].obj;
    ; 
    //  line no 42 , L651100072 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy refRegularFileImpl Ljx/zero/VMClass;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->refRegularFileImpl_9;
    sp += 0;
    // invokeinterface jx/zero/VMClass.getMethods()[Ljx/zero/VMMethod;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 102, 5);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 43 , L1611370719 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L2089589253:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L2089589253
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L222427158;
    ; 
    //  line no 44 , L1545827753 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1545827753 bc index = 
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
    // invokeinterface jx/zero/VMMethod.getName()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 227, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 718);
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 9, 11);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1611832218;
    ; 
    //  line no 45 , L2027317551 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L2027317551 bc index = 
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
    // putfield jx/secmgr/FileSystemSecurityPolicy read_RegularFile Ljx/zero/VMMethod;
    sp -= 2;
    ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp + 0].obj)->read_1RegularFile_10 = rstack[sp + 1].obj;
    goto L2052435819;
    L1611832218:
    //  line no 46 , L1611832218 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1611832218 bc index = 
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
    // invokeinterface jx/zero/VMMethod.getName()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 227, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 491);
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 9, 11);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L2052435819;
    ; 
    //  line no 47 , L1033638837 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1033638837 bc index = 
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
    // putfield jx/secmgr/FileSystemSecurityPolicy write_RegularFile Ljx/zero/VMMethod;
    sp -= 2;
    ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp + 0].obj)->write_1RegularFile_11 = rstack[sp + 1].obj;
    L2052435819:
    //  line no 43 , L2052435819 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2089589253;
    L222427158:
    //  line no 48 , L222427158 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy refDirectoryImpl Ljx/zero/VMClass;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->refDirectoryImpl_8;
    sp += 0;
    // invokeinterface jx/zero/VMClass.getMethods()[Ljx/zero/VMMethod;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 102, 5);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 49 , L1227264471 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L41031373:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L41031373
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1435229983;
    ; 
    //  line no 50 , L139947936 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L139947936 bc index = 
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
    // invokeinterface jx/zero/VMMethod.getName()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 227, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1308);
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 9, 11);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1971519316;
    ; 
    //  line no 51 , L1733581655 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1733581655 bc index = 
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
    // putfield jx/secmgr/FileSystemSecurityPolicy openRW_Directory Ljx/zero/VMMethod;
    sp -= 2;
    ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp + 0].obj)->openRW_1Directory_12 = rstack[sp + 1].obj;
    goto L1814827909;
    L1971519316:
    //  line no 52 , L1971519316 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1971519316 bc index = 
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
    // invokeinterface jx/zero/VMMethod.getName()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 227, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1439);
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 9, 11);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1814827909;
    ; 
    //  line no 53 , L1597328335 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1597328335 bc index = 
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
    // putfield jx/secmgr/FileSystemSecurityPolicy create_Directory Ljx/zero/VMMethod;
    sp -= 2;
    ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp + 0].obj)->create_1Directory_13 = rstack[sp + 1].obj;
    L1814827909:
    //  line no 49 , L1814827909 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L41031373;
    L1435229983:
    //  line no 54 , L1435229983 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy refFilesystemImpl Ljx/zero/VMClass;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->refFilesystemImpl_7;
    sp += 0;
    // invokeinterface jx/zero/VMClass.getMethods()[Ljx/zero/VMMethod;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 102, 5);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[1].obj = rstack[--sp].obj;
    ; 
    //  line no 55 , L1034909474 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    local[2].i = stack[--sp].i;
    L2019826979:
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // arraylength  label  L2019826979
    if (!rstack[sp - 1].obj) {
        rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
        goto __ExceptionHandler;
    }
    stack[sp - 1].i = rstack[sp - 1].ins->prop.arr_length; 
    sp -= 2;
    if(stack[sp + 0].i  >= stack[sp + 1].i) goto L1951963537;
    ; 
    //  line no 56 , L21422054 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L21422054 bc index = 
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
    // invokeinterface jx/zero/VMMethod.getName()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 227, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 169);
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 9, 11);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1192672907;
    ; 
    //  line no 57 , L532885071 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L532885071 bc index = 
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
    // putfield jx/secmgr/FileSystemSecurityPolicy getDefaultPermission_FilesystemInterface Ljx/zero/VMMethod;
    sp -= 2;
    ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp + 0].obj)->getDefaultPermission_1FilesystemInterface_14 = rstack[sp + 1].obj;
    goto L795326519;
    L1192672907:
    //  line no 58 , L1192672907 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L1192672907 bc index = 
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
    // invokeinterface jx/zero/VMMethod.getName()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 227, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 173);
    // invokevirtual java/lang/String.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 9, 11);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L795326519;
    ; 
    //  line no 59 , L409598930 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    stack[sp++].i = local[2].i;
    // arrload __refer  ,  L409598930 bc index = 
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
    // putfield jx/secmgr/FileSystemSecurityPolicy openRootDirectoryRW_FilesystemInterface Ljx/zero/VMMethod;
    sp -= 2;
    ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp + 0].obj)->openRootDirectoryRW_1FilesystemInterface_15 = rstack[sp + 1].obj;
    L795326519:
    //  line no 55 , L795326519 , bytecode index = 
    // iinc slot 2 value 1
    local[2].i += 1;
    if(runtime->suspend_count)check_suspend_and_pause(runtime);
    goto L2019826979;
    L1951963537:
    //  line no 60 , L1951963537 , bytecode index = 
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

void bridge_jx_secmgr_FileSystemSecurityPolicy__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_secmgr_FileSystemSecurityPolicy__init____V(runtime, ins);
}


// locals: 3
// stack: 3
// args: 1
s8 func_jx_secmgr_FileSystemSecurityPolicy_inBound__Ljx_zero_InterceptInboundInfo_2_Z(JThreadRuntime *runtime, struct jx_zero_InterceptInboundInfo* p0){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 565, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 71 , L1825445620 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 71;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface jx/zero/InterceptInboundInfo.getServiceObject()Ljx/zero/VMObject;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_VMObject* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 228, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[2].obj = rstack[--sp].obj;
    ; 
    //  line no 72 , L2130357594 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy secMgr Ljx/zero/CentralSecurityManager;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->secMgr_6;
    sp += 0;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface jx/zero/InterceptInboundInfo.getSourceDomain()Ljx/zero/Domain;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_Domain* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 228, 0);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokeinterface jx/zero/CentralSecurityManager.getPrincipal(Ljx/zero/Domain;)Ljx/zero/Principal;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_Principal* (*__func_p) (JThreadRuntime *,struct jx_zero_Domain*) = find_method(__ins->vm_table, 229, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast jx/secmgr/Principal_impl
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1430);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // putfield jx/secmgr/FileSystemSecurityPolicy curPrincipal Ljx/secmgr/Principal_impl;
    sp -= 2;
    ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp + 0].obj)->curPrincipal_16 = rstack[sp + 1].obj;
    ; 
    //  line no 73 , L689602108 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy cpuManager Ljx/zero/CPUManager;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->cpuManager_5;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface jx/zero/CPUManager.getVMClass(Ljava/lang/Object;)Ljx/zero/VMClass;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_VMClass* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 91, 27);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy refRegularFileImpl Ljx/zero/VMClass;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->refRegularFileImpl_9;
    sp += 0;
    // invokeinterface jx/zero/VMClass.equals(Ljx/zero/VMClass;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct jx_zero_VMClass*) = find_method(__ins->vm_table, 102, 2);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L212011969;
    ; 
    //  line no 75 , L273077527 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // checkcast jx/fs/RegularFile
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1443);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface jx/zero/InterceptInboundInfo.getMethod()Ljx/zero/VMMethod;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_VMMethod* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 228, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial jx/secmgr/FileSystemSecurityPolicy.check_RegularFile(Ljx/fs/RegularFile;Ljx/zero/VMMethod;)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_jx_secmgr_FileSystemSecurityPolicy_check_1RegularFile__Ljx_fs_RegularFile_2Ljx_zero_VMMethod_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    L212011969:
    //  line no 76 , L212011969 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy cpuManager Ljx/zero/CPUManager;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->cpuManager_5;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface jx/zero/CPUManager.getVMClass(Ljava/lang/Object;)Ljx/zero/VMClass;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_VMClass* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 91, 27);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy refFilesystemImpl Ljx/zero/VMClass;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->refFilesystemImpl_7;
    sp += 0;
    // invokeinterface jx/zero/VMClass.equals(Ljx/zero/VMClass;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct jx_zero_VMClass*) = find_method(__ins->vm_table, 102, 2);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L998062648;
    ; 
    //  line no 77 , L1097619701 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // checkcast jx/fs/FileSystemInterface
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 168);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface jx/zero/InterceptInboundInfo.getMethod()Ljx/zero/VMMethod;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_VMMethod* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 228, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial jx/secmgr/FileSystemSecurityPolicy.check_FilesystemInterface(Ljx/fs/FileSystemInterface;Ljx/zero/VMMethod;)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_jx_secmgr_FileSystemSecurityPolicy_check_1FilesystemInterface__Ljx_fs_FileSystemInterface_2Ljx_zero_VMMethod_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    L998062648:
    //  line no 78 , L998062648 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy cpuManager Ljx/zero/CPUManager;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->cpuManager_5;
    sp += 0;
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface jx/zero/CPUManager.getVMClass(Ljava/lang/Object;)Ljx/zero/VMClass;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_VMClass* (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 91, 27);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy refDirectoryImpl Ljx/zero/VMClass;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->refDirectoryImpl_8;
    sp += 0;
    // invokeinterface jx/zero/VMClass.equals(Ljx/zero/VMClass;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct jx_zero_VMClass*) = find_method(__ins->vm_table, 102, 2);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1426435610;
    ; 
    //  line no 79 , L1942828992 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[2].obj;
    // checkcast jx/fs/Directory
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1444);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // invokespecial jx/secmgr/FileSystemSecurityPolicy.check_Directory(Ljx/fs/Directory;Ljx/zero/InterceptInboundInfo;)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_jx_secmgr_FileSystemSecurityPolicy_check_1Directory__Ljx_fs_Directory_2Ljx_zero_InterceptInboundInfo_2_Z(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    L1426435610:
    //  line no 80 , L1426435610 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
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

void bridge_jx_secmgr_FileSystemSecurityPolicy_inBound__Ljx_zero_InterceptInboundInfo_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_secmgr_FileSystemSecurityPolicy_inBound__Ljx_zero_InterceptInboundInfo_2_Z(runtime, ins);
}

ExceptionItem arr_extable_func_jx_secmgr_FileSystemSecurityPolicy_check_1FilesystemInterface__Ljx_fs_FileSystemInterface_2Ljx_zero_VMMethod_2_Z[] = {
    { , , 828}
};
ExceptionTable extable_func_jx_secmgr_FileSystemSecurityPolicy_check_1FilesystemInterface__Ljx_fs_FileSystemInterface_2Ljx_zero_VMMethod_2_Z = {1, arr_extable_func_jx_secmgr_FileSystemSecurityPolicy_check_1FilesystemInterface__Ljx_fs_FileSystemInterface_2Ljx_zero_VMMethod_2_Z};

// locals: 4
// stack: 3
// args: 2
s8 func_jx_secmgr_FileSystemSecurityPolicy_check_1FilesystemInterface__Ljx_fs_FileSystemInterface_2Ljx_zero_VMMethod_2_Z(JThreadRuntime *runtime, struct jx_fs_FileSystemInterface* p0, struct jx_zero_VMMethod* p1){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 566, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    // try catch :L45822040 L2050370411 L1625252058 (
    ; 
    //  line no 84 , L1512903453 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 84;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy getDefaultPermission_FilesystemInterface Ljx/zero/VMMethod;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->getDefaultPermission_1FilesystemInterface_14;
    sp += 0;
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 10, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L22004208;
    ; 
    //  line no 85 , L1256837057 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    L22004208:
    //  line no 86 , L22004208 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy openRootDirectoryRW_FilesystemInterface Ljx/zero/VMMethod;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->openRootDirectoryRW_1FilesystemInterface_15;
    sp += 0;
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 10, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1361817590;
    L45822040:
    __frame->bytecodeIndex = 
    //  line no 89 , L45822040 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface jx/fs/FileSystemInterface.openRootDirectoryRW()Ljx/fs/FSObject;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_fs_FSObject* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 34, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast jx/fs/Directory
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1444);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 90 , L1663888181 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[3].obj;
    //  bipush 7
    stack[sp++].i = 7;
    // invokespecial jx/secmgr/FileSystemSecurityPolicy.checkPerm(Ljx/fs/FSObject;I)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_jx_secmgr_FileSystemSecurityPolicy_checkPerm__Ljx_fs_FSObject_2I_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L2050370411:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1625252058:
    //  line no 91 , L1625252058 , bytecode index = 
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1447);
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
    L1361817590:
    //  line no 93 , L1361817590 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L1625252058;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_secmgr_FileSystemSecurityPolicy_check_1FilesystemInterface__Ljx_fs_FileSystemInterface_2Ljx_zero_VMMethod_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_secmgr_FileSystemSecurityPolicy_check_1FilesystemInterface__Ljx_fs_FileSystemInterface_2Ljx_zero_VMMethod_2_Z(runtime, ins, para[0].obj);
}

ExceptionItem arr_extable_func_jx_secmgr_FileSystemSecurityPolicy_check_1Directory__Ljx_fs_Directory_2Ljx_zero_InterceptInboundInfo_2_Z[] = {
    { , , 828}, 
    { , , 828}
};
ExceptionTable extable_func_jx_secmgr_FileSystemSecurityPolicy_check_1Directory__Ljx_fs_Directory_2Ljx_zero_InterceptInboundInfo_2_Z = {2, arr_extable_func_jx_secmgr_FileSystemSecurityPolicy_check_1Directory__Ljx_fs_Directory_2Ljx_zero_InterceptInboundInfo_2_Z};

// locals: 6
// stack: 3
// args: 2
s8 func_jx_secmgr_FileSystemSecurityPolicy_check_1Directory__Ljx_fs_Directory_2Ljx_zero_InterceptInboundInfo_2_Z(JThreadRuntime *runtime, struct jx_fs_Directory* p0, struct jx_zero_InterceptInboundInfo* p1){
    
    StackItem local[6] = {0};
    RStackItem rlocal[6] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 567, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    // try catch :L341372316 L279566689 L319689067 (
    // try catch :L238564722 L1574898980 L319689067 (
    ; 
    //  line no 97 , L56861999 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 97;
    rstack[sp++].obj = rlocal[2].obj;
    // invokeinterface jx/zero/InterceptInboundInfo.getMethod()Ljx/zero/VMMethod;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_VMMethod* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 228, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 98 , L1619356001 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy openRW_Directory Ljx/zero/VMMethod;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->openRW_1Directory_12;
    sp += 0;
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 10, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L802771878;
    ; 
    //  line no 100 , L172678484 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy cpuManager Ljx/zero/CPUManager;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->cpuManager_5;
    sp += 0;
    // invokeinterface jx/zero/CPUManager.getVMObject()Ljx/zero/VMObject;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_VMObject* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 91, 28);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 101 , L337533935 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokeinterface jx/zero/InterceptInboundInfo.getFirstParameter(Ljx/zero/VMObject;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct jx_zero_VMObject*) = find_method(__ins->vm_table, 228, 4);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    --sp; //pop
    L341372316:
    __frame->bytecodeIndex = 
    //  line no 103 , L341372316 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokeinterface jx/zero/VMObject.getString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 230, 2);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokeinterface jx/fs/Directory.openRW(Ljava/lang/String;)Ljx/fs/FSObject;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_fs_FSObject* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 231, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    //  line no 104 , L1604052588 , bytecode index = 
    rstack[sp++].obj = rlocal[5].obj;
    if(rstack[--sp].obj  != NULL) goto L238564722;
    // iconst_1
    stack[sp++].i = 1;
    L279566689:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L238564722:
    __frame->bytecodeIndex = 
    //  line no 105 , L238564722 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[5].obj;
    //  bipush 6
    stack[sp++].i = 6;
    // invokespecial jx/secmgr/FileSystemSecurityPolicy.checkPerm(Ljx/fs/FSObject;I)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_jx_secmgr_FileSystemSecurityPolicy_checkPerm__Ljx_fs_FSObject_2I_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    L1574898980:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L319689067:
    //  line no 106 , L319689067 , bytecode index = 
    rlocal[5].obj = rstack[--sp].obj;
    ; 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1447);
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
    //  line no 107 , L1724256292 , bytecode index = 
    goto L6422064;
    L802771878:
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy create_Directory Ljx/zero/VMMethod;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->create_1Directory_13;
    sp += 0;
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 10, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L6422064;
    ; 
    //  line no 109 , L13226198 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    //  bipush 7
    stack[sp++].i = 7;
    // invokespecial jx/secmgr/FileSystemSecurityPolicy.checkPerm(Ljx/fs/FSObject;I)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_jx_secmgr_FileSystemSecurityPolicy_checkPerm__Ljx_fs_FSObject_2I_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    L6422064:
    //  line no 111 , L6422064 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L319689067;
        case 1 : goto L319689067;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_secmgr_FileSystemSecurityPolicy_check_1Directory__Ljx_fs_Directory_2Ljx_zero_InterceptInboundInfo_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_secmgr_FileSystemSecurityPolicy_check_1Directory__Ljx_fs_Directory_2Ljx_zero_InterceptInboundInfo_2_Z(runtime, ins, para[0].obj);
}


// locals: 3
// stack: 3
// args: 2
s8 func_jx_secmgr_FileSystemSecurityPolicy_check_1RegularFile__Ljx_fs_RegularFile_2Ljx_zero_VMMethod_2_Z(JThreadRuntime *runtime, struct jx_fs_RegularFile* p0, struct jx_zero_VMMethod* p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 568, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    rlocal[1].obj = p1;
    ; 
    //  line no 115 , L987547666 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 115;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy write_RegularFile Ljx/zero/VMMethod;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->write_1RegularFile_11;
    sp += 0;
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 10, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L893591815;
    ; 
    //  line no 117 , L2067925017 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_4
    stack[sp++].i = 4;
    // invokespecial jx/secmgr/FileSystemSecurityPolicy.checkPerm(Ljx/fs/FSObject;I)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_jx_secmgr_FileSystemSecurityPolicy_checkPerm__Ljx_fs_FSObject_2I_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    L893591815:
    //  line no 118 , L893591815 , bytecode index = 
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy read_RegularFile Ljx/zero/VMMethod;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->read_1RegularFile_10;
    sp += 0;
    // invokevirtual java/lang/Object.equals(Ljava/lang/Object;)Z
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s8 (*__func_p) (JThreadRuntime *,struct java_lang_Object*) = find_method(__ins->vm_table, 10, 9);
        stack[sp].i = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L2048529572;
    ; 
    //  line no 120 , L643489709 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // iconst_2
    stack[sp++].i = 2;
    // invokespecial jx/secmgr/FileSystemSecurityPolicy.checkPerm(Ljx/fs/FSObject;I)Z
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        stack[sp].i = func_jx_secmgr_FileSystemSecurityPolicy_checkPerm__Ljx_fs_FSObject_2I_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    method_exit(runtime);
    return stack[sp - 1].i;
    L2048529572:
    //  line no 122 , L2048529572 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
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

void bridge_jx_secmgr_FileSystemSecurityPolicy_check_1RegularFile__Ljx_fs_RegularFile_2Ljx_zero_VMMethod_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_secmgr_FileSystemSecurityPolicy_check_1RegularFile__Ljx_fs_RegularFile_2Ljx_zero_VMMethod_2_Z(runtime, ins, para[0].obj);
}

ExceptionItem arr_extable_func_jx_secmgr_FileSystemSecurityPolicy_checkPerm__Ljx_fs_FSObject_2I_Z[] = {
    { , , 828}
};
ExceptionTable extable_func_jx_secmgr_FileSystemSecurityPolicy_checkPerm__Ljx_fs_FSObject_2I_Z = {1, arr_extable_func_jx_secmgr_FileSystemSecurityPolicy_checkPerm__Ljx_fs_FSObject_2I_Z};

// locals: 5
// stack: 2
// args: 2
s8 func_jx_secmgr_FileSystemSecurityPolicy_checkPerm__Ljx_fs_FSObject_2I_Z(JThreadRuntime *runtime, struct jx_fs_FSObject* p0, s32 p1){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 569, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    // try catch :L1632914150 L1262607708 L999736366 (
    L1632914150:
    __frame->bytecodeIndex = 
    //  line no 127 , L1632914150 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 127;
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface jx/fs/FSObject.getAttribute()Ljx/fs/FSAttribute;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_fs_FSAttribute* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 209, 4);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast jx/fs/EXT2Attribute
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1455);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 128 , L1560702077 , bytecode index = 
    rstack[sp++].obj = rlocal[1].obj;
    // invokeinterface jx/fs/FSObject.getPermission()Ljx/fs/Permission;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_fs_Permission* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 209, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast jx/fs/EXT2Permission
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1456);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 131 , L507911745 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    //  bipush 6
    stack[sp++].i = 6;
    // invokevirtual jx/fs/EXT2Permission.getPermission(I)I
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 232, 2);
        stack[sp].i = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp++].i = local[2].i;
    stack[sp - 2].i = stack[sp - 2].i & stack[sp - 1].i; 
    --sp;
    stack[sp++].i = local[2].i;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1537772520;
    rstack[sp++].obj = rlocal[3].obj;
    ; 
    //  line no 132 , L1452442375 , bytecode index = 
    // invokevirtual jx/fs/EXT2Attribute.getUserID()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 233, 0);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[0].obj;
    // getfield jx/secmgr/FileSystemSecurityPolicy curPrincipal Ljx/secmgr/Principal_impl;
    rstack[sp - 1].obj = ((struct jx_secmgr_FileSystemSecurityPolicy*)rstack[sp - 1].obj)->curPrincipal_16;
    sp += 0;
    // getfield jx/secmgr/Principal_impl uid I
    stack[sp - 1].i = ((struct jx_secmgr_Principal_1impl*)rstack[sp - 1].obj)->uid_1;
    sp += 0;
    sp -= 2;
    if(stack[sp + 0].i  != stack[sp + 1].i) goto L1537772520;
    ; 
    //  line no 133 , L949581868 , bytecode index = 
    // iconst_1
    stack[sp++].i = 1;
    L1262607708:
    __frame->bytecodeIndex = 
    method_exit(runtime);
    return stack[sp - 1].i;
    L1537772520:
    //  line no 134 , L1537772520 , bytecode index = 
    goto L369347944;
    L999736366:
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1447);
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
    L369347944:
    //  line no 135 , L369347944 , bytecode index = 
    // iconst_0
    stack[sp++].i = 0;
    method_exit(runtime);
    return stack[sp - 1].i;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        case 0 : goto L999736366;
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_jx_secmgr_FileSystemSecurityPolicy_checkPerm__Ljx_fs_FSObject_2I_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_secmgr_FileSystemSecurityPolicy_checkPerm__Ljx_fs_FSObject_2I_Z(runtime, ins, para[0].i);
}


// locals: 2
// stack: 1
// args: 1
s8 func_jx_secmgr_FileSystemSecurityPolicy_createPortal__Ljx_zero_PortalInfo_2_Z(JThreadRuntime *runtime, struct jx_zero_PortalInfo* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 570, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 140 , L940087898 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 140;
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

void bridge_jx_secmgr_FileSystemSecurityPolicy_createPortal__Ljx_zero_PortalInfo_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_jx_secmgr_FileSystemSecurityPolicy_createPortal__Ljx_zero_PortalInfo_2_Z(runtime, ins);
}


// locals: 2
// stack: 0
// args: 1
void func_jx_secmgr_FileSystemSecurityPolicy_destroyPortal__Ljx_zero_PortalInfo_2_V(JThreadRuntime *runtime, struct jx_zero_PortalInfo* p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 571, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 144 , L1724457619 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 144;
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

void bridge_jx_secmgr_FileSystemSecurityPolicy_destroyPortal__Ljx_zero_PortalInfo_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_secmgr_FileSystemSecurityPolicy_destroyPortal__Ljx_zero_PortalInfo_2_V(runtime, ins);
}


