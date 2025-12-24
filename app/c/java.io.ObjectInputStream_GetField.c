// CLASS: java/io/ObjectInputStream$GetField extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_io_ObjectInputStream_00024GetField_static {};



__refer arr_vmtable_java_io_ObjectInputStream_00024GetField_from_java_io_ObjectInputStream_00024GetField[] = {
    func_java_io_ObjectInputStream_00024GetField_getObjectStreamClass___Ljava_io_ObjectStreamClass_2,  //0
    func_java_io_ObjectInputStream_00024GetField_defaulted__Ljava_lang_String_2_Z,  //1
    func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2Z_Z,  //2
    func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2B_B,  //3
    func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2C_C,  //4
    func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2S_S,  //5
    func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2I_I,  //6
    func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2J_J,  //7
    func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2F_F,  //8
    func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2D_D,  //9
    func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2Ljava_lang_Object_2_Ljava_lang_Object_2  //10
};
__refer arr_vmtable_java_io_ObjectInputStream_00024GetField_from_java_lang_Object[] = {
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
VMTable vmtable_java_io_ObjectInputStream_00024GetField[] = {
    {82, 11, arr_vmtable_java_io_ObjectInputStream_00024GetField_from_java_io_ObjectInputStream_00024GetField}, //0
    {10, 11, arr_vmtable_java_io_ObjectInputStream_00024GetField_from_java_lang_Object}, //1
};



// locals: 1
// stack: 1
// args: 0
void func_java_io_ObjectInputStream_00024GetField__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 255, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 15 , L538185145 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 15;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
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

void bridge_java_io_ObjectInputStream_00024GetField__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_io_ObjectInputStream_00024GetField__init____V(runtime, ins);
}


// locals: 0
// stack: 0
// args: 0
struct java_io_ObjectStreamClass* func_java_io_ObjectInputStream_00024GetField_getObjectStreamClass___Ljava_io_ObjectStreamClass_2(JThreadRuntime *runtime){
    
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 256, &rstack[0], NULL, &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_io_ObjectInputStream_00024GetField_getObjectStreamClass___Ljava_io_ObjectStreamClass_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_io_ObjectInputStream_00024GetField_getObjectStreamClass___Ljava_io_ObjectStreamClass_2(runtime, ins);
}


// locals: 0
// stack: 0
// args: 1
s8 func_java_io_ObjectInputStream_00024GetField_defaulted__Ljava_lang_String_2_Z(JThreadRuntime *runtime, struct java_lang_String* p0){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 257, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_io_ObjectInputStream_00024GetField_defaulted__Ljava_lang_String_2_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_ObjectInputStream_00024GetField_defaulted__Ljava_lang_String_2_Z(runtime, ins);
}


// locals: 0
// stack: 0
// args: 2
s8 func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2Z_Z(JThreadRuntime *runtime, struct java_lang_String* p0, s8 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 258, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2Z_Z(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2Z_Z(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
s8 func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2B_B(JThreadRuntime *runtime, struct java_lang_String* p0, s8 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 259, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2B_B(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2B_B(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
u16 func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2C_C(JThreadRuntime *runtime, struct java_lang_String* p0, u16 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 260, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2C_C(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2C_C(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
s16 func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2S_S(JThreadRuntime *runtime, struct java_lang_String* p0, s16 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 261, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2S_S(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2S_S(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
s32 func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2I_I(JThreadRuntime *runtime, struct java_lang_String* p0, s32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 262, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2I_I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2I_I(runtime, ins, para[0].i);
}


// locals: 0
// stack: 0
// args: 2
s64 func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2J_J(JThreadRuntime *runtime, struct java_lang_String* p0, s64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 263, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2J_J(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->j = func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2J_J(runtime, ins, para[0].j);
}


// locals: 0
// stack: 0
// args: 2
f32 func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2F_F(JThreadRuntime *runtime, struct java_lang_String* p0, f32 p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 264, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2F_F(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->f = func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2F_F(runtime, ins, para[0].f);
}


// locals: 0
// stack: 0
// args: 2
f64 func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2D_D(JThreadRuntime *runtime, struct java_lang_String* p0, f64 p1){
    
    StackItem local[3] = {0};
    RStackItem rlocal[3] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 265, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return 0;
}

void bridge_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2D_D(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->d = func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2D_D(runtime, ins, para[0].d);
}


// locals: 0
// stack: 0
// args: 2
struct java_lang_Object* func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, struct java_lang_String* p0, struct java_lang_Object* p1){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 266, &rstack[0], &rlocal[0], &sp);
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return NULL;
}

void bridge_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2Ljava_lang_Object_2_Ljava_lang_Object_2(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->obj = func_java_io_ObjectInputStream_00024GetField_get__Ljava_lang_String_2Ljava_lang_Object_2_Ljava_lang_Object_2(runtime, ins, para[0].obj);
}


