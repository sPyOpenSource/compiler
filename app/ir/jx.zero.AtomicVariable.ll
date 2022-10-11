; CLASS: jx/zero/AtomicVariable extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%java_lang_Object = type {} ; use java/lang/Object
%jx_zero_AtomicVariable = type {} ; use jx/zero/AtomicVariable
%jx_zero_CPUState = type {i32, i32, i32, i32, i32, i32, i32, i32} ; use jx/zero/CPUState
; globals


; locals: 0
; stack: 0
; args: 1
define %java_lang_Object* @jx_zero_AtomicVariable_get(%jx_zero_AtomicVariable* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_AtomicVariable_set_Ljava_lang_Object_(%jx_zero_AtomicVariable* %s0, %java_lang_Object* %s1){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_AtomicVariable_atomicUpdateUnblock_Ljava_lang_Object_Ljx_zero_CPUState_(%jx_zero_AtomicVariable* %s0, %java_lang_Object* %s1, %jx_zero_CPUState* %s2){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_AtomicVariable_blockIfEqual_Ljava_lang_Object_(%jx_zero_AtomicVariable* %s0, %java_lang_Object* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_AtomicVariable_blockIfNotEqual_Ljava_lang_Object_(%jx_zero_AtomicVariable* %s0, %java_lang_Object* %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_AtomicVariable_activateListMode(%jx_zero_AtomicVariable* %s0){
    
}


