#include <stdio.h>
#include <sys/param.h>

enum dog_size {small,medium,big,large};

struct dog {
    char name[50];
    int age;
    int weight;
    enum dog_size size;
};
char get_oldest(struct dog arr_dogs[200],int n){
   int oldest = arr_dogs[0].age;

    for (int i = 0; i < n; ++i) {
        if (arr_dogs[i].age > oldest)
            oldest = arr_dogs[i].age;
    }
    //printf("The oldest dog is %s\n", arr_dogs[0].name);
    return oldest;
}
void get_size_count(struct dog arr_dogs[200], size) {
    int a;
    printf("%d\n", size);
}

int main() {

    struct dog arr_dogs[200] =  {
            {"ANNA", 2, 4, small},
            {"BELA", 36, 11, medium},
            {"FOXY", 6, 23, big},
            {"FOXY", 64, 23, big}
    };
    int n = sizeof(arr_dogs)/ sizeof(arr_dogs[0]);
    //get_oldest(arr_dogs,n);
    get_size_count(arr_dogs, small);
    printf("the oldest dog is: %d\n", get_oldest(arr_dogs,n));
    //printf("there is %d big dog in the array\n", get_size_count(arr_dogs,n));
    //printf("%d\n", big);
    return 0;
}