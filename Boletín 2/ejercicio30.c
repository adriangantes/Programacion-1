#include <stdio.h>

int main() {
    int n,sp=0,si=0;
    printf("Introduzca los numeros enteros para calcular su suma (0 para terminar):");
    scanf ("%d",&n);
    while (n != 0){
        if (n%2==0){
            sp=sp+n;
            scanf ("%d",&n);
        }else{
            si=si+n;
            scanf ("%d",&n);
        }
    }
    printf("\nSuma de los pares= %d",sp);
    printf("\nSuma de los impares= %d",si);
    return 0;
}
