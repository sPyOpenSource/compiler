; CLASS: jx/zero/BootFS extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
java/lang/String is unknown ; use java/lang/String
%jx_zero_BootFS = type {} ; use jx/zero/BootFS
%jx_zero_ReadOnlyMemory = type {} ; use jx/zero/ReadOnlyMemory
%jx_zero_Memory = type {} ; use jx/zero/Memory
; globals


; locals: 0
; stack: 0
; args: 2
define i1 @jx_zero_BootFS_lookup_Ljava_lang_String_(%jx_zero_BootFS* %s0, %java_lang_String* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define %jx_zero_ReadOnlyMemory* @jx_zero_BootFS_getFile_Ljava_lang_String_(%jx_zero_BootFS* %s0, %java_lang_String* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define %jx_zero_Memory* @jx_zero_BootFS_getReadWriteFile_Ljava_lang_String_(%jx_zero_BootFS* %s0, %java_lang_String* %s1){
    
}


