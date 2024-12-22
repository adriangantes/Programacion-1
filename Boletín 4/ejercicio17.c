#include <stdio.h>

void datos (int dist, int m1[dist][dist], int m2[dist][dist]) {

    printf("\nIntroduce los valores de la matriz 1 (separados por espacios):\n");
    for (int i = 0; i < dist; i++) {
        for (int c = 0; c < dist; c++) {
            scanf("%d", &m1[i][c]);
        }
    }

    printf("\nIntroduce los valores de la matriz 2 (separados por espacios):\n");
    for (int i = 0; i < dist; i++) {
        for (int c = 0; c < dist; c++) {
            scanf("%d", &m2[i][c]);
        }
    }
    getchar();
}

void suma(int dist, int m1[dist][dist], int m2[dist][dist]){
    int mr[dist][dist];

    for (int i = 0; i < dist; i++) {
        for (int c = 0; c < dist; c++) {
            mr[i][c]=m1[i][c]+m2[i][c];
        }
    }

    printf ("\nResultado de la suma:\n");
    for (int i = 0; i < dist; i++) {
        for (int c = 0; c < dist; c++) {
            printf ("%d\t",mr[i][c]);
        }
        printf ("\n");
    }
}

void resta(int dist, int m1[dist][dist], int m2[dist][dist]){
    int mr[dist][dist];

    for (int i = 0; i < dist; i++) {
        for (int c = 0; c < dist; c++) {
            mr[i][c]=m1[i][c]-m2[i][c];
        }
    }

    printf ("\nResultado de la resta:\n");
    for (int i = 0; i < dist; i++) {
        for (int c = 0; c < dist; c++) {
            printf ("%d\t",mr[i][c]);
        }
        printf ("\n");
    }
}
void producto(int dist, int m1[dist][dist], int m2[dist][dist]){
    int mr[dist][dist];

    for (int i = 0; i < dist; i++) {
        for (int c = 0; c < dist; c++) {
            mr[i][c]=0;
            for (int v=0; v<dist;v++){
                mr[i][c]+=m1[i][v]*m2[v][c];
            }
        }
    }

    printf ("\nResultado de la multiplicacion:\n");
    for (int i = 0; i < dist; i++) {
        for (int c = 0; c < dist; c++) {
            printf ("%d\t",mr[i][c]);
        }
        printf ("\n");
    }
}

int main() {
    int dist;
    char l;

    printf ("\nNumero de filas y columnas de la matriz:");
    scanf ("%d",&dist);
    int m1[dist][dist];
    int m2[dist][dist];
    datos (dist,m1,m2);

    do{
        printf ("\n---MENU---\n");
        printf ("\nS:Suma");
        printf ("\nR:Resta");
        printf ("\nM:Multiplicacion");
        printf ("\nX:Salir");
        printf ("\n\nOpcion:");
        scanf ("%c",&l);
        getchar();

        if(l=='s'||l=='S'){
            suma(dist,m1,m2);
        }else if(l=='r'||l=='R'){
            resta(dist,m1,m2);
        }else if (l=='m'||l=='M'){
            producto(dist,m1,m2);
        }else if (l =='x'||l =='X'){
            printf ("\nSaliendo del programa...");
            break;
        }else{
            printf ("\n%c no es una opcion.",l);
        }
    }while (l!='x' && l!='X');

    printf("\n");
    return 0;
}