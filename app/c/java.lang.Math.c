// CLASS: java/lang/Math extends java/lang/Object
#include "metadata.h"

f64 func_java_lang_Math_cos__D_D(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1);
f64 func_java_lang_Math_asin__D_D(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1);
f64 func_java_lang_Math_pow__DD_D(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1, f64 p3);
f64 func_java_lang_Math_tan__D_D(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1);
f64 func_java_lang_Math_exp__D_D(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1);
f64 func_java_lang_Math_ceil__D_D(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1);
f64 func_java_lang_Math_atan2__DD_D(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1, f64 p3);
f64 func_java_lang_Math_atan__D_D(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1);
f64 func_java_lang_Math_acos__D_D(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1);
f64 func_java_lang_Math_sin__D_D(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1);
f64 func_java_lang_Math_sqrt__D_D(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1);
f64 func_java_lang_Math_floor__D_D(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1);
f64 func_java_lang_Math_log__D_D(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1);

// generation
// globals
//struct java_lang_Math_static {f64 E_0; f64 PI_1; s64 negativeZeroFloatBits_2; s64 negativeZeroDoubleBits_3;  };
struct java_lang_Math_static static_var_java_lang_Math = {0, 0, 0, 0};


__refer arr_vmtable_java_lang_Math_from_java_lang_Math[] = {
    NULL
};
__refer arr_vmtable_java_lang_Math_from_java_lang_Object[] = {
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
VMTable vmtable_java_lang_Math[] = {
    {9, 0, arr_vmtable_java_lang_Math_from_java_lang_Math}, //0
    {5, 10, arr_vmtable_java_lang_Math_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_java_lang_Math__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 15, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 13 , L875827115 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 13;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 14 , L716157500 , bytecode index = 
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

void bridge_java_lang_Math__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Math__init____V(runtime, ins);
}

void bridge_java_lang_Math_sin__D_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Math_sin__D_D(runtime, para[0].obj, para[1].d);
}

void bridge_java_lang_Math_cos__D_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Math_cos__D_D(runtime, para[0].obj, para[1].d);
}

void bridge_java_lang_Math_tan__D_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Math_tan__D_D(runtime, para[0].obj, para[1].d);
}


// locals: 2
// stack: 4
// args: 2
f64 func_java_lang_Math_toRadians__D_D(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 19, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    ; 
    //  line no 27 , L1416233903 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 27;
    stack[sp].d = local[0].d;
    sp += 2;
    //  ldc 
    stack[sp].d = 180.0;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d / stack[sp - 2].d; 
    sp -= 2;
    //  ldc 
    stack[sp].d = 3.141592653589793;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d * stack[sp - 2].d; 
    sp -= 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_Math_toRadians__D_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Math_toRadians__D_D(runtime, para[0].obj, para[1].d);
}


// locals: 2
// stack: 4
// args: 2
f64 func_java_lang_Math_toDegrees__D_D(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 20, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    ; 
    //  line no 31 , L679890578 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 31;
    stack[sp].d = local[0].d;
    sp += 2;
    //  ldc 
    stack[sp].d = 180.0;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d * stack[sp - 2].d; 
    sp -= 2;
    //  ldc 
    stack[sp].d = 3.141592653589793;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d / stack[sp - 2].d; 
    sp -= 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_Math_toDegrees__D_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Math_toDegrees__D_D(runtime, para[0].obj, para[1].d);
}

void bridge_java_lang_Math_sqrt__D_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Math_sqrt__D_D(runtime, para[0].obj, para[1].d);
}

void bridge_java_lang_Math_ceil__D_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Math_ceil__D_D(runtime, para[0].obj, para[1].d);
}

void bridge_java_lang_Math_exp__D_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Math_exp__D_D(runtime, para[0].obj, para[1].d);
}

void bridge_java_lang_Math_floor__D_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Math_floor__D_D(runtime, para[0].obj, para[1].d);
}


// locals: 1
// stack: 1
// args: 2
s32 func_java_lang_Math_abs__I_I(JThreadRuntime *runtime, struct java_lang_Math* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 25, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    ; 
    //  line no 43 , L1849433705 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 43;
    stack[sp++].i = local[0].i;
    if(stack[--sp].i  >= 0) goto L411631404;
    stack[sp++].i = local[0].i;
    stack[sp - 1].i = -stack[sp - 1].i; 
    goto L897913732;
    L411631404:
    stack[sp++].i = local[0].i;
    L897913732:
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

void bridge_java_lang_Math_abs__I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Math_abs__I_I(runtime, para[0].obj, para[1].i);
}


// locals: 2
// stack: 4
// args: 2
s64 func_java_lang_Math_abs__J_J(JThreadRuntime *runtime, struct java_lang_Math* p0, s64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 26, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].j = p1;
    ; 
    //  line no 47 , L627185331 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 47;
    stack[sp].j = local[0].j;
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
    if(stack[--sp].i  >= 0) goto L226170135;
    stack[sp].j = local[0].j;
    sp += 2;
    stack[sp - 2].j = -stack[sp - 2].j; 
    goto L381707837;
    L226170135:
    stack[sp].j = local[0].j;
    sp += 2;
    L381707837:
    method_exit(runtime);
    return stack[sp - 2].j;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_Math_abs__J_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_lang_Math_abs__J_J(runtime, para[0].obj, para[1].j);
}


// locals: 1
// stack: 2
// args: 2
f32 func_java_lang_Math_abs__F_F(JThreadRuntime *runtime, struct java_lang_Math* p0, f32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 27, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].f = p1;
    ; 
    //  line no 51 , L1321640594 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 51;
    stack[sp++].f = local[0].f;
    //  fconst 0
    stack[sp++].f = 0;
    {
    f32 v1 = stack[sp - 1].f;
    f32 v2 = stack[sp - 2].f;
    stack[sp - 2].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    --sp;
    }
    if(stack[--sp].i  > 0) goto L457233904;
    //  fconst 0
    stack[sp++].f = 0;
    stack[sp++].f = local[0].f;
    stack[sp - 2].f = stack[sp - 2].f - stack[sp - 1].f; 
    --sp;
    goto L245672235;
    L457233904:
    stack[sp++].f = local[0].f;
    L245672235:
    method_exit(runtime);
    return stack[sp - 1].f;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_Math_abs__F_F(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->f = func_java_lang_Math_abs__F_F(runtime, para[0].obj, para[1].f);
}


// locals: 2
// stack: 4
// args: 2
f64 func_java_lang_Math_abs__D_D(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 28, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    ; 
    //  line no 55 , L1207140081 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 55;
    stack[sp].d = local[0].d;
    sp += 2;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  > 0) goto L1510067370;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    stack[sp].d = local[0].d;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d - stack[sp - 2].d; 
    sp -= 2;
    goto L1908923184;
    L1510067370:
    stack[sp].d = local[0].d;
    sp += 2;
    L1908923184:
    method_exit(runtime);
    return stack[sp - 2].d;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_Math_abs__D_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Math_abs__D_D(runtime, para[0].obj, para[1].d);
}


// locals: 2
// stack: 2
// args: 3
s32 func_java_lang_Math_max__II_I(JThreadRuntime *runtime, struct java_lang_Math* p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 29, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 59 , L1164175787 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 59;
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  < stack[sp + 1].i) goto L290658609;
    stack[sp++].i = local[0].i;
    goto L1577213552;
    L290658609:
    stack[sp++].i = local[1].i;
    L1577213552:
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

void bridge_java_lang_Math_max__II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Math_max__II_I(runtime, para[0].obj, para[1].i, para[2].i);
}


// locals: 4
// stack: 4
// args: 3
s64 func_java_lang_Math_max__JJ_J(JThreadRuntime *runtime, struct java_lang_Math* p0, s64 p1, s64 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 30, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].j = p1;
    local[3].j = p3;
    ; 
    //  line no 63 , L1170794006 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 63;
    stack[sp].j = local[0].j;
    sp += 2;
    stack[sp].j = local[2].j;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  < 0) goto L1289479439;
    stack[sp].j = local[0].j;
    sp += 2;
    goto L6738746;
    L1289479439:
    stack[sp].j = local[2].j;
    sp += 2;
    L6738746:
    method_exit(runtime);
    return stack[sp - 2].j;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_Math_max__JJ_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_lang_Math_max__JJ_J(runtime, para[0].obj, para[1].j, para[2].j);
}


// locals: 2
// stack: 4
// args: 3
f32 func_java_lang_Math_max__FF_F(JThreadRuntime *runtime, struct java_lang_Math* p0, f32 p1, f32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 31, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].f = p1;
    local[2].f = p2;
    ; 
    //  line no 70 , L2114694065 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 70;
    stack[sp++].f = local[0].f;
    stack[sp++].f = local[0].f;
    {
    f32 v1 = stack[sp - 1].f;
    f32 v2 = stack[sp - 2].f;
    stack[sp - 2].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    --sp;
    }
    if(stack[--sp].i  == 0) goto L1844169442;
    ; 
    //  line no 71 , L1537358694 , bytecode index = 
    stack[sp++].f = local[0].f;
    method_exit(runtime);
    return stack[sp - 1].f;
    L1844169442:
    //  line no 73 , L1844169442 , bytecode index = 
    stack[sp++].f = local[0].f;
    //  fconst 0
    stack[sp++].f = 0;
    {
    f32 v1 = stack[sp - 1].f;
    f32 v2 = stack[sp - 2].f;
    stack[sp - 2].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    --sp;
    }
    if(stack[--sp].i  != 0) goto L804581391;
    stack[sp++].f = local[1].f;
    //  fconst 0
    stack[sp++].f = 0;
    {
    f32 v1 = stack[sp - 1].f;
    f32 v2 = stack[sp - 2].f;
    stack[sp - 2].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    --sp;
    }
    if(stack[--sp].i  != 0) goto L804581391;
    stack[sp++].f = local[0].f;
    ; 
    //  line no 74 , L209813603 , bytecode index = 
    // invokestatic java/lang/Float.floatToIntBits(F)I
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Float_floatToIntBits__F_I(runtime, rstack[sp + 0].obj, stack[sp + 1].f);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    // getstatic java/lang/Math negativeZeroFloatBits J
    stack[sp].j =static_var_java_lang_Math.negativeZeroFloatBits_2;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L804581391;
    ; 
    //  line no 75 , L1057941451 , bytecode index = 
    stack[sp++].f = local[1].f;
    method_exit(runtime);
    return stack[sp - 1].f;
    L804581391:
    //  line no 77 , L804581391 , bytecode index = 
    stack[sp++].f = local[0].f;
    stack[sp++].f = local[1].f;
    {
    f32 v1 = stack[sp - 1].f;
    f32 v2 = stack[sp - 2].f;
    stack[sp - 2].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    --sp;
    }
    if(stack[--sp].i  < 0) goto L1975358023;
    stack[sp++].f = local[0].f;
    goto L2101440631;
    L1975358023:
    stack[sp++].f = local[1].f;
    L2101440631:
    method_exit(runtime);
    return stack[sp - 1].f;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_Math_max__FF_F(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->f = func_java_lang_Math_max__FF_F(runtime, para[0].obj, para[1].f, para[2].f);
}


// locals: 4
// stack: 4
// args: 3
f64 func_java_lang_Math_max__DD_D(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1, f64 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 32, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    local[3].d = p3;
    ; 
    //  line no 81 , L901506536 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 81;
    stack[sp].d = local[0].d;
    sp += 2;
    stack[sp].d = local[0].d;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  == 0) goto L747464370;
    ; 
    //  line no 82 , L1513712028 , bytecode index = 
    stack[sp].d = local[0].d;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    L747464370:
    //  line no 84 , L747464370 , bytecode index = 
    stack[sp].d = local[0].d;
    sp += 2;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L1018547642;
    stack[sp].d = local[2].d;
    sp += 2;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L1018547642;
    stack[sp].d = local[0].d;
    sp += 2;
    ; 
    //  line no 85 , L1456208737 , bytecode index = 
    // invokestatic java/lang/Double.doubleToLongBits(D)J
    {
        sp -= 3;
        stack[sp].j = func_java_lang_Double_doubleToLongBits__D_J(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getstatic java/lang/Math negativeZeroDoubleBits J
    stack[sp].j =static_var_java_lang_Math.negativeZeroDoubleBits_3;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L1018547642;
    ; 
    //  line no 86 , L288665596 , bytecode index = 
    stack[sp].d = local[2].d;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    L1018547642:
    //  line no 88 , L1018547642 , bytecode index = 
    stack[sp].d = local[0].d;
    sp += 2;
    stack[sp].d = local[2].d;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  < 0) goto L13648335;
    stack[sp].d = local[0].d;
    sp += 2;
    goto L312116338;
    L13648335:
    stack[sp].d = local[2].d;
    sp += 2;
    L312116338:
    method_exit(runtime);
    return stack[sp - 2].d;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_Math_max__DD_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Math_max__DD_D(runtime, para[0].obj, para[1].d, para[2].d);
}


// locals: 2
// stack: 2
// args: 3
s32 func_java_lang_Math_min__II_I(JThreadRuntime *runtime, struct java_lang_Math* p0, s32 p1, s32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 33, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].i = p1;
    local[2].i = p2;
    ; 
    //  line no 92 , L796684896 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 92;
    stack[sp++].i = local[0].i;
    stack[sp++].i = local[1].i;
    sp -= 2;
    if(stack[sp + 0].i  > stack[sp + 1].i) goto L757108857;
    stack[sp++].i = local[0].i;
    goto L1809787067;
    L757108857:
    stack[sp++].i = local[1].i;
    L1809787067:
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

void bridge_java_lang_Math_min__II_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Math_min__II_I(runtime, para[0].obj, para[1].i, para[2].i);
}


// locals: 4
// stack: 4
// args: 3
s64 func_java_lang_Math_min__JJ_J(JThreadRuntime *runtime, struct java_lang_Math* p0, s64 p1, s64 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 34, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].j = p1;
    local[3].j = p3;
    ; 
    //  line no 96 , L659748578 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 96;
    stack[sp].j = local[0].j;
    sp += 2;
    stack[sp].j = local[2].j;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  > 0) goto L240650537;
    stack[sp].j = local[0].j;
    sp += 2;
    goto L483422889;
    L240650537:
    stack[sp].j = local[2].j;
    sp += 2;
    L483422889:
    method_exit(runtime);
    return stack[sp - 2].j;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_Math_min__JJ_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_lang_Math_min__JJ_J(runtime, para[0].obj, para[1].j, para[2].j);
}


// locals: 2
// stack: 4
// args: 3
f32 func_java_lang_Math_min__FF_F(JThreadRuntime *runtime, struct java_lang_Math* p0, f32 p1, f32 p2){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 35, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].f = p1;
    local[2].f = p2;
    ; 
    //  line no 100 , L1277181601 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 100;
    stack[sp++].f = local[0].f;
    stack[sp++].f = local[0].f;
    {
    f32 v1 = stack[sp - 1].f;
    f32 v2 = stack[sp - 2].f;
    stack[sp - 2].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    --sp;
    }
    if(stack[--sp].i  == 0) goto L41903949;
    ; 
    //  line no 101 , L488970385 , bytecode index = 
    stack[sp++].f = local[0].f;
    method_exit(runtime);
    return stack[sp - 1].f;
    L41903949:
    //  line no 103 , L41903949 , bytecode index = 
    stack[sp++].f = local[0].f;
    //  fconst 0
    stack[sp++].f = 0;
    {
    f32 v1 = stack[sp - 1].f;
    f32 v2 = stack[sp - 2].f;
    stack[sp - 2].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    --sp;
    }
    if(stack[--sp].i  != 0) goto L1209271652;
    stack[sp++].f = local[1].f;
    //  fconst 0
    stack[sp++].f = 0;
    {
    f32 v1 = stack[sp - 1].f;
    f32 v2 = stack[sp - 2].f;
    stack[sp - 2].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    --sp;
    }
    if(stack[--sp].i  != 0) goto L1209271652;
    stack[sp++].f = local[1].f;
    ; 
    //  line no 104 , L93122545 , bytecode index = 
    // invokestatic java/lang/Float.floatToIntBits(F)I
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Float_floatToIntBits__F_I(runtime, rstack[sp + 0].obj, stack[sp + 1].f);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    // getstatic java/lang/Math negativeZeroFloatBits J
    stack[sp].j =static_var_java_lang_Math.negativeZeroFloatBits_2;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L1209271652;
    ; 
    //  line no 105 , L2083562754 , bytecode index = 
    stack[sp++].f = local[1].f;
    method_exit(runtime);
    return stack[sp - 1].f;
    L1209271652:
    //  line no 107 , L1209271652 , bytecode index = 
    stack[sp++].f = local[0].f;
    stack[sp++].f = local[1].f;
    {
    f32 v1 = stack[sp - 1].f;
    f32 v2 = stack[sp - 2].f;
    stack[sp - 2].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    --sp;
    }
    if(stack[--sp].i  > 0) goto L1239731077;
    stack[sp++].f = local[0].f;
    goto L557041912;
    L1239731077:
    stack[sp++].f = local[1].f;
    L557041912:
    method_exit(runtime);
    return stack[sp - 1].f;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_Math_min__FF_F(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->f = func_java_lang_Math_min__FF_F(runtime, para[0].obj, para[1].f, para[2].f);
}


// locals: 4
// stack: 4
// args: 3
f64 func_java_lang_Math_min__DD_D(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1, f64 p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 36, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    local[3].d = p3;
    ; 
    //  line no 111 , L985922955 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 111;
    stack[sp].d = local[0].d;
    sp += 2;
    stack[sp].d = local[0].d;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  == 0) goto L1435804085;
    ; 
    //  line no 112 , L1784662007 , bytecode index = 
    stack[sp].d = local[0].d;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    L1435804085:
    //  line no 114 , L1435804085 , bytecode index = 
    stack[sp].d = local[0].d;
    sp += 2;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L997110508;
    stack[sp].d = local[2].d;
    sp += 2;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L997110508;
    stack[sp].d = local[2].d;
    sp += 2;
    ; 
    //  line no 115 , L509886383 , bytecode index = 
    // invokestatic java/lang/Double.doubleToLongBits(D)J
    {
        sp -= 3;
        stack[sp].j = func_java_lang_Double_doubleToLongBits__D_J(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getstatic java/lang/Math negativeZeroDoubleBits J
    stack[sp].j =static_var_java_lang_Math.negativeZeroDoubleBits_3;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L997110508;
    ; 
    //  line no 116 , L1854778591 , bytecode index = 
    stack[sp].d = local[2].d;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    L997110508:
    //  line no 118 , L997110508 , bytecode index = 
    stack[sp].d = local[0].d;
    sp += 2;
    stack[sp].d = local[2].d;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  > 0) goto L2054798982;
    stack[sp].d = local[0].d;
    sp += 2;
    goto L885951223;
    L2054798982:
    stack[sp].d = local[2].d;
    sp += 2;
    L885951223:
    method_exit(runtime);
    return stack[sp - 2].d;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_Math_min__DD_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Math_min__DD_D(runtime, para[0].obj, para[1].d, para[2].d);
}


// locals: 2
// stack: 4
// args: 2
f64 func_java_lang_Math_signum__D_D(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 37, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    ; 
    //  line no 122 , L142666848 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 122;
    stack[sp].d = local[0].d;
    sp += 2;
    // invokestatic java/lang/Double.isNaN(D)Z
    {
        sp -= 3;
        stack[sp].i = func_java_lang_Double_isNaN__D_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L1060830840;
    stack[sp].d = local[0].d;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    L1060830840:
    //  line no 123 , L1060830840 , bytecode index = 
    stack[sp].d = local[0].d;
    sp += 2;
    // invokestatic java/lang/Double.doubleToLongBits(D)J
    {
        sp -= 3;
        stack[sp].j = func_java_lang_Double_doubleToLongBits__D_J(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // getstatic java/lang/Math negativeZeroDoubleBits J
    stack[sp].j =static_var_java_lang_Math.negativeZeroDoubleBits_3;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L2137211482;
    stack[sp].d = local[0].d;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    L2137211482:
    //  line no 124 , L2137211482 , bytecode index = 
    stack[sp].d = local[0].d;
    sp += 2;
    // invokestatic java/lang/Double.doubleToLongBits(D)J
    {
        sp -= 3;
        stack[sp].j = func_java_lang_Double_doubleToLongBits__D_J(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].d = (f64)stack[sp - 2].j; 
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L920011586;
    stack[sp].d = local[0].d;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    L920011586:
    //  line no 125 , L920011586 , bytecode index = 
    stack[sp].d = local[0].d;
    sp += 2;
    //  dconst 0
    stack[sp].d = 0;
    sp += 2;
    {
    f64 v1 = stack[sp - 2].d;
    f64 v2 = stack[sp - 4].d;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  <= 0) goto L968514068;
    //  dconst 1
    stack[sp].d = 1;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    L968514068:
    //  line no 126 , L968514068 , bytecode index = 
    //  ldc 
    stack[sp].d = -1.0;
    sp += 2;
    method_exit(runtime);
    return stack[sp - 2].d;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_Math_signum__D_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Math_signum__D_D(runtime, para[0].obj, para[1].d);
}


// locals: 1
// stack: 4
// args: 2
f32 func_java_lang_Math_signum__F_F(JThreadRuntime *runtime, struct java_lang_Math* p0, f32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 38, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].f = p1;
    ; 
    //  line no 130 , L873415566 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 130;
    stack[sp++].f = local[0].f;
    // invokestatic java/lang/Float.isNaN(F)Z
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Float_isNaN__F_Z(runtime, rstack[sp + 0].obj, stack[sp + 1].f);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    if(stack[--sp].i  == 0) goto L818403870;
    stack[sp++].f = local[0].f;
    method_exit(runtime);
    return stack[sp - 1].f;
    L818403870:
    //  line no 131 , L818403870 , bytecode index = 
    stack[sp++].f = local[0].f;
    // invokestatic java/lang/Float.floatToIntBits(F)I
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Float_floatToIntBits__F_I(runtime, rstack[sp + 0].obj, stack[sp + 1].f);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    // getstatic java/lang/Math negativeZeroFloatBits J
    stack[sp].j =static_var_java_lang_Math.negativeZeroFloatBits_2;
    sp += 2;
    {  //lcmp
    s64 v1 = stack[sp - 2].j;
    s64 v2 = stack[sp - 4].j;
    stack[sp - 4].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    sp -= 3;
    }
    if(stack[--sp].i  != 0) goto L1531333864;
    stack[sp++].f = local[0].f;
    method_exit(runtime);
    return stack[sp - 1].f;
    L1531333864:
    //  line no 132 , L1531333864 , bytecode index = 
    stack[sp++].f = local[0].f;
    // invokestatic java/lang/Float.floatToIntBits(F)I
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Float_floatToIntBits__F_I(runtime, rstack[sp + 0].obj, stack[sp + 1].f);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].f = (f32)stack[sp - 1].i; 
    //  fconst 0
    stack[sp++].f = 0;
    {
    f32 v1 = stack[sp - 1].f;
    f32 v2 = stack[sp - 2].f;
    stack[sp - 2].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    --sp;
    }
    if(stack[--sp].i  != 0) goto L1468177767;
    stack[sp++].f = local[0].f;
    method_exit(runtime);
    return stack[sp - 1].f;
    L1468177767:
    //  line no 133 , L1468177767 , bytecode index = 
    stack[sp++].f = local[0].f;
    //  fconst 0
    stack[sp++].f = 0;
    {
    f32 v1 = stack[sp - 1].f;
    f32 v2 = stack[sp - 2].f;
    stack[sp - 2].i = v2 == v1 ? 0: ( v2 > v1 ? 1 : -1); 
    --sp;
    }
    if(stack[--sp].i  <= 0) goto L434091818;
    //  fconst 1
    stack[sp++].f = 1;
    method_exit(runtime);
    return stack[sp - 1].f;
    L434091818:
    //  line no 134 , L434091818 , bytecode index = 
    //  ldc 
    stack[sp++].f = -1.0;
    method_exit(runtime);
    return stack[sp - 1].f;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_Math_signum__F_F(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->f = func_java_lang_Math_signum__F_F(runtime, para[0].obj, para[1].f);
}


// locals: 2
// stack: 4
// args: 2
s64 func_java_lang_Math_round__D_J(JThreadRuntime *runtime, struct java_lang_Math* p0, f64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[5];
    RStackItem rstack[5];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 39, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].d = p1;
    ; 
    //  line no 138 , L2114889273 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 138;
    stack[sp].d = local[0].d;
    sp += 2;
    //  ldc 
    stack[sp].d = 0.5;
    sp += 2;
    stack[sp - 4].d = stack[sp - 4].d + stack[sp - 2].d; 
    sp -= 2;
    // invokestatic java/lang/Math.floor(D)D
    {
        sp -= 3;
        stack[sp].d = func_java_lang_Math_floor__D_D(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].j = (s64)stack[sp - 2].d; 
    method_exit(runtime);
    return stack[sp - 2].j;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_lang_Math_round__D_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_lang_Math_round__D_J(runtime, para[0].obj, para[1].d);
}


// locals: 1
// stack: 2
// args: 2
s32 func_java_lang_Math_round__F_I(JThreadRuntime *runtime, struct java_lang_Math* p0, f32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 40, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    local[1].f = p1;
    ; 
    //  line no 142 , L1504109395 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 142;
    stack[sp++].f = local[0].f;
    //  ldc 
    stack[sp++].f = 0.5;
    stack[sp - 2].f = stack[sp - 2].f + stack[sp - 1].f; 
    --sp;
    stack[sp - 1].d = (f64)stack[sp - 1].f; 
    ++sp;
    // invokestatic java/lang/Math.floor(D)D
    {
        sp -= 3;
        stack[sp].d = func_java_lang_Math_floor__D_D(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 2].i = (s32)stack[sp - 2].d; 
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

void bridge_java_lang_Math_round__F_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_lang_Math_round__F_I(runtime, para[0].obj, para[1].f);
}

void bridge_java_lang_Math_asin__D_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Math_asin__D_D(runtime, para[0].obj, para[1].d);
}

void bridge_java_lang_Math_acos__D_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Math_acos__D_D(runtime, para[0].obj, para[1].d);
}

void bridge_java_lang_Math_atan__D_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Math_atan__D_D(runtime, para[0].obj, para[1].d);
}

void bridge_java_lang_Math_log__D_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Math_log__D_D(runtime, para[0].obj, para[1].d);
}

void bridge_java_lang_Math_atan2__DD_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Math_atan2__DD_D(runtime, para[0].obj, para[1].d, para[2].d);
}

void bridge_java_lang_Math_pow__DD_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_lang_Math_pow__DD_D(runtime, para[0].obj, para[1].d, para[2].d);
}


// locals: 0
// stack: 2
// args: 1
void func_java_lang_Math__clinit____V(JThreadRuntime *runtime, struct java_lang_Math* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 47, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 66 , L1349414238 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 66;
    //  ldc 
    stack[sp++].f = -0.0;
    // invokestatic java/lang/Float.floatToIntBits(F)I
    {
        sp -= 2;
        stack[sp].i = func_java_lang_Float_floatToIntBits__F_I(runtime, rstack[sp + 0].obj, stack[sp + 1].f);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    stack[sp - 1].j = (s64)stack[sp - 1].i; 
    ++sp;
    // putstatic java/lang/Math negativeZeroFloatBits J
    sp -= 2;
    static_var_java_lang_Math.negativeZeroFloatBits_2 = stack[sp].j;
    ; 
    //  line no 67 , L157627094 , bytecode index = 
    //  ldc 
    stack[sp].d = -0.0;
    sp += 2;
    // invokestatic java/lang/Double.doubleToLongBits(D)J
    {
        sp -= 3;
        stack[sp].j = func_java_lang_Double_doubleToLongBits__D_J(runtime, rstack[sp + 0].obj, stack[sp + 1].d);
        sp += 2;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putstatic java/lang/Math negativeZeroDoubleBits J
    sp -= 2;
    static_var_java_lang_Math.negativeZeroDoubleBits_3 = stack[sp].j;
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

void bridge_java_lang_Math__clinit____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_lang_Math__clinit____V(runtime, para[0].obj);
}


