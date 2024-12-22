#include <stdio.h>

void datos (int fila, int colu, int valor[fila][colu]) {

    printf("\nIntroduce los valores de la matriz (separados por espacios):\n");

    for (int i = 0; i < fila; i++) {
        for (int c = 0; c < colu; c++) {
            scanf("%d", &valor[i][c]);
        }
    }
}

void mostrar (int fila,int colu, int valor[fila][colu]){
    for (int i=0;i<fila;i++){
        for (int c=0;c<colu;c++){
            printf ("%d\t",valor[i][c]);
        }
        printf ("\n");
    }
}

void calculo(int fila, int colu, int valor[fila][colu]){
    int sf=0,sc=0,sd=0,st=0;

    for (int i=0;i<1;i++){
        for (int c=0;c<colu;c++){
            st+=valor[i][c];
        }
    }

    for (int i=0;i<fila;i++){
        sf=0;
        for (int c=0;c<colu;c++){
            sf+=valor[i][c];
        }
        if (st!=sf){break;}
    }

    for (int i=0;i<fila;i++){
        sc=0;
        for (int c=0;c<colu;c++){
            sc+=valor[c][i];
        }
        if (st!=sc){break;}
    }

    for (int i=0, c=0;i<fila;i++,c++){
        sd+=valor[i][c];
    }
    if (st!=sd){
        printf ("\nLa matriz no es un cuadrado magico.");
    }else{
        sd=0;
        for (int i=fila-1, c=0;c<fila;i--,c++){
            sd+=valor[i][c];
        }
        if (st!=sd || st!=sc || st!=sf){
            printf ("\nLa matriz no es un cuadrado magico.");
        }else{
            printf ("\nLa matriz es un cuadrado magico.");
        }
    }
}

int main() {
    int fila,colu;

    printf ("\nNumero de filas y columnas de la matriz:");
    scanf ("%d",&fila);
    colu=fila;
    int valor[fila][colu];

    datos (fila,colu,valor);
    mostrar(fila,colu,valor);
    calculo (fila,colu,valor);

    printf("\n");
    return 0;
}

