#include <stdio.h>

void datos (int t, char l[t]){
    printf ("\nIntroduce una frase:\n");
    for (int i=0;i<t;++i){
        scanf ("%c",&l[i]);
        if (l[i]=='\n'){
            break;
        }
    }
}

void contar (int t, char l[t]){
    int cont=0;
    printf("\n");
    for (int i=0;i<t;++i){
        if (l[i]==' ' && cont>0) {
            cont++;
        }else if (l[i]==' '){
            printf("%c", l[i]);
            cont++;
        }else {
            printf("%c", l[i]);
            cont=0;
        }
    }
    printf("\n");
}

int main() {
    const int t=100;
    char l[t];

    datos(t,l);
    contar (t,l);
    return 0;
}