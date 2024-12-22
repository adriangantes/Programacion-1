#include <stdio.h>

void datos (int fila, int colu, float valor[fila][colu]) {

    printf("\nIntroduce los valores de la matriz (separados por espacios):\n");

    for (int i = 0; i < fila; i++) {
        for (int c = 0; c < colu; c++) {
            scanf("%f", &valor[i][c]);
        }
    }
}

void mostrar (int fila,int colu, float valor[fila][colu]){
    for (int i=0;i<fila;i++){
        for (int c=0;c<colu;c++){
            printf ("%f\t",valor[i][c]);
        }
        printf ("\n");
    }
}

void cambiar(int fila, int colu, float valor[fila][colu]){
    printf ("\nMatriz traspuesta:\n");
    for (int i=0;i<fila;i++){
        for (int c=0;c<colu;c++){
            printf ("%f\t",valor[c][i]);
        }
        printf ("\n");
    }
}

int main() {
    int fila,colu;

    printf ("\nNumero de filas de la matriz:");
    scanf ("%d",&fila);
    printf ("\nNumero de columnas de la matriz:");
    scanf ("%d",&colu);
    float valor[fila][colu];

    datos (fila,colu,valor);
    mostrar(fila,colu,valor);
    cambiar (fila,colu,valor);

    printf("\n");
    return 0;
}
