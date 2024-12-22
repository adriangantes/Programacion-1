#include <stdio.h>

void fibonacci (int n,int n1,int n2,int c,int s);
int main() {

    int n1=0,n2=1,n,c=0,s=0;

    printf("\nIntroduzca un numero entero positivo:");
    scanf ("%d",&n);

    while (n<=0){
        printf("\nEl numero introducido no es entero o positivo:");
        printf("\nIntroduzca un numero entero positivo:");
        scanf ("%d",&n);
    }

    fibonacci (n,n1,n2,c,s);
    return 0;
}

void fibonacci (int n, int n1,int n2,int c,int s){
    int t;
    if (c<=n){
        c++;
        if (c==1){
            t=n1;
            s+=t;
            printf ("\n%d\t%d",t,s);
            fibonacci(n,n2,t,c,s);
        }else if (c==2){
            t=n1+n2;
            s+=t;
            printf ("\n%d\t%d",t,s);
            fibonacci(n,n2,t,c,s);
        }else if (c<=n){
            t=n1+n2;
            s=s+t;
            printf ("\n%d\t%d",t,s);
            fibonacci(n,n2,t,c,s);
        }
    }
}