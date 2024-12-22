#include <stdio.h>
int Total(int n);
int main() {
    int n;
    printf("\nIntroduce un numero:");
    scanf ("%d",&n);
    for (int i=1;i<=n;i++){
        printf ("%d\n", Total(i));
    }
    return 0;
}

int Total (int n){
    if(n<=1){
        return 1;
    }else{
        return (n + Total(n-1));
    }
}
