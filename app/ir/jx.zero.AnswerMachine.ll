; CLASS: jx/zero/AnswerMachine extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%java_lang_String = type {%.C"*, i32} ; use java/lang/String
%jx_zero_AnswerMachine = type {} ; use jx/zero/AnswerMachine
%.C" = type {i32, [0 x i16]} ; use [C"
; globals


; locals: 0
; stack: 0
; args: 2
define i1 @jx_zero_AnswerMachine_ask_Ljava_lang_String_(%jx_zero_AnswerMachine* %s0, %java_lang_String* %s1){
    
}


