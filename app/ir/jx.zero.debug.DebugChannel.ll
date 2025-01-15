; CLASS: jx/zero/debug/DebugChannel extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_debug_DebugChannel = type {} ; use jx/zero/debug/DebugChannel
%.B = type {i32, [0 x i8]} ; use [B
; globals


; locals: 0
; stack: 0
; args: 2
define void @jx_zero_debug_DebugChannel_write_I(%jx_zero_debug_DebugChannel* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_debug_DebugChannel_read(%jx_zero_debug_DebugChannel* %s0){
    
}

; locals: 0
; stack: 0
; args: 4
define void @jx_zero_debug_DebugChannel_writeBuf__BII(%jx_zero_debug_DebugChannel* %s0, %.B* %s1, i32 %s2, i32 %s3){
    
}


