#include <stdio.h>

int main() {
    int pe;
    int c1;
    int c2;
    int c3;
    int c4;
    int c5;
    int c6;
    printf("Coordenadas del primer vector (separadas por espacios):");
    scanf ("%d %d %d",&c1,&c2,&c3);
    printf ("Coordenadas del segundo vector (separadas por espacios):");
    scanf ("%d %d %d",&c4,&c5,&c6);
    pe=c1*c4+c2*c5+c3*c6;
    printf ("\nEl producto escalar es %d",pe);
    return 0;
}
