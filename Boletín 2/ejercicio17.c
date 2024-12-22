#include <stdio.h>

int main() {
    char ch;

    printf("Introduzca un caracter:");
    scanf ("%c",&ch);

    if ((ch>='a' && ch<='z')||(ch>='A'&&ch<='Z')){
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("\n%c es una vocal", ch);
                break;
            default:
                printf("\n%c es una consonante", ch);
                break;
        }
    }else if (ch>='0' && ch<='9'){
        printf ("\n%c es un digito",ch);
    }else{
        printf ("\n%c es un caracter especial",ch);
    }

    return 0;
}
