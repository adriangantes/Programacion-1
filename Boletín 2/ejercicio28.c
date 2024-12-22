#include <stdio.h>

int main() {
    int s,n;
    n=1,s=0;
    printf("\nIntroduzca un numero para sumar (0 para terminar):");

    while (n !=0){
        scanf ("%d",&n);
        s+=n;
    }
    printf ("\nTotal= %d",s);

    return 0;
}
