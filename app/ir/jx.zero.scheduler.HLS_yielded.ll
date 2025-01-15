; CLASS: jx/zero/scheduler/HLS_yielded extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_CPUState = type {i32, i32, i32, i32, i32, i32, i32, i32} ; use jx/zero/CPUState
%jx_zero_scheduler_HLS_yielded = type {} ; use jx/zero/scheduler/HLS_yielded
; globals


; locals: 0
; stack: 0
; args: 2
define void @jx_zero_scheduler_HLS_yielded_yielded_Ljx_zero_CPUState_(%jx_zero_scheduler_HLS_yielded* %s0, %jx_zero_CPUState* %s1){
    
}


