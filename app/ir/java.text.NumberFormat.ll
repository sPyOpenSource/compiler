; CLASS: java/text/NumberFormat extends java/text/Format

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()


declare void @java_text_ParsePosition__init__I(%java_text_ParsePosition*, i32)
declare void @java_text_Format__init_(%java_text_Format*)
declare %java_lang_String* @java_lang_StringBuffer_toString(%java_lang_StringBuffer*)
declare %java_util_Locale* @java_util_Locale_getDefault()
declare i32 @java_lang_System_identityHashCode_Ljava_lang_Object_(%java_lang_Object*)
declare %java_lang_String* @construct_string_with_char_arr_(%.C* %s0)
declare void @java_text_FieldPosition__init__I(%java_text_FieldPosition*, i32)
declare void @java_lang_StringBuffer__init__Ljava_lang_String_(%java_lang_StringBuffer*, %java_lang_String*)
declare void @java_lang_Error__init__Ljava_lang_String_(%java_lang_Error*, %java_lang_String*)
declare void @java_text_ParseException__init__Ljava_lang_String_I(%java_text_ParseException*, %java_lang_String*, i32)
declare i32 @java_text_ParsePosition_getIndex(%java_text_ParsePosition*)

; first generation
java/util/Locale is unknown ; use java/util/Locale
%.Ljava_util_Locale_ = type {i32, [0 x %java_util_Locale*]} ; use [Ljava/util/Locale;
java/text/NumberFormat is unknown ; use java/text/NumberFormat
java/lang/StringBuffer is unknown ; use java/lang/StringBuffer
java/lang/Object is unknown ; use java/lang/Object
java/text/FieldPosition is unknown ; use java/text/FieldPosition
java/lang/String is unknown ; use java/lang/String
java/text/ParsePosition is unknown ; use java/text/ParsePosition
%java_lang_Number = type {} ; use java/lang/Number
%java_text_Format = type {} ; use java/text/Format
%.C = type {i32, [0 x i16]} ; use [C
java/lang/Error is unknown ; use java/lang/Error
java/text/ParseException is unknown ; use java/text/ParseException
; globals
@java_text_NumberFormat_FRACTION_FIELD = internal global i32 zeroinitializer
@java_text_NumberFormat_INTEGER_FIELD = internal global i32 zeroinitializer
@java_util_Locale_ENGLISH = internal global %java_util_Locale* zeroinitializer

@str0 = internal global { i32, [0 x i16] } { i32 0,[0 x i16] []}, align 4 
@strptr0 = internal global %.C* bitcast ( { i32 ,[0 x i16]}* @str0 to %.C*)
@str-1992779489 = internal global { i32, [34 x i16] } { i32 34,[34 x i16] [i16 85,i16 110,i16 97,i16 98,i16 108,i16 101,i16 32,i16 116,i16 111,i16 32,i16 112,i16 97,i16 114,i16 115,i16 101,i16 32,i16 115,i16 116,i16 114,i16 105,i16 110,i16 103,i16 32,i16 105,i16 110,i16 116,i16 111,i16 32,i16 78,i16 117,i16 109,i16 98,i16 101,i16 114]}, align 4 
@strptr-1992779489 = internal global %.C* bitcast ( { i32 ,[34 x i16]}* @str-1992779489 to %.C*)
@str845977333 = internal global { i32, [15 x i16] } { i32 15,[15 x i16] [i16 78,i16 79,i16 84,i16 32,i16 73,i16 77,i16 80,i16 76,i16 69,i16 77,i16 69,i16 78,i16 84,i16 69,i16 68]}, align 4 
@strptr845977333 = internal global %.C* bitcast ( { i32 ,[15 x i16]}* @str845977333 to %.C*)

; locals: 0
; stack: 1
; args: 0
define %java_text_NumberFormat* @java_text_NumberFormat_getInstance(){
        __MethodEntry:
    ;0
            ; 
            %stack0 = call %java_util_Locale* @java_util_Locale_getDefault()
            %stack1 = call %java_text_NumberFormat* @java_text_NumberFormat_getInstance_Ljava_util_Locale_(%java_util_Locale* %stack0)
            ret %java_text_NumberFormat* %stack1
}

; locals: 1
; stack: 1
; args: 1
define %java_text_NumberFormat* @java_text_NumberFormat_getInstance_Ljava_util_Locale_(%java_util_Locale* %s0){
        __MethodEntry:
    ;0
            
            %locale_0_1 = alloca %java_util_Locale*; slot 0 = Ljava/util/Locale;
            store %java_util_Locale* %s0, %java_util_Locale** %locale_0_1
            ; 
            ; %java_util_Locale*load 0
            %stack0 = load %java_util_Locale*, %java_util_Locale** %locale_0_1
            %stack1 = call %java_text_NumberFormat* @java_text_NumberFormat_getNumberInstance_Ljava_util_Locale_(%java_util_Locale* %stack0)
            ret %java_text_NumberFormat* %stack1
            ; 
}

; locals: 0
; stack: 1
; args: 0
define %java_text_NumberFormat* @java_text_NumberFormat_getNumberInstance(){
        __MethodEntry:
    ;0
            ; 
            %stack0 = call %java_util_Locale* @java_util_Locale_getDefault()
            %stack1 = call %java_text_NumberFormat* @java_text_NumberFormat_getNumberInstance_Ljava_util_Locale_(%java_util_Locale* %stack0)
            ret %java_text_NumberFormat* %stack1
}

; locals: 1
; stack: 1
; args: 1
define %java_text_NumberFormat* @java_text_NumberFormat_getNumberInstance_Ljava_util_Locale_(%java_util_Locale* %s0){
        __MethodEntry:
    ;0
            
            %locale_0_1 = alloca %java_util_Locale*; slot 0 = Ljava/util/Locale;
            store %java_util_Locale* %s0, %java_util_Locale** %locale_0_1
            ; 
            ; const null
            %_imm_0 = alloca null
            store null null, null* %_imm_0
            %stack0 = load null, null* %_imm_0
            %stack1 = bitcast null %stack0 to %java_text_NumberFormat*
            ret %java_text_NumberFormat* %stack1
            ; 
}

; locals: 0
; stack: 1
; args: 0
define %java_text_NumberFormat* @java_text_NumberFormat_getCurrencyInstance(){
        __MethodEntry:
    ;0
            ; 
            %stack0 = call %java_util_Locale* @java_util_Locale_getDefault()
            %stack1 = call %java_text_NumberFormat* @java_text_NumberFormat_getCurrencyInstance_Ljava_util_Locale_(%java_util_Locale* %stack0)
            ret %java_text_NumberFormat* %stack1
}

; locals: 1
; stack: 1
; args: 1
define %java_text_NumberFormat* @java_text_NumberFormat_getCurrencyInstance_Ljava_util_Locale_(%java_util_Locale* %s0){
        __MethodEntry:
    ;0
            
            %locale_0_1 = alloca %java_util_Locale*; slot 0 = Ljava/util/Locale;
            store %java_util_Locale* %s0, %java_util_Locale** %locale_0_1
            ; 
            ; const null
            %_imm_0 = alloca null
            store null null, null* %_imm_0
            %stack0 = load null, null* %_imm_0
            %stack1 = bitcast null %stack0 to %java_text_NumberFormat*
            ret %java_text_NumberFormat* %stack1
            ; 
}

; locals: 0
; stack: 1
; args: 0
define %java_text_NumberFormat* @java_text_NumberFormat_getPercentInstance(){
        __MethodEntry:
    ;0
            ; 
            %stack0 = call %java_util_Locale* @java_util_Locale_getDefault()
            %stack1 = call %java_text_NumberFormat* @java_text_NumberFormat_getPercentInstance_Ljava_util_Locale_(%java_util_Locale* %stack0)
            ret %java_text_NumberFormat* %stack1
}

; locals: 1
; stack: 1
; args: 1
define %java_text_NumberFormat* @java_text_NumberFormat_getPercentInstance_Ljava_util_Locale_(%java_util_Locale* %s0){
        __MethodEntry:
    ;0
            
            %locale_0_1 = alloca %java_util_Locale*; slot 0 = Ljava/util/Locale;
            store %java_util_Locale* %s0, %java_util_Locale** %locale_0_1
            ; 
            ; const null
            %_imm_0 = alloca null
            store null null, null* %_imm_0
            %stack0 = load null, null* %_imm_0
            %stack1 = bitcast null %stack0 to %java_text_NumberFormat*
            ret %java_text_NumberFormat* %stack1
            ; 
}

; locals: 1
; stack: 3
; args: 0
define %.Ljava_util_Locale_* @java_text_NumberFormat_getAvailableLocales(){
        __MethodEntry:
    ;0
            
            %list_1_3 = alloca %.Ljava_util_Locale_*; slot 0 = [Ljava/util/Locale;
            ; 
            ; iconst_1
            %_imm_0 = alloca i32
            store i32 1, i32* %_imm_0
            %stack0 = load i32, i32* %_imm_0
            ; new array Ljava/util/Locale; size: %stack0
            %__tmp4 = call i32 @ptr_size()
            %__tmp1 = mul i32 %stack0, %__tmp4
            %__tmp2 = add i32 %__tmp1, 4
            %__tmp3 = call i8* @malloc(i32 %__tmp2)
            %stack1 = bitcast i8* %__tmp3 to %.Ljava_util_Locale_*
            %__tmp5 = getelementptr %.Ljava_util_Locale_, %.Ljava_util_Locale_* %stack1, i32 0, i32 0
            store i32 %stack0, i32* %__tmp5
            ; %.Ljava_util_Locale_*store 0
            store %.Ljava_util_Locale_* %stack1, %.Ljava_util_Locale_** %list_1_3
            ; 
            ; %.Ljava_util_Locale_*load 0
            %stack2 = load %.Ljava_util_Locale_*, %.Ljava_util_Locale_** %list_1_3
            ; iconst_0
            %_imm_6 = alloca i32
            store i32 0, i32* %_imm_6
            %stack3 = load i32, i32* %_imm_6
            ; getstatic java/util/Locale ENGLISH Ljava/util/Locale; ( %stack4 := Ljava/util/Locale; )
            %__tmp7 = getelementptr %java_util_Locale*, %java_util_Locale** @java_util_Locale_ENGLISH
            %stack4 = load %java_util_Locale*, %java_util_Locale** %__tmp7
            ; aastore %java_util_Locale*
            %__tmp8 = getelementptr %.Ljava_util_Locale_, %.Ljava_util_Locale_* %stack2, i32 0, i32 1, i32 %stack3
            store %java_util_Locale* %stack4, %java_util_Locale** %__tmp8
            ; 
            ; %.Ljava_util_Locale_*load 0
            %stack5 = load %.Ljava_util_Locale_*, %.Ljava_util_Locale_** %list_1_3
            ret %.Ljava_util_Locale_* %stack5
            ; 
}

; locals: 1
; stack: 1
; args: 1
define void @java_text_NumberFormat__init_(%java_text_NumberFormat* %s0){
        __MethodEntry:
    ;0
            
            %this_0_2 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_2
            ; 
            ; %java_text_NumberFormat*load 0
            %stack0 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_2
            %stack1 = bitcast %java_text_NumberFormat* %stack0 to %java_text_Format*
            call void @java_text_Format__init_(%java_text_Format* %stack1); special call private or <init>
            ; 
            ret void
            ; 
}

; locals: 1
; stack: 1
; args: 1
define i32 @java_text_NumberFormat_getMaximumIntegerDigits(%java_text_NumberFormat* %s0){
        __MethodEntry:
    ;0
            
            %this_0_1 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_1
            ; 
            ; %java_text_NumberFormat*load 0
            %stack0 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_1
            ; getfield java/text/NumberFormat maximumIntegerDigits I ( %java_text_NumberFormat* %stack0 )
            %__tmp0 = getelementptr %java_text_NumberFormat, %java_text_NumberFormat* %stack0, i32 0, i32 5
            %stack1 = load i32, i32* %__tmp0
            ret i32 %stack1
            ; 
}

; locals: 2
; stack: 2
; args: 2
define void @java_text_NumberFormat_setMaximumIntegerDigits_I(%java_text_NumberFormat* %s0, i32 %s1){
        __MethodEntry:
    ;0
            
            %this_0_4 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_4
            
            %maximumIntegerDigits_0_4 = alloca i32; slot 1 = I
            store i32 %s1, i32* %maximumIntegerDigits_0_4
            ; 
            ; %java_text_NumberFormat*load 0
            %stack0 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_4
            ; i32load 1
            %stack1 = load i32, i32* %maximumIntegerDigits_0_4
            ; putfield java/text/NumberFormat maximumIntegerDigits I ( %java_text_NumberFormat* %stack0 := i32 %stack1 )
            %__tmp0 = getelementptr %java_text_NumberFormat, %java_text_NumberFormat* %stack0, i32 0, i32 5
            store i32 %stack1, i32* %__tmp0
            ; 
            ; %java_text_NumberFormat*load 0
            %stack2 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_4
            %stack3 = call i32 @java_text_NumberFormat_getMinimumIntegerDigits(%java_text_NumberFormat* %stack2)
            ; i32load 1
            %stack4 = load i32, i32* %maximumIntegerDigits_0_4
            %__tmpc1 = icmp sle i32 %stack3, %stack4
            br i1 %__tmpc1, label %L1700421020, label %_if.else1
        _if.else1:
    ;1
            ; 
            ; %java_text_NumberFormat*load 0
            %stack5 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_4
            ; i32load 1
            %stack6 = load i32, i32* %maximumIntegerDigits_0_4
            call  void @java_text_NumberFormat_setMinimumIntegerDigits_I(%java_text_NumberFormat* %stack5, i32 %stack6)
            br label %L1700421020
        L1700421020:
    ;2
            ; type 3, local 0 [null, null], stack 0 [null, null]
            ret void
            ; 
}

; locals: 1
; stack: 1
; args: 1
define i32 @java_text_NumberFormat_getMinimumIntegerDigits(%java_text_NumberFormat* %s0){
        __MethodEntry:
    ;0
            
            %this_0_1 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_1
            ; 
            ; %java_text_NumberFormat*load 0
            %stack0 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_1
            ; getfield java/text/NumberFormat minimumIntegerDigits I ( %java_text_NumberFormat* %stack0 )
            %__tmp0 = getelementptr %java_text_NumberFormat, %java_text_NumberFormat* %stack0, i32 0, i32 10
            %stack1 = load i32, i32* %__tmp0
            ret i32 %stack1
            ; 
}

; locals: 2
; stack: 2
; args: 2
define void @java_text_NumberFormat_setMinimumIntegerDigits_I(%java_text_NumberFormat* %s0, i32 %s1){
        __MethodEntry:
    ;0
            
            %this_0_4 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_4
            
            %minimumIntegerDigits_0_4 = alloca i32; slot 1 = I
            store i32 %s1, i32* %minimumIntegerDigits_0_4
            ; 
            ; %java_text_NumberFormat*load 0
            %stack0 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_4
            ; i32load 1
            %stack1 = load i32, i32* %minimumIntegerDigits_0_4
            ; putfield java/text/NumberFormat minimumIntegerDigits I ( %java_text_NumberFormat* %stack0 := i32 %stack1 )
            %__tmp0 = getelementptr %java_text_NumberFormat, %java_text_NumberFormat* %stack0, i32 0, i32 10
            store i32 %stack1, i32* %__tmp0
            ; 
            ; %java_text_NumberFormat*load 0
            %stack2 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_4
            %stack3 = call i32 @java_text_NumberFormat_getMaximumIntegerDigits(%java_text_NumberFormat* %stack2)
            ; i32load 1
            %stack4 = load i32, i32* %minimumIntegerDigits_0_4
            %__tmpc1 = icmp sge i32 %stack3, %stack4
            br i1 %__tmpc1, label %L357653585, label %_if.else1
        _if.else1:
    ;1
            ; 
            ; %java_text_NumberFormat*load 0
            %stack5 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_4
            ; i32load 1
            %stack6 = load i32, i32* %minimumIntegerDigits_0_4
            call  void @java_text_NumberFormat_setMaximumIntegerDigits_I(%java_text_NumberFormat* %stack5, i32 %stack6)
            br label %L357653585
        L357653585:
    ;2
            ; type 3, local 0 [null, null], stack 0 [null, null]
            ret void
            ; 
}

; locals: 1
; stack: 1
; args: 1
define i32 @java_text_NumberFormat_getMaximumFractionDigits(%java_text_NumberFormat* %s0){
        __MethodEntry:
    ;0
            
            %this_0_1 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_1
            ; 
            ; %java_text_NumberFormat*load 0
            %stack0 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_1
            ; getfield java/text/NumberFormat maximumFractionDigits I ( %java_text_NumberFormat* %stack0 )
            %__tmp0 = getelementptr %java_text_NumberFormat, %java_text_NumberFormat* %stack0, i32 0, i32 4
            %stack1 = load i32, i32* %__tmp0
            ret i32 %stack1
            ; 
}

; locals: 2
; stack: 2
; args: 2
define void @java_text_NumberFormat_setMaximumFractionDigits_I(%java_text_NumberFormat* %s0, i32 %s1){
        __MethodEntry:
    ;0
            
            %this_0_4 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_4
            
            %maximumFractionDigits_0_4 = alloca i32; slot 1 = I
            store i32 %s1, i32* %maximumFractionDigits_0_4
            ; 
            ; %java_text_NumberFormat*load 0
            %stack0 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_4
            ; i32load 1
            %stack1 = load i32, i32* %maximumFractionDigits_0_4
            ; putfield java/text/NumberFormat maximumFractionDigits I ( %java_text_NumberFormat* %stack0 := i32 %stack1 )
            %__tmp0 = getelementptr %java_text_NumberFormat, %java_text_NumberFormat* %stack0, i32 0, i32 4
            store i32 %stack1, i32* %__tmp0
            ; 
            ; %java_text_NumberFormat*load 0
            %stack2 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_4
            %stack3 = call i32 @java_text_NumberFormat_getMinimumFractionDigits(%java_text_NumberFormat* %stack2)
            ; i32load 1
            %stack4 = load i32, i32* %maximumFractionDigits_0_4
            %__tmpc1 = icmp sle i32 %stack3, %stack4
            br i1 %__tmpc1, label %L670517043, label %_if.else1
        _if.else1:
    ;1
            ; 
            ; %java_text_NumberFormat*load 0
            %stack5 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_4
            ; i32load 1
            %stack6 = load i32, i32* %maximumFractionDigits_0_4
            call  void @java_text_NumberFormat_setMinimumFractionDigits_I(%java_text_NumberFormat* %stack5, i32 %stack6)
            br label %L670517043
        L670517043:
    ;2
            ; type 3, local 0 [null, null], stack 0 [null, null]
            ret void
            ; 
}

; locals: 1
; stack: 1
; args: 1
define i32 @java_text_NumberFormat_getMinimumFractionDigits(%java_text_NumberFormat* %s0){
        __MethodEntry:
    ;0
            
            %this_0_1 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_1
            ; 
            ; %java_text_NumberFormat*load 0
            %stack0 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_1
            ; getfield java/text/NumberFormat minimumFractionDigits I ( %java_text_NumberFormat* %stack0 )
            %__tmp0 = getelementptr %java_text_NumberFormat, %java_text_NumberFormat* %stack0, i32 0, i32 8
            %stack1 = load i32, i32* %__tmp0
            ret i32 %stack1
            ; 
}

; locals: 2
; stack: 2
; args: 2
define void @java_text_NumberFormat_setMinimumFractionDigits_I(%java_text_NumberFormat* %s0, i32 %s1){
        __MethodEntry:
    ;0
            
            %this_0_4 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_4
            
            %minimumFractionDigits_0_4 = alloca i32; slot 1 = I
            store i32 %s1, i32* %minimumFractionDigits_0_4
            ; 
            ; %java_text_NumberFormat*load 0
            %stack0 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_4
            ; i32load 1
            %stack1 = load i32, i32* %minimumFractionDigits_0_4
            ; putfield java/text/NumberFormat minimumFractionDigits I ( %java_text_NumberFormat* %stack0 := i32 %stack1 )
            %__tmp0 = getelementptr %java_text_NumberFormat, %java_text_NumberFormat* %stack0, i32 0, i32 8
            store i32 %stack1, i32* %__tmp0
            ; 
            ; %java_text_NumberFormat*load 0
            %stack2 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_4
            %stack3 = call i32 @java_text_NumberFormat_getMaximumFractionDigits(%java_text_NumberFormat* %stack2)
            ; i32load 1
            %stack4 = load i32, i32* %minimumFractionDigits_0_4
            %__tmpc1 = icmp sge i32 %stack3, %stack4
            br i1 %__tmpc1, label %L1380361139, label %_if.else1
        _if.else1:
    ;1
            ; 
            ; %java_text_NumberFormat*load 0
            %stack5 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_4
            ; i32load 1
            %stack6 = load i32, i32* %minimumFractionDigits_0_4
            call  void @java_text_NumberFormat_setMaximumFractionDigits_I(%java_text_NumberFormat* %stack5, i32 %stack6)
            br label %L1380361139
        L1380361139:
    ;2
            ; type 3, local 0 [null, null], stack 0 [null, null]
            ret void
            ; 
}

; locals: 1
; stack: 1
; args: 1
define i1 @java_text_NumberFormat_isGroupingUsed(%java_text_NumberFormat* %s0){
        __MethodEntry:
    ;0
            
            %this_0_1 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_1
            ; 
            ; %java_text_NumberFormat*load 0
            %stack0 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_1
            ; getfield java/text/NumberFormat groupingUsed Z ( %java_text_NumberFormat* %stack0 )
            %__tmp0 = getelementptr %java_text_NumberFormat, %java_text_NumberFormat* %stack0, i32 0, i32 2
            %stack1 = load i1, i1* %__tmp0
            ret i1 %stack1
            ; 
}

; locals: 2
; stack: 2
; args: 2
define void @java_text_NumberFormat_setGroupingUsed_Z(%java_text_NumberFormat* %s0, i1 %s1){
        __MethodEntry:
    ;0
            
            %this_0_2 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_2
            
            %groupingUsed_0_2 = alloca i1; slot 1 = Z
            store i1 %s1, i1* %groupingUsed_0_2
            ; 
            ; %java_text_NumberFormat*load 0
            %stack0 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_2
            ; i1load 1
            %stack1 = load i1, i1* %groupingUsed_0_2
            ; putfield java/text/NumberFormat groupingUsed Z ( %java_text_NumberFormat* %stack0 := i1 %stack1 )
            %__tmp0 = getelementptr %java_text_NumberFormat, %java_text_NumberFormat* %stack0, i32 0, i32 2
            store i1 %stack1, i1* %__tmp0
            ; 
            ret void
            ; 
}

; locals: 1
; stack: 1
; args: 1
define i1 @java_text_NumberFormat_isParseIntegerOnly(%java_text_NumberFormat* %s0){
        __MethodEntry:
    ;0
            
            %this_0_1 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_1
            ; 
            ; %java_text_NumberFormat*load 0
            %stack0 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_1
            ; getfield java/text/NumberFormat parseIntegerOnly Z ( %java_text_NumberFormat* %stack0 )
            %__tmp0 = getelementptr %java_text_NumberFormat, %java_text_NumberFormat* %stack0, i32 0, i32 11
            %stack1 = load i1, i1* %__tmp0
            ret i1 %stack1
            ; 
}

; locals: 2
; stack: 2
; args: 2
define void @java_text_NumberFormat_setParseIntegerOnly_Z(%java_text_NumberFormat* %s0, i1 %s1){
        __MethodEntry:
    ;0
            
            %this_0_2 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_2
            
            %parseIntegerOnly_0_2 = alloca i1; slot 1 = Z
            store i1 %s1, i1* %parseIntegerOnly_0_2
            ; 
            ; %java_text_NumberFormat*load 0
            %stack0 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_2
            ; i1load 1
            %stack1 = load i1, i1* %parseIntegerOnly_0_2
            ; putfield java/text/NumberFormat parseIntegerOnly Z ( %java_text_NumberFormat* %stack0 := i1 %stack1 )
            %__tmp0 = getelementptr %java_text_NumberFormat, %java_text_NumberFormat* %stack0, i32 0, i32 11
            store i1 %stack1, i1* %__tmp0
            ; 
            ret void
            ; 
}

; locals: 4
; stack: 7
; args: 2
define %java_lang_String* @java_text_NumberFormat_format_J(%java_text_NumberFormat* %s0, i64 %s1){
        __MethodEntry:
    ;0
            
            %this_0_3 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_3
            
            %number_0_3 = alloca i64; slot 1 = J
            store i64 %s1, i64* %number_0_3
            
            %sb_1_3 = alloca %java_lang_StringBuffer*; slot 3 = Ljava/lang/StringBuffer;
            ; 
            ; %java_lang_StringBuffer
            %__objptr1 = getelementptr %java_lang_StringBuffer, %java_lang_StringBuffer* null, i32 1
            %__memsize1 = ptrtoint %java_lang_StringBuffer* %__objptr1 to i32
            %__tmp0 = call i8* @malloc(i32 %__memsize1)
            ;call void @print_debug(i32 %__memsize1)
            %stack0 = bitcast i8* %__tmp0 to %java_lang_StringBuffer*
            ; dup
            ; ldc 
            %stack3 = load %.C* , %.C** @strptr0
            %__tmp1 = call %java_lang_String* @construct_string_with_char_arr_(%.C* %stack3)
            %stack4 = bitcast %java_lang_String* %__tmp1 to %java_lang_String*
            call void @java_lang_StringBuffer__init__Ljava_lang_String_(%java_lang_StringBuffer* %stack0, %java_lang_String* %stack4); special call private or <init>
            ; %java_lang_StringBuffer*store 3
            store %java_lang_StringBuffer* %stack0, %java_lang_StringBuffer** %sb_1_3
            ; 
            ; %java_text_NumberFormat*load 0
            %stack5 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_3
            ; i64load 1
            %stack6 = load i64, i64* %number_0_3
            ; %java_lang_StringBuffer*load 3
            %stack8 = load %java_lang_StringBuffer*, %java_lang_StringBuffer** %sb_1_3
            ; %java_text_FieldPosition
            %__objptr3 = getelementptr %java_text_FieldPosition, %java_text_FieldPosition* null, i32 1
            %__memsize3 = ptrtoint %java_text_FieldPosition* %__objptr3 to i32
            %__tmp2 = call i8* @malloc(i32 %__memsize3)
            ;call void @print_debug(i32 %__memsize3)
            %stack9 = bitcast i8* %__tmp2 to %java_text_FieldPosition*
            ; dup
            ; iconst_0
            %_imm_3 = alloca i32
            store i32 0, i32* %_imm_3
            %stack12 = load i32, i32* %_imm_3
            call void @java_text_FieldPosition__init__I(%java_text_FieldPosition* %stack9, i32 %stack12); special call private or <init>
            %stack13 = call %java_lang_StringBuffer* @java_text_NumberFormat_format_JLjava_lang_StringBuffer_Ljava_text_FieldPosition_(%java_text_NumberFormat* %stack5, i64 %stack6, %java_lang_StringBuffer* %stack8, %java_text_FieldPosition* %stack9)
            ; pop
            ; 
            ; %java_lang_StringBuffer*load 3
            %stack14 = load %java_lang_StringBuffer*, %java_lang_StringBuffer** %sb_1_3
            %stack15 = call %java_lang_String* @java_lang_StringBuffer_toString(%java_lang_StringBuffer* %stack14)
            ret %java_lang_String* %stack15
            ; 
}

; locals: 4
; stack: 7
; args: 2
define %java_lang_String* @java_text_NumberFormat_format_D(%java_text_NumberFormat* %s0, double %s1){
        __MethodEntry:
    ;0
            
            %this_0_3 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_3
            
            %number_0_3 = alloca double; slot 1 = D
            store double %s1, double* %number_0_3
            
            %sb_1_3 = alloca %java_lang_StringBuffer*; slot 3 = Ljava/lang/StringBuffer;
            ; 
            ; %java_lang_StringBuffer
            %__objptr1 = getelementptr %java_lang_StringBuffer, %java_lang_StringBuffer* null, i32 1
            %__memsize1 = ptrtoint %java_lang_StringBuffer* %__objptr1 to i32
            %__tmp0 = call i8* @malloc(i32 %__memsize1)
            ;call void @print_debug(i32 %__memsize1)
            %stack0 = bitcast i8* %__tmp0 to %java_lang_StringBuffer*
            ; dup
            ; ldc 
            %stack3 = load %.C* , %.C** @strptr0
            %__tmp1 = call %java_lang_String* @construct_string_with_char_arr_(%.C* %stack3)
            %stack4 = bitcast %java_lang_String* %__tmp1 to %java_lang_String*
            call void @java_lang_StringBuffer__init__Ljava_lang_String_(%java_lang_StringBuffer* %stack0, %java_lang_String* %stack4); special call private or <init>
            ; %java_lang_StringBuffer*store 3
            store %java_lang_StringBuffer* %stack0, %java_lang_StringBuffer** %sb_1_3
            ; 
            ; %java_text_NumberFormat*load 0
            %stack5 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_3
            ; doubleload 1
            %stack6 = load double, double* %number_0_3
            ; %java_lang_StringBuffer*load 3
            %stack8 = load %java_lang_StringBuffer*, %java_lang_StringBuffer** %sb_1_3
            ; %java_text_FieldPosition
            %__objptr3 = getelementptr %java_text_FieldPosition, %java_text_FieldPosition* null, i32 1
            %__memsize3 = ptrtoint %java_text_FieldPosition* %__objptr3 to i32
            %__tmp2 = call i8* @malloc(i32 %__memsize3)
            ;call void @print_debug(i32 %__memsize3)
            %stack9 = bitcast i8* %__tmp2 to %java_text_FieldPosition*
            ; dup
            ; iconst_1
            %_imm_3 = alloca i32
            store i32 1, i32* %_imm_3
            %stack12 = load i32, i32* %_imm_3
            call void @java_text_FieldPosition__init__I(%java_text_FieldPosition* %stack9, i32 %stack12); special call private or <init>
            %stack13 = call %java_lang_StringBuffer* @java_text_NumberFormat_format_DLjava_lang_StringBuffer_Ljava_text_FieldPosition_(%java_text_NumberFormat* %stack5, double %stack6, %java_lang_StringBuffer* %stack8, %java_text_FieldPosition* %stack9)
            ; pop
            ; 
            ; %java_lang_StringBuffer*load 3
            %stack14 = load %java_lang_StringBuffer*, %java_lang_StringBuffer** %sb_1_3
            %stack15 = call %java_lang_String* @java_lang_StringBuffer_toString(%java_lang_StringBuffer* %stack14)
            ret %java_lang_String* %stack15
            ; 
}

; locals: 0
; stack: 0
; args: 4
define %java_lang_StringBuffer* @java_text_NumberFormat_format_JLjava_lang_StringBuffer_Ljava_text_FieldPosition_(%java_text_NumberFormat* %s0, i64 %s1, %java_lang_StringBuffer* %s3, %java_text_FieldPosition* %s4){
    
}

; locals: 0
; stack: 0
; args: 4
define %java_lang_StringBuffer* @java_text_NumberFormat_format_DLjava_lang_StringBuffer_Ljava_text_FieldPosition_(%java_text_NumberFormat* %s0, double %s1, %java_lang_StringBuffer* %s3, %java_text_FieldPosition* %s4){
    
}

; locals: 4
; stack: 3
; args: 4
define %java_lang_StringBuffer* @java_text_NumberFormat_format_Ljava_lang_Object_Ljava_lang_StringBuffer_Ljava_text_FieldPosition_(%java_text_NumberFormat* %s0, %java_lang_Object* %s1, %java_lang_StringBuffer* %s2, %java_text_FieldPosition* %s3){
        __MethodEntry:
    ;0
            
            %this_0_1 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_1
            
            %number_0_1 = alloca %java_lang_Object*; slot 1 = Ljava/lang/Object;
            store %java_lang_Object* %s1, %java_lang_Object** %number_0_1
            
            %toAppendTo_0_1 = alloca %java_lang_StringBuffer*; slot 2 = Ljava/lang/StringBuffer;
            store %java_lang_StringBuffer* %s2, %java_lang_StringBuffer** %toAppendTo_0_1
            
            %pos_0_1 = alloca %java_text_FieldPosition*; slot 3 = Ljava/text/FieldPosition;
            store %java_text_FieldPosition* %s3, %java_text_FieldPosition** %pos_0_1
            ; 
            ; %java_lang_Error
            %__objptr1 = getelementptr %java_lang_Error, %java_lang_Error* null, i32 1
            %__memsize1 = ptrtoint %java_lang_Error* %__objptr1 to i32
            %__tmp0 = call i8* @malloc(i32 %__memsize1)
            ;call void @print_debug(i32 %__memsize1)
            %stack0 = bitcast i8* %__tmp0 to %java_lang_Error*
            ; dup
            ; ldc NOT IMPLEMENTED
            %stack3 = load %.C* , %.C** @strptr845977333
            %__tmp1 = call %java_lang_String* @construct_string_with_char_arr_(%.C* %stack3)
            %stack4 = bitcast %java_lang_String* %__tmp1 to %java_lang_String*
            call void @java_lang_Error__init__Ljava_lang_String_(%java_lang_Error* %stack0, %java_lang_String* %stack4); special call private or <init>
            ; athrow
            ; 
}

; locals: 4
; stack: 4
; args: 2
define %java_lang_Number* @java_text_NumberFormat_parse_Ljava_lang_String_(%java_text_NumberFormat* %s0, %java_lang_String* %s1){
        __MethodEntry:
    ;0
            
            %this_0_5 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_5
            
            %str_0_5 = alloca %java_lang_String*; slot 1 = Ljava/lang/String;
            store %java_lang_String* %s1, %java_lang_String** %str_0_5
            
            %pp_1_5 = alloca %java_text_ParsePosition*; slot 2 = Ljava/text/ParsePosition;
            
            %n_2_5 = alloca %java_lang_Number*; slot 3 = Ljava/lang/Number;
            ; 
            ; %java_text_ParsePosition
            %__objptr1 = getelementptr %java_text_ParsePosition, %java_text_ParsePosition* null, i32 1
            %__memsize1 = ptrtoint %java_text_ParsePosition* %__objptr1 to i32
            %__tmp0 = call i8* @malloc(i32 %__memsize1)
            ;call void @print_debug(i32 %__memsize1)
            %stack0 = bitcast i8* %__tmp0 to %java_text_ParsePosition*
            ; dup
            ; iconst_0
            %_imm_1 = alloca i32
            store i32 0, i32* %_imm_1
            %stack3 = load i32, i32* %_imm_1
            call void @java_text_ParsePosition__init__I(%java_text_ParsePosition* %stack0, i32 %stack3); special call private or <init>
            ; %java_text_ParsePosition*store 2
            store %java_text_ParsePosition* %stack0, %java_text_ParsePosition** %pp_1_5
            ; 
            ; %java_text_NumberFormat*load 0
            %stack4 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_5
            ; %java_lang_String*load 1
            %stack5 = load %java_lang_String*, %java_lang_String** %str_0_5
            ; %java_text_ParsePosition*load 2
            %stack6 = load %java_text_ParsePosition*, %java_text_ParsePosition** %pp_1_5
            %stack7 = call %java_lang_Number* @java_text_NumberFormat_parse_Ljava_lang_String_Ljava_text_ParsePosition_(%java_text_NumberFormat* %stack4, %java_lang_String* %stack5, %java_text_ParsePosition* %stack6)
            ; %java_lang_Number*store 3
            store %java_lang_Number* %stack7, %java_lang_Number** %n_2_5
            ; 
            ; %java_text_ParsePosition*load 2
            %stack8 = load %java_text_ParsePosition*, %java_text_ParsePosition** %pp_1_5
            %stack9 = call i32 @java_text_ParsePosition_getIndex(%java_text_ParsePosition* %stack8)
            %__tmpc2 = icmp ne i32 %stack9, 0
            br i1 %__tmpc2, label %L1416520149, label %_if.else2
        _if.else2:
    ;1
            ; 
            ; %java_text_ParseException
            %__objptr4 = getelementptr %java_text_ParseException, %java_text_ParseException* null, i32 1
            %__memsize4 = ptrtoint %java_text_ParseException* %__objptr4 to i32
            %__tmp3 = call i8* @malloc(i32 %__memsize4)
            ;call void @print_debug(i32 %__memsize4)
            %stack10 = bitcast i8* %__tmp3 to %java_text_ParseException*
            ; dup
            ; ldc Unable to parse string into Number
            %stack13 = load %.C* , %.C** @strptr-1992779489
            %__tmp4 = call %java_lang_String* @construct_string_with_char_arr_(%.C* %stack13)
            %stack14 = bitcast %java_lang_String* %__tmp4 to %java_lang_String*
            ; iconst_0
            %_imm_5 = alloca i32
            store i32 0, i32* %_imm_5
            %stack15 = load i32, i32* %_imm_5
            call void @java_text_ParseException__init__Ljava_lang_String_I(%java_text_ParseException* %stack10, %java_lang_String* %stack14, i32 %stack15); special call private or <init>
            ; athrow
            br label %L1416520149
        L1416520149:
    ;2
            ; type 1, local 2 [java/text/ParsePosition, java/lang/Number, null, null], stack 0 [null, null, null, null]
            ; %java_lang_Number*load 3
            %stack16 = load %java_lang_Number*, %java_lang_Number** %n_2_5
            ret %java_lang_Number* %stack16
            ; 
}

; locals: 0
; stack: 0
; args: 3
define %java_lang_Number* @java_text_NumberFormat_parse_Ljava_lang_String_Ljava_text_ParsePosition_(%java_text_NumberFormat* %s0, %java_lang_String* %s1, %java_text_ParsePosition* %s2){
    
}

; locals: 3
; stack: 3
; args: 3
define %java_lang_Object* @java_text_NumberFormat_parseObject_Ljava_lang_String_Ljava_text_ParsePosition_(%java_text_NumberFormat* %s0, %java_lang_String* %s1, %java_text_ParsePosition* %s2){
        __MethodEntry:
    ;0
            
            %this_0_1 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_1
            
            %str_0_1 = alloca %java_lang_String*; slot 1 = Ljava/lang/String;
            store %java_lang_String* %s1, %java_lang_String** %str_0_1
            
            %pp_0_1 = alloca %java_text_ParsePosition*; slot 2 = Ljava/text/ParsePosition;
            store %java_text_ParsePosition* %s2, %java_text_ParsePosition** %pp_0_1
            ; 
            ; %java_text_NumberFormat*load 0
            %stack0 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_1
            ; %java_lang_String*load 1
            %stack1 = load %java_lang_String*, %java_lang_String** %str_0_1
            ; %java_text_ParsePosition*load 2
            %stack2 = load %java_text_ParsePosition*, %java_text_ParsePosition** %pp_0_1
            %stack3 = call %java_lang_Number* @java_text_NumberFormat_parse_Ljava_lang_String_Ljava_text_ParsePosition_(%java_text_NumberFormat* %stack0, %java_lang_String* %stack1, %java_text_ParsePosition* %stack2)
            %stack4 = bitcast %java_lang_Number* %stack3 to %java_lang_Object*
            ret %java_lang_Object* %stack4
            ; 
}

; locals: 1
; stack: 1
; args: 1
define i32 @java_text_NumberFormat_hashCode(%java_text_NumberFormat* %s0){
        __MethodEntry:
    ;0
            
            %this_0_1 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_1
            ; 
            ; %java_text_NumberFormat*load 0
            %stack0 = load %java_text_NumberFormat*, %java_text_NumberFormat** %this_0_1
            %stack1 = bitcast %java_text_NumberFormat* %stack0 to %java_lang_Object*
            %stack2 = call i32 @java_lang_System_identityHashCode_Ljava_lang_Object_(%java_lang_Object* %stack1)
            ret i32 %stack2
            ; 
}

; locals: 2
; stack: 1
; args: 2
define i1 @java_text_NumberFormat_equals_Ljava_lang_Object_(%java_text_NumberFormat* %s0, %java_lang_Object* %s1){
        __MethodEntry:
    ;0
            
            %this_0_5 = alloca %java_text_NumberFormat*; slot 0 = Ljava/text/NumberFormat;
            store %java_text_NumberFormat* %s0, %java_text_NumberFormat** %this_0_5
            
            %obj_0_5 = alloca %java_lang_Object*; slot 1 = Ljava/lang/Object;
            store %java_lang_Object* %s1, %java_lang_Object** %obj_0_5
            ; 
            ; %java_lang_Object*load 1
            %stack0 = load %java_lang_Object*, %java_lang_Object** %obj_0_5
            %__tmpc0 = icmp ne %java_lang_Object* %stack0, null
            br i1 %__tmpc0, label %L808862230, label %__tmpl0
        __tmpl0:
    ;1
            ; 
            ; iconst_0
            %_imm_1 = alloca i32
            store i32 0, i32* %_imm_1
            %stack1 = load i32, i32* %_imm_1
            %stack2 = trunc i32 %stack1 to i1
            ret i1 %stack2
        L808862230:
    ;2
            ; type 3, local 0 [null, null], stack 0 [null]
            ; %java_lang_Object*load 1
            %stack3 = load %java_lang_Object*, %java_lang_Object** %obj_0_5
            %_imm_2 = alloca i32
            store i32 1, i32* %_imm_2
            %stack4 = load i32, i32* %_imm_2
            %__tmpc3 = icmp ne i32 %stack4, 0
            br i1 %__tmpc3, label %L512407823, label %_if.else3
        _if.else3:
    ;3
            ; 
            ; iconst_0
            %_imm_4 = alloca i32
            store i32 0, i32* %_imm_4
            %stack5 = load i32, i32* %_imm_4
            %stack6 = trunc i32 %stack5 to i1
            ret i1 %stack6
        L512407823:
    ;4
            ; type 3, local 0 [null, null], stack 0 [null]
            ; iconst_1
            %_imm_5 = alloca i32
            store i32 1, i32* %_imm_5
            %stack7 = load i32, i32* %_imm_5
            %stack8 = trunc i32 %stack7 to i1
            ret i1 %stack8
            ; 
}


