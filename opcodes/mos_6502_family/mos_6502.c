//
// Created by jdavis on 7/17/20.
//

#include <malloc.h>
#include "../../util/list.h"
#include "6502/tax.h"
#include "6502/bpl.h"

List * GetMos6502InstructionSet()
{
    List * list = InitializeList(sizeof(OpCode));

    //Transfer the A register to the X register
    ListAdd(list, GetMos6502TaxOpCode());

    //Branch on plus
    ListAdd(list, GetMos6502BplOpCode());

    return list;
}