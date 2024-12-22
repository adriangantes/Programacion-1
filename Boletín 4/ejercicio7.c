#include <stdio.h>

void get_data (int dias,int concept,float gastos[dias][concept]){

    printf("\n");
    for(int i=0;i<dias;i++){
        printf ("Gastos transporte dia %d:",i+1);
        scanf ("%f",&gastos[i][0]);
    }

    printf("\n");
    for(int i=0;i<dias;i++){
        printf ("Gastos alimentacion dia %d:",i+1);
        scanf ("%f",&gastos[i][1]);
    }

    printf("\n");
    for(int i=0;i<dias;i++){
        printf ("Gastos ocio dia %d:",i+1);
        scanf ("%f",&gastos[i][2]);
    }
}

void calc(float pre,int dias, int concept, float gastos[dias][concept]){
    float s=0,st=0,sa=0,so=0,sp,por;

    for (int c=0;c<concept;c++){
        for (int i=0;i<dias;i++){
            s+=gastos[i][c];
        }
    }
    printf ("\nGastos total de la semana: %.2f\n",s);

    for (int c=0;c<concept;c++){
        for (int i=0;i<dias;i++){
            if (c==0){
                st+=gastos[i][c];
            } else if (c==1){
                sa+=gastos[i][c];
            }else{
                so+=gastos[i][c];
            }
        }
    }

    printf ("\nGastos total en transporte: %.2f",st);
    printf ("\nGastos total en alimentacion: %.2f",sa);
    printf ("\nGastos total en ocio: %.2f\n",so);
    printf ("\nGastos medio en transporte: %.2f",st/7);
    printf ("\nGastos medio en alimentacion: %.2f",sa/7);
    printf ("\nGastos medio en ocio: %.2f\n",so/7);

    for (int i=0;i<dias;i++){
        sp=0;
        for (int c=0;c<concept;c++){
            sp+=gastos[i][c];
            if (c==2){
                por=(sp/pre) *100;
                printf ("\nProcentaje del presupusto gastado en el dia %d: %.2f/100",i+1,por);
            }
        }
    }
}

int main() {
    const int dias=7, concept=3;
    float gastos[dias][concept],pre;

    printf ("\nIntroduzca su presupuesto semanal:");
    scanf ("%f",&pre);

    get_data(dias,concept,gastos);
    calc(pre,dias,concept,gastos);
    printf("\n");

    return 0;
}
