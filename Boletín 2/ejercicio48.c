#include <stdio.h>

int main() {
    int n,r=0,cont=1;

    printf("\nNumero de elementos del triangulo de Floyd:");
    scanf ("%d",&n);
    while (n<=0){
        printf("Numero de elementos eqivocado, vuelve a introducir la cantidad:");
        scanf ("%d",&n);
    }

    for (int i=1;cont<=n;i++) {
        printf("\n");
        for (int c=1;c<=i && cont<=n;c++){
            r++;
            printf("\t%d", r);
            cont++;
        }
    }

    printf("\n");
    return 0;
}
