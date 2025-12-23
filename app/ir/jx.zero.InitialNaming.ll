; CLASS: jx/zero/InitialNaming extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()


declare void @java_lang_Object__init_(%java_lang_Object*)

; first generation
%jx_zero_InitialNaming = type {} ; use jx/zero/InitialNaming
java/lang/Object is unknown ; use java/lang/Object
%jx_zero_Naming = type {} ; use jx/zero/Naming
; globals


; locals: 1
; stack: 1
; args: 1
define void @jx_zero_InitialNaming__init_(%jx_zero_InitialNaming* %s0){
        __MethodEntry:
    ;0
            
            %this_0_1 = alloca %jx_zero_InitialNaming*; slot 0 = Ljx/zero/InitialNaming;
            store %jx_zero_InitialNaming* %s0, %jx_zero_InitialNaming** %this_0_1
            ; 
            ; %jx_zero_InitialNaming*load 0
            %stack0 = load %jx_zero_InitialNaming*, %jx_zero_InitialNaming** %this_0_1
            %stack1 = bitcast %jx_zero_InitialNaming* %stack0 to %java_lang_Object*
            call void @java_lang_Object__init_(%java_lang_Object* %stack1); special call private or <init>
            ret void
            ; 
}

; locals: 0
; stack: 1
; args: 0
define %jx_zero_Naming* @jx_zero_InitialNaming_getInitialNaming(){
        __MethodEntry:
    ;0
            ; 
            ; const null
            %_imm_0 = alloca null
            store null null, null* %_imm_0
            %stack0 = load null, null* %_imm_0
            %stack1 = bitcast null %stack0 to %jx_zero_Naming*
            ret %jx_zero_Naming* %stack1
}


