; CLASS: jx/zero/DomainManager extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
java/lang/String is unknown ; use java/lang/String
%.Ljx_zero_CPU_ = type {i32, [0 x %jx_zero_CPU*]} ; use [Ljx/zero/CPU;
%.Ljava_lang_String_ = type {i32, [0 x %java_lang_String*]} ; use [Ljava/lang/String;
%jx_zero_Naming = type {} ; use jx/zero/Naming
%.Ljava_lang_Object_ = type {i32, [0 x %java_lang_Object*]} ; use [Ljava/lang/Object;
%.I = type {i32, [0 x i32]} ; use [I
%jx_zero_Domain = type {} ; use jx/zero/Domain
%jx_zero_DomainManager = type {} ; use jx/zero/DomainManager
%jx_zero_DomainBorder = type {} ; use jx/zero/DomainBorder
%jx_zero_CPUState = type {i32, i32, i32, i32, i32, i32, i32, i32} ; use jx/zero/CPUState
%jx_zero_CPU = type {} ; use jx/zero/CPU
java/lang/Object is unknown ; use java/lang/Object
; globals


; locals: 0
; stack: 0
; args: 18
define %jx_zero_Domain* @jx_zero_DomainManager_createDomain_Ljava_lang_String__Ljx_zero_CPU__Ljava_lang_String_Ljava_lang_String__Ljava_lang_String_Ljava_lang_String_IIILjava_lang_String_II_Ljava_lang_String_Ljx_zero_Naming__Ljava_lang_Object_I_I(%jx_zero_DomainManager* %s0, %java_lang_String* %s1, %.Ljx_zero_CPU_* %s2, %.Ljava_lang_String_* %s3, %java_lang_String* %s4, %.Ljava_lang_String_* %s5, %java_lang_String* %s6, i32 %s7, i32 %s8, i32 %s9, %java_lang_String* %s10, i32 %s11, i32 %s12, %.Ljava_lang_String_* %s13, %jx_zero_Naming* %s14, %.Ljava_lang_Object_* %s15, i32 %s16, %.I* %s17){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_Domain* @jx_zero_DomainManager_getDomainZero(%jx_zero_DomainManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_Domain* @jx_zero_DomainManager_getCurrentDomain(%jx_zero_DomainManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 4
define void @jx_zero_DomainManager_installInterceptor_Ljx_zero_Domain_Ljx_zero_DomainBorder_Ljx_zero_CPUState_(%jx_zero_DomainManager* %s0, %jx_zero_Domain* %s1, %jx_zero_DomainBorder* %s2, %jx_zero_CPUState* %s3){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_DomainManager_gc_Ljx_zero_Domain_(%jx_zero_DomainManager* %s0, %jx_zero_Domain* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_DomainManager_freeze_Ljx_zero_Domain_(%jx_zero_DomainManager* %s0, %jx_zero_Domain* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_DomainManager_thaw_Ljx_zero_Domain_(%jx_zero_DomainManager* %s0, %jx_zero_Domain* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_DomainManager_terminate_Ljx_zero_Domain_(%jx_zero_DomainManager* %s0, %jx_zero_Domain* %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_DomainManager_terminateCaller(%jx_zero_DomainManager* %s0){
    
}


