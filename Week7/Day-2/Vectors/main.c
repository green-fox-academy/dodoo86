#include <stdio.h>
#include "Vector.h"


int main() {
    vector_t vecOne;
    error_t res;
    init(&vecOne,5,&res);
    print(&vecOne,&res);

    for (int i = 0; i < 24; ++i) {
        push_back(&vecOne,i,&res);
    }
    print(&vecOne,&res);

    //pop_back(&vecOne,&res);

    addElement(&vecOne,77,4,&res);
    int x = searchElement(&vecOne,99);
    printf("the element is on %d index\n",x);

    print(&vecOne,&res);

    destroy(&vecOne,&res);
    return 0;
}