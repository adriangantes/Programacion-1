#include <stdio.h>
#include <stdbool.h>

void datos (int fila, int colu, int valor[fila][colu]) {

    printf("\nIntroduce los valores de la matriz (separados por espacios):\n");

    for (int i = 0; i < fila; i++) {
        for (int c = 0; c < colu; c++) {
            scanf("%d", &valor[i][c]);
        }
    }
}

void mostrar (int fila,int colu, int valor[fila][colu]){

    printf("\nMatriz:\n");
    for (int i=0;i<fila;i++){
        for (int j=0;j<colu;j++){
            printf ("%d\t",valor[i][j]);
        }
        printf ("\n");
    }
}

bool es_punto_silla(int D1, int D2, int m[D1][D2], int row, int col) {
    int cnt;

    for (cnt = 0; cnt < D1; ++cnt)
        if (m[cnt][col] < m[row][col])
            return false;

    for (cnt = 0; cnt < D2; ++cnt)
        if (m[row][cnt] > m[row][col])
            return false;

    return true;
}

void buscar(int fila, int colu, int valor[fila][colu]){

    for (int i=0;i<fila;i++){
        for (int j=0;j<colu;j++){

            if (es_punto_silla(fila, colu, valor, i, j)) {
                printf("\nPunto de silla en %d,%d", i + 1, j + 1);
            }

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
    mostrar (fila,colu,valor);
    buscar (fila,colu,valor);

    printf("\n");
    return 0;
}
