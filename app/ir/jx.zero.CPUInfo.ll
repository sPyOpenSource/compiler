; CLASS: jx/zero/CPUInfo extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()


declare void @java_lang_Object__init_(%java_lang_Object*)

; first generation
%jx_zero_CPUInfo = type {%java_lang_String;*, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32} ; use jx/zero/CPUInfo
%java_lang_String = type {%.C"*, i32} ; use java/lang/String
%java_lang_Object = type {} ; use java/lang/Object
%java_lang_String = type {%.C"*, i32} ; use java/lang/String;
%.C" = type {i32, [0 x i16]} ; use [C"
; globals
@jx_zero_CPUInfo_FEATURE_MSR_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_TYPE_PRIMARY_CPU = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FAMILY_P5 = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FAMILY_486 = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_MCE_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_CMOV_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_MMX_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_TYPE_OVERDRIVE_CPU = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_VME_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_PSN_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_DE_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_TYPE_SECONDARY_MP_CPU = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_MCA_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_XMM_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_PSE_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_TSC_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_MTRR_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_PAT_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_PSE36_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_FPU_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_FXSR_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_TYPE_RESERVED = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_SEP_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_APIC_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FAMILY_P6 = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_PGE_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_PAE_MASK = internal global i32 zeroinitializer
@jx_zero_CPUInfo_FEATURE_CX8_MASK = internal global i32 zeroinitializer


; locals: 2
; stack: 2
; args: 2
define void @jx_zero_CPUInfo__init__Ljava_lang_String_(%jx_zero_CPUInfo* %s0, %java_lang_String* %s1){
        __MethodEntry:
    ;0
            
            %this_0_3 = alloca %jx_zero_CPUInfo*; slot 0 = Ljx/zero/CPUInfo;
            store %jx_zero_CPUInfo* %s0, %jx_zero_CPUInfo** %this_0_3
            
            %vendor_0_3 = alloca %java_lang_String*; slot 1 = Ljava/lang/String;
            store %java_lang_String* %s1, %java_lang_String** %vendor_0_3
            ; 
            ; %jx_zero_CPUInfo*load 0
            %stack0 = load %jx_zero_CPUInfo*, %jx_zero_CPUInfo** %this_0_3
            %stack1 = bitcast %jx_zero_CPUInfo* %stack0 to %java_lang_Object*
            call void @java_lang_Object__init_(%java_lang_Object* %stack1); special call private or <init>
            ; 
            ; %jx_zero_CPUInfo*load 0
            %stack2 = load %jx_zero_CPUInfo*, %jx_zero_CPUInfo** %this_0_3
            ; %java_lang_String*load 1
            %stack3 = load %java_lang_String*, %java_lang_String** %vendor_0_3
            ; putfield jx/zero/CPUInfo vendor Ljava/lang/String; ( %jx_zero_CPUInfo* %stack2 := %java_lang_String* %stack3 )
            %__tmp0 = getelementptr %jx_zero_CPUInfo, %jx_zero_CPUInfo* %stack2, i32 0, i32 0
            store %java_lang_String* %stack3, %java_lang_String** %__tmp0
            ; 
            ret void
            ; 
}

; locals: 8
; stack: 2
; args: 8
define void @jx_zero_CPUInfo__init__Ljava_lang_String_IIIIII(%jx_zero_CPUInfo* %s0, %java_lang_String* %s1, i32 %s2, i32 %s3, i32 %s4, i32 %s5, i32 %s6, i32 %s7){
        __MethodEntry:
    ;0
            
            %this_0_9 = alloca %jx_zero_CPUInfo*; slot 0 = Ljx/zero/CPUInfo;
            store %jx_zero_CPUInfo* %s0, %jx_zero_CPUInfo** %this_0_9
            
            %vendor_0_9 = alloca %java_lang_String*; slot 1 = Ljava/lang/String;
            store %java_lang_String* %s1, %java_lang_String** %vendor_0_9
            
            %type_0_9 = alloca i32; slot 2 = I
            store i32 %s2, i32* %type_0_9
            
            %family_0_9 = alloca i32; slot 3 = I
            store i32 %s3, i32* %family_0_9
            
            %model_0_9 = alloca i32; slot 4 = I
            store i32 %s4, i32* %model_0_9
            
            %stepping_0_9 = alloca i32; slot 5 = I
            store i32 %s5, i32* %stepping_0_9
            
            %brand_0_9 = alloca i32; slot 6 = I
            store i32 %s6, i32* %brand_0_9
            
            %features_0_9 = alloca i32; slot 7 = I
            store i32 %s7, i32* %features_0_9
            ; 
            ; %jx_zero_CPUInfo*load 0
            %stack0 = load %jx_zero_CPUInfo*, %jx_zero_CPUInfo** %this_0_9
            %stack1 = bitcast %jx_zero_CPUInfo* %stack0 to %java_lang_Object*
            call void @java_lang_Object__init_(%java_lang_Object* %stack1); special call private or <init>
            ; 
            ; %jx_zero_CPUInfo*load 0
            %stack2 = load %jx_zero_CPUInfo*, %jx_zero_CPUInfo** %this_0_9
            ; %java_lang_String*load 1
            %stack3 = load %java_lang_String*, %java_lang_String** %vendor_0_9
            ; putfield jx/zero/CPUInfo vendor Ljava/lang/String; ( %jx_zero_CPUInfo* %stack2 := %java_lang_String* %stack3 )
            %__tmp0 = getelementptr %jx_zero_CPUInfo, %jx_zero_CPUInfo* %stack2, i32 0, i32 0
            store %java_lang_String* %stack3, %java_lang_String** %__tmp0
            ; 
            ; %jx_zero_CPUInfo*load 0
            %stack4 = load %jx_zero_CPUInfo*, %jx_zero_CPUInfo** %this_0_9
            ; i32load 2
            %stack5 = load i32, i32* %type_0_9
            ; putfield jx/zero/CPUInfo type I ( %jx_zero_CPUInfo* %stack4 := i32 %stack5 )
            %__tmp1 = getelementptr %jx_zero_CPUInfo, %jx_zero_CPUInfo* %stack4, i32 0, i32 2
            store i32 %stack5, i32* %__tmp1
            ; 
            ; %jx_zero_CPUInfo*load 0
            %stack6 = load %jx_zero_CPUInfo*, %jx_zero_CPUInfo** %this_0_9
            ; i32load 3
            %stack7 = load i32, i32* %family_0_9
            ; putfield jx/zero/CPUInfo family I ( %jx_zero_CPUInfo* %stack6 := i32 %stack7 )
            %__tmp2 = getelementptr %jx_zero_CPUInfo, %jx_zero_CPUInfo* %stack6, i32 0, i32 3
            store i32 %stack7, i32* %__tmp2
            ; 
            ; %jx_zero_CPUInfo*load 0
            %stack8 = load %jx_zero_CPUInfo*, %jx_zero_CPUInfo** %this_0_9
            ; i32load 4
            %stack9 = load i32, i32* %model_0_9
            ; putfield jx/zero/CPUInfo model I ( %jx_zero_CPUInfo* %stack8 := i32 %stack9 )
            %__tmp3 = getelementptr %jx_zero_CPUInfo, %jx_zero_CPUInfo* %stack8, i32 0, i32 4
            store i32 %stack9, i32* %__tmp3
            ; 
            ; %jx_zero_CPUInfo*load 0
            %stack10 = load %jx_zero_CPUInfo*, %jx_zero_CPUInfo** %this_0_9
            ; i32load 5
            %stack11 = load i32, i32* %stepping_0_9
            ; putfield jx/zero/CPUInfo stepping I ( %jx_zero_CPUInfo* %stack10 := i32 %stack11 )
            %__tmp4 = getelementptr %jx_zero_CPUInfo, %jx_zero_CPUInfo* %stack10, i32 0, i32 5
            store i32 %stack11, i32* %__tmp4
            ; 
            ; %jx_zero_CPUInfo*load 0
            %stack12 = load %jx_zero_CPUInfo*, %jx_zero_CPUInfo** %this_0_9
            ; i32load 6
            %stack13 = load i32, i32* %brand_0_9
            ; putfield jx/zero/CPUInfo brand I ( %jx_zero_CPUInfo* %stack12 := i32 %stack13 )
            %__tmp5 = getelementptr %jx_zero_CPUInfo, %jx_zero_CPUInfo* %stack12, i32 0, i32 6
            store i32 %stack13, i32* %__tmp5
            ; 
            ; %jx_zero_CPUInfo*load 0
            %stack14 = load %jx_zero_CPUInfo*, %jx_zero_CPUInfo** %this_0_9
            ; i32load 7
            %stack15 = load i32, i32* %features_0_9
            ; putfield jx/zero/CPUInfo features I ( %jx_zero_CPUInfo* %stack14 := i32 %stack15 )
            %__tmp6 = getelementptr %jx_zero_CPUInfo, %jx_zero_CPUInfo* %stack14, i32 0, i32 1
            store i32 %stack15, i32* %__tmp6
            ; 
            ret void
            ; 
}

; locals: 1
; stack: 2
; args: 1
define i1 @jx_zero_CPUInfo_hasMTRR(%jx_zero_CPUInfo* %s0){
        __MethodEntry:
    ;0
            %stack5_stack = alloca i32
            
            %this_0_3 = alloca %jx_zero_CPUInfo*; slot 0 = Ljx/zero/CPUInfo;
            store %jx_zero_CPUInfo* %s0, %jx_zero_CPUInfo** %this_0_3
            ; 
            ; %jx_zero_CPUInfo*load 0
            %stack0 = load %jx_zero_CPUInfo*, %jx_zero_CPUInfo** %this_0_3
            ; getfield jx/zero/CPUInfo features I ( %jx_zero_CPUInfo* %stack0 )
            %__tmp0 = getelementptr %jx_zero_CPUInfo, %jx_zero_CPUInfo* %stack0, i32 0, i32 1
            %stack1 = load i32, i32* %__tmp0
            ; sipush 4096
            %_imm_1 = alloca i32
            store i32 4096, i32* %_imm_1
            %stack2 = load i32, i32* %_imm_1
            %stack3 = and i32 %stack1, %stack2
            %__tmpc2 = icmp eq i32 %stack3, 0
            br i1 %__tmpc2, label %L339924917, label %_if.else2
        _if.else2:
    ;1
            ; iconst_1
            %_imm_3 = alloca i32
            store i32 1, i32* %_imm_3
            %stack4 = load i32, i32* %_imm_3
            store i32 %stack4, i32* %stack5_stack;FIXED BRANCH BLOCK VAR
            br label %L912011468
        L339924917:
    ;2
            ; type 3, local 0 [null], stack 0 [null, null]
            ; iconst_0
            %_imm_4 = alloca i32
            store i32 0, i32* %_imm_4
            %stack5 = load i32, i32* %_imm_4
            store i32 %stack5, i32* %stack5_stack;FIXED BRANCH BLOCK VAR
            br label %L912011468
        L912011468:
    ;3
            %stack5_register = load i32, i32* %stack5_stack
            ; type 4, local 0 [null], stack 1 [1, null]
            %stack6 = trunc i32 %stack5_register to i1
            ret i1 %stack6
            ; 
}


