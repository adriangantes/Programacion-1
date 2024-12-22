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
    for (int i=0;i<t;++i){
        if (l[i]==' ' || l[i]==',' || l[i]=='.'){
            if (l[i-1]!=' ' && l[i-1]!=',' && l[i-1]!='.'){
                printf ("\n");
                for (int j=i-cont;j<=i-1;j++){
                    printf("%c",l[j]);
                }
                printf ("\t\t%d",cont);
            }
            cont=0;
        }else{
            cont++;
        }
    }
}

int main() {
    const int t=100;
    char l[t];

    datos(t,l);
    contar (t,l);
    printf("\n");
    return 0;
}
