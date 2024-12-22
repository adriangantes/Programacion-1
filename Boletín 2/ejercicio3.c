#include <stdio.h>

int main() {
    int a, b;

    printf ("Introduce el numero que quiere dividir:");
    scanf ("%d", &a);
    printf ("Introduce el numero por el que quiere dividir:");
    scanf ("%d", &b);

    if (a%b==0){
        printf ("No se puede dividir entre 0.");
    }else{
        printf ("Se puede dividir por el numero que quiere.");
    }

    return 0;
}
