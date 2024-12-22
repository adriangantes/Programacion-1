#include <stdio.h>
#define horas 7

int h[horas],maxh=0,minh=24,min,max;
void media(){
    float s=0;
    for (int i=0;i<horas;i++){
        s+=h[i];
    }
    printf ("\nMedia de horas semanal: %.2f",s/7);
    printf ("\nDia mas productivo: %d",max+1);
    printf ("\nDia menos productivo: %d",min+1);
}
void datos(){
    for (int i=0;i<horas;i++){
        printf("Horas del dia %d:",i+1);
        scanf ("%d",&h[i]);
        if (h[i]>maxh){max=i;maxh=h[i];}
        if (h[i]<minh){min=i;minh=h[i];}
    }
}
int main() {
    printf("\n");
    datos();
    media();
    printf("\n");
    return 0;
}
