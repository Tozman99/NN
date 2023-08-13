#include <stdio.h>
#include <stdlib.h>
#include "dynamic_array.h"

#ifndef MATRIX_H
#define MATRIX_HH
#include "matrix.h"

#endif

int main(void){

    Matrix_t *a;
    Array_t *ptr;

    ptr = init(ptr, 10);
   //insertElement(&ptr, 3, 5);
    int index = 0;

    while (index < 10){
        float *pt;
        pt = ptr + index;
        if (index == 4){
            insertElement(pt, index, 5.0f);
        }      
        readArray(pt, index);

        index++;
    }

    // a = matrixCreation(a, 5, 5);
    // readMatrix(a);
    // free(a->mat);
    // free(a);

    
    return 0;
}