; CLASS: jx/zero/Domain extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_Domain = type {} ; use jx/zero/Domain
java/lang/String is unknown ; use java/lang/String
; globals


; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_Domain_getID(%jx_zero_Domain* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_Domain_clearTCBflag(%jx_zero_Domain* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i1 @jx_zero_Domain_isActive(%jx_zero_Domain* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i1 @jx_zero_Domain_isTerminated(%jx_zero_Domain* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %java_lang_String* @jx_zero_Domain_getName(%jx_zero_Domain* %s0){
    
}


