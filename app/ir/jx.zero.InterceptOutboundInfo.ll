; CLASS: jx/zero/InterceptOutboundInfo extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_Domain = type {} ; use jx/zero/Domain
%jx_zero_InterceptOutboundInfo = type {} ; use jx/zero/InterceptOutboundInfo
%jx_zero_VMMethod = type {} ; use jx/zero/VMMethod
%jx_zero_VMObject = type {} ; use jx/zero/VMObject
%.Ljx_zero_VMObject_ = type {i32, [0 x %jx_zero_VMObject*]} ; use [Ljx/zero/VMObject;
; globals


; locals: 0
; stack: 0
; args: 1
define %jx_zero_Domain* @jx_zero_InterceptOutboundInfo_getSourceDomain(%jx_zero_InterceptOutboundInfo* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_Domain* @jx_zero_InterceptOutboundInfo_getTargetDomain(%jx_zero_InterceptOutboundInfo* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_VMMethod* @jx_zero_InterceptOutboundInfo_getMethod(%jx_zero_InterceptOutboundInfo* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_VMObject* @jx_zero_InterceptOutboundInfo_getServiceObject(%jx_zero_InterceptOutboundInfo* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %.Ljx_zero_VMObject_* @jx_zero_InterceptOutboundInfo_getParameters(%jx_zero_InterceptOutboundInfo* %s0){
    
}


