#include <stdio.h>
#include <math.h>

int main() {
    int menu,num,num2;

    do{
        printf ("\n1. Tablas de numeros, cuadrados y raices cuadradas de un numero.");
        printf ("\n2. Divisores de un numero.");
        printf ("\n3. Salir del programa.");
        printf ("\n\nIntroduzca una opcion (1-3):");
        scanf ("%d",&menu);

        if (menu == 1){
            printf ("Introduce el inicio del intevalo:");
            scanf ("%d",&num);
            printf ("Introduce el final del intervalo:");
            scanf ("%d",&num2);
            printf ("\nNumeros dentro del intervalo:");

            if (num<num2){
                for (int i=num; i<=num2;i++){
                    printf ("\t%d",i);
                }
                printf ("\nCuadrados del intervalo:");
                for (int i=num; i<=num2;i++){
                    printf("\t%d",i*i);
                }
                printf ("\nRaices del intervalo:\t");
                for (int i=num; i<=num2;i++){
                    float r;
                    r=sqrt(i);
                    printf("\t%.3f",r);
                }
            }else{
                for (int i=num2; i<=num;i++){
                    printf ("\t%d",i);
                }
                printf ("\nCuadrados del intervalo:");
                for (int i=num2; i<=num;i++){
                    printf("\t%d",i*i);
                }
                printf ("\nRaices del intervalo:\t");
                for (int i=num2; i<=num;i++){
                    float r;
                    r=sqrt(i);
                    printf("\t%.3f",r);
                }
            }
            printf ("\n");

        }else if (menu == 2){
            printf ("Introduce un numero:");
            scanf ("%d",&num);
            printf ("Divisores de %d:  ",num);
            for (int i=1;i<=num;i++){
                if (num%i==0){
                    printf("%d  ",i);
                }
            }
            printf ("\n");

        }else if (menu ==3){
            printf ("\nSaliendo del programa...");
        }else{
            printf ("ERROR");
            printf ("\n");
        }
    }while(menu != 3);

    printf ("\n");
    return 0;
}
