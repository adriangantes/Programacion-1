#include <stdio.h>

int main() {
    int n;

    printf ("Introduzca su numero entero:");
    scanf ("%d",&n);
    if(n%2==0){
        printf ("Tu numero es par.");
    }else{
        printf ("Tu numero es impar.");
    }

    return 0;
}
