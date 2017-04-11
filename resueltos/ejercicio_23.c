#include <stdio.h>
#include <stdlib.h>
#define EOV '\0'
#define len(arr) (int)(sizeof(arr)/sizeof(arr[0]))

int * reduce(int *vector, int largo) ;
int main() {
    int i ;
    int cad[] = {1,2,3,6,7,23,8,9,22};
    int *cad2 = reduce(cad,len(cad));
    printf("%d\n",cad[0]);

    printf("Validacion\n" );
    for (i = 0; i < len(cad); i++) {   
        printf("[%d]=>%d\n",i,cad2[i] );    
    }
    printf("Validacion 2\n" );
    i=0;
    while(cad2[i] != EOV) {
        printf("-> %d\n", cad2[i++]);
    }

    return 0;
}

int * reduce(int *vector, int largo) {
    
    int *tmp = (int *)malloc(largo*sizeof(int));
    int *tmp2 ;
    int i,j=0;
   
    for (i = 0; i < largo; i++) {
        if(*(vector+i)%2 == 0) {
            *(tmp+j++) = *(vector+i);            
        }
    }

    tmp2 = (int *)malloc(j*sizeof(int));

    for(i=0;i<j;i++) {
        *(tmp2+i) = *(tmp+i);
    }
    free(tmp);
    *(tmp2+i) = (int)EOV ;

    return tmp2;
}