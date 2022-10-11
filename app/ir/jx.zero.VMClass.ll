; CLASS: jx/zero/VMClass extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%java_lang_String = type {%.C"*, i32} ; use java/lang/String
%jx_zero_VMClass = type {} ; use jx/zero/VMClass
%java_lang_Object = type {} ; use java/lang/Object
%.Ljx_zero_VMMethod_ = type {i32, [0 x %jx_zero_VMMethod*]} ; use [Ljx/zero/VMMethod;
%.C" = type {i32, [0 x i16]} ; use [C"
%jx_zero_VMMethod = type {} ; use jx/zero/VMMethod
; globals


; locals: 0
; stack: 0
; args: 1
define %java_lang_String* @jx_zero_VMClass_getName(%jx_zero_VMClass* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i1 @jx_zero_VMClass_isPrimitive(%jx_zero_VMClass* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define i1 @jx_zero_VMClass_equals_Ljx_zero_VMClass_(%jx_zero_VMClass* %s0, %jx_zero_VMClass* %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_VMClass_getInstanceSize(%jx_zero_VMClass* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %java_lang_Object* @jx_zero_VMClass_newInstance(%jx_zero_VMClass* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %.Ljx_zero_VMMethod_* @jx_zero_VMClass_getMethods(%jx_zero_VMClass* %s0){
    
}


