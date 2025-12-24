// CLASS: java/net/DatagramSocket extends java/lang/Object
#include "metadata.h"


// generation
// globals
//struct java_net_DatagramSocket_static {};



__refer arr_vmtable_java_net_DatagramSocket_from_java_net_DatagramSocket[] = {
    func_java_net_DatagramSocket_finalize___V,  //0
    func_java_net_DatagramSocket_close___V,  //1
    func_java_net_DatagramSocket_receive__Ljava_net_DatagramPacket_2_V,  //2
    func_java_net_DatagramSocket_send__Ljava_net_DatagramPacket_2_V,  //3
    func_java_net_DatagramSocket_getLocalPort___I,  //4
    func_java_net_DatagramSocket_setSoTimeout__I_V  //5
};
__refer arr_vmtable_java_net_DatagramSocket_from_java_lang_Object[] = {
    func_java_lang_Object_getClass___Ljava_lang_Class_2,  //0
    func_java_lang_Object_hashCode___I,  //1
    func_java_lang_Object_clone___Ljava_lang_Object_2,  //2
    func_java_lang_Object_wait___V,  //3
    func_java_lang_Object_wait__J_V,  //4
    func_java_lang_Object_wait__JI_V,  //5
    func_java_lang_Object_notify___V,  //6
    func_java_lang_Object_notifyAll___V,  //7
    func_java_lang_Object_toString___Ljava_lang_String_2,  //8
    func_java_lang_Object_equals__Ljava_lang_Object_2_Z,  //9
    func_java_net_DatagramSocket_finalize___V  //10
};
VMTable vmtable_java_net_DatagramSocket[] = {
    {192, 6, arr_vmtable_java_net_DatagramSocket_from_java_net_DatagramSocket}, //0
    {10, 11, arr_vmtable_java_net_DatagramSocket_from_java_lang_Object}, //1
};



// locals: 1
// stack: 0
// args: 0
void func_java_net_DatagramSocket_finalize___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 457, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 29 , L1052253947 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 29;
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_net_DatagramSocket_finalize___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_net_DatagramSocket_finalize___V(runtime, ins);
}


// locals: 1
// stack: 0
// args: 0
void func_java_net_DatagramSocket_close___V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[1];
    RStackItem rstack[1];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 458, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 33 , L1826334428 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 33;
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_net_DatagramSocket_close___V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_net_DatagramSocket_close___V(runtime, ins);
}


// locals: 5
// stack: 5
// args: 1
void func_java_net_DatagramSocket_receive__Ljava_net_DatagramPacket_2_V(JThreadRuntime *runtime, struct java_net_DatagramPacket* p0){
    
    StackItem local[5] = {0};
    RStackItem rlocal[5] = {0};
    StackItem stack[6];
    RStackItem rstack[6];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 459, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 36 , L51152513 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 36;
    // invokestatic jx/net/protocol/udp/UDPFormat.requiresSpace()I
    {
        sp -= 1;
        stack[sp].i = func_jx_net_protocol_udp_UDPFormat_requiresSpace___I(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 37 , L1558103808 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/net/DatagramSocket net Ljx/net/NetInit;
    rstack[sp - 1].obj = ((struct java_net_DatagramSocket*)rstack[sp - 1].obj)->net_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/net/DatagramPacket length I
    stack[sp - 1].i = ((struct java_net_DatagramPacket*)rstack[sp - 1].obj)->length_1;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  bipush 34
    stack[sp++].i = 34;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokeinterface jx/net/NetInit.getUDPBuffer(I)Ljx/zero/Memory;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_Memory* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 183, 4);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 38 , L1828873985 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/net/DatagramSocket timeout I
    stack[sp - 1].i = ((struct java_net_DatagramSocket*)rstack[sp - 1].obj)->timeout_4;
    sp += 0;
    //  ldc 
    stack[sp++].i = 0x7ffffff;
    sp -= 2;
    if(stack[sp + 0].i  == stack[sp + 1].i) goto L2024415090;
    ; 
    //  line no 39 , L527804008 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/net/DatagramSocket receiver Ljx/net/UDPReceiver;
    rstack[sp - 1].obj = ((struct java_net_DatagramSocket*)rstack[sp - 1].obj)->receiver_3;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/net/DatagramSocket timeout I
    stack[sp - 1].i = ((struct java_net_DatagramSocket*)rstack[sp - 1].obj)->timeout_4;
    sp += 0;
    // invokeinterface jx/net/UDPReceiver.receive(Ljx/zero/Memory;I)Ljx/net/UDPData;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_net_UDPData* (*__func_p) (JThreadRuntime *,struct jx_zero_Memory*,s32) = find_method(__ins->vm_table, 184, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 40 , L892965953 , bytecode index = 
    rstack[sp++].obj = rlocal[4].obj;
    if(rstack[--sp].obj  != NULL) goto L1266534280;
    ; 
    //  line no 41 , L1661210650 , bytecode index = 
    // new java/net/SocketTimeoutException
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 185);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/net/SocketTimeoutException.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_net_SocketTimeoutException__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // athrow
    //     L1661210650 in labeltable is :L1661210650
    {
        __frame->bytecodeIndex = 
        __frame->lineNo = 41;
        throw_exception(runtime, rstack[sp - 1].obj);
        goto __ExceptionHandler;
    }
    L1266534280:
    //  line no 43 , L1266534280 , bytecode index = 
    goto L1366342900;
    L2024415090:
    //  line no 44 , L2024415090 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/net/DatagramSocket receiver Ljx/net/UDPReceiver;
    rstack[sp - 1].obj = ((struct java_net_DatagramSocket*)rstack[sp - 1].obj)->receiver_3;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface jx/net/UDPReceiver.receive(Ljx/zero/Memory;)Ljx/net/UDPData;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_net_UDPData* (*__func_p) (JThreadRuntime *,struct jx_zero_Memory*) = find_method(__ins->vm_table, 184, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    L1366342900:
    //  line no 46 , L1366342900 , bytecode index = 
    // new jx/net/protocol/udp/UDPFormat
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 186);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[3].obj;
    //  bipush 26
    stack[sp++].i = 26;
    // invokespecial jx/net/protocol/udp/UDPFormat.<init>(Ljx/zero/Memory;I)V
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_net_protocol_udp_UDPFormat__init___Ljx_zero_Memory_2I_V(runtime, rstack[sp + 0].obj, stack[sp + 1].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[4].obj = rstack[--sp].obj;
    ; 
    //  line no 47 , L672313607 , bytecode index = 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
    // new java/lang/StringBuilder
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 3);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // invokespecial java/lang/StringBuilder.<init>()V
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_lang_StringBuilder__init____V(runtime);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1154);
    // invokevirtual java/lang/StringBuilder.append(Ljava/lang/String;)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 3, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual jx/net/protocol/udp/UDPFormat.getLength()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 186, 6);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.append(I)Ljava/lang/StringBuilder;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_StringBuilder* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 3, 2);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual java/lang/StringBuilder.toString()Ljava/lang/String;
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct java_lang_String* (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 3, 9);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokevirtual jx/zero/debug/DebugPrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 0, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 48 , L234250762 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/net/DatagramPacket buff [B
    rstack[sp - 1].obj = ((struct java_net_DatagramPacket*)rstack[sp - 1].obj)->buff_0;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    //  bipush 34
    stack[sp++].i = 34;
    rstack[sp++].obj = rlocal[4].obj;
    // invokevirtual jx/net/protocol/udp/UDPFormat.getLength()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 186, 6);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokeinterface jx/zero/Memory.copyToByteArray([BIII)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,s32,s32) = find_method(__ins->vm_table, 83, 7);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 67 , L1311844206 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_net_DatagramSocket_receive__Ljava_net_DatagramPacket_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_net_DatagramSocket_receive__Ljava_net_DatagramPacket_2_V(runtime, ins);
}


// locals: 4
// stack: 6
// args: 1
void func_java_net_DatagramSocket_send__Ljava_net_DatagramPacket_2_V(JThreadRuntime *runtime, struct java_net_DatagramPacket* p0){
    
    StackItem local[4] = {0};
    RStackItem rlocal[4] = {0};
    StackItem stack[7];
    RStackItem rstack[7];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 460, &rstack[0], &rlocal[0], &sp);
    rlocal[0].obj = p0;
    ; 
    //  line no 71 , L668312960 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 71;
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/net/DatagramSocket net Ljx/net/NetInit;
    rstack[sp - 1].obj = ((struct java_net_DatagramSocket*)rstack[sp - 1].obj)->net_2;
    sp += 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/net/DatagramSocket port I
    stack[sp - 1].i = ((struct java_net_DatagramSocket*)rstack[sp - 1].obj)->port_0;
    sp += 0;
    // new jx/net/IPv4Address
    rstack[sp++].obj = new_instance_with_classraw_index(runtime, 187);
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/net/DatagramPacket addr Ljava/net/InetAddress;
    rstack[sp - 1].obj = ((struct java_net_DatagramPacket*)rstack[sp - 1].obj)->addr_2;
    sp += 0;
    // invokevirtual java/net/InetAddress.getAddress()[B
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        JArray * (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 188, 3);
        rstack[sp].obj = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokespecial jx/net/IPv4Address.<init>([B)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_jx_net_IPv4Address__init____3B_V(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rstack[sp++].obj = rlocal[1].obj;
    // invokevirtual java/net/DatagramPacket.getPort()I
    {
        sp -= 0;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        s32 (*__func_p) (JThreadRuntime *) = find_method(__ins->vm_table, 189, 4);
        stack[sp].i = __func_p(runtime);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // invokeinterface jx/net/NetInit.getUDPSender(ILjx/net/IPAddress;I)Ljx/net/UDPSender;
    {
        sp -= 3;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_net_UDPSender* (*__func_p) (JThreadRuntime *,s32,struct jx_net_IPAddress*,s32) = find_method(__ins->vm_table, 183, 3);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj, stack[sp + 2].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/net/DatagramSocket sender Ljx/net/UDPSender;
    sp -= 2;
    ((struct java_net_DatagramSocket*)rstack[sp + 0].obj)->sender_1 = rstack[sp + 1].obj;
    ; 
    //  line no 72 , L428696898 , bytecode index = 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1159);
    // invokevirtual jx/zero/debug/DebugPrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 0, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 76 , L1581267786 , bytecode index = 
    // invokestatic jx/net/protocol/udp/UDPFormat.requiresSpace()I
    {
        sp -= 1;
        stack[sp].i = func_jx_net_protocol_udp_UDPFormat_requiresSpace___I(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    local[2].i = stack[--sp].i;
    ; 
    //  line no 77 , L1360518503 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/net/DatagramSocket net Ljx/net/NetInit;
    rstack[sp - 1].obj = ((struct java_net_DatagramSocket*)rstack[sp - 1].obj)->net_2;
    sp += 0;
    stack[sp++].i = local[2].i;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/net/DatagramPacket length I
    stack[sp - 1].i = ((struct java_net_DatagramPacket*)rstack[sp - 1].obj)->length_1;
    sp += 0;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    //  bipush 34
    stack[sp++].i = 34;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    // invokeinterface jx/net/NetInit.getUDPBuffer(I)Ljx/zero/Memory;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_Memory* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 183, 4);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 79 , L1541708640 , bytecode index = 
    rstack[sp++].obj = rlocal[3].obj;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/net/DatagramPacket buff [B
    rstack[sp - 1].obj = ((struct java_net_DatagramPacket*)rstack[sp - 1].obj)->buff_0;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    stack[sp++].i = local[2].i;
    //  bipush 34
    stack[sp++].i = 34;
    stack[sp - 2].i = stack[sp - 2].i + stack[sp - 1].i; 
    --sp;
    rstack[sp++].obj = rlocal[1].obj;
    // getfield java/net/DatagramPacket length I
    stack[sp - 1].i = ((struct java_net_DatagramPacket*)rstack[sp - 1].obj)->length_1;
    sp += 0;
    // invokeinterface jx/zero/Memory.copyFromByteArray([BIII)V
    {
        sp -= 4;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,JArray *,s32,s32,s32) = find_method(__ins->vm_table, 190, 7);
        __func_p(runtime, rstack[sp + 0].obj, stack[sp + 1].i, stack[sp + 2].i, stack[sp + 3].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 80 , L691098155 , bytecode index = 
    // getstatic jx/zero/Debug out Ljx/zero/debug/DebugPrintStream;
    rstack[sp].obj =static_var_jx_zero_Debug.out_2;
    sp += 1;
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1160);
    // invokevirtual jx/zero/debug/DebugPrintStream.println(Ljava/lang/String;)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        void (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 0, 14);
        __func_p(runtime, rstack[sp + 0].obj);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 81 , L1987360300 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/net/DatagramSocket sender Ljx/net/UDPSender;
    rstack[sp - 1].obj = ((struct java_net_DatagramSocket*)rstack[sp - 1].obj)->sender_1;
    sp += 0;
    rstack[sp++].obj = rlocal[3].obj;
    // invokeinterface jx/net/UDPSender.send(Ljx/zero/Memory;)Ljx/zero/Memory;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_Memory* (*__func_p) (JThreadRuntime *,struct jx_zero_Memory*) = find_method(__ins->vm_table, 191, 0);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    rlocal[3].obj = rstack[--sp].obj;
    ; 
    //  line no 82 , L434610528 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_net_DatagramSocket_send__Ljava_net_DatagramPacket_2_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_net_DatagramSocket_send__Ljava_net_DatagramPacket_2_V(runtime, ins);
}


// locals: 1
// stack: 1
// args: 0
s32 func_java_net_DatagramSocket_getLocalPort___I(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[2];
    RStackItem rstack[2];
    s32 sp = 0;
    ; 
    //  line no 85 , L1168420930 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/net/DatagramSocket port I
    stack[sp - 1].i = ((struct java_net_DatagramSocket*)rstack[sp - 1].obj)->port_0;
    sp += 0;
    return stack[sp - 1].i;
    ; 
}

void bridge_java_net_DatagramSocket_getLocalPort___I(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    ret->i = func_java_net_DatagramSocket_getLocalPort___I(runtime, ins);
}


// locals: 2
// stack: 8
// args: 1
void func_java_net_DatagramSocket__init___I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[9];
    RStackItem rstack[9];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 462, &rstack[0], &rlocal[0], &sp);
    local[0].i = p0;
    ; 
    //  line no 88 , L846918683 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 88;
    rstack[sp++].obj = rlocal[0].obj;
    // invokespecial java/lang/Object.<init>()V
    sp -= 0;  //pop para
    // it's a empty method
    ; 
    //  line no 19 , L1823923917 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // putfield java/net/DatagramSocket port I
    sp -= 2;
    ((struct java_net_DatagramSocket*)rstack[sp + 0].obj)->port_0 = stack[sp + 1].i;
    ; 
    //  line no 23 , L208684473 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    //  ldc 
    stack[sp++].i = 0x7fffffff;
    // putfield java/net/DatagramSocket timeout I
    sp -= 2;
    ((struct java_net_DatagramSocket*)rstack[sp + 0].obj)->timeout_4 = stack[sp + 1].i;
    ; 
    //  line no 89 , L261748192 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield java/net/DatagramSocket port I
    sp -= 2;
    ((struct java_net_DatagramSocket*)rstack[sp + 0].obj)->port_0 = stack[sp + 1].i;
    ; 
    //  line no 90 , L1789268516 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    // invokestatic jx/zero/InitialNaming.getInitialNaming()Ljx/zero/Naming;
    {
        sp -= 1;
        rstack[sp].obj = func_jx_zero_InitialNaming_getInitialNaming___Ljx_zero_Naming_2(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    //  ldc 
    rstack[sp++].obj = construct_string_with_utfraw_index(runtime, 1163);
    // invokeinterface jx/zero/Naming.lookup(Ljava/lang/String;)Ljx/zero/Portal;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_Portal* (*__func_p) (JThreadRuntime *,struct java_lang_String*) = find_method(__ins->vm_table, 90, 1);
        rstack[sp].obj = __func_p(runtime, rstack[sp + 0].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // checkcast jx/net/NetInit
    {
        s32 cast_r = checkcast(rstack[sp - 1].obj, 1151);
        if(!cast_r){
            rstack[sp++].obj = construct_and_throw_exception(runtime, 36, 
            goto __ExceptionHandler;
        }
    }
    // putfield java/net/DatagramSocket net Ljx/net/NetInit;
    sp -= 2;
    ((struct java_net_DatagramSocket*)rstack[sp + 0].obj)->net_2 = rstack[sp + 1].obj;
    ; 
    //  line no 92 , L817686795 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/net/DatagramSocket net Ljx/net/NetInit;
    rstack[sp - 1].obj = ((struct java_net_DatagramSocket*)rstack[sp - 1].obj)->net_2;
    sp += 0;
    stack[sp++].i = local[1].i;
    // iconst_4
    stack[sp++].i = 4;
    // ; newarray/multiarray Dimension Array: [Ljx/zero/Memory; 1
    {
        s32 dim[1];
        dim[0] = stack[--sp].i;
        static JClass *clazz = NULL;
        if (!clazz)clazz = array_class_create_get(get_utf8str_by_utfraw_index(1164));
        rstack[sp++].obj = multi_array_create(runtime, dim, 1, clazz);
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_0
    stack[sp++].i = 0;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/net/DatagramSocket net Ljx/net/NetInit;
    rstack[sp - 1].obj = ((struct java_net_DatagramSocket*)rstack[sp - 1].obj)->net_2;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    ; 
    //  line no 93 , L1047478056 , bytecode index = 
    // invokeinterface jx/net/NetInit.getUDPBuffer(I)Ljx/zero/Memory;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_Memory* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 183, 4);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L1047478056 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_1
    stack[sp++].i = 1;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/net/DatagramSocket net Ljx/net/NetInit;
    rstack[sp - 1].obj = ((struct java_net_DatagramSocket*)rstack[sp - 1].obj)->net_2;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    // invokeinterface jx/net/NetInit.getUDPBuffer(I)Ljx/zero/Memory;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_Memory* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 183, 4);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L1047478056 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_2
    stack[sp++].i = 2;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/net/DatagramSocket net Ljx/net/NetInit;
    rstack[sp - 1].obj = ((struct java_net_DatagramSocket*)rstack[sp - 1].obj)->net_2;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    // invokeinterface jx/net/NetInit.getUDPBuffer(I)Ljx/zero/Memory;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_Memory* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 183, 4);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L1047478056 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    // dup
    stack[sp].j = stack[sp - 1].j; 
    rstack[sp].obj = rstack[sp - 1].obj; 
    ++sp;
    // iconst_3
    stack[sp++].i = 3;
    rstack[sp++].obj = rlocal[0].obj;
    // getfield java/net/DatagramSocket net Ljx/net/NetInit;
    rstack[sp - 1].obj = ((struct java_net_DatagramSocket*)rstack[sp - 1].obj)->net_2;
    sp += 0;
    // iconst_0
    stack[sp++].i = 0;
    // invokeinterface jx/net/NetInit.getUDPBuffer(I)Ljx/zero/Memory;
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_zero_Memory* (*__func_p) (JThreadRuntime *,s32) = find_method(__ins->vm_table, 183, 4);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // arrstore __refer  ,  L1047478056 bc index = 
    {
        ;
        __refer value = rstack[--sp].obj;
        s32 idx = stack[--sp].i;
        JArray *arr = rstack[--sp].obj;
        if (!arr) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        } else if (idx < 0 || idx >= arr->prop.arr_length) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 5, 
            goto __ExceptionHandler;
        }
        arr->prop.as_obj_arr[idx] = value;
    }
    ; 
    //  line no 92 , L2115628016 , bytecode index = 
    // invokeinterface jx/net/NetInit.getUDPReceiver(I[Ljx/zero/Memory;)Ljx/net/UDPReceiver;
    {
        sp -= 2;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        struct jx_net_UDPReceiver* (*__func_p) (JThreadRuntime *,s32,JArray *) = find_method(__ins->vm_table, 183, 2);
        rstack[sp].obj = __func_p(runtime, stack[sp + 0].i, rstack[sp + 1].obj);
        sp += 1;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    // putfield java/net/DatagramSocket receiver Ljx/net/UDPReceiver;
    sp -= 2;
    ((struct java_net_DatagramSocket*)rstack[sp + 0].obj)->receiver_3 = rstack[sp + 1].obj;
    ; 
    //  line no 95 , L611643685 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_net_DatagramSocket__init___I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_net_DatagramSocket__init___I_V(runtime, ins);
}


// locals: 1
// stack: 2
// args: 0
void func_java_net_DatagramSocket__init____V(JThreadRuntime *runtime){
    
    StackItem local[1] = {0};
    RStackItem rlocal[1] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    StackFrame *__frame = method_enter(runtime, 463, &rstack[0], &rlocal[0], &sp);
    ; 
    //  line no 98 , L872826668 , bytecode index = 
    __frame->bytecodeIndex = 
    __frame->lineNo = 98;
    rstack[sp++].obj = rlocal[0].obj;
    // iconst_0
    stack[sp++].i = 0;
    // invokespecial java/net/DatagramSocket.<init>(I)V
    {
        sp -= 1;
        JObject *__ins = rstack[sp + 0].ins;
        if (!__ins) {
            rstack[sp++].obj = construct_and_throw_exception(runtime, 1, 
            goto __ExceptionHandler;
        }
        func_java_net_DatagramSocket__init___I_V(runtime, stack[sp + 0].i);
        sp += 0;
        if (runtime->exception) {
            rstack[sp++].obj = runtime->exception;
            goto __ExceptionHandler;
        }
    }
    ; 
    //  line no 99 , L91323447 , bytecode index = 
    method_exit(runtime);
    return;
    ; 
    __ExceptionHandler:
    switch (find_exception_handler_index(runtime)) {
        default: goto __ExceptionHandlerNotFound;
    }
    __ExceptionHandlerNotFound:
    method_exit(runtime);
    return ;
}

void bridge_java_net_DatagramSocket__init____V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_net_DatagramSocket__init____V(runtime, ins);
}


// locals: 2
// stack: 2
// args: 1
void func_java_net_DatagramSocket_setSoTimeout__I_V(JThreadRuntime *runtime, s32 p0){
    
    StackItem local[2] = {0};
    RStackItem rlocal[2] = {0};
    StackItem stack[3];
    RStackItem rstack[3];
    s32 sp = 0;
    local[0].i = p0;
    ; 
    //  line no 104 , L1209411469 , bytecode index = 
    rstack[sp++].obj = rlocal[0].obj;
    stack[sp++].i = local[1].i;
    // putfield java/net/DatagramSocket timeout I
    sp -= 2;
    ((struct java_net_DatagramSocket*)rstack[sp + 0].obj)->timeout_4 = stack[sp + 1].i;
    ; 
    //  line no 105 , L1320105604 , bytecode index = 
    return;
    ; 
}

void bridge_java_net_DatagramSocket_setSoTimeout__I_V(JThreadRuntime *runtime, __refer ins, ParaItem *para, ParaItem *ret) {
    func_java_net_DatagramSocket_setSoTimeout__I_V(runtime, ins);
}


