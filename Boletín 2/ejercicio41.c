#include <stdio.h>


int main() {
    int z=0;
    for (int a=1,b=2,y,x;z<=1000;++a,++b){
        x=a^2;
        y=b^2;
        z=(x+y)^(1/2);
        if (z%2){
            printf ("\n%d^2 * %d^2= %d^2",a,b,z);
        }
    }
    return 0;
}
