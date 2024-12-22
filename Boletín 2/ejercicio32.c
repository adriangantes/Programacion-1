#include <stdio.h>
#include <math.h>

int main() {
    int n,e,t=1;

    printf("\nIntroduzca el numero del cual quiere calcular su potencia:");
    scanf ("%d",&n);
    printf("Introduzca el exponente entero positivo:");
    scanf ("%d",&e);
    while (e<=0){
        printf("\nEl exponente NO es un numero entero positivo.");
        printf("\nIntroduzca el exponente entero positivo:");
        scanf ("%d",&e);
    }
    for (int c=1;c<=e;c++){
        t*=n;
    }

    printf("\n\t\t%d^(%d)= %d\n",n,e,t);
    return 0;
}
