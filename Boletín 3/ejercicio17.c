#include <stdio.h>

int comp (char c){
    if (c>='a'&& c<='z'){
        return 1;
    }else if (c<='Z' && c>='A'){
        return 2;
    }else{
        return 0;
    }
}

int main() {
    char c;
    printf("\nIntroduce una letra:");
    c=getchar();
    if (comp(c)==1){
        printf ("\n%c es una letra minuscula.\n",c);
    }else if(comp(c)==2){
        printf ("\n%c es una letra mayuscula.\n",c);
    }else{
        printf ("\n%c no es una letra.\n",c);
    }
    return 0;
}
