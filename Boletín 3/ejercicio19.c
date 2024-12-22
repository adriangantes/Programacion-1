#include <stdio.h>

char cam(char c){
    if (c>='a' && c<='z'){
        return c-32;
    }else if (c>='A' && c<='Z'){
        return c+32;
    }
}

int main() {
    char c;

    printf("\nIntroduce una letra:");
    c=getchar();
    if (c>='a' && c<='z'){
        printf ("\nLa mayuscula de \"%c\" es \"%c\".\n",c,cam(c));
    }else if (c>='A' && c<='Z'){
        printf ("\nLa minuscula de \"%c\" es \"%c\".\n",c,cam(c));
    }
    return 0;
}
