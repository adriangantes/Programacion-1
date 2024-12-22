#include <stdio.h>

int main() {
    int num;

    printf ("Introduzca su numero entero:");
    scanf ("%d",&num);
    if(num>=0){
        printf ("Tu numero es positivo.");
    }else {
        printf ("Tu numero es negativo.");
    }
    return 0;
}
