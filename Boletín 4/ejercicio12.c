#include <stdio.h>

void datos (int lista,int num[lista]){
    printf ("\nIntoduce un numero separado por espacios:");
    for (int i=0;i<lista;i++){
        scanf ("%d",&num[i]);
        getchar();
    }
}
void capicua (int lista, int num[lista]){
    if (num[3]==num[0] && num[2]==num[1]){
        printf ("\nEl numero es capicua.");
    }else{
        printf ("\nEl numero no es capicua.");
    }
}

int main() {
    const int lista=4;
    int num[lista];

    datos(lista,num);
    capicua(lista,num);

    printf("\n");
    return 0;
}
