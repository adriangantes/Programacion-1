#include <stdio.h>

int main() {
    int n,r=0;

    printf("\nNumero de filas del triangulo de Floyd:");
    scanf ("%d",&n);
    while (n<=0){
        printf("Numero de filas eqivocado, vuelve a introducir el numero:");
        scanf ("%d",&n);
    }

    for (int i=1;i<=n;i++) {
        printf("\n%d",i);
        for (int c=1;c<=i;c++){
            r++;
            printf("\t%d", r);
        }
    }

    printf("\n");
    return 0;
}
