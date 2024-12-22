#include <stdio.h>

int main() {
    int n,t=1;

    printf("\nIntroduzca un numero entero positivo para calcular su factorial:");
    scanf ("%d",&n);

    while (n<=0){
        printf("\nEl numero NO es un numero entero positivo.");
        printf("\nIntroduzca un numero entero positivo:");
        scanf ("%d",&n);
    }
    for (int c=1;c<=n;c++){
        t=t*c;
    }

    printf("\nEl factorial de %d es: %d!=%d\n",n,n,t);
    return 0;
}
