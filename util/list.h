//
// Created by jdavis on 7/17/20.
//

#ifndef LASM_LIST_H
#define LASM_LIST_H

#include <stdbool.h>

typedef struct{
    char * content;
    int elementSize;
    int length;
    int capacity;
    int currentIndex;
} List;

List * InitializeList(int elementSize);
List * InitializeListWithCapacity(int elementSize, int Capacity);

void ListResetIndex(List * list);
bool * ListMoveNext(List * list);
void ListAdd(List* list, void* item);
void * ListGetCurrentItem(List * list);

#endif //LASM_LIST_H
