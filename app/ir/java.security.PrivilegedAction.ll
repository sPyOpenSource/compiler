; CLASS: java/security/PrivilegedAction extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%java_lang_Object = type {} ; use java/lang/Object
%java_security_PrivilegedAction = type {} ; use java/security/PrivilegedAction
; globals


; locals: 0
; stack: 0
; args: 1
define %java_lang_Object* @java_security_PrivilegedAction_run(%java_security_PrivilegedAction* %s0){
    
}


