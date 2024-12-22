#include <stdio.h>
#define cant 5
#define max 1000

void datos (int num[cant]){
    for (int i=0;i<cant;i++){
        printf ("\nIntroduce un numero entero positivo (x>1):");
        scanf ("%d",&num[i]);
        while (num[i]<=1){
            printf ("\nNumero no valido.");
            printf ("\nIntroduce un numero entero positivo (x>1):");
            scanf ("%d",&num[i]);
        }
    }
}

int factor (int n,int fact[cant][max],int v){
    int j=0;
    for (int i=2;n>1;i++){
        while (n%i==0){
            fact[v][j]=i;
            n=n/i;
            if (n>1){
                j++;
            }else{
                return j;
            }
        }
    }
}

void mostrar (int num[cant],int fact[cant][max]){
    int tope;
    for (int i=0;i<cant;i++){
        printf ("\n\n%d = ",num[i]);
        tope = factor(num[i],fact,i);
        for (int j=0;j<=tope;j++){
            printf ("%d",fact[i][j]);
            if (j<tope){
                printf (" x ");
            }
        }
    }
}

int main() {
    int num[cant],fact[cant][max];

    datos(num);
    mostrar(num,fact);
    printf("\n");
    return 0;
}
