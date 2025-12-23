; CLASS: jx/zero/CycleTime extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()


declare void @java_lang_Object__init_(%java_lang_Object*)

; first generation
%jx_zero_CycleTime = type {i32, i32} ; use jx/zero/CycleTime
java/lang/Object is unknown ; use java/lang/Object
; globals


; locals: 1
; stack: 1
; args: 1
define void @jx_zero_CycleTime__init_(%jx_zero_CycleTime* %s0){
        __MethodEntry:
    ;0
            
            %this_0_1 = alloca %jx_zero_CycleTime*; slot 0 = Ljx/zero/CycleTime;
            store %jx_zero_CycleTime* %s0, %jx_zero_CycleTime** %this_0_1
            ; 
            ; %jx_zero_CycleTime*load 0
            %stack0 = load %jx_zero_CycleTime*, %jx_zero_CycleTime** %this_0_1
            %stack1 = bitcast %jx_zero_CycleTime* %stack0 to %java_lang_Object*
            call void @java_lang_Object__init_(%java_lang_Object* %stack1); special call private or <init>
            ret void
            ; 
}

; locals: 4
; stack: 3
; args: 2
define %jx_zero_CycleTime* @jx_zero_CycleTime_subtract_Ljx_zero_CycleTime_(%jx_zero_CycleTime* %s0, %jx_zero_CycleTime* %s1){
        __MethodEntry:
    ;0
            
            %this_0_8 = alloca %jx_zero_CycleTime*; slot 0 = Ljx/zero/CycleTime;
            store %jx_zero_CycleTime* %s0, %jx_zero_CycleTime** %this_0_8
            
            %t_0_8 = alloca %jx_zero_CycleTime*; slot 1 = Ljx/zero/CycleTime;
            store %jx_zero_CycleTime* %s1, %jx_zero_CycleTime** %t_0_8
            
            %diff_1_8 = alloca %jx_zero_CycleTime*; slot 2 = Ljx/zero/CycleTime;
            
            %l_2_8 = alloca i32; slot 3 = I
            ; 
            ; %jx_zero_CycleTime
            %__objptr1 = getelementptr %jx_zero_CycleTime, %jx_zero_CycleTime* null, i32 1
            %__memsize1 = ptrtoint %jx_zero_CycleTime* %__objptr1 to i32
            %__tmp0 = call i8* @malloc(i32 %__memsize1)
            ;call void @print_debug(i32 %__memsize1)
            %stack0 = bitcast i8* %__tmp0 to %jx_zero_CycleTime*
            ; dup
            call void @jx_zero_CycleTime__init_(%jx_zero_CycleTime* %stack0); special call private or <init>
            ; %jx_zero_CycleTime*store 2
            store %jx_zero_CycleTime* %stack0, %jx_zero_CycleTime** %diff_1_8
            ; 
            ; %jx_zero_CycleTime*load 0
            %stack3 = load %jx_zero_CycleTime*, %jx_zero_CycleTime** %this_0_8
            ; getfield jx/zero/CycleTime low I ( %jx_zero_CycleTime* %stack3 )
            %__tmp1 = getelementptr %jx_zero_CycleTime, %jx_zero_CycleTime* %stack3, i32 0, i32 0
            %stack4 = load i32, i32* %__tmp1
            ; iconst_1
            %_imm_2 = alloca i32
            store i32 1, i32* %_imm_2
            %stack5 = load i32, i32* %_imm_2
            %stack6 = lshr i32 %stack4, %stack5
            ; i32store 3
            store i32 %stack6, i32* %l_2_8
            ; 
            ; i32load 3
            %stack7 = load i32, i32* %l_2_8
            ; %jx_zero_CycleTime*load 1
            %stack8 = load %jx_zero_CycleTime*, %jx_zero_CycleTime** %t_0_8
            ; getfield jx/zero/CycleTime low I ( %jx_zero_CycleTime* %stack8 )
            %__tmp3 = getelementptr %jx_zero_CycleTime, %jx_zero_CycleTime* %stack8, i32 0, i32 0
            %stack9 = load i32, i32* %__tmp3
            ; iconst_1
            %_imm_4 = alloca i32
            store i32 1, i32* %_imm_4
            %stack10 = load i32, i32* %_imm_4
            %stack11 = lshr i32 %stack9, %stack10
            %stack12 = sub i32 %stack7, %stack11
            ; i32store 3
            store i32 %stack12, i32* %l_2_8
            ; 
            ; %jx_zero_CycleTime*load 2
            %stack13 = load %jx_zero_CycleTime*, %jx_zero_CycleTime** %diff_1_8
            ; i32load 3
            %stack14 = load i32, i32* %l_2_8
            ; iconst_1
            %_imm_5 = alloca i32
            store i32 1, i32* %_imm_5
            %stack15 = load i32, i32* %_imm_5
            %stack16 = shl i32 %stack14, %stack15
            ; putfield jx/zero/CycleTime low I ( %jx_zero_CycleTime* %stack13 := i32 %stack16 )
            %__tmp6 = getelementptr %jx_zero_CycleTime, %jx_zero_CycleTime* %stack13, i32 0, i32 0
            store i32 %stack16, i32* %__tmp6
            ; 
            ; i32load 3
            %stack17 = load i32, i32* %l_2_8
            %__tmpc7 = icmp slt i32 %stack17, 0
            br i1 %__tmpc7, label %L681564936, label %_if.else7
        _if.else7:
    ;1
            ; 
            ; %jx_zero_CycleTime*load 2
            %stack18 = load %jx_zero_CycleTime*, %jx_zero_CycleTime** %diff_1_8
            ; %jx_zero_CycleTime*load 0
            %stack19 = load %jx_zero_CycleTime*, %jx_zero_CycleTime** %this_0_8
            ; getfield jx/zero/CycleTime high I ( %jx_zero_CycleTime* %stack19 )
            %__tmp8 = getelementptr %jx_zero_CycleTime, %jx_zero_CycleTime* %stack19, i32 0, i32 1
            %stack20 = load i32, i32* %__tmp8
            ; %jx_zero_CycleTime*load 1
            %stack21 = load %jx_zero_CycleTime*, %jx_zero_CycleTime** %t_0_8
            ; getfield jx/zero/CycleTime high I ( %jx_zero_CycleTime* %stack21 )
            %__tmp9 = getelementptr %jx_zero_CycleTime, %jx_zero_CycleTime* %stack21, i32 0, i32 1
            %stack22 = load i32, i32* %__tmp9
            %stack23 = sub i32 %stack20, %stack22
            ; putfield jx/zero/CycleTime high I ( %jx_zero_CycleTime* %stack18 := i32 %stack23 )
            %__tmp10 = getelementptr %jx_zero_CycleTime, %jx_zero_CycleTime* %stack18, i32 0, i32 1
            store i32 %stack23, i32* %__tmp10
            br label %L224192895
        L681564936:
    ;2
            ; type 1, local 2 [jx/zero/CycleTime, 1, null, null], stack 0 [null, null, null]
            ; %jx_zero_CycleTime*load 2
            %stack24 = load %jx_zero_CycleTime*, %jx_zero_CycleTime** %diff_1_8
            ; %jx_zero_CycleTime*load 0
            %stack25 = load %jx_zero_CycleTime*, %jx_zero_CycleTime** %this_0_8
            ; getfield jx/zero/CycleTime high I ( %jx_zero_CycleTime* %stack25 )
            %__tmp11 = getelementptr %jx_zero_CycleTime, %jx_zero_CycleTime* %stack25, i32 0, i32 1
            %stack26 = load i32, i32* %__tmp11
            ; %jx_zero_CycleTime*load 1
            %stack27 = load %jx_zero_CycleTime*, %jx_zero_CycleTime** %t_0_8
            ; getfield jx/zero/CycleTime high I ( %jx_zero_CycleTime* %stack27 )
            %__tmp12 = getelementptr %jx_zero_CycleTime, %jx_zero_CycleTime* %stack27, i32 0, i32 1
            %stack28 = load i32, i32* %__tmp12
            %stack29 = sub i32 %stack26, %stack28
            ; iconst_1
            %_imm_13 = alloca i32
            store i32 1, i32* %_imm_13
            %stack30 = load i32, i32* %_imm_13
            %stack31 = sub i32 %stack29, %stack30
            ; putfield jx/zero/CycleTime high I ( %jx_zero_CycleTime* %stack24 := i32 %stack31 )
            %__tmp14 = getelementptr %jx_zero_CycleTime, %jx_zero_CycleTime* %stack24, i32 0, i32 1
            store i32 %stack31, i32* %__tmp14
            br label %L224192895
        L224192895:
    ;3
            ; type 3, local 0 [jx/zero/CycleTime, 1, null, null], stack 0 [null, null, null]
            ; %jx_zero_CycleTime*load 2
            %stack32 = load %jx_zero_CycleTime*, %jx_zero_CycleTime** %diff_1_8
            ret %jx_zero_CycleTime* %stack32
            ; 
}


