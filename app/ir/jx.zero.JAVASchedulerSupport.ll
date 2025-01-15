; CLASS: jx/zero/JAVASchedulerSupport extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_CPUState = type {i32, i32, i32, i32, i32, i32, i32, i32} ; use jx/zero/CPUState
%jx_zero_JAVASchedulerSupport = type {} ; use jx/zero/JAVASchedulerSupport
java/lang/Object is unknown ; use java/lang/Object
%jx_zero_Domain = type {} ; use jx/zero/Domain
; globals


; locals: 0
; stack: 0
; args: 1
define %jx_zero_CPUState* @jx_zero_JAVASchedulerSupport_getCurThr(%jx_zero_JAVASchedulerSupport* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_JAVASchedulerSupport_switchTo_Ljx_zero_CPUState_(%jx_zero_JAVASchedulerSupport* %s0, %jx_zero_CPUState* %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_CPUState* @jx_zero_JAVASchedulerSupport_getIdleThread(%jx_zero_JAVASchedulerSupport* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_JAVASchedulerSupport_setTimeslice_I(%jx_zero_JAVASchedulerSupport* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_JAVASchedulerSupport_storeThreadInfo_Ljx_zero_CPUState_Ljava_lang_Object_(%jx_zero_JAVASchedulerSupport* %s0, %jx_zero_CPUState* %s1, %java_lang_Object* %s2){
    
}

; locals: 0
; stack: 0
; args: 2
define %java_lang_Object* @jx_zero_JAVASchedulerSupport_getThreadInfo_Ljx_zero_CPUState_(%jx_zero_JAVASchedulerSupport* %s0, %jx_zero_CPUState* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define %jx_zero_Domain* @jx_zero_JAVASchedulerSupport_getThreadDomain_Ljx_zero_CPUState_(%jx_zero_JAVASchedulerSupport* %s0, %jx_zero_CPUState* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_JAVASchedulerSupport_dumpThread_Ljx_zero_CPUState_(%jx_zero_JAVASchedulerSupport* %s0, %jx_zero_CPUState* %s1){
    
}


