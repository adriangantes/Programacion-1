#include <stdio.h>

int main() {
    int a,m,d,e,aa,ma,da;

    printf("Fecha de nacimiento(dd mm aaaa):");
    scanf ("%d %d %d", &d,&m,&a);
    printf("Fecha actual(dd mm aaaa):");
    scanf ("%d %d %d", &da,&ma,&aa);

    if (ma<m){
        e= aa-a-1;
    }else if (ma==m){
        if (da<d){
            e=aa-a-1;
        }else{
            e=aa-a;
        }
    }else{
        e=aa-a;
    }

    printf ("Su edad es: %d",e);
    return 0;
}
