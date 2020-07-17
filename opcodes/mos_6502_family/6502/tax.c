//
// Created by jdavis on 7/16/20.
//

#include <stdlib.h>
#include "../../opcode.h";

ByteArray * Decode(ByteArray * input)
{
    ByteArray * array = InitByteArray(1);

    array->add(0xAA);

    return array;
}

OpCode * GetOpcode()
{
    OpCode * opcode = malloc(sizeof(OpCode));
    opcode->code = "tax";
    opcode->processors = mos6502;
    opcode->decode = &Decode;
    return opcode;
}