#include <stdio.h>

void datos(int lista,int valor[lista]){
    printf ("\nIntroduzca elementos del array separados por espacios (ENTER para terminar):\n");
    for (int i=0;i<lista || getchar ()!='\n';i++){
        scanf ("%d",&valor[i]);
        if (getchar()== '\n'){
            break;
        }
    }
}

void buscar(int lista, int valor[lista]){
    int n,p=0,u=0,c=0;
    printf ("\nIntroduce el valor que desea buscar:");
    scanf ("%d",&n);
    getchar();

    for (int i=0;i<lista;i++) {
        if (n == valor[i]) {
            if (c>=1){
                u=i;
                c++;
            }else{
                p = i;
                u = i;
                c++;
            }
        }
    }

    if (p!=u){
        printf("El numero %d aparece %d veces, por primera vez en %d y por ultima vez en %d\n",n,c,p+1,u+1);
    }else if (p==u){
        printf("El numero %d aparece 1 vez en la posicion %d\n",n,p+1);
    }else if (c==0){
        printf("El numero %d no aparece en la lista\n",n);
    }
}

int main() {
    const int lista=20;
    int valor[lista];
    char l;

    datos(lista, valor);
    do{
        buscar (lista,valor);
        printf ("\nSeguir? (s/n):");
        scanf("%c",&l);
    }while (l=='s' || l=='S');

    printf("\n");

    return 0;
}
