; CLASS: jx/zero/Clock extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_Clock = type {} ; use jx/zero/Clock
%jx_zero_CycleTime = type {i32, i32} ; use jx/zero/CycleTime
; globals


; locals: 0
; stack: 0
; args: 1
define i64 @jx_zero_Clock_getTicks(%jx_zero_Clock* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_Clock_getTimeInMillis(%jx_zero_Clock* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_Clock_getTicks_low(%jx_zero_Clock* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_Clock_getTicks_high(%jx_zero_Clock* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define i32 @jx_zero_Clock_toMicroSec_Ljx_zero_CycleTime_(%jx_zero_Clock* %s0, %jx_zero_CycleTime* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i32 @jx_zero_Clock_toNanoSec_Ljx_zero_CycleTime_(%jx_zero_Clock* %s0, %jx_zero_CycleTime* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i32 @jx_zero_Clock_toMilliSec_Ljx_zero_CycleTime_(%jx_zero_Clock* %s0, %jx_zero_CycleTime* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_Clock_getCycles_Ljx_zero_CycleTime_(%jx_zero_Clock* %s0, %jx_zero_CycleTime* %s1){
    
}

; locals: 0
; stack: 0
; args: 4
define void @jx_zero_Clock_subtract_Ljx_zero_CycleTime_Ljx_zero_CycleTime_Ljx_zero_CycleTime_(%jx_zero_Clock* %s0, %jx_zero_CycleTime* %s1, %jx_zero_CycleTime* %s2, %jx_zero_CycleTime* %s3){
    
}


