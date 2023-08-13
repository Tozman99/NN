#include <stdio.h>
#include <stdlib.h>
#include "dynamic_array.h"

Array_t *init(Array_t *ptr, size_t size){

    if (ptr == NULL){

        return NULL;
    }
    ptr = (Array_t *) calloc(size, sizeof(Array_t));
    ptr->size = size;
    printf("Array Created size : %zu \n", size);
    
    return ptr;
}

void readArray(float *pt, int index){


    printf("Value : %f at the index : %d \t address : %p \n", *pt, index, pt);
}

void insertElement(float *pt, int index, float element){

    *(pt) = element;
}

void freeArray(Array_t *ptr){

    free(ptr->arr);
    free(ptr);
}

