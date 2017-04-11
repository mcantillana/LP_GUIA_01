#include <stdio.h>
#define MAX 10
int main(int argc, char const *argv[]) {
    
    int valores[MAX];
    // int i = -1;
    int i = 0;
    int negativos = 0, positivos = 0 ;

    do {

        printf("\nIngrese valor: ");
        scanf("%d",&valores[i]);

        if (valores[i] >= 0) {
            positivos ++;
        } else {
            negativos ++ ;
        }
    
    } while(valores[i++] != 0 && i < MAX) ;

    
    printf("\n Positivos: ");
    for (i = 0; i < positivos; i++) {
        printf("*");
    }

    printf("\n Negativos: ");
    for (i = 0; i < negativos; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}