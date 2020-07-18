//
// Created by jdavis on 7/16/20.
//

#ifndef LASM_OPCODE_H
#define LASM_OPCODE_H

#include "supported_proccesors.h"
#include "../util/byte_array.h"

typedef struct {
    SupportedProcessors processors;
    ByteArray * (*decode)(ByteArray*);
    ByteArray * code;
} OpCode;

#endif //LASM_OPCODE_H
