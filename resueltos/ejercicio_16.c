#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100
#define M 10

int main(int argc, char const *argv[]) {
    
    char palabras[N][M];
    int largo,i, mayor = 0, mayor_indice = 0 ;

    printf("Cantidad de palabras: \n");
    scanf("%d",&largo);


    for (i = 0; i < largo; i++) {
        printf("Ingrese palabra: \n");
        scanf("%s",palabras[i]);
        // printf("palabra es: %s\n",palabras[i]);

        if (i == 0) {
            mayor = strlen(palabras[i]);
        } else {            

            if ((int)strlen(palabras[i]) > mayor ) {
                mayor = strlen(palabras[i]);
                mayor_indice = i;
            }
        }

    }

    printf("Mayor palabra es: %s\n", palabras[mayor_indice]);

    return 0;
}