#include <stdio.h>

int main() {
    const float irpf=0.15, des=0.1;
    float sal,h,i,d,t;

    printf("Salario anual:");
    scanf ("%f",&sal);
    printf("Hijos menores de 18:");
    scanf ("%f",&h);

    i=sal*irpf;
    printf ("IRPF: %.2f",i);
    d=i*(des*h);
    printf ("\nRedducion por hijos: %.2f",d);
    t=i-d;
    printf("\nTotal: %.2f",t);

    return 0;
}
