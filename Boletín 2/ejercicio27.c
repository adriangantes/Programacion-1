#include <stdio.h>

int main() {
    int n,c,s1,s2,s3,i;
    n=0,c=0;

    while (c<100){
        n=n+1;
        s1=s1+n;
        c=c+1;
    }
    printf("\nSuma de los 100 primeros numeros enteros: %d\n",s1);

    c=0,n=0;
    do {
        n=n+1;
        s2=s2+n;
        c=c+1;
    }while (c!=100);
    printf("\nSuma n2 de los 100 primeros numeros enteros: %d\n",s2);

    n=0;
    for (i = 0; i < 100; i ++){
        n=n+1;
        s3=s3+n;
    }
    printf("\nSuma n3 de los 100 primeros numeros enteros: %d\n",s3);

    return 0;
}
