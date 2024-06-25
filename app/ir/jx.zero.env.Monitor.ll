; CLASS: jx/zero/env/Monitor extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()


declare %java_lang_String* @construct_string_with_char_arr_(%.C* %s0)
declare void @java_lang_Error__init__Ljava_lang_String_(%java_lang_Error*, %java_lang_String*)
declare void @java_lang_Object__init_(%java_lang_Object*)

; first generation
%jx_zero_env_Monitor = type {} ; use jx/zero/env/Monitor
%java_lang_Object = type {} ; use java/lang/Object
%java_lang_Error = type {} ; use java/lang/Error
%java_lang_String = type {%.C"*, i32} ; use java/lang/String
%.C = type {i32, [0 x i16]} ; use [C
%.C" = type {i32, [0 x i16]} ; use [C"
; globals

@str299728677 = internal global { i32, [18 x i16] } { i32 18,[18 x i16] [i16 109,i16 111,i16 110,i16 105,i16 116,i16 111,i16 114,i16 101,i16 120,i16 105,i16 116,i16 32,i16 99,i16 97,i16 108,i16 108,i16 101,i16 100]}, align 4 
@strptr299728677 = internal global %.C* bitcast ( { i32 ,[18 x i16]}* @str299728677 to %.C*)
@str-1732875233 = internal global { i32, [19 x i16] } { i32 19,[19 x i16] [i16 109,i16 111,i16 110,i16 105,i16 116,i16 111,i16 114,i16 101,i16 110,i16 116,i16 101,i16 114,i16 32,i16 99,i16 97,i16 108,i16 108,i16 101,i16 100]}, align 4 
@strptr-1732875233 = internal global %.C* bitcast ( { i32 ,[19 x i16]}* @str-1732875233 to %.C*)

; locals: 1
; stack: 1
; args: 1
define void @jx_zero_env_Monitor__init_(%jx_zero_env_Monitor* %s0){
        __MethodEntry:
    ;0
            
            %this_0_1 = alloca %jx_zero_env_Monitor*; slot 0 = Ljx/zero/env/Monitor;
            store %jx_zero_env_Monitor* %s0, %jx_zero_env_Monitor** %this_0_1
            ; 
            ; %jx_zero_env_Monitor*load 0
            %stack0 = load %jx_zero_env_Monitor*, %jx_zero_env_Monitor** %this_0_1
            %stack1 = bitcast %jx_zero_env_Monitor* %stack0 to %java_lang_Object*
            call void @java_lang_Object__init_(%java_lang_Object* %stack1); special call private or <init>
            ret void
            ; 
}

; locals: 1
; stack: 3
; args: 1
define void @jx_zero_env_Monitor_enter_Ljava_lang_Object_(%java_lang_Object* %s0){
