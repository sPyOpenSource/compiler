; CLASS: jx/zero/MemoryManager extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_Memory = type {} ; use jx/zero/Memory
%jx_zero_MemoryManager = type {} ; use jx/zero/MemoryManager
%jx_zero_DeviceMemory = type {} ; use jx/zero/DeviceMemory
; globals


; locals: 0
; stack: 0
; args: 2
define %jx_zero_Memory* @jx_zero_MemoryManager_alloc_I(%jx_zero_MemoryManager* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 3
define %jx_zero_Memory* @jx_zero_MemoryManager_allocAligned_II(%jx_zero_MemoryManager* %s0, i32 %s1, i32 %s2){
    
}

; locals: 0
; stack: 0
; args: 3
define %jx_zero_DeviceMemory* @jx_zero_MemoryManager_allocDeviceMemory_II(%jx_zero_MemoryManager* %s0, i32 %s1, i32 %s2){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_MemoryManager_getTotalMemory(%jx_zero_MemoryManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_MemoryManager_getTotalFreeMemory(%jx_zero_MemoryManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_MemoryManager_getFreeHeapMemory(%jx_zero_MemoryManager* %s0){
    
}


