#include <stdio.h>

int main() {
    float base;
    float altura;
    float area;

    printf ("Base del rectangulo:");
    scanf ("%f", &base);
    printf ("Altura del rectangulo:");
    scanf ("%f",&altura);

    area= base*altura;

    printf ("El area del rectangulo es: %.3f",area);
    return 0;
}
