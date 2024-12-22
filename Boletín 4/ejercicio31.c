#include <stdio.h>

void datos (int dist, char cadena[dist]){
    printf ("\nIntroduce una cadena de 9 caracteres:\n");
    for (int i=0;i<dist;i++){
        scanf ("%c",&cadena[i]);
        if (cadena[i]=='\n'){
            break;
        }
    }
}

int val (int dist,char cadena[dist]){
    for (int i=0;i<dist;i++){
        if (cadena[i]<'0' || cadena[i]>'9'){
            return 0;
        }
    }
    return 1;
}

int main() {
    const int dist=9;
    char cadena[dist];

    datos(dist,cadena);

    printf("\nLa cadena se puede convertir en un valor real? %s\n",val(dist,cadena)==1 ? "Si":"No");
    return 0;
}
