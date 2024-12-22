#include <stdio.h>

int main() {
    const int IVA=24;
    float total;
    float precio;

    printf("Introduzca el precio sin IVA:");
    scanf ("%f",&precio);
    total= precio+(precio*0.21);
    printf ("El precio total con IVA es: %.2f",total);
    return 0;
}
