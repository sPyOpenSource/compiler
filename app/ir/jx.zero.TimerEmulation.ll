; CLASS: jx/zero/TimerEmulation extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_TimerEmulation = type {} ; use jx/zero/TimerEmulation
%jx_zero_AtomicVariable = type {} ; use jx/zero/AtomicVariable
%jx_zero_CPUState = type {i32, i32, i32, i32, i32, i32, i32, i32} ; use jx/zero/CPUState
; globals


; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_TimerEmulation_getTime(%jx_zero_TimerEmulation* %s0){
    
}

; locals: 0
; stack: 0
; args: 5
define void @jx_zero_TimerEmulation_installIntervallTimer_Ljx_zero_AtomicVariable_Ljx_zero_CPUState_II(%jx_zero_TimerEmulation* %s0, %jx_zero_AtomicVariable* %s1, %jx_zero_CPUState* %s2, i32 %s3, i32 %s4){
    
}


