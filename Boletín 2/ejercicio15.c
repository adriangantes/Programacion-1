#include <stdio.h>

int main() {
    char ch;

    printf("B - Bebe\nA - Adolescente\nM - Mujer\nH - Hombre");
    printf("\nIntroduce una letra de las cuatro:");
    scanf("%c",&ch);

    switch (ch){
        case 'B':
            printf("\nBebe");
            break;
        case 'A':
            printf("\nAdolescente");
            break;
        case'M':
            printf("\nMujer");
            break;
        case'H':
            printf("\nHombre");
            break;
        default: printf("\n\"%c\" no es una opcion",ch);
    }

    return 0;
}
