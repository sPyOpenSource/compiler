; CLASS: jx/zero/GarbageCollector extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_GarbageCollector = type {} ; use jx/zero/GarbageCollector
; globals


; locals: 0
; stack: 0
; args: 1
define void @jx_zero_GarbageCollector_gc(%jx_zero_GarbageCollector* %s0){
    
}


