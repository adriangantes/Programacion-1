#include <stdio.h>

int main() {
    float s=0,t,n;
    int c=0;

    printf("\nIntroduzca los numeros separados por espacios para calcular su media (ENTER para calcular):\n");
    do{
        scanf ("%f",&n);
        c++;
        s+=n;
    }while (getchar() != '\n');
    t= s/c;
    printf("\nMedia= %.2f\n",t);
    return 0;
}
