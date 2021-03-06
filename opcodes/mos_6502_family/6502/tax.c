//
// Created by jdavis on 7/16/20.
//

#include <stdlib.h>
#include "../../opcode.h";
#include "tax.h"
#include "../../../util/list.h"

List * Decode(List * input)
{
    List * list = InitializeListWithCapacity(sizeof(char), 1);

    ListAdd(list, 0xAA);

    return list;
}

OpCode * GetMos6502TaxOpCode()
{
    OpCode * opcode = malloc(sizeof(OpCode));
    opcode->code = "tax";
    opcode->processors = mos6502;
    opcode->decode = &Decode;
    return opcode;
}