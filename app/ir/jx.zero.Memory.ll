; CLASS: jx/zero/Memory extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_Memory = type {} ; use jx/zero/Memory
%.B = type {i32, [0 x i8]} ; use [B
%.Ljx_zero_Memory_ = type {i32, [0 x %jx_zero_Memory*]} ; use [Ljx/zero/Memory;
%jx_zero_VMClass = type {} ; use jx/zero/VMClass
java/lang/Object is unknown ; use java/lang/Object
; globals


; locals: 0
; stack: 0
; args: 3
define void @jx_zero_Memory_set8_IB(%jx_zero_Memory* %s0, i32 %s1, i8 %s2){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_Memory_set16_IS(%jx_zero_Memory* %s0, i32 %s1, i16 %s2){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_Memory_set32_II(%jx_zero_Memory* %s0, i32 %s1, i32 %s2){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_Memory_setLittleEndian32_II(%jx_zero_Memory* %s0, i32 %s1, i32 %s2){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_Memory_setLittleEndian16_IS(%jx_zero_Memory* %s0, i32 %s1, i16 %s2){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_Memory_setBigEndian32_II(%jx_zero_Memory* %s0, i32 %s1, i32 %s2){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_Memory_setBigEndian16_IS(%jx_zero_Memory* %s0, i32 %s1, i16 %s2){
    
}

; locals: 0
; stack: 0
; args: 5
define void @jx_zero_Memory_copyFromByteArray__BIII(%jx_zero_Memory* %s0, %.B* %s1, i32 %s2, i32 %s3, i32 %s4){
    
}

; locals: 0
; stack: 0
; args: 5
define i32 @jx_zero_Memory_copyFromMemory_Ljx_zero_Memory_III(%jx_zero_Memory* %s0, %jx_zero_Memory* %s1, i32 %s2, i32 %s3, i32 %s4){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_Memory_split2_I_Ljx_zero_Memory_(%jx_zero_Memory* %s0, i32 %s1, %.Ljx_zero_Memory_* %s2){
    
}

; locals: 0
; stack: 0
; args: 4
define void @jx_zero_Memory_split3_II_Ljx_zero_Memory_(%jx_zero_Memory* %s0, i32 %s1, i32 %s2, %.Ljx_zero_Memory_* %s3){
    
}

; locals: 0
; stack: 0
; args: 3
define %jx_zero_Memory* @jx_zero_Memory_getSubRange_II(%jx_zero_Memory* %s0, i32 %s1, i32 %s2){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_Memory* @jx_zero_Memory_joinPrevious(%jx_zero_Memory* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_Memory* @jx_zero_Memory_joinNext(%jx_zero_Memory* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_Memory* @jx_zero_Memory_joinAll(%jx_zero_Memory* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define %java_lang_Object* @jx_zero_Memory_map_Ljx_zero_VMClass_(%jx_zero_Memory* %s0, %jx_zero_VMClass* %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_Memory* @jx_zero_Memory_revoke(%jx_zero_Memory* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i1 @jx_zero_Memory_isValid(%jx_zero_Memory* %s0){
    
}

; locals: 0
; stack: 0
; args: 4
define void @jx_zero_Memory_copy_III(%jx_zero_Memory* %s0, i32 %s1, i32 %s2, i32 %s3){
    
}

; locals: 0
; stack: 0
; args: 4
define void @jx_zero_Memory_move_III(%jx_zero_Memory* %s0, i32 %s1, i32 %s2, i32 %s3){
    
}

; locals: 0
; stack: 0
; args: 4
define void @jx_zero_Memory_fill16_SII(%jx_zero_Memory* %s0, i16 %s1, i32 %s2, i32 %s3){
    
}

; locals: 0
; stack: 0
; args: 4
define void @jx_zero_Memory_fill32_III(%jx_zero_Memory* %s0, i32 %s1, i32 %s2, i32 %s3){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_Memory_clear(%jx_zero_Memory* %s0){
    
}


