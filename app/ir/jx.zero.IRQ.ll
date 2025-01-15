; CLASS: jx/zero/IRQ extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_FirstLevelIrqHandler = type {} ; use jx/zero/FirstLevelIrqHandler
%jx_zero_IRQ = type {} ; use jx/zero/IRQ
; globals


; locals: 0
; stack: 0
; args: 3
define void @jx_zero_IRQ_installFirstLevelHandler_ILjx_zero_FirstLevelIrqHandler_(%jx_zero_IRQ* %s0, i32 %s1, %jx_zero_FirstLevelIrqHandler* %s2){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_IRQ_enableIRQ_I(%jx_zero_IRQ* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_IRQ_disableIRQ_I(%jx_zero_IRQ* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_IRQ_enableAll(%jx_zero_IRQ* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_IRQ_disableAll(%jx_zero_IRQ* %s0){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_IRQ_setDestination_II(%jx_zero_IRQ* %s0, i32 %s1, i32 %s2){
    
}


