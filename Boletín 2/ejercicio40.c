#include <stdio.h>

int main() {
    float n,t=0,d=1;

    printf("\nIntroduzca un limite entero positivo:");
    scanf ("%f",&n);

    for (d;t<=n;++d){
        t=t+(1/d);
        printf ("%.5f+",1/d);
    }
    d--;
    printf ("\n\nUltima suma: 1/%.0f",d);
    printf ("\n%.4f > %.f",t,n);

    return 0;
}
