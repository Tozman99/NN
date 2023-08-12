// matrix.h 


typedef struct {
    
    int rows;
    int cols;
    float *mat;

} Matrix_t;

Matrix_t *matrixCreation(Matrix_t *mat, int rows, int cols);
Matrix_t *matrixrealocation(Matrix_t *mat);
void readMatrix(Matrix_t *mat);
