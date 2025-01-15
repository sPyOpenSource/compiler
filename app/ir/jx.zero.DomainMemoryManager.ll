; CLASS: jx/zero/DomainMemoryManager extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_VMClass = type {} ; use jx/zero/VMClass
%jx_zero_DomainMemoryManager = type {} ; use jx/zero/DomainMemoryManager
; globals


; locals: 0
; stack: 0
; args: 2
define i32 @jx_zero_DomainMemoryManager_allocObject_Ljx_zero_VMClass_(%jx_zero_DomainMemoryManager* %s0, %jx_zero_VMClass* %s1){
    
}

; locals: 0
; stack: 0
; args: 3
define i32 @jx_zero_DomainMemoryManager_allocArray_Ljx_zero_VMClass_I(%jx_zero_DomainMemoryManager* %s0, %jx_zero_VMClass* %s1, i32 %s2){
    
}

; locals: 0
; stack: 0
; args: 2
define i32 @jx_zero_DomainMemoryManager_allocTCB_I(%jx_zero_DomainMemoryManager* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i32 @jx_zero_DomainMemoryManager_allocStack_I(%jx_zero_DomainMemoryManager* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i32 @jx_zero_DomainMemoryManager_allocStaticFields_I(%jx_zero_DomainMemoryManager* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i32 @jx_zero_DomainMemoryManager_allocCode_I(%jx_zero_DomainMemoryManager* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_DomainMemoryManager_threadExiting(%jx_zero_DomainMemoryManager* %s0){
    
}


