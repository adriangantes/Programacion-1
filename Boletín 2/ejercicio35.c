#include <stdio.h>

int main() {
    char c;
    int s=0;

    printf("\nIntroduzca caracteres:\n");
    do{
        c=getchar();
        if ((c >= 32 && c <48) || (c > 57 && c < 65) || (c > 90 && c < 97) || (c > 122)) {
            s++;
        }
    }while (c != '\n');

    printf("\nNumero de errores: %d\n",s);
    return 0;
}
