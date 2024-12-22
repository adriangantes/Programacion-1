#include <stdio.h>

void datos (int t, char l[t]){
    printf ("\nIntroduce una frase:\n");
    for (int i=0;i<t;++i){
        scanf ("%c",&l[i]);
        if (l[i]=='\n'){
            break;
        }
    }
}

char reves (int cant,int i, char cadena[cant]){
    return cadena[cant-i-1];
}

int main() {
    const int cant=100;
    char cadena[cant];

    datos (cant,cadena);
    printf("\n");
    for (int i=0; i<cant;i++){
        printf ("%c",reves(cant,i,cadena));
    }
    printf("\n");
    return 0;
}
