; CLASS: jx/zero/TestDZperf extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_TestDZperf = type {} ; use jx/zero/TestDZperf
%jx_zero_CPUState = type {i32, i32, i32, i32, i32, i32, i32, i32} ; use jx/zero/CPUState
%jx_zero_scheduler_HighLevelScheduler = type {} ; use jx/zero/scheduler/HighLevelScheduler
; globals


; locals: 0
; stack: 0
; args: 1
define void @jx_zero_TestDZperf_emptyMethod(%jx_zero_TestDZperf* %s0){
    
}

; locals: 0
; stack: 0
; args: 3
define i32 @jx_zero_TestDZperf_prepareSchedulerMethod_registered__Ljx_zero_CPUState_Ljx_zero_scheduler_HighLevelScheduler_(%jx_zero_TestDZperf* %s0, %jx_zero_CPUState* %s1, %jx_zero_scheduler_HighLevelScheduler* %s2){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_TestDZperf_callSchedulerMethod_registered_(%jx_zero_TestDZperf* %s0){
    
}


