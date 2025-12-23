// CLASS: java/util/LinkedHashMap$Entry extends java/util/HashMap$Node
#include "metadata.h"


// generation
// globals
//struct java_util_LinkedHashMap_00024Entry_static {};



__refer arr_vmtable_java_util_LinkedHashMap_00024Entry_from_java_util_LinkedHashMap_00024Entry[] = {
    NULL
};
__refer arr_vmtable_java_util_LinkedHashMap_00024Entry_from_java_util_HashMap_00024Node[] = {
    func_java_util_HashMap_00024Node_getKey___Ljava_lang_Object_2,  //0
    func_java_util_HashMap_00024Node_getValue___Ljava_lang_Object_2,  //1
    func_java_util_HashMap_00024Node_toString___Ljava_lang_String_2,  //2
    func_java_util_HashMap_00024Node_hashCode___I,  //3
    func_java_util_HashMap_00024Node_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2,  //4
    func_java_util_HashMap_00024Node_equals__Ljava_lang_Object_2_Z  //5
};
__refer arr_vmtable_java_util_LinkedHashMap_00024Entry_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_util_HashMap_00024Node_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_util_HashMap_00024Node_toString___Ljava_lang_String_2,  //8
    func_java_util_HashMap_00024Node_equals__Ljava_lang_Object_2_Z,  //9
    func_java_lang_Object_finalize___V  //10
};
__refer arr_vmtable_java_util_LinkedHashMap_00024Entry_from_java_util_Map_00024Entry[] = {
    func_java_util_HashMap_00024Node_getKey___Ljava_lang_Object_2,  //0
    func_java_util_HashMap_00024Node_getValue___Ljava_lang_Object_2,  //1
    func_java_util_HashMap_00024Node_setValue__Ljava_lang_Object_2_Ljava_lang_Object_2,  //2
    func_java_util_HashMap_00024Node_hashCode___I,  //3
    func_java_util_HashMap_00024Node_equals__Ljava_lang_Object_2_Z  //4
};
VMTable vmtable_java_util_LinkedHashMap_00024Entry[] = {
    {28, 0, arr_vmtable_java_util_LinkedHashMap_00024Entry_from_java_util_LinkedHashMap_00024Entry}, //0
    {29, 6, arr_vmtable_java_util_LinkedHashMap_00024Entry_from_java_util_HashMap_00024Node}, //1
    {10, 11, arr_vmtable_java_util_LinkedHashMap_00024Entry_from_java_lang_Object}, //2
    {30, 5, arr_vmtable_java_util_LinkedHashMap_00024Entry_from_java_util_Map_00024Entry}, //3
};



// locals: 5
// stack: 5
// args: 4
void func_java_util_LinkedHashMap_00024Entry__init___ILjava_lang_Object_2Ljava_lang_Object_2Ljava_util_HashMap_00024Node_2_V(JThreadRuntime *runtime, s32 p0, struct java_lang_Object* p1, struct java_lang_Object* p2, struct java_util_HashMap_00024Node* p3){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 32, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    rlocal[1].obj = p1;
    rlocal[2].obj = p2;
    rlocal[3].obj = p3;
    ; 
    //  line no 195 , L921760190 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 195;
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    rstack[sp++].obj = rlocal[2].obj;
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[4].obj;
    // invokespecial java/util/HashMap$Node.<init>(ILjava/lang/Object;Ljava/lang/Object;Ljava/util/HashMap$Node;)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_util_HashMap_00024Node__init___ILjava_lang_Object_2Ljava_lang_Object_2Ljava_util_HashMap_00024Node_2_V(runtime, stack[sp + 0].i, rstack[sp + 1].obj, rstack[sp + 2].obj, rstack[sp + 3].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 196 , L360067785 , bytecode index = 
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

void bridge_java_util_LinkedHashMap_00024Entry__init___ILjava_lang_Object_2Ljava_lang_Object_2Ljava_util_HashMap_00024Node_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_util_LinkedHashMap_00024Entry__init___ILjava_lang_Object_2Ljava_lang_Object_2Ljava_util_HashMap_00024Node_2_V(runtime, ins, para[0].obj, para[1].obj, para[2].obj);
}


