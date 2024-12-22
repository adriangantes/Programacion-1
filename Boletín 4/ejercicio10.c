#include <stdio.h>

void datos (int lista, int valor1[lista],int valor2[lista]){

    printf ("\nValores del array 1:\n");
    for (int i=0;i<lista;i++){
        scanf ("%d",&valor1[i]);
        getchar();
    }

    printf ("\nValores del array 2:\n");
    for (int i=0;i<lista;i++){
        scanf ("%d",&valor2[i]);
        getchar();
    }
}

void ordenar (int lista,int lista2, int valor1[lista],int valor2[lista],int res[lista2]){
    int tmp;

    for (int i=0;i<lista;i++){
        res[i]=valor1[i];
        res[99-i]=valor2[i];
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

void mostrar (int lista2, int res[lista2]){
    for (int i=0;i<lista2;i++){
        printf ("%d\t",res[i]);
    }
}

int main() {
    const int lista=50,lista2=100;
    int valor1[lista],valor2[lista],res[lista2];

    datos (lista,valor1,valor2);
    ordenar (lista,lista2,valor1,valor2,res);

    printf("\n");
    mostrar(lista2,res);
    printf("\n");

    return 0;
}
