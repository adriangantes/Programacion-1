#include <stdio.h>

int main() {
    char c;

    do{
        printf("\nPara dibujar un rectangulo pulse \"R\"");
        printf("\nPara dibujar un cuadrado pulse \"C\"");
        printf("\nPara dibujar un pentagono pulse \"P\"");
        printf("\nPara salir del programa pulse \"A\"\n");
        scanf("%c", &c);
        getchar();

        switch(c){
            case'C':case'c':
                printf("\n*cuadrado*\n");
                break;
            case'R':case'r':
                printf("\n*rectangulo*\n");
                break;
            case'P':case'p':
                printf("\n*pentagono*\n");
                break;
            case'A':case'a':
                printf ("\nSaliendo del programa...\n");
                break;
            default:
                printf("\nIntroduzca un caracter valido.\n");
                break;
        }
    }while (c !='a' && c !='A');

    return 0;
}
