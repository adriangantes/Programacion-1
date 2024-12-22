#include <stdio.h>

int main() {
    int tres,uno, t;

    printf("Num de 3 cifras positivo:");
    scanf("%d",&tres);
    printf("Num de 1 cifra positivo:");
    scanf("%d",&uno);

    if(tres>1000 || tres<=100){
        printf ("\nEl primer numero tiene mas de 3 cifras o no es positivo");
    }else if(uno>10 || uno<=0){
        printf ("\nEl segundo numero tiene mas de 1 cifra o no es positivo");
    }else{
        t= tres*uno;
        printf ("\n\t     %d",tres);
        printf ("\n\t  x    %d",uno);
        printf ("\n\t________");
        printf ("\n\t    %d",t);
    }

    return 0;
}
