; CLASS: jx/zero/VMMethod extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%java_lang_String = type {%.C"*, i32} ; use java/lang/String
%jx_zero_VMMethod = type {} ; use jx/zero/VMMethod
%java_lang_Object = type {} ; use java/lang/Object
%.Ljava_lang_Object_ = type {i32, [0 x %java_lang_Object*]} ; use [Ljava/lang/Object;
%.C" = type {i32, [0 x i16]} ; use [C"
; globals


; locals: 0
; stack: 0
; args: 1
define %java_lang_String* @jx_zero_VMMethod_getName(%jx_zero_VMMethod* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %java_lang_String* @jx_zero_VMMethod_getSignature(%jx_zero_VMMethod* %s0){
    
}

; locals: 0
; stack: 0
; args: 3
define %java_lang_Object* @jx_zero_VMMethod_invoke_Ljava_lang_Object__Ljava_lang_Object_(%jx_zero_VMMethod* %s0, %java_lang_Object* %s1, %.Ljava_lang_Object_* %s2){
    
}


