#include <stdio.h>

int main() {
    char nombre[20];
    float peso,altura,imc;

    printf("Nombre:");
    scanf ("%s",nombre);
    printf("Peso (en KG):");
    scanf ("%f",&peso);
    printf("Altura (en CM):");
    scanf ("%f",&altura);

    altura=altura/100;
    imc= peso/(altura*altura);

    if (imc <18.5){
        printf ("%s tiene un IMC=%.2f, por debajo de su peso.",nombre,imc);
    }else if (imc>=18.5 && imc<25){
        printf ("%s tiene un IMC=%.2f, peso normal.",nombre,imc);
    }else if (25<=imc && imc<27){
        printf ("%s tiene un IMC=%.2f, sobrepeso grado 1.",nombre,imc);
    }else if (27<=imc && imc<30){
        printf ("%s tiene un IMC=%.2f, sobrepeso grado 2.",nombre,imc);
    }else{
        printf ("%s tiene un IMC=%.2f, obesidad.",nombre,imc);
    }
    return 0;
}
