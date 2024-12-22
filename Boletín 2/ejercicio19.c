#include <stdio.h>
//#include <string.h>
int main() {
    int a,m;
    printf("Introduzca el numero del mes:");
    scanf ("%d",&m);

    switch (m){
        case 2:
            printf ("Introduzca el anho:");
            scanf ("%d",&a);
            if (a%4==0){
                printf ("%d tiene 29 dias",m);
            }else{
                printf ("%d tiene 28 dias",m);
            }
            break;
        case 4:case 6:case 9: case 11:
            printf("%d tiene 30 dias",m);
            break;
        default: printf("%d tiene 31 dias",m);
    }

    return 0;
}
