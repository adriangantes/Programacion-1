#include <stdio.h>

int main() {
    int n,copia,cifra,reves=0;

    printf("\nIntroduce un numero:");
    scanf("%d",&n);
    copia=n;

    while (n!=0){
        cifra=n%10;
        printf ("%d",cifra);
        reves=reves*10+cifra;
        n=n/10;
        printf ("\n%d->%d",n,reves);
    }

    if (copia==reves){
        printf ("\n\nEl numero %d es capicua\n",copia);
    }
    else{
        printf("\n\nEl numero %d no es capicua\n",copia);
    }

    return 0;
}
