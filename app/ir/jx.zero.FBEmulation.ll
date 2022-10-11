; CLASS: jx/zero/FBEmulation extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_DeviceMemory = type {} ; use jx/zero/DeviceMemory
%jx_zero_FBEmulation = type {} ; use jx/zero/FBEmulation
%jx_zero_FBEmulationEvent = type {i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32} ; use jx/zero/FBEmulationEvent
; globals


; locals: 0
; stack: 0
; args: 1
define %jx_zero_DeviceMemory* @jx_zero_FBEmulation_getVideoMemory(%jx_zero_FBEmulation* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_FBEmulation_getWidth(%jx_zero_FBEmulation* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_FBEmulation_getHeight(%jx_zero_FBEmulation* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_FBEmulation_getBytesPerLine(%jx_zero_FBEmulation* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_FBEmulation_getBitsPerPixel(%jx_zero_FBEmulation* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_FBEmulation_update(%jx_zero_FBEmulation* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i1 @jx_zero_FBEmulation_inputDevicesAvailable(%jx_zero_FBEmulation* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define i1 @jx_zero_FBEmulation_checkEvent_Ljx_zero_FBEmulationEvent_(%jx_zero_FBEmulation* %s0, %jx_zero_FBEmulationEvent* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i1 @jx_zero_FBEmulation_open_I(%jx_zero_FBEmulation* %s0, i32 %s1){
    
}


