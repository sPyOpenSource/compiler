// CLASS: jx/zero/DeviceMemory extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct jx_zero_DeviceMemory_static {};



__refer arr_vmtable_jx_zero_DeviceMemory_from_jx_zero_DeviceMemory[] = {
    NULL
};
__refer arr_vmtable_jx_zero_DeviceMemory_from_java_lang_Object[] = {
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
__refer arr_vmtable_jx_zero_DeviceMemory_from_jx_zero_Memory[] = {
    func_jx_zero_Memory_set8__IB_V,  //0
    func_jx_zero_Memory_set16__IS_V,  //1
    func_jx_zero_Memory_set32__II_V,  //2
    func_jx_zero_Memory_setLittleEndian32__II_V,  //3
    func_jx_zero_Memory_setLittleEndian16__IS_V,  //4
    func_jx_zero_Memory_setBigEndian32__II_V,  //5
    func_jx_zero_Memory_setBigEndian16__IS_V,  //6
    func_jx_zero_Memory_copyFromByteArray___3BIII_V,  //7
    func_jx_zero_Memory_copyFromMemory__Ljx_zero_Memory_2III_I,  //8
    func_jx_zero_Memory_split2__I_3Ljx_zero_Memory_2_V,  //9
    func_jx_zero_Memory_split3__II_3Ljx_zero_Memory_2_V,  //10
    func_jx_zero_Memory_getSubRange__II_Ljx_zero_Memory_2,  //11
    func_jx_zero_Memory_joinPrevious___Ljx_zero_Memory_2,  //12
    func_jx_zero_Memory_joinNext___Ljx_zero_Memory_2,  //13
    func_jx_zero_Memory_joinAll___Ljx_zero_Memory_2,  //14
    func_jx_zero_Memory_map__Ljx_zero_VMClass_2_Ljava_lang_Object_2,  //15
    func_jx_zero_Memory_revoke___Ljx_zero_Memory_2,  //16
    func_jx_zero_Memory_isValid___Z,  //17
    func_jx_zero_Memory_copy__III_V,  //18
    func_jx_zero_Memory_move__III_V,  //19
    func_jx_zero_Memory_fill16__SII_V,  //20
    func_jx_zero_Memory_fill32__III_V,  //21
    func_jx_zero_Memory_clear___V  //22
};
__refer arr_vmtable_jx_zero_DeviceMemory_from_jx_zero_ReadOnlyMemory[] = {
    func_jx_zero_ReadOnlyMemory_get8__I_B,  //0
    func_jx_zero_ReadOnlyMemory_get16__I_S,  //1
    func_jx_zero_ReadOnlyMemory_get32__I_I,  //2
    func_jx_zero_ReadOnlyMemory_getLittleEndian32__I_I,  //3
    func_jx_zero_ReadOnlyMemory_getLittleEndian16__I_S,  //4
    func_jx_zero_ReadOnlyMemory_getBigEndian32__I_I,  //5
    func_jx_zero_ReadOnlyMemory_getBigEndian16__I_S,  //6
    func_jx_zero_ReadOnlyMemory_copyToByteArray___3BIII_V,  //7
    func_jx_zero_ReadOnlyMemory_copyToMemory__Ljx_zero_Memory_2III_I,  //8
    func_jx_zero_ReadOnlyMemory_getReadOnlySubRange__II_Ljx_zero_ReadOnlyMemory_2,  //9
    func_jx_zero_ReadOnlyMemory_size___I,  //10
    func_jx_zero_ReadOnlyMemory_getStartAddress___I  //11
};
__refer arr_vmtable_jx_zero_DeviceMemory_from_jx_zero_Portal[] = {
    NULL
};
VMTable vmtable_jx_zero_DeviceMemory[] = {
    {348, 0, arr_vmtable_jx_zero_DeviceMemory_from_jx_zero_DeviceMemory}, //0
    {5, 10, arr_vmtable_jx_zero_DeviceMemory_from_java_lang_Object}, //1
    {209, 23, arr_vmtable_jx_zero_DeviceMemory_from_jx_zero_Memory}, //2
    {199, 12, arr_vmtable_jx_zero_DeviceMemory_from_jx_zero_ReadOnlyMemory}, //3
    {60, 0, arr_vmtable_jx_zero_DeviceMemory_from_jx_zero_Portal}, //4
};



