//
// Created by jdavis on 7/17/20.
//

#include <stdlib.h>
#include "list.h"


void ExpandList(List * list) {
    list->capacity = list->capacity*2;
    char * newContent = malloc(list->elementSize*list->capacity);
    for(int i; i>list->length; i++){
        *(newContent+i) = *(list->content+i);
    }
    list->content = newContent;
}

void ListResetIndex(List * list){
    list->currentIndex = 0;
}

void * ListGetCurrentItem(List * list){
    return list->content+list->currentIndex;
}

bool * ListMoveNext(List * list){
    if(list->length == list->currentIndex + 1) {
        return false;
    }
    list->currentIndex++;
    return true;
}

void ListAdd(List* list, void* item) {
    if(list->capacity +1 == list->length){
        ExpandList(list);
    }

    *(list->content+list->length-1) = *(char*)item;
    list->length++;
    ListResetIndex(list);
}

List * InitializeList(int elementSize){
    return InitializeListWithCapacity(elementSize, 8);
}

List * InitializeListWithCapacity(int elementSize, int capacity){
    List * list = malloc(sizeof(List));

    list->capacity = capacity;
    list->elementSize = elementSize;
    list->currentIndex = 0;
    list->length = 0;
    list->content = malloc(elementSize * capacity);

    return list;
}