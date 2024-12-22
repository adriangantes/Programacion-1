#include <stdio.h>

void datos (int lista, int valor[lista]){
    printf ("\nIntroduce los valores del array:\n");
    for (int i=0;i<lista;i++){
        scanf ("%d",&valor[i]);
        getchar();
    }
}

int calculo (int n, int s, int lista, int valor[lista]){
    s+=valor[n];
    n++;
    if (n<=19){
        calculo(n,s,lista,valor);
    }else{
        return s;
    }
}

int main() {
    const int lista=20;
    int valor[lista],s=0,n=0;

    datos(lista,valor);
    printf ("\nSuma de los valores del array: %d\n",calculo(n,s,lista,valor));

    return 0;
}
