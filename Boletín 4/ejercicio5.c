#include <stdio.h>

void pedir(int hora,float t[hora]){
    for (int c=0;c<hora;c++){
        printf ("Introduce la temperatura entre la hora %d y %d:",c,c+1);
        scanf ("%f",&t[c]);
    }
}
void media(int hora,float t[hora]){
    float s=0, max=-20,min=50;
    for (int c=0;c<hora;c++){
        s+=t[c];
        if(t[c]>max){
            max=t[c];
        }
        if (t[c]<min){
            min=t[c];
        }
    }
    printf ("\nTemperatura media: %.2f\n",s/24);
    printf ("\nTemperatura maxima: %.2f\n",max);
    printf ("\nTemperatura minima: %.2f\n",min);
}
int main() {
    const int  hora=24;
    float t [hora];
    printf("\n");
    pedir(hora,t);
    media(hora,t);
    printf("\n");
    return 0;
}
