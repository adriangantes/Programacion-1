#include <stdio.h>

int mes (int m) {
    if (m==12){
        return 1;
    }else{
        return (m+1);
    }
}
int main() {
    int m;

    printf("\nIntroduce el numero de un mes:");
    scanf ("%d",&m);
    printf ("El proximo mes a %d es %d.",m,mes(m));
    return 0;
}
