#include <stdio.h>

int main() {
    char n[50], a[50];
    int e;

    printf("\nNombre y apellido:");
    scanf("%s %s", &n, &a);
    printf("Edad:");
    scanf("%d", &e);

    if (e < 32 && e>0){
        printf("%s %s es JOVEN", n, a);
    } else if (e>=32 && e<=75){
        printf ("%s %s es ADULTA",n,a);
    }else if (e>75 && e<=150){
        printf ("%s %s es ANCIANO",n,a);
    }else{
        printf ("%s %s esta muertx",n,a);
    }

    return 0;
}
