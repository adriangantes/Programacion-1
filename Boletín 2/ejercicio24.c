#include <stdio.h>

int main() {
    int i,c,r;
    i=7;
    c=0;

    while (c<=10){
        r=i*c;
        printf ("\n%d X %d = %d",i,c,r);
        c=c+1;
    }

    return 0;
}
