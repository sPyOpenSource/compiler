; CLASS: jx/zero/ReadOnlyMemory extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_ReadOnlyMemory = type {} ; use jx/zero/ReadOnlyMemory
%.B = type {i32, [0 x i8]} ; use [B
%jx_zero_Memory = type {} ; use jx/zero/Memory
; globals


; locals: 0
; stack: 0
; args: 2
define i8 @jx_zero_ReadOnlyMemory_get8_I(%jx_zero_ReadOnlyMemory* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i16 @jx_zero_ReadOnlyMemory_get16_I(%jx_zero_ReadOnlyMemory* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i32 @jx_zero_ReadOnlyMemory_get32_I(%jx_zero_ReadOnlyMemory* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i32 @jx_zero_ReadOnlyMemory_getLittleEndian32_I(%jx_zero_ReadOnlyMemory* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i16 @jx_zero_ReadOnlyMemory_getLittleEndian16_I(%jx_zero_ReadOnlyMemory* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i32 @jx_zero_ReadOnlyMemory_getBigEndian32_I(%jx_zero_ReadOnlyMemory* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i16 @jx_zero_ReadOnlyMemory_getBigEndian16_I(%jx_zero_ReadOnlyMemory* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 5
define void @jx_zero_ReadOnlyMemory_copyToByteArray__BIII(%jx_zero_ReadOnlyMemory* %s0, %.B* %s1, i32 %s2, i32 %s3, i32 %s4){
    
}

; locals: 0
; stack: 0
; args: 5
define i32 @jx_zero_ReadOnlyMemory_copyToMemory_Ljx_zero_Memory_III(%jx_zero_ReadOnlyMemory* %s0, %jx_zero_Memory* %s1, i32 %s2, i32 %s3, i32 %s4){
    
}

; locals: 0
; stack: 0
; args: 3
define %jx_zero_ReadOnlyMemory* @jx_zero_ReadOnlyMemory_getReadOnlySubRange_II(%jx_zero_ReadOnlyMemory* %s0, i32 %s1, i32 %s2){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_ReadOnlyMemory_size(%jx_zero_ReadOnlyMemory* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_ReadOnlyMemory_getStartAddress(%jx_zero_ReadOnlyMemory* %s0){
    
}


