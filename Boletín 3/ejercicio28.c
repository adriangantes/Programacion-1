#include <stdio.h>

int cal(int n,int m){
    return n*m;
}
int main() {
    int n,m;

    printf("\nIntroduce un numero entero:");
    scanf ("%d",&n);
    printf ("Introduce el multiplicador maximo:");
    scanf ("%d",&m);

    for (int c=1;c<=m;c++){
        printf("\n%d x %d = %d",n,c,cal(n,c));
    }
    printf ("\n");
    return 0;
}
