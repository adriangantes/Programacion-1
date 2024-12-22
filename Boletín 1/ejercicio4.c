#include <stdio.h>

int main() {
    float base;
    float altura;
    float area;

    printf ("Base del rectangulo:");
    scanf ("%f", &base);
    printf ("Altura del rectangulo:");
    scanf ("%f",&altura);

    area= base*2+altura*2;

    printf ("El area del rectangulo es: %.3f",area);
    return 0;
}
