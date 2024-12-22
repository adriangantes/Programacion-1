#include <stdio.h>

int main() {
    char name[50], apellido[50], apellido2[50];
    float sueldo, ocio, comida,transporte;
    float pocio, pcomida, ptransporte, gasto;

    printf ("Nombre y apellidos:");
    scanf ("%s %s %s", name, apellido,apellido2);
    printf ("Sueldo mensual (en €):");
    scanf ("%f",&sueldo);
    printf ("Gasto en ocio semanal (en €):");
    scanf ("%f",&ocio);
    printf ("Gasto en comida semanal (en €):");
    scanf ("%f",&comida);
    printf ("\nGasto en transporte semanal (en €):");
    scanf ("%f",&transporte);

    pocio= (ocio/sueldo)*100;
    pcomida= (comida/sueldo)*100;
    ptransporte= (transporte/sueldo)*100;
    gasto= ocio+comida+transporte;

    printf ("\n*****************************************************************");
    printf ("\n***********\t %s %s %s: %.2f €\t***********", name,apellido,apellido2, sueldo);
    printf ("\nGastos:   Ocio: %.2f% \t Comida: %.2f% \t Transporte: %.2f% ",pocio,pcomida,ptransporte);
    printf ("\n*****************************************************************");
    printf("\nGastos semanal total (en €): %.2f", gasto);
    return 0;
}
