#include <stdio.h>

void pedir(int dia, int hora,float semana[dia][hora]){
    for (int i=0;i<dia;i++){
        printf ("\nDia %d",i+1);
        for (int c=0;c<hora;c++){
            printf ("\nIntroduce la temperatura entre la hora %d y %d:",c,c+1);
            scanf ("%f",&semana[i][c]);
        }
    }
}
void media(int dia, int hora,float semana[dia][hora]){
    float sh=0,sd=0,ss=0;
    for (int i=0;i<dia;i++){
        for (int c=0;c<hora;c++){
            ss+=semana[i][c];
        }
    }
    printf ("\nTemperatura media semanal: %.2f\n",ss/168);

    for (int i=0;i<dia;i++){
        for (int c=0;c<hora;c++){
            sd+=semana[i][c];
        }
        printf ("\nTemperatura media del dia %d: %.2f",i+1,sd/24);
    }

    for (int c=0;c<hora;c++){
        for (int i=0;i<dia;i++){
            sh+=semana[i][c];
        }
        printf ("\nTemperatura media de la hora %d: %.2f",c+1,sh/7);
    }
}
int main() {
    const int dia=7, hora=24;
    float semana [dia][hora];
    pedir(dia,hora,semana);
    media(dia,hora,semana);
    printf("\n");
    return 0;
}
