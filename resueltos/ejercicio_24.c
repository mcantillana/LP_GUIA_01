#include <stdio.h>
#define arrayLength(array) (sizeof((array))/sizeof((array)[0]))


float media (float datos[], int N);
float media_p(float *datos, int N) ;


int main(int argc, char const *argv[]) {
    
    float lol[] = {1,2,3,2.5,5};
    
    printf("Media: %f\n", media_p(lol,(int)arrayLength(lol)));

    return 0;
}

float media (float datos[], int N) {
    int i;
    float suma = 0;
    for (i=0; i<N; i++)
        suma = suma + datos[i];

    return suma/N;
} 

float media_p(float *datos, int N) {
    int i;
    float suma = 0;

    for (i=0;i<N;i++) {
        suma = suma + *(datos+i);
    }

    return suma/N;
}
