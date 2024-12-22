#include <stdio.h>

char valor (int n){
    if (n<0){
        return 'N';
    }else{
        return 'P';
    }
}

int main() {
    int n;

    printf("\nIntroduzca un numero entero:");
    scanf ("%d",&n);
    printf("\nEl numero es %c\n",valor(n));

    return 0;
}
