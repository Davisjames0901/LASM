//
// Created by jdavis on 7/16/20.
//

#ifndef LASM_OPCODE_H
#define LASM_OPCODE_H

#include "supported_proccesors.h"
#include "../util/list.h"

typedef struct {
    SupportedProcessors processors;
    List * (*decode)(List*);
    List * code;
} OpCode;

#endif //LASM_OPCODE_H
