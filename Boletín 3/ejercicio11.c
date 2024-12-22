#include <stdio.h>

int conf (int max,int min,int num){
    if (num<=max && num>=min){
        return 1;
    }else{
        return 0;
    }
}

int main() {
    int max,min,num;

    printf("\nIntroduzca un maximo entero:");
    scanf ("%d",&max);
    printf("\nIntroduzca un minimo entero:");
    scanf ("%d",&min);
    if (min>max){
        printf ("\nEl minimo es mayor que el maximo.\n");
        return 0;
    }
    printf("\nIntroduzca un numero entero:");
    scanf ("%d",&num);

    if (conf(max,min,num)==1){
        printf ("\nEl numero %d esta dentro del intervalo %d y %d\n",num,max,min);
    }else{
        printf ("\nEl numero %d no esta dentro del intervalo %d y %d\n",num,max,min);
    }
    return 0;
}
