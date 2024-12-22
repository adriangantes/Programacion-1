#include <stdio.h>

void datos (int lista, float valor1[lista],float valor2[lista]){

    printf ("\nValores del array 1:\n");
    for (int i=0;i<lista;i++){
        scanf ("%f",&valor1[i]);
        getchar();
    }

    printf ("\nValores del array 2:\n");
    for (int i=0;i<lista;i++){
        scanf ("%f",&valor2[i]);
        getchar();
    }
}

void ordenar (int lista,int lista2, float valor1[lista],float valor2[lista],float res[lista2]){
    float tmp;

    for (int i=0;i<lista;i++){
        res[i]=valor1[i];
        res[lista2-i-1]=valor2[i];
    }

    for (int i=0;i<lista2;i++){
        for (int j=0;j<lista2-1;j++){
            if (res[j]>res[j+1]){
                tmp=res[j+1];
                res[j+1]=res[j];
                res[j]=tmp;
            }
        }
    }
}

void mostrar (int lista2, float res[lista2]){
    printf("\n");
    for (int i=0;i<lista2;i++){
        printf ("%.2f\t",res[i]);
    }
}

int main() {
    const int lista=4,lista2=8;
    float valor1[lista],valor2[lista],res[lista2];

    datos (lista,valor1,valor2);
    ordenar (lista,lista2,valor1,valor2,res);
    mostrar(lista2,res);
    printf("\n");

    return 0;
}

