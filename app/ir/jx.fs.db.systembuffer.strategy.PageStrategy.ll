; CLASS: jx/fs/db/systembuffer/strategy/PageStrategy extends java/lang/Object

declare noalias i8* @malloc(i32)
declare void @free(i8*)
declare void @print_debug(i32)
declare void @print_ptr(i64)
declare i32 @ptr_size()



; first generation
%jx_fs_db_systembuffer_strategy_PageStrategyRecord = type {} ; use jx/fs/db/systembuffer/strategy/PageStrategyRecord
%jx_fs_db_systembuffer_strategy_PageStrategy = type {i32, i32, i32, i32, i32, i32} ; use jx/fs/db/systembuffer/strategy/PageStrategy
%.B = type {i32, [0 x i8]} ; use [B
; globals
@jx_fs_db_systembuffer_strategy_PageStrategy_ERR_EMPTY_BUFFER = internal global i32 zeroinitializer
@jx_fs_db_systembuffer_strategy_PageStrategy_ERR_ALL_PAGES_FIXED = internal global i32 zeroinitializer
@jx_fs_db_systembuffer_strategy_PageStrategy_ERR_INVALID_FIX = internal global i32 zeroinitializer
@jx_fs_db_systembuffer_strategy_PageStrategy_ERR_PAGE_EXISTS = internal global i32 zeroinitializer
@jx_fs_db_systembuffer_strategy_PageStrategy_ERR_PAGE_NOT_FIXED = internal global i32 zeroinitializer
@jx_fs_db_systembuffer_strategy_PageStrategy_ERR_INVALID_PAGE_NUM = internal global i32 zeroinitializer


; locals: 0
; stack: 0
; args: 2
define %jx_fs_db_systembuffer_strategy_PageStrategyRecord* @jx_fs_db_systembuffer_strategy_PageStrategy_fix_I(%jx_fs_db_systembuffer_strategy_PageStrategy* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_fs_db_systembuffer_strategy_PageStrategy_unfix_I(%jx_fs_db_systembuffer_strategy_PageStrategy* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_fs_db_systembuffer_strategy_PageStrategy_setDirty_I(%jx_fs_db_systembuffer_strategy_PageStrategy* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 3
define void @jx_fs_db_systembuffer_strategy_PageStrategy_pageIn_I_B(%jx_fs_db_systembuffer_strategy_PageStrategy* %s0, i32 %s1, %.B* %s2){
    
}

; locals: 0
; stack: 0
; args: 2
define %jx_fs_db_systembuffer_strategy_PageStrategyRecord* @jx_fs_db_systembuffer_strategy_PageStrategy_pageOut_I(%jx_fs_db_systembuffer_strategy_PageStrategy* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 2
define void @jx_fs_db_systembuffer_strategy_PageStrategy_copy_Ljx_fs_db_systembuffer_strategy_PageStrategy_(%jx_fs_db_systembuffer_strategy_PageStrategy* %s0, %jx_fs_db_systembuffer_strategy_PageStrategy* %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_fs_db_systembuffer_strategy_PageStrategy_getBestForPageout(%jx_fs_db_systembuffer_strategy_PageStrategy* %s0){
    
}

; locals: 0
; stack: 0
; args: 2
define %jx_fs_db_systembuffer_strategy_PageStrategyRecord* @jx_fs_db_systembuffer_strategy_PageStrategy_getPageRecord_I(%jx_fs_db_systembuffer_strategy_PageStrategy* %s0, i32 %s1){
    
}

; locals: 0
; stack: 0
; args: 1
define i32 @jx_fs_db_systembuffer_strategy_PageStrategy_getPagesAllocated(%jx_fs_db_systembuffer_strategy_PageStrategy* %s0){
    
}


