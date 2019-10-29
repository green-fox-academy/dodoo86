#include <stdlib.h>
#include "Vector.h"



void init(vector_t* vec, int size, error_t* result){
    *result = NO_ERROR;
    if(size<= 0){
        *result = WRONG_ARGUMENT;
        return;
    }
    vec->data = (int*)calloc(size, sizeof(int));
    vec->capacity = size;
    vec->size = 0;
}

void push_back (vector_t* vec, int new_data, error_t* result){
    *result = NO_ERROR;
    if(vec->size >= vec->capacity){
        vec->capacity *= 2;
        vec->data = (int*)realloc(vec->data,vec->capacity * sizeof(int));
    }
    vec->data[vec->size] = new_data;
    vec->size++;
}

void addElement (vector_t* vec,int new_data, int index, error_t* result) {

        *result = NO_ERROR;

    if (vec->size >= vec->capacity){
        vec->capacity *= 2;
        vec->data = (int*)realloc(vec->data,vec->capacity * sizeof(int));
    }
    for (int j = vec->size; j > index; --j) {
        vec->data[j]=vec->data[j-1];
    }
    vec->size++;

    vec->data[index] = new_data;
}

void overwriteElement (vector_t* vec,int new_data, int index, error_t* result) {

        *result = NO_ERROR;
        vec->data[index] = new_data;

}

int element_at (vector_t* vec, int at, error_t* result){
    *result = NO_ERROR;
    if (at< 0 || at > vec->size -1){
        *result = OUT_OF_BOUND;
        return 0;
    }
    return vec->data[at];
}

void pop_back (vector_t* vec, error_t* result){
    *result = NO_ERROR;
    if (vec->size <= 0){
        *result = EMPTY;
        return;
    }
    vec->size--;
    if (vec->size < vec->capacity /2){
        vec->capacity /=2;
        vec->data = (int*) realloc(vec->data, vec->capacity * sizeof(int));
    }
}

void destroy (vector_t* vec, error_t* result){
    *result = NO_ERROR;
    vec->size = 0;
    vec->capacity = 0;
    free(vec->data);
}

void print (vector_t* vec, error_t* result){
    *result = NO_ERROR;
    printf("Size: %d, Capacity: %d, Data: {", vec->size,vec->capacity);
    for (int i = 0; i < vec->size ; ++i) {
        printf("%d, ",vec->data[i]);
    }
    printf("}\n");
}

int searchElement (vector_t* vec,int search) {
    //*result = NO_ERROR;

    for (int i = 0; i < vec->size; ++i) {
        if (vec->data[i] == search) {
            return i;
        }
    }
    printf("Cant be found!!!\n");
    return -1;
}
