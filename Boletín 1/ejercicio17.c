#include <stdio.h>

int main() {
    int a1,b1,c1,d1,a2,b2,c2,d2;
    int a,b,c,d;

    printf ("Matriz 2x2 nº1: (a1   b1)");
    printf ("\n\t\t (c1   d1)\n");
    printf ("Matriz 2x2 nº2: (a2   b2)");
    printf ("\n\t\t (c2   d2)");

    printf ("\nCon la informacion anterior, rellena el espacio a1:");
    scanf ("%d", &a1);
    printf ("Rellena el espacio b1:");
    scanf ("%d", &b1);
    printf ("Rellena el espacio c1:");
    scanf ("%d", &c1);
    printf ("Rellena el espacio d1:");
    scanf ("%d", &d1);
    printf ("\nRellena el espacio a2:");
    scanf ("%d", &a2);
    printf ("Rellena el espacio b2:");
    scanf ("%d", &b2);
    printf ("Rellena el espacio c2:");
    scanf ("%d", &c2);
    printf ("Rellena el espacio d2:");
    scanf ("%d", &d2);

    a= a1*a2+b1*c2;
    b= a1*b2+b1*d2;
    c= c1*a2+d1*c2;
    d= c1*b2+d1*d2;

    printf ("\nResultado del producto de las matrices:\n");
    printf ("(%d   %d)\n",a,b);
    printf ("(%d   %d)\n",c,d);
    return 0;
}
