#include <stdio.h>
#include <math.h>
#define cant 100
#define dist 10

void datos (char fecha[dist]){
    printf ("\nIntroduce una fecha (dd/mm/aaaa): ");
    for (int i=0;i<dist;i++){
        scanf ("%c",&fecha[i]);
        if (fecha[i]=='\n'){
            break;
        }
    }

    if (fecha[1]=='/'){
        if (fecha[3]=='/'){
            for (int i=dist-1;i>3;i--){
                fecha[i]=fecha[i-2];
            }
            fecha[3]='0';
            fecha[2]='/';
            fecha[1]=fecha[0];
            fecha[0]='0';
        }else{
            for (int i=dist-1;i>=1;i--){
                fecha[i]=fecha[i-1];
            }
            fecha[0]='0';
        }
    }

    printf ("\nFecha introducida: ");
    for (int i=0;i<dist;i++){
        printf ("%c",fecha[i]);
    }
}

void calcular (char fecha[dist],int bis[cant]){
    int a=0,v;
    for (int i=6;i<dist;i++){
        v=fecha[i]-48;
        a+=v*(pow(10,(9-i)));
    }
    printf ("\n%d",a);
    while(a%4!=0){
        a++;
    }

    printf("\n100 anhos bisiestos siguientes:\n");
    for (int i=0;i<cant;i++){
        bis[i]=a;
        a+=4;
        printf ("%d\t",bis[i]);
    }
}

int main() {
    char fecha[dist],l;
    int bis[cant];

    do{
        datos(fecha);
        printf ("\nDesea cambiar la fecha (S/N): ");
        scanf ("%c",&l);
        getchar();
    }while (l!='N');

    calcular(fecha,bis);

    printf("\n");
    return 0;
}
