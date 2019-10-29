#include <stdio.h>
#include "Vector.h"


int main() {
    vector_t vecOne;
    error_t res;
    init(&vecOne,5,&res);
    print(&vecOne,&res);

    for (int i = 0; i < 20; ++i) {
        push_back(&vecOne,i,&res);
    }
    print(&vecOne,&res);

    pop_back(&vecOne,&res);

    print(&vecOne,&res);

    destroy(&vecOne,&res);
    return 0;
}