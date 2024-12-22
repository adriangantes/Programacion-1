#include <stdio.h>

int fact(int n){
    int t=1;
    for(int c=1;c<=n;c++){
        t=c*t;
    }
    return t;
}

int main() {
    int n=1;

    while (n!=0){
       printf("\nIntroduce un numero entero (0 para salir):");
       scanf("%d",&n);
       if (n!=0){printf ("El factorial de %d es: %d!= %d",n,n,fact(n));}
    }

    return 0;
}
