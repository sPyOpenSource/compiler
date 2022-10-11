; CLASS: jx/zero/JAVAScheduler extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_CPUState = type {i32, i32, i32, i32, i32, i32, i32, i32} ; use jx/zero/CPUState
%jx_zero_JAVAScheduler = type {} ; use jx/zero/JAVAScheduler
; globals


; locals: 0
; stack: 0
; args: 2
define void @jx_zero_JAVAScheduler_add_Ljx_zero_CPUState_(%jx_zero_JAVAScheduler* %s0, %jx_zero_CPUState* %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_CPUState* @jx_zero_JAVAScheduler_removeNext(%jx_zero_JAVAScheduler* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_JAVAScheduler_dump(%jx_zero_JAVAScheduler* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_JAVAScheduler_init_I(%jx_zero_JAVAScheduler* %s0, i32 %s1){
    
}


