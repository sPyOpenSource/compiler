; CLASS: jx/zero/VMSupport extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()


declare void @java_lang_Object__init_(%java_lang_Object*)

; first generation
%jx_zero_VMSupport = type {} ; use jx/zero/VMSupport
%.B = type {i32, [0 x i8]} ; use [B
%.C = type {i32, [0 x i16]} ; use [C
%.Ljava_lang_Object_ = type {i32, [0 x %java_lang_Object*]} ; use [Ljava/lang/Object;
java/lang/Object is unknown ; use java/lang/Object
; globals


; locals: 1
; stack: 1
; args: 1
define void @jx_zero_VMSupport__init_(%jx_zero_VMSupport* %s0){
        __MethodEntry:
    ;0
            
            %this_0_1 = alloca %jx_zero_VMSupport*; slot 0 = Ljx/zero/VMSupport;
            store %jx_zero_VMSupport* %s0, %jx_zero_VMSupport** %this_0_1
            ; 
            ; %jx_zero_VMSupport*load 0
            %stack0 = load %jx_zero_VMSupport*, %jx_zero_VMSupport** %this_0_1
            %stack1 = bitcast %jx_zero_VMSupport* %stack0 to %java_lang_Object*
            call void @java_lang_Object__init_(%java_lang_Object* %stack1); special call private or <init>
            ret void
            ; 
}

; locals: 1
; stack: 3
; args: 1
define i16 @jx_zero_VMSupport_swapShortByteOrder_S(i16 %s0){
        __MethodEntry:
    ;0
            
            %value_0_1 = alloca i16; slot 0 = S
            store i16 %s0, i16* %value_0_1
            ; 
            ; i16load 0
            %stack0 = load i16, i16* %value_0_1
            ; ldc 65280
            %_imm_0 = alloca i32
            store i32 65280, i32* %_imm_0
            %stack1 = load i32, i32* %_imm_0
            %stack2 = zext i16 %stack0 to i32
            %stack3 = and i32 %stack2, %stack1
            ; bipush 8
            %_imm_1 = alloca i32
            store i32 8, i32* %_imm_1
            %stack4 = load i32, i32* %_imm_1
            %stack5 = lshr i32 %stack3, %stack4
            ; i16load 0
            %stack6 = load i16, i16* %value_0_1
            ; sipush 255
            %_imm_2 = alloca i32
            store i32 255, i32* %_imm_2
            %stack7 = load i32, i32* %_imm_2
            %stack8 = zext i16 %stack6 to i32
            %stack9 = and i32 %stack8, %stack7
            ; bipush 8
            %_imm_3 = alloca i32
            store i32 8, i32* %_imm_3
            %stack10 = load i32, i32* %_imm_3
            %stack11 = shl i32 %stack9, %stack10
            %stack12 = or i32 %stack5, %stack11
            %stack13 = utrunc i32 %stack12 to i16
            ret i16 %stack13
            ; 
}

; locals: 2
; stack: 3
; args: 1
define i32 @jx_zero_VMSupport_swapIntByteOrder_I(i32 %s0){
        __MethodEntry:
    ;0
            
            %value_0_6 = alloca i32; slot 0 = I
            store i32 %s0, i32* %value_0_6
            
            %rvalue_1_6 = alloca i32; slot 1 = I
            ; 
            ; iconst_0
            %_imm_0 = alloca i32
            store i32 0, i32* %_imm_0
            %stack0 = load i32, i32* %_imm_0
            ; i32store 1
            store i32 %stack0, i32* %rvalue_1_6
            ; 
            ; i32load 1
            %stack1 = load i32, i32* %rvalue_1_6
            ; i32load 0
            %stack2 = load i32, i32* %value_0_6
            ; sipush 255
            %_imm_1 = alloca i32
            store i32 255, i32* %_imm_1
            %stack3 = load i32, i32* %_imm_1
            %stack4 = and i32 %stack2, %stack3
            ; bipush 24
            %_imm_2 = alloca i32
            store i32 24, i32* %_imm_2
            %stack5 = load i32, i32* %_imm_2
            %stack6 = shl i32 %stack4, %stack5
            %stack7 = or i32 %stack1, %stack6
            ; i32store 1
            store i32 %stack7, i32* %rvalue_1_6
            ; 
            ; i32load 1
            %stack8 = load i32, i32* %rvalue_1_6
            ; i32load 0
            %stack9 = load i32, i32* %value_0_6
            ; ldc 65280
            %_imm_3 = alloca i32
            store i32 65280, i32* %_imm_3
            %stack10 = load i32, i32* %_imm_3
            %stack11 = and i32 %stack9, %stack10
            ; bipush 8
            %_imm_4 = alloca i32
            store i32 8, i32* %_imm_4
            %stack12 = load i32, i32* %_imm_4
            %stack13 = shl i32 %stack11, %stack12
            %stack14 = or i32 %stack8, %stack13
            ; i32store 1
            store i32 %stack14, i32* %rvalue_1_6
            ; 
            ; i32load 1
            %stack15 = load i32, i32* %rvalue_1_6
            ; i32load 0
            %stack16 = load i32, i32* %value_0_6
            ; ldc 16711680
            %_imm_5 = alloca i32
            store i32 16711680, i32* %_imm_5
            %stack17 = load i32, i32* %_imm_5
            %stack18 = and i32 %stack16, %stack17
            ; bipush 8
            %_imm_6 = alloca i32
            store i32 8, i32* %_imm_6
            %stack19 = load i32, i32* %_imm_6
            %stack20 = lshr i32 %stack18, %stack19
            %stack21 = or i32 %stack15, %stack20
            ; i32store 1
            store i32 %stack21, i32* %rvalue_1_6
            ; 
            ; i32load 1
            %stack22 = load i32, i32* %rvalue_1_6
            ; i32load 0
            %stack23 = load i32, i32* %value_0_6
            ; ldc -16777216
            %_imm_7 = alloca i32
            store i32 -16777216, i32* %_imm_7
            %stack24 = load i32, i32* %_imm_7
            %stack25 = and i32 %stack23, %stack24
            ; bipush 24
            %_imm_8 = alloca i32
            store i32 24, i32* %_imm_8
            %stack26 = load i32, i32* %_imm_8
            %stack27 = lshr i32 %stack25, %stack26
            %stack28 = or i32 %stack22, %stack27
            ; i32store 1
            store i32 %stack28, i32* %rvalue_1_6
            ; 
            ; i32load 1
            %stack29 = load i32, i32* %rvalue_1_6
            ret i32 %stack29
            ; 
}

; locals: 6
; stack: 4
; args: 5
define void @jx_zero_VMSupport_arraycopy_byte_left__BI_BII(%.B* %s0, i32 %s1, %.B* %s2, i32 %s3, i32 %s4){
        __MethodEntry:
    ;0
            
            %src_0_5 = alloca %.B*; slot 0 = [B
            store %.B* %s0, %.B** %src_0_5
            
            %srcOffset_0_5 = alloca i32; slot 1 = I
            store i32 %s1, i32* %srcOffset_0_5
            
            %dst_0_5 = alloca %.B*; slot 2 = [B
            store %.B* %s2, %.B** %dst_0_5
            
            %dstOffset_0_5 = alloca i32; slot 3 = I
            store i32 %s3, i32* %dstOffset_0_5
            
            %count_0_5 = alloca i32; slot 4 = I
            store i32 %s4, i32* %count_0_5
            
            %i_3_4 = alloca i32; slot 5 = I
            ; 
            ; i32load 1
            %stack0 = load i32, i32* %srcOffset_0_5
            ; i32load 4
            %stack1 = load i32, i32* %count_0_5
            %stack2 = add i32 %stack0, %stack1
            ; i32store 1
            store i32 %stack2, i32* %srcOffset_0_5
            ; 
            ; i32load 3
            %stack3 = load i32, i32* %dstOffset_0_5
            ; i32load 4
            %stack4 = load i32, i32* %count_0_5
            %stack5 = add i32 %stack3, %stack4
            ; i32store 3
            store i32 %stack5, i32* %dstOffset_0_5
            ; 
            ; iconst_0
            %_imm_0 = alloca i32
            store i32 0, i32* %_imm_0
            %stack6 = load i32, i32* %_imm_0
            ; i32store 5
            store i32 %stack6, i32* %i_3_4
            br label %L379886033
        L379886033:
    ;1
            ; type 1, local 1 [1, null, null, null, null, null], stack 0 [null, null, null, null]
            ; i32load 5
            %stack7 = load i32, i32* %i_3_4
            ; i32load 4
            %stack8 = load i32, i32* %count_0_5
            %__tmpc1 = icmp sge i32 %stack7, %stack8
            br i1 %__tmpc1, label %L46092193, label %_if.else1
        _if.else1:
    ;2
            ; %.B*load 2
            %stack9 = load %.B*, %.B** %dst_0_5
            %__tmpv2 = load i32, i32* %dstOffset_0_5
            %__tmpv3 = add i32 %__tmpv2, -1
            store i32 %__tmpv3, i32* %dstOffset_0_5; inc 
            ; i32load 3
            %stack10 = load i32, i32* %dstOffset_0_5
            ; %.B*load 0
            %stack11 = load %.B*, %.B** %src_0_5
            %__tmpv4 = load i32, i32* %srcOffset_0_5
            %__tmpv5 = add i32 %__tmpv4, -1
            store i32 %__tmpv5, i32* %srcOffset_0_5; inc 
            ; i32load 1
            %stack12 = load i32, i32* %srcOffset_0_5
            ; i8aload 
            %__tmp6 = getelementptr %.B, %.B* %stack11, i32 0, i32 1, i32 %stack12
            %stack13 = load i8, i8* %__tmp6
            ; i8astore 
            %__tmp7 = getelementptr %.B, %.B* %stack9, i32 0, i32 1, i32 %stack10
            store i8 %stack13, i8* %__tmp7
            %__tmpv8 = load i32, i32* %i_3_4
            %__tmpv9 = add i32 %__tmpv8, 1
            store i32 %__tmpv9, i32* %i_3_4; inc 
            br label %L379886033
        L46092193:
    ;3
            ; type 2, local 1 [1, null, null, null, null, null], stack 0 [null, null, null, null]
            ret void
            ; 
}

; locals: 6
; stack: 5
; args: 5
define void @jx_zero_VMSupport_arraycopy_byte_right__BI_BII(%.B* %s0, i32 %s1, %.B* %s2, i32 %s3, i32 %s4){
        __MethodEntry:
    ;0
            
            %src_0_3 = alloca %.B*; slot 0 = [B
            store %.B* %s0, %.B** %src_0_3
            
            %srcOffset_0_3 = alloca i32; slot 1 = I
            store i32 %s1, i32* %srcOffset_0_3
            
            %dst_0_3 = alloca %.B*; slot 2 = [B
            store %.B* %s2, %.B** %dst_0_3
            
            %dstOffset_0_3 = alloca i32; slot 3 = I
            store i32 %s3, i32* %dstOffset_0_3
            
            %count_0_3 = alloca i32; slot 4 = I
            store i32 %s4, i32* %count_0_3
            
            %i_1_2 = alloca i32; slot 5 = I
            ; 
            ; iconst_0
            %_imm_0 = alloca i32
            store i32 0, i32* %_imm_0
            %stack0 = load i32, i32* %_imm_0
            ; i32store 5
            store i32 %stack0, i32* %i_1_2
            br label %L1962449837
        L1962449837:
    ;1
            ; type 1, local 1 [1, null, null, null, null, null], stack 0 [null, null, null, null, null]
            ; i32load 5
            %stack1 = load i32, i32* %i_1_2
            ; i32load 4
            %stack2 = load i32, i32* %count_0_3
            %__tmpc1 = icmp sge i32 %stack1, %stack2
            br i1 %__tmpc1, label %L1523911426, label %_if.else1
        _if.else1:
    ;2
            ; %.B*load 2
            %stack3 = load %.B*, %.B** %dst_0_3
            ; i32load 3
            %stack4 = load i32, i32* %dstOffset_0_3
            ; i32load 5
            %stack5 = load i32, i32* %i_1_2
            %stack6 = add i32 %stack4, %stack5
            ; %.B*load 0
            %stack7 = load %.B*, %.B** %src_0_3
            ; i32load 1
            %stack8 = load i32, i32* %srcOffset_0_3
            ; i32load 5
            %stack9 = load i32, i32* %i_1_2
            %stack10 = add i32 %stack8, %stack9
            ; i8aload 
            %__tmp2 = getelementptr %.B, %.B* %stack7, i32 0, i32 1, i32 %stack10
            %stack11 = load i8, i8* %__tmp2
            ; i8astore 
            %__tmp3 = getelementptr %.B, %.B* %stack3, i32 0, i32 1, i32 %stack6
            store i8 %stack11, i8* %__tmp3
            %__tmpv4 = load i32, i32* %i_1_2
            %__tmpv5 = add i32 %__tmpv4, 1
            store i32 %__tmpv5, i32* %i_1_2; inc 
            br label %L1962449837
        L1523911426:
    ;3
            ; type 2, local 1 [1, null, null, null, null, null], stack 0 [null, null, null, null, null]
            ret void
            ; 
}

; locals: 6
; stack: 4
; args: 5
define void @jx_zero_VMSupport_arraycopy_char_left__CI_CII(%.C* %s0, i32 %s1, %.C* %s2, i32 %s3, i32 %s4){
        __MethodEntry:
    ;0
            
            %src_0_5 = alloca %.C*; slot 0 = [C
            store %.C* %s0, %.C** %src_0_5
            
            %srcOffset_0_5 = alloca i32; slot 1 = I
            store i32 %s1, i32* %srcOffset_0_5
            
            %dst_0_5 = alloca %.C*; slot 2 = [C
            store %.C* %s2, %.C** %dst_0_5
            
            %dstOffset_0_5 = alloca i32; slot 3 = I
            store i32 %s3, i32* %dstOffset_0_5
            
            %count_0_5 = alloca i32; slot 4 = I
            store i32 %s4, i32* %count_0_5
            
            %i_3_4 = alloca i32; slot 5 = I
            ; 
            ; i32load 1
            %stack0 = load i32, i32* %srcOffset_0_5
            ; i32load 4
            %stack1 = load i32, i32* %count_0_5
            %stack2 = add i32 %stack0, %stack1
            ; i32store 1
            store i32 %stack2, i32* %srcOffset_0_5
            ; 
            ; i32load 3
            %stack3 = load i32, i32* %dstOffset_0_5
            ; i32load 4
            %stack4 = load i32, i32* %count_0_5
            %stack5 = add i32 %stack3, %stack4
            ; i32store 3
            store i32 %stack5, i32* %dstOffset_0_5
            ; 
            ; iconst_0
            %_imm_0 = alloca i32
            store i32 0, i32* %_imm_0
            %stack6 = load i32, i32* %_imm_0
            ; i32store 5
            store i32 %stack6, i32* %i_3_4
            br label %L169571657
        L169571657:
    ;1
            ; type 1, local 1 [1, null, null, null, null, null], stack 0 [null, null, null, null]
            ; i32load 5
            %stack7 = load i32, i32* %i_3_4
            ; i32load 4
            %stack8 = load i32, i32* %count_0_5
            %__tmpc1 = icmp sge i32 %stack7, %stack8
            br i1 %__tmpc1, label %L2057715536, label %_if.else1
        _if.else1:
    ;2
            ; %.C*load 2
            %stack9 = load %.C*, %.C** %dst_0_5
            %__tmpv2 = load i32, i32* %dstOffset_0_5
            %__tmpv3 = add i32 %__tmpv2, -1
            store i32 %__tmpv3, i32* %dstOffset_0_5; inc 
            ; i32load 3
            %stack10 = load i32, i32* %dstOffset_0_5
            ; %.C*load 0
            %stack11 = load %.C*, %.C** %src_0_5
            %__tmpv4 = load i32, i32* %srcOffset_0_5
            %__tmpv5 = add i32 %__tmpv4, -1
            store i32 %__tmpv5, i32* %srcOffset_0_5; inc 
            ; i32load 1
            %stack12 = load i32, i32* %srcOffset_0_5
            ; i16aload 
            %__tmp6 = getelementptr %.C, %.C* %stack11, i32 0, i32 1, i32 %stack12
            %stack13 = load i16, i16* %__tmp6
            ; i16astore 
            %__tmp7 = getelementptr %.C, %.C* %stack9, i32 0, i32 1, i32 %stack10
            store i16 %stack13, i16* %__tmp7
            %__tmpv8 = load i32, i32* %i_3_4
            %__tmpv9 = add i32 %__tmpv8, 1
            store i32 %__tmpv9, i32* %i_3_4; inc 
            br label %L169571657
        L2057715536:
    ;3
            ; type 2, local 1 [1, null, null, null, null, null], stack 0 [null, null, null, null]
            ret void
            ; 
}

; locals: 6
; stack: 5
; args: 5
define void @jx_zero_VMSupport_arraycopy_char_right__CI_CII(%.C* %s0, i32 %s1, %.C* %s2, i32 %s3, i32 %s4){
        __MethodEntry:
    ;0
            
            %src_0_3 = alloca %.C*; slot 0 = [C
            store %.C* %s0, %.C** %src_0_3
            
            %srcOffset_0_3 = alloca i32; slot 1 = I
            store i32 %s1, i32* %srcOffset_0_3
            
            %dst_0_3 = alloca %.C*; slot 2 = [C
            store %.C* %s2, %.C** %dst_0_3
            
            %dstOffset_0_3 = alloca i32; slot 3 = I
            store i32 %s3, i32* %dstOffset_0_3
            
            %count_0_3 = alloca i32; slot 4 = I
            store i32 %s4, i32* %count_0_3
            
            %i_1_2 = alloca i32; slot 5 = I
            ; 
            ; iconst_0
            %_imm_0 = alloca i32
            store i32 0, i32* %_imm_0
            %stack0 = load i32, i32* %_imm_0
            ; i32store 5
            store i32 %stack0, i32* %i_1_2
            br label %L633103787
        L633103787:
    ;1
            ; type 1, local 1 [1, null, null, null, null, null], stack 0 [null, null, null, null, null]
            ; i32load 5
            %stack1 = load i32, i32* %i_1_2
            ; i32load 4
            %stack2 = load i32, i32* %count_0_3
            %__tmpc1 = icmp sge i32 %stack1, %stack2
            br i1 %__tmpc1, label %L1856738035, label %_if.else1
        _if.else1:
    ;2
            ; %.C*load 2
            %stack3 = load %.C*, %.C** %dst_0_3
            ; i32load 3
            %stack4 = load i32, i32* %dstOffset_0_3
            ; i32load 5
            %stack5 = load i32, i32* %i_1_2
            %stack6 = add i32 %stack4, %stack5
            ; %.C*load 0
            %stack7 = load %.C*, %.C** %src_0_3
            ; i32load 1
            %stack8 = load i32, i32* %srcOffset_0_3
            ; i32load 5
            %stack9 = load i32, i32* %i_1_2
            %stack10 = add i32 %stack8, %stack9
            ; i16aload 
            %__tmp2 = getelementptr %.C, %.C* %stack7, i32 0, i32 1, i32 %stack10
            %stack11 = load i16, i16* %__tmp2
            ; i16astore 
            %__tmp3 = getelementptr %.C, %.C* %stack3, i32 0, i32 1, i32 %stack6
            store i16 %stack11, i16* %__tmp3
            %__tmpv4 = load i32, i32* %i_1_2
            %__tmpv5 = add i32 %__tmpv4, 1
            store i32 %__tmpv5, i32* %i_1_2; inc 
            br label %L633103787
        L1856738035:
    ;3
            ; type 2, local 1 [1, null, null, null, null, null], stack 0 [null, null, null, null, null]
            ret void
            ; 
}

; locals: 6
; stack: 4
; args: 5
define void @jx_zero_VMSupport_arraycopy_left__Ljava_lang_Object_I_Ljava_lang_Object_II(%.Ljava_lang_Object_* %s0, i32 %s1, %.Ljava_lang_Object_* %s2, i32 %s3, i32 %s4){
        __MethodEntry:
    ;0
            
            %src_0_5 = alloca %.Ljava_lang_Object_*; slot 0 = [Ljava/lang/Object;
            store %.Ljava_lang_Object_* %s0, %.Ljava_lang_Object_** %src_0_5
            
            %srcOffset_0_5 = alloca i32; slot 1 = I
            store i32 %s1, i32* %srcOffset_0_5
            
            %dst_0_5 = alloca %.Ljava_lang_Object_*; slot 2 = [Ljava/lang/Object;
            store %.Ljava_lang_Object_* %s2, %.Ljava_lang_Object_** %dst_0_5
            
            %dstOffset_0_5 = alloca i32; slot 3 = I
            store i32 %s3, i32* %dstOffset_0_5
            
            %count_0_5 = alloca i32; slot 4 = I
            store i32 %s4, i32* %count_0_5
            
            %i_3_4 = alloca i32; slot 5 = I
            ; 
            ; i32load 1
            %stack0 = load i32, i32* %srcOffset_0_5
            ; i32load 4
            %stack1 = load i32, i32* %count_0_5
            %stack2 = add i32 %stack0, %stack1
            ; i32store 1
            store i32 %stack2, i32* %srcOffset_0_5
            ; 
            ; i32load 3
            %stack3 = load i32, i32* %dstOffset_0_5
            ; i32load 4
            %stack4 = load i32, i32* %count_0_5
            %stack5 = add i32 %stack3, %stack4
            ; i32store 3
            store i32 %stack5, i32* %dstOffset_0_5
            ; 
            ; iconst_0
            %_imm_0 = alloca i32
            store i32 0, i32* %_imm_0
            %stack6 = load i32, i32* %_imm_0
            ; i32store 5
            store i32 %stack6, i32* %i_3_4
            br label %L1008273608
        L1008273608:
    ;1
            ; type 1, local 1 [1, null, null, null, null, null], stack 0 [null, null, null, null]
            ; i32load 5
            %stack7 = load i32, i32* %i_3_4
            ; i32load 4
            %stack8 = load i32, i32* %count_0_5
            %__tmpc1 = icmp sge i32 %stack7, %stack8
            br i1 %__tmpc1, label %L1808149433, label %_if.else1
        _if.else1:
    ;2
            ; %.Ljava_lang_Object_*load 2
            %stack9 = load %.Ljava_lang_Object_*, %.Ljava_lang_Object_** %dst_0_5
            %__tmpv2 = load i32, i32* %dstOffset_0_5
            %__tmpv3 = add i32 %__tmpv2, -1
            store i32 %__tmpv3, i32* %dstOffset_0_5; inc 
            ; i32load 3
            %stack10 = load i32, i32* %dstOffset_0_5
            ; %.Ljava_lang_Object_*load 0
            %stack11 = load %.Ljava_lang_Object_*, %.Ljava_lang_Object_** %src_0_5
            %__tmpv4 = load i32, i32* %srcOffset_0_5
            %__tmpv5 = add i32 %__tmpv4, -1
            store i32 %__tmpv5, i32* %srcOffset_0_5; inc 
            ; i32load 1
            %stack12 = load i32, i32* %srcOffset_0_5
            ; aaload %.Ljava_lang_Object_*
            %__tmp6 = getelementptr %.Ljava_lang_Object_, %.Ljava_lang_Object_* %stack11, i32 0, i32 1, i32 %stack12
            %stack13 = load %.Ljava_lang_Object_, %.Ljava_lang_Object_* %__tmp6
            ; aastore %.Ljava_lang_Object_
            %__tmp7 = getelementptr %.Ljava_lang_Object_, %.Ljava_lang_Object_* %stack9, i32 0, i32 1, i32 %stack10
            store %.Ljava_lang_Object_ %stack13, %.Ljava_lang_Object_* %__tmp7
            %__tmpv8 = load i32, i32* %i_3_4
            %__tmpv9 = add i32 %__tmpv8, 1
            store i32 %__tmpv9, i32* %i_3_4; inc 
            br label %L1008273608
        L1808149433:
    ;3
            ; type 2, local 1 [1, null, null, null, null, null], stack 0 [null, null, null, null]
            ret void
            ; 
}

; locals: 6
; stack: 5
; args: 5
define void @jx_zero_VMSupport_arraycopy_right__Ljava_lang_Object_I_Ljava_lang_Object_II(%.Ljava_lang_Object_* %s0, i32 %s1, %.Ljava_lang_Object_* %s2, i32 %s3, i32 %s4){
        __MethodEntry:
    ;0
            
            %src_0_3 = alloca %.Ljava_lang_Object_*; slot 0 = [Ljava/lang/Object;
            store %.Ljava_lang_Object_* %s0, %.Ljava_lang_Object_** %src_0_3
            
            %srcOffset_0_3 = alloca i32; slot 1 = I
            store i32 %s1, i32* %srcOffset_0_3
            
            %dst_0_3 = alloca %.Ljava_lang_Object_*; slot 2 = [Ljava/lang/Object;
            store %.Ljava_lang_Object_* %s2, %.Ljava_lang_Object_** %dst_0_3
            
            %dstOffset_0_3 = alloca i32; slot 3 = I
            store i32 %s3, i32* %dstOffset_0_3
            
            %count_0_3 = alloca i32; slot 4 = I
            store i32 %s4, i32* %count_0_3
            
            %i_1_2 = alloca i32; slot 5 = I
            ; 
            ; iconst_0
            %_imm_0 = alloca i32
            store i32 0, i32* %_imm_0
            %stack0 = load i32, i32* %_imm_0
            ; i32store 5
            store i32 %stack0, i32* %i_1_2
            br label %L939523827
        L939523827:
    ;1
            ; type 1, local 1 [1, null, null, null, null, null], stack 0 [null, null, null, null, null]
            ; i32load 5
            %stack1 = load i32, i32* %i_1_2
            ; i32load 4
            %stack2 = load i32, i32* %count_0_3
            %__tmpc1 = icmp sge i32 %stack1, %stack2
            br i1 %__tmpc1, label %L1779524436, label %_if.else1
        _if.else1:
    ;2
            ; %.Ljava_lang_Object_*load 2
            %stack3 = load %.Ljava_lang_Object_*, %.Ljava_lang_Object_** %dst_0_3
            ; i32load 3
            %stack4 = load i32, i32* %dstOffset_0_3
            ; i32load 5
            %stack5 = load i32, i32* %i_1_2
            %stack6 = add i32 %stack4, %stack5
            ; %.Ljava_lang_Object_*load 0
            %stack7 = load %.Ljava_lang_Object_*, %.Ljava_lang_Object_** %src_0_3
            ; i32load 1
            %stack8 = load i32, i32* %srcOffset_0_3
            ; i32load 5
            %stack9 = load i32, i32* %i_1_2
            %stack10 = add i32 %stack8, %stack9
            ; aaload %.Ljava_lang_Object_*
            %__tmp2 = getelementptr %.Ljava_lang_Object_, %.Ljava_lang_Object_* %stack7, i32 0, i32 1, i32 %stack10
            %stack11 = load %.Ljava_lang_Object_, %.Ljava_lang_Object_* %__tmp2
            ; aastore %.Ljava_lang_Object_
            %__tmp3 = getelementptr %.Ljava_lang_Object_, %.Ljava_lang_Object_* %stack3, i32 0, i32 1, i32 %stack6
            store %.Ljava_lang_Object_ %stack11, %.Ljava_lang_Object_* %__tmp3
            %__tmpv4 = load i32, i32* %i_1_2
            %__tmpv5 = add i32 %__tmpv4, 1
            store i32 %__tmpv5, i32* %i_1_2; inc 
            br label %L939523827
        L1779524436:
    ;3
            ; type 2, local 1 [1, null, null, null, null, null], stack 0 [null, null, null, null, null]
            ret void
            ; 
}


