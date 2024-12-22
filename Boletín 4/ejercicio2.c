#include <stdio.h>
#define animales 7

char ani[20][animales];
void pedir(){
    printf ("\nIntroduce %d animales:",animales);
    for(int i=0;i<animales;i++){
        scanf("%s",ani[i]);
    }
}
void mostrar(){
    printf ("\nLos %d animales introducidos son:\n",animales);
    for (int i=0;i<animales;i++){
        printf ("%s\t",ani[i]);
    }
}
int main() {
    pedir();
    mostrar();
    printf("\n");
    return 0;
}
