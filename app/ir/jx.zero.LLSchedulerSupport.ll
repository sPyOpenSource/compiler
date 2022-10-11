; CLASS: jx/zero/LLSchedulerSupport extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_CPUState = type {i32, i32, i32, i32, i32, i32, i32, i32} ; use jx/zero/CPUState
%jx_zero_LLSchedulerSupport = type {} ; use jx/zero/LLSchedulerSupport
%jx_zero_Domain = type {} ; use jx/zero/Domain
; globals


; locals: 0
; stack: 0
; args: 1
define %jx_zero_CPUState* @jx_zero_LLSchedulerSupport_preemptCurrentThread(%jx_zero_LLSchedulerSupport* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_CPUState* @jx_zero_LLSchedulerSupport_interruptCurrentThread(%jx_zero_LLSchedulerSupport* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_LLSchedulerSupport_activateDomain_Ljx_zero_Domain_(%jx_zero_LLSchedulerSupport* %s0, %jx_zero_Domain* %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_LLSchedulerSupport_activateIdleThread(%jx_zero_LLSchedulerSupport* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define i1 @jx_zero_LLSchedulerSupport_isRunnable_Ljx_zero_Domain_(%jx_zero_LLSchedulerSupport* %s0, %jx_zero_Domain* %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_LLSchedulerSupport_getDomainTimeslice(%jx_zero_LLSchedulerSupport* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_LLSchedulerSupport_tuneTimer_I(%jx_zero_LLSchedulerSupport* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_LLSchedulerSupport_readTimer(%jx_zero_LLSchedulerSupport* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_LLSchedulerSupport_dumpDomain_Ljx_zero_Domain_(%jx_zero_LLSchedulerSupport* %s0, %jx_zero_Domain* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_LLSchedulerSupport_dumpHLSched_Ljx_zero_Domain_(%jx_zero_LLSchedulerSupport* %s0, %jx_zero_Domain* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_LLSchedulerSupport_printDomainName_Ljx_zero_Domain_(%jx_zero_LLSchedulerSupport* %s0, %jx_zero_Domain* %s1){
    
}


