#include <stdio.h>

int sol(int n){
    int r;
    for (int i=1;i<n;i++){
        if (n%i==0){
            r=i;
        }
    }
    return r;
}

int main() {
    int n;

    printf("\nIntroduce un numero:");
    scanf("%d",&n);
    printf ("\nEl mayor divisor de %d es %d\n",n,sol(n));
    return 0;
}
