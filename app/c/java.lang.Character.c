// CLASS: java/lang/Character extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_lang_Character_static {struct java_lang_Class* TYPE_0;  };
struct java_lang_Character_static static_var_java_lang_Character = {NULL};


__refer arr_vmtable_java_lang_Character_from_java_lang_Character[] = {
    func_java_lang_Character_charValue___C  //0
};
__refer arr_vmtable_java_lang_Character_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_Character[] = {
    {393, 1, arr_vmtable_java_lang_Character_from_java_lang_Character}, //0
    {5, 10, arr_vmtable_java_lang_Character_from_java_lang_Object}, //1
};



// locals: 2
// stack: 2
// args: 1
void func_java_lang_Character__init___C_V(JThreadRuntime *runtime, u16 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2883, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 13 , L786036472 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 13;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 14 , L622609024 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield java/lang/Character value C
    sp -= 2;
    ((struct java_lang_Character*)rstack[sp + 0].obj)->value_1 = stack[sp + 1].i;
    ; 
    //  line no 15 , L895812217 , bytecode index = 
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

void bridge_java_lang_Character__init___C_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Character__init___C_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
u16 func_java_lang_Character_charValue___C(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 18 , L405700314 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/lang/Character value C
    stack[sp - 1].i = ((struct java_lang_Character*)rstack[sp - 1].obj)->value_1;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_lang_Character_charValue___C(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Character_charValue___C(runtime, ins);
}


// locals: 1
// stack: 3
// args: 2
struct java_lang_Character* func_java_lang_Character_valueOf__C_Ljava_lang_Character_2(JThreadRuntime *runtime, struct java_lang_Character* p0, u16 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[4];
    RStackItem rstack[4];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2885, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 22 , L1107984450 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 22;
    // new java/lang/Character
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 393);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    stack[sp++].i = local[0].i;
    // invokespecial java/lang/Character.<init>(C)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 0, 
            goto __ExceptionHandler;
        }
        func_java_lang_Character__init___C_V(runtime, stack[sp + 0].i);
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

void bridge_java_lang_Character_valueOf__C_Ljava_lang_Character_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_lang_Character_valueOf__C_Ljava_lang_Character_2(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 2
// args: 2
u16 func_java_lang_Character_toLowerCase__C_C(JThreadRuntime *runtime, struct java_lang_Character* p0, u16 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2886, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 26 , L1495382332 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 26;
    stack[sp++].i = local[0].i;
    //  bipush 65
    stack[sp++].i = 65;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L263103706;
    stack[sp++].i = local[0].i;
    //  bipush 90
    stack[sp++].i = 90;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L263103706;
    stack[sp++].i = local[0].i;
    //  bipush 32
    stack[sp++].i = 32;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    goto L430976509;
    L263103706:
    stack[sp++].i = local[0].i;
    L430976509:
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

void bridge_java_lang_Character_toLowerCase__C_C(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Character_toLowerCase__C_C(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 2
// args: 2
u16 func_java_lang_Character_toUpperCase__C_C(JThreadRuntime *runtime, struct java_lang_Character* p0, u16 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2887, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 30 , L1777519364 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 30;
    stack[sp++].i = local[0].i;
    //  bipush 97
    stack[sp++].i = 97;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L327170708;
    stack[sp++].i = local[0].i;
    //  bipush 122
    stack[sp++].i = 122;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L327170708;
    stack[sp++].i = local[0].i;
    //  bipush 32
    stack[sp++].i = 32;
    stack[sp - 2].i = stack[sp - 2].i - stack[sp - 1].i; 
    --sp;
    stack[sp - 1].i = (u16)stack[sp - 1].i; 
    goto L189215452;
    L327170708:
    stack[sp++].i = local[0].i;
    L189215452:
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

void bridge_java_lang_Character_toUpperCase__C_C(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Character_toUpperCase__C_C(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 2
// args: 2
s8 func_java_lang_Character_isLowerCase__C_Z(JThreadRuntime *runtime, struct java_lang_Character* p0, u16 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2888, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 34 , L981231499 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 34;
    stack[sp++].i = local[0].i;
    //  bipush 97
    stack[sp++].i = 97;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L683327178;
    stack[sp++].i = local[0].i;
    //  bipush 122
    stack[sp++].i = 122;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L683327178;
    // iconst_1
    stack[sp++].i = 1;
    goto L450476243;
    L683327178:
    // iconst_0
    stack[sp++].i = 0;
    L450476243:
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

void bridge_java_lang_Character_isLowerCase__C_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Character_isLowerCase__C_Z(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 2
// args: 2
s8 func_java_lang_Character_isUpperCase__C_Z(JThreadRuntime *runtime, struct java_lang_Character* p0, u16 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2889, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 37 , L1335082762 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 37;
    stack[sp++].i = local[0].i;
    //  bipush 65
    stack[sp++].i = 65;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L841090268;
    stack[sp++].i = local[0].i;
    //  bipush 90
    stack[sp++].i = 90;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L841090268;
    // iconst_1
    stack[sp++].i = 1;
    goto L1701461355;
    L841090268:
    // iconst_0
    stack[sp++].i = 0;
    L1701461355:
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

void bridge_java_lang_Character_isUpperCase__C_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Character_isUpperCase__C_Z(runtime, para[0].obj, para[1].i);
}


// locals: 1
// stack: 2
// args: 2
s8 func_java_lang_Character_isDigit__C_Z(JThreadRuntime *runtime, struct java_lang_Character* p0, u16 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2890, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 40 , L2005537360 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 40;
    stack[sp++].i = local[0].i;
    //  bipush 48
    stack[sp++].i = 48;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L1437396121;
    stack[sp++].i = local[0].i;
    //  bipush 57
    stack[sp++].i = 57;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L1437396121;
    // iconst_1
    stack[sp++].i = 1;
    goto L1629032994;
    L1437396121:
    // iconst_0
    stack[sp++].i = 0;
    L1629032994:
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

void bridge_java_lang_Character_isDigit__C_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Character_isDigit__C_Z(runtime, para[0].obj, para[1].i);
}


// locals: 0
// stack: 1
// args: 1
void func_java_lang_Character__clinit____V(JThreadRuntime *runtime, struct java_lang_Character* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 2891, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 9 , L2134681162 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 9;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 4687);
    // invokestatic java/lang/Class.getPrimitiveClass(Ljava/lang/String;)Ljava/lang/Class;
    {
        sp -= 2;
        rstack[sp].obj = func_java_lang_Class_getPrimitiveClass__Ljava_lang_String_2_Ljava_lang_Class_2(runtime, rstack[sp + 0].obj, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic java/lang/Character TYPE Ljava/lang/Class;
    sp -= 1;
    static_var_java_lang_Character.TYPE_0 = rstack[sp].obj;
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

void bridge_java_lang_Character__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Character__clinit____V(runtime, para[0].obj);
}


