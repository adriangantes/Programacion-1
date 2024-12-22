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

void buscar(int fila, int colu, int valor[fila][colu]){
    int fmax,cmax,max,fmin,cmin,min;

    for (int i=0;i<fila;i++){
        for (int c=0;c<colu;c++){
            if (i==0 && c==0){
                max=valor[i][c];
                min=valor[i][c];
                fmax=i;
                cmax=c;
                fmin=i;
                cmin=c;
            }else if (valor[i][c]>=max){
                    max=valor[i][c];
                    fmax=i;
                    cmax=c;
            }else if (valor[i][c]<=min){
                min=valor[i][c];
                fmin=i;
                cmin=c;
            }
        }
    }

    printf ("\nMayor elemento: %d\tPosicion: f=%d c=%d",max,fmax+1,cmax+1);
    printf ("\nMenor elemento: %d\tPosicion: f=%d c=%d",min,fmin+1,cmin+1);
}

int main() {
    int fila,colu;

    printf ("\nNumero de filas de la matriz:");
    scanf ("%d",&fila);
    printf ("\nNumero de columnas de la matriz:");
    scanf ("%d",&colu);
    int valor[fila][colu];

    datos (fila,colu,valor);
    mostrar(fila,colu,valor);
    buscar (fila,colu,valor);

    printf("\n");
    return 0;
}
