#include <stdio.h>
#include <stdlib.h>
#include "dynamic_array.h"

Array_t *init(Array_t *ptr, size_t size){

    ptr = (Array_t *) calloc(size, sizeof(Array_t));
    ptr->size = size;
    printf("Array Created size : %zu \n", size);
    
    return ptr;
}

void readArray(Array_t *ptr){

    int index = 0;

    while (index < ptr->size){

        printf("Value : %f at the index : %d \t address : %p \n", (ptr->arr + index), index, (ptr->arr + index));
        index++;
    }
}

void freeArray(Array_t *ptr){

    free(ptr->arr);
    free(ptr);
}

