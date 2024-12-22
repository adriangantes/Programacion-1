#include <stdio.h>

int comp(char c){
    switch (c){
        case 'a':case 'e':case 'i':case 'o':case 'u':case 'A':case 'E':case 'I':case 'O':case 'U':
            return 1;
        default: return 0;
    }
}

int main() {
    char c;

    printf("\nIntroduce una letra:");
    c=getchar();
    if (comp(c)==1){
        printf ("%c es una vocal.",c);
    }else{
        printf ("%c no es una vocal.",c);
    }
    return 0;
}
