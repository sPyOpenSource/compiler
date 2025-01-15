; CLASS: jx/zero/DiskEmulation extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_DiskEmulation = type {} ; use jx/zero/DiskEmulation
%jx_zero_Memory = type {} ; use jx/zero/Memory
; globals


; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_DiskEmulation_getCapacity(%jx_zero_DiskEmulation* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_DiskEmulation_getSectorSize(%jx_zero_DiskEmulation* %s0){
    
}

; locals: 0
; stack: 0
; args: 5
define void @jx_zero_DiskEmulation_readSectors_IILjx_zero_Memory_Z(%jx_zero_DiskEmulation* %s0, i32 %s1, i32 %s2, %jx_zero_Memory* %s3, i1 %s4){
    
}

; locals: 0
; stack: 0
; args: 5
define void @jx_zero_DiskEmulation_writeSectors_IILjx_zero_Memory_Z(%jx_zero_DiskEmulation* %s0, i32 %s1, i32 %s2, %jx_zero_Memory* %s3, i1 %s4){
    
}


