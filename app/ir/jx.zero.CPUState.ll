; CLASS: jx/zero/CPUState extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_CPUState = type {i32, i32, i32, i32, i32, i32, i32, i32} ; use jx/zero/CPUState
; globals
@jx_zero_CPUState_STATE_BLOCKEDUSER = internal global i32 zeroinitializer
@jx_zero_CPUState_STATE_RUNNABLE = internal global i32 zeroinitializer
@jx_zero_CPUState_STATE_WAITPORTAL1 = internal global i32 zeroinitializer
@jx_zero_CPUState_STATE_WAITPORTAL0 = internal global i32 zeroinitializer
@jx_zero_CPUState_STATE_INIT = internal global i32 zeroinitializer
@jx_zero_CPUState_STATE_ZOMBIE = internal global i32 zeroinitializer
@jx_zero_CPUState_STATE_WAITING = internal global i32 zeroinitializer
@jx_zero_CPUState_STATE_SLEEPING = internal global i32 zeroinitializer


; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_CPUState_getState(%jx_zero_CPUState* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i1 @jx_zero_CPUState_isPortalThread(%jx_zero_CPUState* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_CPUState* @jx_zero_CPUState_getNext(%jx_zero_CPUState* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define %jx_zero_CPUState* @jx_zero_CPUState_setNext_Ljx_zero_CPUState_(%jx_zero_CPUState* %s0, %jx_zero_CPUState* %s1){
    
}


