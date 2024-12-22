#include <stdio.h>

int sol(int n){
    int r=0,cont=1;
    for (int i=1;i<=n;i++) {
        printf("\n%d",i);
        for (int c=1;c<=i;c++){
            r++;
            printf("\t%d", r);
        }
    }
    return 0;
}

int main() {
    int n;

    printf("\nNumero de filas del triangulo de Floyd:");
    scanf ("%d",&n);
    while (n<=0){
        printf("Numero de filas eqivocado, vuelve a introducir las filas:");
        scanf ("%d",&n);
    }

    sol(n);

    printf("\n");
    return 0;
}
