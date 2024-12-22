#include <stdio.h>

int inv (int n,int c);
int main() {
    int n;

    printf("\nIntroduce un numero:");
    scanf ("%d",&n);
    if (n<0){
        for (int c=-1;c>=2*n;c--){
            printf ("\t%d",inv(n,c));
        }
    }else{
        for (int c=1;c<=2*n;c++){
            printf ("\t%d",inv(n,c));
        }
    }
    return 0;
}
int inv(int n,int c){
    if (n==0){
        return 0;
    }else{
        return (n-c);
    }

}