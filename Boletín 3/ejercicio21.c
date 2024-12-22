#include <stdio.h>

int term(int n){
    int t;
    if(n==1) {
        return 0;
    }else if (n==2){
        return 1;
    }else{
        for(int n1=0,n2=1,c=3;c<=n;c++){
            t=n1+n2;
            n1=n2;
            n2=t;
        }
        return t;
    }

}

int main() {
    int n;

    printf("\nIntroduzca un numero entero positivo:");
    scanf ("%d",&n);

    while (n<=0){
        printf("\nEl numero introducido no es entero o positivo:");
        printf("\nIntroduzca un numero entero positivo:");
        scanf ("%d",&n);
    }

    if(term(n)==0) {
        printf("\nEl valor del termino %d en la sucesion de fibonacci es: 0\n", n);
    }else if (term(n)==1){
        printf("\nEl valor del termino %d en la sucesion de fibonacci es: 1\n", n);
    }else{
        printf ("\nEl valor del termino %d en la sucesion de fibonacci es: %d\n",n,term(n));
    }

    return 0;
}
