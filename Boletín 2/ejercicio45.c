#include <stdio.h>

int main() {
    float pi,cap,n,interes;

    printf("\nIntroduce el capital inicial:");
    scanf ("%f",&cap);
    while(cap<=0){
        printf("Capital equivocado. Vuelve a introducir el capital:");
        scanf ("%f",&cap);
    }
    printf("\nIntroduce el interes anual:");
    scanf("%f",&interes);
    while (interes<=0){
        printf("Interes equivocado. Vuelve a introducir el interes:");
        scanf ("%f",&interes);
    }

    pi=interes/100;
    n=1/pi;

    printf("\nPara duplicar %.f con un interes anual del %.f necesitas %.f anhos.\n",cap,interes,n);
    return 0;
}
