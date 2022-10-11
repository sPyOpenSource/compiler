; CLASS: jx/zero/Naming extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_Portal = type {} ; use jx/zero/Portal
%java_lang_String = type {%.C"*, i32} ; use java/lang/String
%jx_zero_Naming = type {} ; use jx/zero/Naming
%.C" = type {i32, [0 x i16]} ; use [C"
; globals


; locals: 0
; stack: 0
; args: 3
define void @jx_zero_Naming_registerPortal_Ljx_zero_Portal_Ljava_lang_String_(%jx_zero_Naming* %s0, %jx_zero_Portal* %s1, %java_lang_String* %s2){
    
}

; locals: 0
; stack: 0
; args: 2
define %jx_zero_Portal* @jx_zero_Naming_lookup_Ljava_lang_String_(%jx_zero_Naming* %s0, %java_lang_String* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define %jx_zero_Portal* @jx_zero_Naming_lookupOrWait_Ljava_lang_String_(%jx_zero_Naming* %s0, %java_lang_String* %s1){
    
}


