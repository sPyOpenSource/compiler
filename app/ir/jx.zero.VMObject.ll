; CLASS: jx/zero/VMObject extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_VMClass = type {} ; use jx/zero/VMClass
%jx_zero_VMObject = type {} ; use jx/zero/VMObject
java/lang/String is unknown ; use java/lang/String
; globals


; locals: 0
; stack: 0
; args: 1
define %jx_zero_VMClass* @jx_zero_VMObject_getVMClass(%jx_zero_VMObject* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_VMObject_getPrimitiveData(%jx_zero_VMObject* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %java_lang_String* @jx_zero_VMObject_getString(%jx_zero_VMObject* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define i1 @jx_zero_VMObject_getFirstSubObject_Ljx_zero_VMObject_(%jx_zero_VMObject* %s0, %jx_zero_VMObject* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i1 @jx_zero_VMObject_getNextSubObject_Ljx_zero_VMObject_(%jx_zero_VMObject* %s0, %jx_zero_VMObject* %s1){
    
}


