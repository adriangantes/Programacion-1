#include <stdio.h>

int fun(int const x){
    int t,t1,t2,t3,t4,t5;
    t1=3*(x*x*x*x*x);
    t2=2*(x*x*x*x);
    t3=-(5*(x*x*x));
    t4=-(x*x);
    t5=7*x;
    t=t1+t2+t3+t4+t5-6;
    return t;
}

int main() {
    int x;

    printf("\nIntroduce un valor de x para la funcion 3*x^5+2*x^4-5*x^3-x^2+7*x-6:");
    scanf ("%d",&x);
    printf("\nEl resultada de la funcion con x=%d es %d",x,fun(x));
    return 0;
}
