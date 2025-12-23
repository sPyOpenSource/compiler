// CLASS: jx/db/avltree/AVLBaum$Status extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_db_avltree_AVLBaum_00024Status_static {};



__refer arr_vmtable_jx_db_avltree_AVLBaum_00024Status_from_jx_db_avltree_AVLBaum_00024Status[] = {
    NULL
};
__refer arr_vmtable_jx_db_avltree_AVLBaum_00024Status_from_java_lang_Object[] = {
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
VMTable vmtable_jx_db_avltree_AVLBaum_00024Status[] = {
    {193, 0, arr_vmtable_jx_db_avltree_AVLBaum_00024Status_from_jx_db_avltree_AVLBaum_00024Status}, //0
    {10, 11, arr_vmtable_jx_db_avltree_AVLBaum_00024Status_from_java_lang_Object}, //1
};



// locals: 1
// stack: 2
// args: 0
void func_jx_db_avltree_AVLBaum_00024Status__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 465, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 26 , L970535245 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 26;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 27 , L194481424 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield jx/db/avltree/AVLBaum$Status unbal Z
    sp -= 2;
    ((struct jx_db_avltree_AVLBaum_00024Status*)rstack[sp + 0].obj)->unbal_0 = stack[sp + 1].i;
    ; 
    //  line no 28 , L1534755892 , bytecode index = 
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

void bridge_jx_db_avltree_AVLBaum_00024Status__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_jx_db_avltree_AVLBaum_00024Status__init____V(runtime, ins);
}


