#include <stdio.h>

int main() {
    int i,c,r;
    c=0;
    r=0;

    printf("Introduzca un numero para mostrar su tabla de multiplicar:");
    scanf ("%d",&i);

    while (c<=10){
        r=i*c;
        printf ("\n%d X %d = %d",i,c,r);
        c=c+1;
        r=0;
    }

    return 0;
}
