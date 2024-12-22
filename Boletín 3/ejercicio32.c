#include <stdio.h>

void fibonacci(int n,int n1,int n2,int c);
int main() {

    int n1=0,n2=1,n,t,c=3;

    printf("\nIntroduzca un numero entero positivo:");
    scanf ("%d",&n);

    while (n<=0){
        printf("\nEl numero introducido no es entero o positivo:");
        printf("\nIntroduzca un numero entero positivo:");
        scanf ("%d",&n);
    }

    fibonacci(n,n1,n2,c);

    return 0;
}
void fibonacci(int n,int n1,int n2,int c){
    int t;
    if(n==1) {
        printf("\nEl valor del termino %d en la sucesion de fibonacci es: 0\n", n);
    }else if (n==2){
        printf("\nEl valor del termino %d en la sucesion de fibonacci es: 1\n", n);
    }else if (c<=n){
        t=n1+n2;
        c++;
        printf ("\n%d",t);
        fibonacci(n,n2,t,c);
    }else{
        printf ("\nEl valor del termino %d en la sucesion de fibonacci es: %d\n",n,n2);
    }
}
