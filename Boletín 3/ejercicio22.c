#include <stdio.h>

int primo(int n){
    int i;
    if (n<2) return 0;
    for (i=2;i<n;i++){
        if (n%i==0) return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("\nIntroduce un numero:");
    scanf ("%d",&n);
    printf ("%d%s es primo",n,primo(n) ? "":" no");
    return 0;
}
