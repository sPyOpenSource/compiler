; CLASS: jx/zero/NetEmulation extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%java_lang_String = type {%.C"*, i32} ; use java/lang/String
%.B = type {i32, [0 x i8]} ; use [B
%jx_zero_NetEmulation = type {} ; use jx/zero/NetEmulation
%jx_zero_Memory = type {} ; use jx/zero/Memory
%.C" = type {i32, [0 x i16]} ; use [C"
; globals


; locals: 0
; stack: 0
; args: 3
define i32 @jx_zero_NetEmulation_open_Ljava_lang_String__B(%jx_zero_NetEmulation* %s0, %java_lang_String* %s1, %.B* %s2){
    
}

; locals: 0
; stack: 0
; args: 2
define i32 @jx_zero_NetEmulation_receive_Ljx_zero_Memory_(%jx_zero_NetEmulation* %s0, %jx_zero_Memory* %s1){
    
}

; locals: 0
; stack: 0
; args: 4
define i32 @jx_zero_NetEmulation_send_Ljx_zero_Memory_II(%jx_zero_NetEmulation* %s0, %jx_zero_Memory* %s1, i32 %s2, i32 %s3){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_NetEmulation_getMTU(%jx_zero_NetEmulation* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %.B* @jx_zero_NetEmulation_getMACAddress(%jx_zero_NetEmulation* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_NetEmulation_close(%jx_zero_NetEmulation* %s0){
    
}


