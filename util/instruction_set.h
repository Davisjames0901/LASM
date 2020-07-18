//
// Created by jdavis on 7/17/20.
//

#ifndef LASM_INSTRUCTION_SET_H
#define LASM_INSTRUCTION_SET_H

#include "byte_array.h"
#include "../opcodes/opcode.h"
#include "list.h"

typedef struct {
    ByteArray * (*processLine)(ByteArray *);
    List * opCodes;
} InstructionSet;



#endif //LASM_INSTRUCTION_SET_H
