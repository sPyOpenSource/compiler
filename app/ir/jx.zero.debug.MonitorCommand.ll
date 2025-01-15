; CLASS: jx/zero/debug/MonitorCommand extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%.Ljava_lang_String_ = type {i32, [0 x %java_lang_String*]} ; use [Ljava/lang/String;
%jx_zero_debug_MonitorCommand = type {} ; use jx/zero/debug/MonitorCommand
java/lang/String is unknown ; use java/lang/String
; globals


; locals: 0
; stack: 0
; args: 2
define void @jx_zero_debug_MonitorCommand_execCommand__Ljava_lang_String_(%jx_zero_debug_MonitorCommand* %s0, %.Ljava_lang_String_* %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define %java_lang_String* @jx_zero_debug_MonitorCommand_getHelp(%jx_zero_debug_MonitorCommand* %s0){
    
}


