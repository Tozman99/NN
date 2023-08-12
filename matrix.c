#include "matrix.h"
#include <stdio.h>
#include <stdlib.h>


Matrix_t *matrixCreation(Matrix_t *Mat, int rows, int cols){

    Mat = (Matrix_t *) malloc(sizeof(Matrix_t));

    Mat->mat = (float *) malloc(sizeof(float) * rows);
    Mat->rows = rows;
    Mat->cols = cols;

    for (int i = 0; i < rows; i++){
        *(Mat->mat + i) = 0.0f;
    }
    printf("Matrix allocated \n");


    return Mat;
};

void readMatrix(Matrix_t *Mat){

    for (int i = 0; i < Mat->rows; i++){

        printf("Value of Matrix index %d : %f",i, *(Mat->mat + i));
    }

};