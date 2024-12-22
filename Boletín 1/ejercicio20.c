#include <stdio.h>

int main() {
    char nombre[50],apellido[50];
    int edad,c1,c2,c3;
    float pc1,pc2,pc3,t;

    printf ("Nombre y apellido:");
    scanf ("%s %s",nombre,apellido);
    printf ("Edad:");
    scanf ("%d",&edad);
    printf ("Numero de creditos en primera matricula:");
    scanf ("%d", &c1);
    printf ("Numero de creditos en segunda matricula:");
    scanf ("%d", &c2);
    printf ("Numero de creditos en tercera matricula:");
    scanf ("%d", &c3);

    pc1= 15.45*c1;
    pc2= 15.45*c2+(15.45*c2*0.25);
    pc3= 15.45*c3+(15.45*c3*0.5);
    t= pc1+pc2+pc3;

    printf ("\n*********************************************");
    printf ("\n*****\t %s %s: %d anhos \t*****\n",nombre,apellido,edad);
    printf ("\n Creditos M1: %d \t Coste M2: %.2f",c1,pc1);
    printf ("\n Creditos M2: %d \t Coste M2: %.2f",c2,pc2);
    printf ("\n Creditos M3: %d \t Coste M3: %.2f",c3,pc3);
    printf ("\n*********************************************");
    printf ("\n Coste Total Matricula: %.2f",t);

    return 0;
}
