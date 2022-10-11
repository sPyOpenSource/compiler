; CLASS: jx/zero/scheduler/HighLevelScheduler extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_scheduler_HighLevelScheduler = type {} ; use jx/zero/scheduler/HighLevelScheduler
%jx_zero_CPUState = type {i32, i32, i32, i32, i32, i32, i32, i32} ; use jx/zero/CPUState
; globals


; locals: 0
; stack: 0
; args: 1
define i1 @jx_zero_scheduler_HighLevelScheduler_Scheduler_preempted(%jx_zero_scheduler_HighLevelScheduler* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i1 @jx_zero_scheduler_HighLevelScheduler_Scheduler_interrupted(%jx_zero_scheduler_HighLevelScheduler* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_scheduler_HighLevelScheduler_created_Ljx_zero_CPUState_(%jx_zero_scheduler_HighLevelScheduler* %s0, %jx_zero_CPUState* %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_scheduler_HighLevelScheduler_activated(%jx_zero_scheduler_HighLevelScheduler* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_scheduler_HighLevelScheduler_dump(%jx_zero_scheduler_HighLevelScheduler* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_scheduler_HighLevelScheduler_registered(%jx_zero_scheduler_HighLevelScheduler* %s0){
    
}


