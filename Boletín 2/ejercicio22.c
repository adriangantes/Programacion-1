#include <stdio.h>

int main() {
    int p,i,ps,is,sp,si;
    sp=0;
    si=0;
    ps=1;
    is=1;
    p=0;
    i=1;

    while (ps<100){
        p=p+2;
        sp=sp+p;
        ps=ps+1;
    }
    while (is<100){
        i=i+2;
        si=si+i;
        is=is+1;
    }
    printf("\nLa suma de los 100 primeros numeros enteros pares es: %d",sp);
    printf("\nLa suma de los 100 primeros numeros enteros impares es: %d\n",si);
    return 0;
}
