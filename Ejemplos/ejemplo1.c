#include <stdio.h>

int main() {
    int age; //Variable para enteros
    float altura; //Variable para decimales
    char name [50]; //Variable para texto
    int tiempo;
    const int jubilar=68; //constante

    printf ("Nombre:");
    scanf ("%s",name);
    printf ("Edad:");
    scanf ("%d",&age);
    printf ("Altura en M:");
    scanf ("%f",&altura);

    tiempo= jubilar-age;

    printf ("Tu nombre es: %s\nTu edad es: %d\nTu altura en M es: %f M\n",name,age,altura);
    printf ("Años para la jubilación: %d Años XD\n", tiempo);
    printf("\nEres viejo, estas chiquito y tienes el nombre mas feo del mundo. \nSALU2 ;)\n");

    return 0;
}
