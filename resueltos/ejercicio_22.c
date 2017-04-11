#include <stdio.h>
#include <stdlib.h>

int * reduce_par(int *arr,int largo) {
    
    // static int r[10];
    
    printf("2sizeof of array: %d\n", (int) sizeof(arr));
    int i ;

    int *r = (int *)malloc(largo*sizeof(int));

    for (i = 0; i < largo; i++) {
        r[i] = arr[i];
    }

    return r;
}

int main(int argc, char const *argv[]) {
    
    int vector[] = {1,2,3,4,4,7,8,10,5,4};    
    int *p, i;
    
    int largo = (int) (sizeof(vector)/sizeof(int));

    p = reduce_par(vector,largo);
    // printf("sizeof of array: %d\n",(int) (sizeof(vector)/sizeof(int)));
    printf("sizeof of array: %d\n", largo);

    for (i = 0; i < largo; i++) {
        printf("-->%d \n", *(p + i));
    }


    // for (i = 0; i < 9; i++) {
    //     printf("-->%d \n", vector[i]);
    // }

    return 0;
}


