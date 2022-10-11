; CLASS: jx/zero/scheduler/HLS_interrupted extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_CPUState = type {i32, i32, i32, i32, i32, i32, i32, i32} ; use jx/zero/CPUState
%jx_zero_scheduler_HLS_interrupted = type {} ; use jx/zero/scheduler/HLS_interrupted
; globals


; locals: 0
; stack: 0
; args: 2
define void @jx_zero_scheduler_HLS_interrupted_interrupted_Ljx_zero_CPUState_(%jx_zero_scheduler_HLS_interrupted* %s0, %jx_zero_CPUState* %s1){
    
}


