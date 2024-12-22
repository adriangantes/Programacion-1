#include <stdio.h>

int main() {
    char ciudad[50];
    float fmax, fmin,cmax, cmin;

    printf("Ciudad:");
    scanf("%s", ciudad);
    printf("Temperatura maxima (ºF):");
    scanf("%f", &fmax);
    printf("Temperatura minima (ºF):");
    scanf("%f", &fmin);

    cmax=(fmax-32)/1.8;
    cmin=(fmin-32)/1.8;

    printf("\nCiudad: %s\n", ciudad);
    printf ("T max (ºF)\tT min(ºF)\tT max (ºC)\tT min(ºC)\n");
    printf("%.2f \t\t %.2f \t\t %.2f \t\t %.2f\n", fmax, fmin, cmax, cmin);
    return 0;
}
