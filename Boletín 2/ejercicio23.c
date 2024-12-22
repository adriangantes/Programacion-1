#include <stdio.h>

int main() {
    int n;

    do{
        printf ("\nNumero entero entre 20 y 30 inclusive:");
        scanf ("%d",&n);
        if (n <20 || n>30){
            printf ("Error, %d no es un numero entre 20 y 30.\n",n);
        }
    }while(n <20 || n>30);
        printf ("\n%d es un numero entre 20 y 30.",n);

    return 0;
}
