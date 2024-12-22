#include <stdio.h>
#include <math.h>

void datos(int lista,int valor[lista]){
    printf ("\nIntroduzca elementos del array separados por espacios (hasta 20):\n");
    for (int i=0;i<lista;i++){
        scanf ("%d",&valor[i]);
    }
}
void calcu(int lista,int valor[lista], int res[lista]){
    for (int i=0;i<lista;i++){
        res[i]=valor[i];
        if (valor[i]%2==0){
            valor[i]=pow(valor[i],2);
        }else{
            valor[i]=sqrt(valor[i]);
        }
    }
    printf ("\nArray original:\n");
    for (int i=0;i<lista;i++){
        printf ("%d\t",res[i]);
    }
    printf ("\n\nArray modificada:\n");
    for (int i=0;i<lista;i++){
        printf ("%d\t",valor[i]);
    }
}

int main() {
    const int lista=20;
    int valor[lista];
    int res[lista];

    datos(lista, valor);
    calcu(lista, valor,res);

    printf("\n");
    return 0;
}
