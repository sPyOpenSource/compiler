; CLASS: jx/zero/SMPCPUManager extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_CPUState = type {i32, i32, i32, i32, i32, i32, i32, i32} ; use jx/zero/CPUState
%jx_zero_CPU = type {} ; use jx/zero/CPU
%jx_zero_SMPCPUManager = type {} ; use jx/zero/SMPCPUManager
%jx_zero_Domain = type {} ; use jx/zero/Domain
%jx_zero_scheduler_HighLevelScheduler = type {} ; use jx/zero/scheduler/HighLevelScheduler
%jx_zero_LowLevelScheduler = type {} ; use jx/zero/LowLevelScheduler
%jx_zero_Mutex = type {} ; use jx/zero/Mutex
; globals


; locals: 0
; stack: 0
; args: 3
define i1 @jx_zero_SMPCPUManager_start_Ljx_zero_CPUState_Ljx_zero_CPU_(%jx_zero_SMPCPUManager* %s0, %jx_zero_CPUState* %s1, %jx_zero_CPU* %s2){
    
}

; locals: 0
; stack: 0
; args: 3
define i1 @jx_zero_SMPCPUManager_unblock_Ljx_zero_CPUState_Ljx_zero_CPU_(%jx_zero_SMPCPUManager* %s0, %jx_zero_CPUState* %s1, %jx_zero_CPU* %s2){
    
}

; locals: 0
; stack: 0
; args: 5
define void @jx_zero_SMPCPUManager_swap_HLScheduler_Ljx_zero_CPU_Ljx_zero_Domain_Ljx_zero_scheduler_HighLevelScheduler_Ljx_zero_scheduler_HighLevelScheduler_(%jx_zero_SMPCPUManager* %s0, %jx_zero_CPU* %s1, %jx_zero_Domain* %s2, %jx_zero_scheduler_HighLevelScheduler* %s3, %jx_zero_scheduler_HighLevelScheduler* %s4){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_SMPCPUManager_register_LLScheduler_Ljx_zero_CPU_Ljx_zero_LowLevelScheduler_(%jx_zero_SMPCPUManager* %s0, %jx_zero_CPU* %s1, %jx_zero_LowLevelScheduler* %s2){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_SMPCPUManager_sendIPI_Ljx_zero_CPU_I(%jx_zero_SMPCPUManager* %s0, %jx_zero_CPU* %s1, i32 %s2){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_CPU* @jx_zero_SMPCPUManager_getMyCPU(%jx_zero_SMPCPUManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_SMPCPUManager_getNumCPUs(%jx_zero_SMPCPUManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define %jx_zero_CPU* @jx_zero_SMPCPUManager_getCPU_I(%jx_zero_SMPCPUManager* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i32 @jx_zero_SMPCPUManager_test_I(%jx_zero_SMPCPUManager* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i32 @jx_zero_SMPCPUManager_test2_I(%jx_zero_SMPCPUManager* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i32 @jx_zero_SMPCPUManager_test_setAPICTimer_I(%jx_zero_SMPCPUManager* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_SMPCPUManager_dump_Ljx_zero_CPU_(%jx_zero_SMPCPUManager* %s0, %jx_zero_CPU* %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_Mutex* @jx_zero_SMPCPUManager_createMutex(%jx_zero_SMPCPUManager* %s0){
    
}


