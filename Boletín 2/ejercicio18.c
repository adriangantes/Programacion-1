#include <stdio.h>

int main() {
    int Paridad, Resto;
    printf("Piense un numero de 1 a 10\n");
    printf("Diga si es impar(1) o par (2)\n");
    scanf("%d",&Paridad);
    printf("Diga el resto de dividirlo por 5\n");
    scanf("%d",&Resto);
    printf("El numero pensado ha sido el:");
    switch(Resto){
        case 0: if (Paridad == 1) printf("5"); else printf("10");
            break;
        case 1: if (Paridad == 1) printf("1"); else printf("6");
            break;
        case 2: if (Paridad == 1) printf("7´"); else printf("2");
            break;
        case 3: if (Paridad == 1) printf("3"); else printf("8");
            break;
        case 4: if (Paridad == 1) printf("9"); else printf("4");
            break;
        default: printf("\n \n Error, el resto debe estar entre 0 y 4 \n");
            break; }

    return 0;
}
