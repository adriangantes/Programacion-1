#include <stdio.h>


void datos (int lista, char valor1[lista],char valor2[lista]){

    printf ("\nValores del array 1:\n");
    for (int i=0;i<lista;i++){
        scanf ("%c",&valor1[i]);
        getchar();
    }

    printf ("\nValores del array 2:\n");
    for (int i=0;i<lista;i++){
        scanf ("%c",&valor2[i]);
        getchar();
    }
}

void ordenar (int lista,int lista2, char valor1[lista],char valor2[lista],char res[lista2]){
    char tmp;

    for (int i=0;i<lista;i++){
        res[i]=valor1[i];
        res[lista2-1-i]=valor2[i];
    }

    for (int i=0;i<lista2;i++){
        for (int j=0;j<lista2-i-1;j++){
            if (res[j]>res[j+1]){
                tmp=res[j+1];
                res[j+1]=res[j];
                res[j]=tmp;
            }
        }
    }
}

void mostrar (int lista2, char res[lista2]){
    printf("\n");
    for (int i=0;i<lista2;i++){
        printf ("%c\t",res[i]);
    }
}

int main() {
    const int lista=100,lista2=200;
    char valor1[lista],valor2[lista],res[lista2];

    datos (lista,valor1,valor2);
    ordenar (lista,lista2,valor1,valor2,res);
    mostrar(lista2,res);
    printf("\n");

    return 0;
}