#include <stdio.h>

int main() {
    int m,d,t,n;

    printf("Introduce una fecha del anho 2022 (dd mm):");
    scanf("%d %d",&d,&m);

    if (m==2){
        n=31;
    }
    if (m==3){
        n=59;
    }
    if (m==4){
        n=90;
    }
    if (m==5){
        n=120;
    }
    if (m==6){
        n=151;
    }
    if (m==7){
        n=181;
    }
    if (m==8){
        n=212;
    }
    if (m==9){
        n=243;
    }
    if (m==10){
        n=273;
    }
    if (m==11){
        n=304;
    }
    if (m==12){
        n=334;
    }

    t = d+n;
    printf ("La fecha corresponde al dia %d del anho 2022",t);

    return 0;
}
