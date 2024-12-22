#include <stdio.h>

int suma (int n,int total){
    int cifra=n%10;
    return cifra+total;
}

int main() {
    int n,cifra;

    printf("\nIntroduce un numero:");
    scanf("%d",&n);

    for (int total=0;n!=0;){
        printf ("\n%d",suma(n,total));
        total=suma(n,total);
        n=n/10;
    }

    return 0;
}
