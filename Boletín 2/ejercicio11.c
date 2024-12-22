#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,disc,xR1,xR2,xI,xR;

    printf("Escriba el valor de a: ");
    scanf("%f", &a);
    printf("Escriba el valor de b: ");
    scanf("%f", &b);
    printf("Escriba el valor de c: ");
    scanf("%f", &c);
    if (a != 0) {
        disc = pow(b, 2.0) - 4 * a * c;
        if (disc > 0.0) {
            printf("Las dos raices son reales: ");
            xR1 = ((-b + sqrt(disc)) / (2.0 * a));
            xR2 = ((-b - sqrt(disc)) / (2.0 * a));
            printf("x1=%.2f  x2=%.2f", xR1, xR2);
        } else {
            if (disc == 0.0) {
                xR1 = (-b) / (2.0 * a);
                printf("La ecuacion solo tiene una raiz %.2f", xR1);
            } else { /* disc <0 */
                xR = (-b / (2.0 * a));
                xI = (sqrt(-disc) / (2.0 * a));
                printf("La solución es compleja\n");
                printf("La parte real es %.2f y la imaginaria es +/-%.2fi", xR, xI);
            }
        }
    }else{
        printf("Es una recta, el punto de corte es: ");
        xR1 = -c/b;
        printf("x=%.2f", xR1);
        printf("\n\n");
    }
    return 0;
}
