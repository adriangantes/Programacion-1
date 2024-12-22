#include <stdio.h>

int decabin(int valor, int *digito) {
    *digito = valor % 2;
    return (valor - *digito) / 2;
}

int main(){
    int buffer[sizeof(int) * 8];
    int valor;
    int digito;
    printf("Ingrese un entero: ");
    scanf("%i", &valor);

    int longitud = 0;
    for (; valor; ++longitud) {
        valor = decabin( valor, &digito );
        buffer[longitud] = digito;
    }

    for (int indice = longitud - 1; indice >= 0; --indice) {
        printf("%i", buffer[indice]);
    }

    return 0;
}
