#include <stdio.h>

float cal(float cond,float induc,float frec){
    float xl,xc;
    xl=2*3.14*frec*induc;
    xc=1/(2*3.14*cond*frec);
    return xl-xc;
}

int main() {
    float cond,induc,frec;

    printf("\nValor del condensador (en faradios):");
    scanf ("%f",&cond);
    printf("\nValor de inductancia (en henrios):");
    scanf ("%f",&induc);
    printf("\nValor de la frecuencia (en hertzios):");
    scanf ("%f",&frec);

    printf ("\nLa impedancia del circuito es: Z=%.3f\n",cal(cond,induc,frec));
    return 0;
}
