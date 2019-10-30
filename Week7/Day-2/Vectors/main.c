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

    addElementByIndex(&vecOne,77,4,&res);
    int x = searchElement(&vecOne,4);
    printf("The element is on %d index\n",x);

    print(&vecOne,&res);
    int y = sizeOfVect(&vecOne);
    printf("The size is: %d\n",y);

    int a = capacity(&vecOne);
    printf("The remaining capacity is: %d\n",a);

    //pop_back(&vecOne,&res);
    print(&vecOne,&res);
    deleteByIndex(&vecOne,2,&res);
    print(&vecOne,&res);

    destroy(&vecOne,&res);
    return 0;
}