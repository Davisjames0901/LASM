//
// Created by jdavis on 7/16/20.
//

#ifndef LASM_BYTEARRAY_H
#define LASM_BYTEARRAY_H

typedef struct {
    char * content;
    int length;
    void (*add)(char);
} ByteArray;

void AddToArray(ByteArray array, char item);

ByteArray * InitByteArray(int size);

#endif //LASM_BYTEARRAY_H