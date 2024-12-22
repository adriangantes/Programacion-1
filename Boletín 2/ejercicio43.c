#include <stdio.h>

int main() {
    int cont=2;
    float fact,pot,termino,error,total,x;

    printf ("Escribe la potencia de e:");
    scanf ("%f",&x);
    printf("Introduce el error maximo (Hasta 10 decimales):");
    scanf ("%f",&error);

    total = x+1;

    do{
        fact=1;
        for (int i=2; i<=cont;++i){
            fact*=i;
        }
        pot=1;
        for(int i=1;i<=cont;++i){
            pot*=x;
        }
        termino = pot/fact;
        total+=termino;
        cont++;
    }while(termino>error);

    printf("El numero e elevado a %.f vale: e^(%.f)=%.10f",x,x,total);
    printf("\nTotal de iteraciones: %d",cont);
    return 0;
}
