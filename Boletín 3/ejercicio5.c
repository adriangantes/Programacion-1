#include <stdio.h>

int res(int n){
    int r=0,cont=1;
    for (int i=1;cont<=n;i++) {
        printf("\n");
        for (int c=1;c<=i && cont<=n;c++){
            r++;
            printf("\t%d", r);
            cont++;
        }
    }
    return 0;
}

int main() {
    int n;

    printf("\nNumero de elementos del triangulo de Floyd:");
    scanf ("%d",&n);
    while (n<=0){
        printf("Numero de elementos eqivocado, vuelve a introducir la cantidad:");
        scanf ("%d",&n);
    }

    res(n);

    printf("\n");
    return 0;
}
