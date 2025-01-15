; CLASS: jx/zero/CPU extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_CPUState = type {i32, i32, i32, i32, i32, i32, i32, i32} ; use jx/zero/CPUState
%jx_zero_CPU = type {} ; use jx/zero/CPU
java/lang/String is unknown ; use java/lang/String
; globals


; locals: 0
; stack: 0
; args: 3
define void @jx_zero_CPU_load_Ljx_zero_CPUState_Ljx_zero_CPUState_(%jx_zero_CPU* %s0, %jx_zero_CPUState* %s1, %jx_zero_CPUState* %s2){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_CPU_save_Ljx_zero_CPUState_(%jx_zero_CPU* %s0, %jx_zero_CPUState* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_CPU_dump_Ljx_zero_CPUState_(%jx_zero_CPU* %s0, %jx_zero_CPUState* %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_CPU_getID(%jx_zero_CPU* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %java_lang_String* @jx_zero_CPU_toString(%jx_zero_CPU* %s0){
    
}


