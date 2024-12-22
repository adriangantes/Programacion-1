#include <stdio.h>

int dias (char dia){
    switch (dia){
        case 'L':case'l':
            printf ("Lunes");
            break;
        case 'M':case'm':
            printf ("Martes");
            break;
        case 'X':case'x':
            printf ("Miercoles");
            break;
        case 'J':case'j':
            printf ("Jueves");
            break;
        case 'V':case'v':
            printf ("Viernes");
            break;
        case 'S':case's':
            printf ("Sabado");
            break;
        case 'D':case'd':
            printf ("Domingo");
            break;
        default:
            printf ("ERROR");
            break;
    }
    return 0;
}

int main() {
    char dia;

    printf("\nInicial del dia:");
    scanf ("%c",&dia);
    dias(dia);
    return 0;
}
