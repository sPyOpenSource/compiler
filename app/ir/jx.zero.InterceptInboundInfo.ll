; CLASS: jx/zero/InterceptInboundInfo extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_Domain = type {} ; use jx/zero/Domain
%jx_zero_InterceptInboundInfo = type {} ; use jx/zero/InterceptInboundInfo
%jx_zero_VMMethod = type {} ; use jx/zero/VMMethod
%jx_zero_VMObject = type {} ; use jx/zero/VMObject
; globals


; locals: 0
; stack: 0
; args: 1
define %jx_zero_Domain* @jx_zero_InterceptInboundInfo_getSourceDomain(%jx_zero_InterceptInboundInfo* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_Domain* @jx_zero_InterceptInboundInfo_getTargetDomain(%jx_zero_InterceptInboundInfo* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_VMMethod* @jx_zero_InterceptInboundInfo_getMethod(%jx_zero_InterceptInboundInfo* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_VMObject* @jx_zero_InterceptInboundInfo_getServiceObject(%jx_zero_InterceptInboundInfo* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define i1 @jx_zero_InterceptInboundInfo_getFirstParameter_Ljx_zero_VMObject_(%jx_zero_InterceptInboundInfo* %s0, %jx_zero_VMObject* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i1 @jx_zero_InterceptInboundInfo_getNextParameter_Ljx_zero_VMObject_(%jx_zero_InterceptInboundInfo* %s0, %jx_zero_VMObject* %s1){
    
}


