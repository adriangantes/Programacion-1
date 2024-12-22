#include <stdio.h>

int main() {
    int n;

    printf("Introduce un numero entero: ");
    scanf("%d",&n);

    if(n<0){
        n*=-1;
    } else{

    }
    printf("El valor absoluto es: %d\n", n);

    return 0;
}
