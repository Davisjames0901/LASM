cmake_minimum_required(VERSION 3.17)
project(lasm C)

set(CMAKE_C_STANDARD 99)

add_executable(lasm main.c opcodes/opcode.h opcodes/supported_proccesors.h opcodes/mos_6502_family/6502/tax.c opcodes/mos_6502_family/mos_6502.h util/list.h opcodes/mos_6502_family/6502/tax.h opcodes/mos_6502_family/mos_6502.c util/list.c opcodes/mos_6502_family/6502/bpl.h opcodes/mos_6502_family/6502/bpl.c processors/opcode_processor.h processors/opcode_processor.c processors/preprocessor.h processors/preprocessor.c)