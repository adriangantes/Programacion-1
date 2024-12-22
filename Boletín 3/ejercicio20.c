#include <stdio.h>

int fact(int n){
    int t=1;
    for (int c=2;c<=n;c++){
        t=t*c;
    }
    return t;
}
int main() {
    int n;

    printf("\nIntroduzca un numero (entero positivo) para calcular su factorial:");
    scanf ("%d",&n);
    printf ("\nEl factorial de %d es: %d!= %d\n",n,n,fact(n));
    return 0;
}
