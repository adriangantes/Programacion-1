#include <stdio.h>

int main() {
    int a,e,i,o,u,c,r1,r2,r3,r4,r5;
    a=1, e=2, i=3, o=4, u=5;
    c=0;
    r1=0,r2=0,r3=0,r4=0,r5=0;

    while (c<=10){
        r1=a*c;
        r2=e*c;
        r3=i*c;
        r4=o*c;
        r5=u*c;
        printf ("\n%d X %d = %d\t%d X %d = %d\t%d X %d = %d\t%d X %d = %d\t%d X %d = %d\t",a,c,r1,e,c,r2,i,c,r3,o,c,r4,u,c,r5);
        c=c+1;
        r1=0,r2=0,r3=0,r4=0,r5=0;
    }
    return 0;
}
