#include <stdio.h>
#include <math.h>

int foo(float a,float b,float c,float *sol1, float *sol2){
    float aux;

    aux= powf(b,2)-4*a*c;
    if (aux<0){
        return 1;
    }else{
        *sol1=(-b+sqrt(aux))/(2*a);
        *sol2=(-b-sqrt(aux))/(2*a);
        return 0;
    }
}

int main() {
    float a,b,c,sol1,sol2;

    printf("\nIntroduce el valor de a:");
    scanf ("%f", &a);
    printf("Introduce el valor de b:");
    scanf ("%f", &b);
    printf("Introduce el valor de c:");
    scanf ("%f", &c);

    if (foo(a,b,c,&sol1,&sol2)==0){
        printf ("\nLas soluciones son %.2f y %.2f\n",sol1,sol2);
    }else{
        printf ("\nNo se puede resolver con numeros reales\n");
    }
    return 0;
}
