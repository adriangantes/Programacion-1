#include <stdio.h>

int main() {
    float base;
    float altura;
    float area;

    printf ("Base del triangulo:");
    scanf ("%f", &base);
    printf ("Altura del triangulo:");
    scanf ("%f",&altura);

    area= (base*altura)/2;

    printf ("El area del triangulo es: %.3f",area);
    return 0;
}
