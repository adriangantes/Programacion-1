#include <stdio.h>
#include <stdlib.h>

int main() {
    int cantidad=0,a=1;
    char c;

    while (a==1){
        printf ("\nIndicar numero de quinielas: \"I\"");
        printf ("\nMostrar quinielas: \"M\"");
        printf ("\nSalir: \"S\"\n");
        scanf ("%c",&c);
        getchar();

        if (c=='S'||c=='s'){
            printf ("Saliendo del programa...");
            a=0;
        }else if (c=='I'||c=='i'){
            printf("\nNumero de quinielas(max. 10):");
            scanf ("%d",&cantidad);
            getchar();
            while (cantidad <=0 || cantidad >10){
                printf ("\nCantidad introducida erronea.");
                printf ("\nVuelva a introducir la cantidad:");
                scanf ("%d",&cantidad);
                getchar();
            }
        }else if (c=='M'||c=='m'){
            if (cantidad==0){
                printf ("No se ha asignado una cantidad de quinielas.\n");
            }else{
                for (int n=1;n<=10;++n){
                    printf ("\nPartido %d:\t",n);
                    for (int p=1,x,y;p<=cantidad;++p){
                        x=rand() % (5);
                        y=rand() % (5);
                        printf ("%d-%d\t",x,y);
                    }
                }
                printf ("\n");
            }
        }
    }

    return 0;
}
