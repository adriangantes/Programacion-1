#include <stdio.h>

int pot(int n,int p){
    int t=1;
    for (int c=1;c<=p;c++){
        t*=n;
    }
    return t;
}

int main() {
    int n,p;

    printf("\nIntroduce un numero:");
    scanf("%d",&n);
    printf("Introduce su potencia:");
    scanf("%d",&p);

    printf ("\n%d^%d= %d\n",n,p,pot(n,p));
    return 0;
}
