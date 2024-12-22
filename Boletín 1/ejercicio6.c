#include <stdio.h>
#include <math.h>

int main() {
    float radio;
    float area;
    float volumen;
    printf ("Radio de la esfera:");
    scanf ("%f", &radio);
    area= 4*3.14*radio*radio;
    volumen=(4*3.14*powf(radio, 3))/3;
    printf ("El area es %.2f y el volumen es %.2f de una circunferencia de radio %f",area,volumen,radio);
    return 0;
}
