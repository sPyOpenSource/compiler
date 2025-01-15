; CLASS: jx/zero/HLSchedulerSupport extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_CPUState = type {i32, i32, i32, i32, i32, i32, i32, i32} ; use jx/zero/CPUState
%jx_zero_HLSchedulerSupport = type {} ; use jx/zero/HLSchedulerSupport
%jx_zero_CPUStateLink = type {} ; use jx/zero/CPUStateLink
%jx_zero_Domain = type {} ; use jx/zero/Domain
java/lang/Object is unknown ; use java/lang/Object
; globals


; locals: 0
; stack: 0
; args: 2
define void @jx_zero_HLSchedulerSupport_activateThread_Ljx_zero_CPUState_(%jx_zero_HLSchedulerSupport* %s0, %jx_zero_CPUState* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i1 @jx_zero_HLSchedulerSupport_activateService_Ljx_zero_CPUStateLink_(%jx_zero_HLSchedulerSupport* %s0, %jx_zero_CPUStateLink* %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_HLSchedulerSupport_yield(%jx_zero_HLSchedulerSupport* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_HLSchedulerSupport_clearMyRunnableFlag(%jx_zero_HLSchedulerSupport* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_HLSchedulerSupport_getTimeBaseInMicros(%jx_zero_HLSchedulerSupport* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_HLSchedulerSupport_getDomainTimeslice(%jx_zero_HLSchedulerSupport* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_HLSchedulerSupport_setMyTimeslice_I(%jx_zero_HLSchedulerSupport* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_HLSchedulerSupport_setTimeslice_Ljx_zero_Domain_I(%jx_zero_HLSchedulerSupport* %s0, %jx_zero_Domain* %s1, i32 %s2){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_HLSchedulerSupport_storeThreadInfo_Ljx_zero_CPUState_Ljava_lang_Object_(%jx_zero_HLSchedulerSupport* %s0, %jx_zero_CPUState* %s1, %java_lang_Object* %s2){
    
}

; locals: 0
; stack: 0
; args: 2
define %java_lang_Object* @jx_zero_HLSchedulerSupport_getThreadInfo_Ljx_zero_CPUState_(%jx_zero_HLSchedulerSupport* %s0, %jx_zero_CPUState* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_HLSchedulerSupport_dumpThread_Ljx_zero_CPUState_(%jx_zero_HLSchedulerSupport* %s0, %jx_zero_CPUState* %s1){
    
}


