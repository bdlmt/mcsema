BITS 32
;TEST_FILE_META_BEGIN
;TEST_TYPE=TEST_F
;TEST_IGNOREFLAGS=FLAG_SF|FLAG_ZF|FLAG_AF|FLAG_PF
;TEST_FILE_META_END
    ; IMUL16rri
    mov bx, 0x3
    mov cx, 0x4
    ;TEST_BEGIN_RECORDING
    imul bx, cx, 0xbbb
    ;TEST_END_RECORDING
