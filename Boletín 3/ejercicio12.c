#include <stdio.h>

int suma(int n){
    int s=0;
    for (int c=1;c<=n;c++){
        s=s+c;
    }
    return s;
}

int main() {
    int n;
    printf("\nIntroduce un numero entero positivo:");
    scanf ("%d",&n);
    printf ("\nLa suma de los %d numeros positivos es %d\n",n,suma(n));
    return 0;
}
