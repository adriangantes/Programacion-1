#include <stdio.h>
#define cant 100

void datos (char cadena[cant]){
    printf ("\nIntroduce una frase (o cadena de caracteres):\n");
    for (int i=0;i<cant;i++){
        scanf ("%c",&cadena[i]);
        if (cadena[i]=='\n'){
            break;
        }
    }
}

void contar (char cadena[cant]){
    int l=0,d=0,n=0;
    for (int i=0;i<cant;i++){
        if ((cadena[i]>='A' && cadena[i]<='Z')||(cadena[i]>='a' && cadena[i]<='z')){
            l++;
        }else if (cadena[i]>='0' && cadena[i]<='9'){
            n++;
        }else if (cadena[i]=='\n') {
            break;
        }else{
            d++;
        }
    }
    printf ("\nNumero de letras: %d",l);
    printf ("\nNumero de numeros: %d",n);
    printf ("\nNumero de otros digitos: %d",d);
}
int main() {
    char cadena[cant];

    datos(cadena);
    contar(cadena);
    printf("\n");
    return 0;
}
