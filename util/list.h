//
// Created by jdavis on 7/17/20.
//

#ifndef LASM_LIST_H
#define LASM_LIST_H

#include <stdbool.h>

typedef struct{
    void * (*stream)();
    int elementSize;
    int length;
    int capacity;
    int currentIndex;
    bool * (*moveNext)();
    void (*reset)();
} List;

List * InitializeList(int elementSize);
List * InitializeListWith(int elementSize, int Capacity);

#endif //LASM_LIST_H
