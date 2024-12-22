#include <stdio.h>

int main() {
    int n1=0,n2=1,n,t,c=3,s=0;

    printf("\nIntroduzca un numero entero positivo:");
    scanf ("%d",&n);

    while (n<=0){
        printf("\nEl numero introducido no es entero o positivo:");
        printf("\nIntroduzca un numero entero positivo:");
        scanf ("%d",&n);
    }

    if(n==1) {
        printf("\nEl valor del termino %d en la sucesion de Fibonacci es: 0\n", n);
        printf("\nLa suma de los terminos anterioes al termino %d inclusive en la sucesion de Fibonacci es: 0\n", n);
    }else if (n==2){
        printf("\nEl valor del termino %d en la sucesion de Fibonacci es: 1\n", n);
        printf("\nLa suma de los terminos anterioes al termino %d inclusive en la sucesion de Fibonacci es: 1\n", n);
    }else{
        while (c<=n){
            t=n1+n2;
            s=t+s;
            n1=n2;
            n2=t;
            c+=1;
        }
        s++;
        printf ("\nEl valor del termino %d en la sucesion de Fibonacci es: %d  %d\n",n,t,s);
    }
    while (c<=n+2){
        t = n1 + n2;
        n1 = n2;
        n2 = t;
        c+=1;
    }
    s=t-1;
    printf("\nLa suma de los terminos anterioes al termino %d inclusive en la sucesion de Fibonacci es: %d\n", n,s);
    return 0;
}
