; CLASS: jx/zero/LowLevelScheduler extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_LowLevelScheduler = type {} ; use jx/zero/LowLevelScheduler
%jx_zero_Domain = type {} ; use jx/zero/Domain
; globals


; locals: 0
; stack: 0
; args: 1
define void @jx_zero_LowLevelScheduler_activate_currDomain(%jx_zero_LowLevelScheduler* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_LowLevelScheduler_activate_nextDomain(%jx_zero_LowLevelScheduler* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_LowLevelScheduler_registerDomain_Ljx_zero_Domain_(%jx_zero_LowLevelScheduler* %s0, %jx_zero_Domain* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_LowLevelScheduler_unregisterDomain_Ljx_zero_Domain_(%jx_zero_LowLevelScheduler* %s0, %jx_zero_Domain* %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_LowLevelScheduler_dump(%jx_zero_LowLevelScheduler* %s0){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_LowLevelScheduler_setTimeSlice_Ljx_zero_Domain_I(%jx_zero_LowLevelScheduler* %s0, %jx_zero_Domain* %s1, i32 %s2){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_LowLevelScheduler_registered_I(%jx_zero_LowLevelScheduler* %s0, i32 %s1){
    
}


