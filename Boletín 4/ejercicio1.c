#include <stdio.h>
#define numeros 10


int main() {
    int n[numeros];

    printf("\nIntroduzca %d numeros:",numeros);
    for (int i=0;i<numeros;i++){
        scanf ("%d",&n[i]);
    }
    printf("\nLos %d numeros introducidos son:\n",numeros);
    for (int i=0;i<numeros;i++){
        printf ("%d\t",n[i]);
    }
    printf("\n");
    return 0;
}
