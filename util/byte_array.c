//
// Created by jdavis on 7/16/20.
//
#include <stdlib.h>
#include "byte_array.h"

void AddToArray(ByteArray array, char item)
{
    *(array.content+array.length) = item;
    array.length++;
}

ByteArray * InitByteArray(int size)
{
    ByteArray *array = malloc(sizeof(ByteArray));
    array->length = 0;
    array->content = malloc(sizeof(char)*size);
    return array;
}
