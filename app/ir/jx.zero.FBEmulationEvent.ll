; CLASS: jx/zero/FBEmulationEvent extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()


declare void @java_lang_Object__init_(%java_lang_Object*)

; first generation
%jx_zero_FBEmulationEvent = type {i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32} ; use jx/zero/FBEmulationEvent
%java_lang_Object = type {} ; use java/lang/Object
; globals
@jx_zero_FBEmulationEvent_TYPE_BUTTON_RELEASE = internal global i32 zeroinitializer
@jx_zero_FBEmulationEvent_TYPE_BUTTON_PRESS = internal global i32 zeroinitializer
@jx_zero_FBEmulationEvent_TYPE_MOUSE_MOVE = internal global i32 zeroinitializer
@jx_zero_FBEmulationEvent_STATE_SHIFT = internal global i32 zeroinitializer
@jx_zero_FBEmulationEvent_TYPE_KEY_PRESS = internal global i32 zeroinitializer
@jx_zero_FBEmulationEvent_STATE_BUTTON1 = internal global i32 zeroinitializer
@jx_zero_FBEmulationEvent_STATE_BUTTON2 = internal global i32 zeroinitializer
@jx_zero_FBEmulationEvent_TYPE_KEY_RELEASE = internal global i32 zeroinitializer
@jx_zero_FBEmulationEvent_STATE_BUTTON3 = internal global i32 zeroinitializer


; locals: 1
; stack: 1
; args: 1
define void @jx_zero_FBEmulationEvent__init_(%jx_zero_FBEmulationEvent* %s0){
        __MethodEntry:
    ;0
            
            %this_0_1 = alloca %jx_zero_FBEmulationEvent*; slot 0 = Ljx/zero/FBEmulationEvent;
            store %jx_zero_FBEmulationEvent* %s0, %jx_zero_FBEmulationEvent** %this_0_1
            ; 
            ; %jx_zero_FBEmulationEvent*load 0
            %stack0 = load %jx_zero_FBEmulationEvent*, %jx_zero_FBEmulationEvent** %this_0_1
            %stack1 = bitcast %jx_zero_FBEmulationEvent* %stack0 to %java_lang_Object*
            call void @java_lang_Object__init_(%java_lang_Object* %stack1); special call private or <init>
            ret void
            ; 
}


