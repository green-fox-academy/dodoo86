#include <iostream>
#include "PostIt.h"

int main() {
    PostIt i("orange","Idea1","yellow");
    PostIt A("Pink","Awsome","Black");
    PostIt S("Yellow","Superb!","Green");

    cout<<i.text<<endl;
    return 0;
}