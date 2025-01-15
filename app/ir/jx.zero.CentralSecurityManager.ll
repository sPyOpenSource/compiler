; CLASS: jx/zero/CentralSecurityManager extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_Domain = type {} ; use jx/zero/Domain
%jx_zero_Principal = type {} ; use jx/zero/Principal
%jx_zero_CentralSecurityManager = type {} ; use jx/zero/CentralSecurityManager
java/lang/String is unknown ; use java/lang/String
; globals


; locals: 0
; stack: 0
; args: 3
define void @jx_zero_CentralSecurityManager_addDomainAndPrincipal_Ljx_zero_Domain_Ljx_zero_Principal_(%jx_zero_CentralSecurityManager* %s0, %jx_zero_Domain* %s1, %jx_zero_Principal* %s2){
    
}

; locals: 0
; stack: 0
; args: 2
define %jx_zero_Principal* @jx_zero_CentralSecurityManager_getPrincipal_Ljx_zero_Domain_(%jx_zero_CentralSecurityManager* %s0, %jx_zero_Domain* %s1){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_CentralSecurityManager_installInterceptor_Ljx_zero_Domain_Ljava_lang_String_(%jx_zero_CentralSecurityManager* %s0, %jx_zero_Domain* %s1, %java_lang_String* %s2){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_CentralSecurityManager_inheritPrincipal_Ljx_zero_Domain_Ljx_zero_Domain_(%jx_zero_CentralSecurityManager* %s0, %jx_zero_Domain* %s1, %jx_zero_Domain* %s2){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_CentralSecurityManager_inheritInterceptor_Ljx_zero_Domain_Ljx_zero_Domain_(%jx_zero_CentralSecurityManager* %s0, %jx_zero_Domain* %s1, %jx_zero_Domain* %s2){
    
}


