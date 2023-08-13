
typedef struct {

    size_t size;
    float *arr;


} Array_t;

Array_t *init(Array_t *ptr, size_t size);
void readArray(float *pt, int index);
void resize(Array_t *ptr);
void freeArray(Array_t *ptr);
void insertElement(float *pt, int index, float element);