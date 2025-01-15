; CLASS: jx/zero/CPUManager extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_CPUManager = type {} ; use jx/zero/CPUManager
java/lang/Object is unknown ; use java/lang/Object
java/lang/String is unknown ; use java/lang/String
%jx_zero_CPUState = type {i32, i32, i32, i32, i32, i32, i32, i32} ; use jx/zero/CPUState
%jx_zero_ThreadEntry = type {} ; use jx/zero/ThreadEntry
%jx_zero_AtomicVariable = type {} ; use jx/zero/AtomicVariable
%jx_zero_Credential = type {} ; use jx/zero/Credential
%jx_zero_CAS = type {} ; use jx/zero/CAS
%jx_zero_VMClass = type {} ; use jx/zero/VMClass
%jx_zero_VMObject = type {} ; use jx/zero/VMObject
; globals


; locals: 0
; stack: 0
; args: 1
define void @jx_zero_CPUManager_yield(%jx_zero_CPUManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_CPUManager_sleep_II(%jx_zero_CPUManager* %s0, i32 %s1, i32 %s2){
    
}

; locals: 0
; stack: 0
; args: 4
define void @jx_zero_CPUManager_wait_Ljava_lang_Object_II(%jx_zero_CPUManager* %s0, %java_lang_Object* %s1, i32 %s2, i32 %s3){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_CPUManager_notify_Ljava_lang_Object_(%jx_zero_CPUManager* %s0, %java_lang_Object* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_CPUManager_notifyAll_Ljava_lang_Object_(%jx_zero_CPUManager* %s0, %java_lang_Object* %s1){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_CPUManager_dump_Ljava_lang_String_Ljava_lang_Object_(%jx_zero_CPUManager* %s0, %java_lang_String* %s1, %java_lang_Object* %s2){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_CPUManager_switchTo_Ljx_zero_CPUState_(%jx_zero_CPUManager* %s0, %jx_zero_CPUState* %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_CPUState* @jx_zero_CPUManager_getCPUState(%jx_zero_CPUManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_CPUManager_block(%jx_zero_CPUManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_CPUManager_blockIfNotUnblocked(%jx_zero_CPUManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_CPUManager_clearUnblockFlag(%jx_zero_CPUManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_CPUManager_waitUntilBlocked_Ljx_zero_CPUState_(%jx_zero_CPUManager* %s0, %jx_zero_CPUState* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_CPUManager_join_Ljx_zero_CPUState_(%jx_zero_CPUManager* %s0, %jx_zero_CPUState* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i1 @jx_zero_CPUManager_unblock_Ljx_zero_CPUState_(%jx_zero_CPUManager* %s0, %jx_zero_CPUState* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define %jx_zero_CPUState* @jx_zero_CPUManager_createCPUState_Ljx_zero_ThreadEntry_(%jx_zero_CPUManager* %s0, %jx_zero_ThreadEntry* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i1 @jx_zero_CPUManager_start_Ljx_zero_CPUState_(%jx_zero_CPUManager* %s0, %jx_zero_CPUState* %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_CPUManager_printStackTrace(%jx_zero_CPUManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_AtomicVariable* @jx_zero_CPUManager_getAtomicVariable(%jx_zero_CPUManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_CPUManager_setThreadName_Ljava_lang_String_(%jx_zero_CPUManager* %s0, %java_lang_String* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_CPUManager_attachToThread_Ljava_lang_Object_(%jx_zero_CPUManager* %s0, %java_lang_Object* %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define %java_lang_Object* @jx_zero_CPUManager_getAttachedObject(%jx_zero_CPUManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_Credential* @jx_zero_CPUManager_getCredential(%jx_zero_CPUManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define i32 @jx_zero_CPUManager_createNewEvent_Ljava_lang_String_(%jx_zero_CPUManager* %s0, %java_lang_String* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_CPUManager_recordEvent_I(%jx_zero_CPUManager* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_CPUManager_recordEventWithInfo_II(%jx_zero_CPUManager* %s0, i32 %s1, i32 %s2){
    
}

; locals: 0
; stack: 0
; args: 3
define %jx_zero_CAS* @jx_zero_CPUManager_getCAS_Ljava_lang_String_Ljava_lang_String_(%jx_zero_CPUManager* %s0, %java_lang_String* %s1, %java_lang_String* %s2){
    
}

; locals: 0
; stack: 0
; args: 2
define %jx_zero_VMClass* @jx_zero_CPUManager_getClass_Ljava_lang_String_(%jx_zero_CPUManager* %s0, %java_lang_String* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define %jx_zero_VMClass* @jx_zero_CPUManager_getVMClass_Ljava_lang_Object_(%jx_zero_CPUManager* %s0, %java_lang_Object* %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define %jx_zero_VMObject* @jx_zero_CPUManager_getVMObject(%jx_zero_CPUManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_CPUManager_assertInterruptEnabled(%jx_zero_CPUManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_CPUManager_executeClassConstructors_I(%jx_zero_CPUManager* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_CPUManager_reboot(%jx_zero_CPUManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_zero_CPUManager_getStackDepth(%jx_zero_CPUManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define %java_lang_String* @jx_zero_CPUManager_getStackFrameClassName_I(%jx_zero_CPUManager* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define %java_lang_String* @jx_zero_CPUManager_getStackFrameMethodName_I(%jx_zero_CPUManager* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i32 @jx_zero_CPUManager_getStackFrameLine_I(%jx_zero_CPUManager* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define i32 @jx_zero_CPUManager_getStackFrameBytecode_I(%jx_zero_CPUManager* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_CPUManager_inhibitScheduling(%jx_zero_CPUManager* %s0){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_CPUManager_allowScheduling(%jx_zero_CPUManager* %s0){
    
}


