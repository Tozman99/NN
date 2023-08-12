
typedef struct {

    size_t size;
    float *arr;


} Array_t;

Array_t *init(Array_t *ptr, size_t size);
void readArray(Array_t *ptr);
void resize(Array_t *ptr);
void freeArray(Array_t *ptr);
void insertElement(Array_t *ptr, int index, float element);