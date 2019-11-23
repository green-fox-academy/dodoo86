#include <stdio.h>
#include <sys/param.h>

typedef enum dog_size {
    small,
    medium,
    big,
    large
}dog_size_t;

typedef struct dog {
    char *name;
    int age;
    int weight;
    dog_size_t size;
}dog_t;


char* get_oldest(dog_t* arr_dogs,int n) {

    int oldest = arr_dogs[0].age;
    char *oldest_name = arr_dogs[0].name;

    for (int i = 0; i < n; ++i) {
        if (arr_dogs[i].age > oldest){
            oldest = arr_dogs[i].age;
            oldest_name = arr_dogs[i].name;
        }
    }
    return oldest_name;
}
int get_size_count(dog_t* arr_dogs, int n, dog_size_t size) {

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr_dogs[i].size == size)
            count++;
    }
    return count;
}

int main() {

    struct dog arr_dogs[] =  {
            {"ANNA", 2, 4, small},
            {"BELA", 36, 11, medium},
            {"FOXY", 6, 23, big},
            {"MAXI", 64, 23, big}
    };

    struct dog dogs2[] = {
            {"ANNA", 2, 4, small},
            {"BELA", 3, 11, medium},
            {"FOXY", 1, 23, big},
            {"MAX", 1, 7, medium},
            {"DANNY", 11, 33, large}
    };
    int n = sizeof(arr_dogs)/ sizeof(arr_dogs[0]);
    int m = sizeof(dogs2)/ sizeof(dogs2[0]);


    printf("the oldest dog is: %s\n", get_oldest(arr_dogs,n));
    printf("there is %d big dog in the array\n", get_size_count(arr_dogs,n,big));

    printf("the oldest dog is: %s\n", get_oldest(dogs2,m));
    printf("there is %d medium dog in the array\n", get_size_count(dogs2,m,medium));

    return 0;
}