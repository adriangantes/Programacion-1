#include <stdio.h>

int main() {
    int c;
    char m;

    printf("\nIntroduzca la cantidad (Hasta 10.000. No acepta decimales.):");
    scanf ("%d",&c);
    getchar();
    while (c<0 || c>10000){
        printf ("Cantidad equivocada. Introduce de nuevo solo la cantidad:");
        scanf ("%d",&c);
    }
    printf("\n\"E\" para euros y \"S\" para dolares.\n");
    printf("Introduzca la moneda que desea cambiar:");
    scanf ("%c", &m);
    getchar();
    while (m!='E'&& m!='e'&& m!='S'&& m!='s') {
        printf("Moneda equivocada. Introduce de nuevo la moneda:");
        scanf("%c", &m);
        getchar();
    }
    if (m=='e'||m=='E'){
        printf ("%d E = %d $",c,c);
    }else{
        printf ("%d $ = %d E",c,c);
    }

    return 0;
}
