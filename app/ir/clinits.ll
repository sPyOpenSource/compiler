declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()

declare void @java_lang_String__init___C(%java_lang_String* %s0, %.C* %s1)


java/lang/String is unknown
%.C = type {i32, [0 x i16]}


define void @classes_clinit(){
    ret void
}


define %java_lang_String* @construct_string_with_char_arr_(%.C* %s0)  {
    %tmps0 = alloca %.C*
    store %.C* %s0, %.C** %tmps0
    %stack0 = load %.C*, %.C** %tmps0
    ; new %java_lang_String
    %__objptr = getelementptr %java_lang_String, %java_lang_String* null, i32 1
    %__memsize = ptrtoint %java_lang_String* %__objptr to i32 
    ;call void @print_debug(i32 %__memsize) 
    %__tmp0 = call i8* @malloc(i32 %__memsize)
    %stack1 = bitcast i8* %__tmp0 to %java_lang_String*
    ;
    call void @java_lang_String__init___C(%java_lang_String* %stack1, %.C* %stack0) 
    ret %java_lang_String* %stack1
}



