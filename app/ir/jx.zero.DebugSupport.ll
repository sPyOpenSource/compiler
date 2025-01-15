; CLASS: jx/zero/DebugSupport extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_zero_Domain = type {} ; use jx/zero/Domain
%jx_zero_DebugSupport = type {} ; use jx/zero/DebugSupport
java/lang/Object is unknown ; use java/lang/Object
java/lang/String is unknown ; use java/lang/String
%jx_zero_Memory = type {} ; use jx/zero/Memory
%jx_zero_debug_MonitorCommand = type {} ; use jx/zero/debug/MonitorCommand
; globals


; locals: 0
; stack: 0
; args: 2
define void @jx_zero_DebugSupport_dumpDomain_Ljx_zero_Domain_(%jx_zero_DebugSupport* %s0, %jx_zero_Domain* %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_zero_DebugSupport_dumpObject_Ljava_lang_Object_(%jx_zero_DebugSupport* %s0, %java_lang_Object* %s1){
    
}

; locals: 0
; stack: 0
; args: 4
define void @jx_zero_DebugSupport_sendBinary_Ljava_lang_String_Ljx_zero_Memory_I(%jx_zero_DebugSupport* %s0, %java_lang_String* %s1, %jx_zero_Memory* %s2, i32 %s3){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_zero_DebugSupport_registerMonitorCommand_Ljava_lang_String_Ljx_zero_debug_MonitorCommand_(%jx_zero_DebugSupport* %s0, %java_lang_String* %s1, %jx_zero_debug_MonitorCommand* %s2){
    
}

; locals: 0
; stack: 0
; args: 1
define void @jx_zero_DebugSupport_breakpoint(%jx_zero_DebugSupport* %s0){
    
}


