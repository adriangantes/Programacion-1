#include <stdio.h>

int comp (char c){
    switch (c){
        case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':
            return 1;
        default: return 0;
    }
}

int main() {
    char c;
    printf("\nIntroduzca un caracter:");
    c=getchar();
    if (comp(c)==1){
        printf ("%c es un digito.",c);
    }else{
        printf ("%c no es un digito.",c);
    }
    return 0;
}
