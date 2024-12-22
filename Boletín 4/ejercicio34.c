#include <stdio.h>
#include <string.h>
#define cant 5
#define cap 40

void datos (char palabra[cant][cap]){
    printf ("\nIntroduce 20 palabras (separadas por espacios):\n");
    for (int i=0;i<cant;i++){
        scanf ("%s",palabra[i]);
    }
}
int mayus (char palabra[cant]){
    for (int i=0;i<cant;i++){
        if (palabra[i]>='a' && palabra[i]<='z'){
            return 0;
        }
    }
    return 1;
}
int vocal (char palabra[cant]){
    int cont=0;
    for (int i=0;i<cant;i++){
        if (palabra[i]== 'a' || palabra[i]=='e' ||palabra[i]== 'i' || palabra[i]=='o' ||palabra[i]== 'u' ||
        palabra[i]=='A' ||palabra[i]== 'E' || palabra[i]=='I' ||palabra[i]== 'O' || palabra[i]=='U'){
            cont++;
        }
    }
    return cont;
}

void buscar (char palabra[cant][cap]){
    int cont=0;
    printf ("\nPalabra\t\tMayus\t\tVocales\t\tCantidad");
    printf ("\n===============================================================================");
    for (int i=0;i<cant;i++){
        cont=0;
        for (int j=0;j<cant;j++){
            if (strcmp(palabra[j],palabra[i])==0){
                cont++;
            }
        }
        printf ("\n%s\t\t%s\t\t%d\t\t%d",palabra[i],mayus(palabra[i])==1? "Si":"No",vocal(palabra[i]),cont);
    }
}

void frec  (char palabra[cant][cap]){
    
}

int main() {
    char palabra[cant][cap];

    datos (palabra);
    buscar (palabra);
    frec (palabra);
    printf("\n");
    return 0;
}
