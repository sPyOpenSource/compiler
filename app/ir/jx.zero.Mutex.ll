; CLASS: jx/zero/Mutex extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_Mutex = type {} ; use jx/zero/Mutex
; globals


; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_Mutex_lock(%jx_zero_Mutex* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_Mutex_trylock(%jx_zero_Mutex* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_Mutex_unlock(%jx_zero_Mutex* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_Mutex_destroy(%jx_zero_Mutex* %s0){
    
}


