#include <stdio.h>

void datos (int cant,char n1[cant],char n2[cant]){
    printf ("\nPrimer numero de %d cifras:\n",cant);
    for (int i=0;i<=cant;i++){
        scanf ("%c",&n1[i]);
    }

    printf ("\nSegundo numero de %d cifras:\n",cant);
    for (int i=0;i<=cant;i++){
        scanf ("%c",&n2[i]);
    }
}

void suma (int cant, char n1[cant],char n2[cant],int r[cant]){
    printf ("\n");
    int v1,v2,extra=0;

    for (int i=cant-1;i>=0;i--){

        if (n1[i]>='0' && n1[i]<='9'){v1=n1[i]-48;}
        if (n2[i]>='0' && n2[i]<='9'){v2=n2[i]-48;}

        if (i==0){
            r[i]=v1+v2+extra;
        }else{
            r[i]=(v1+v2+extra)%10;
        }

        if ((v1+v2)>9){
            extra=1;
        }else{
            extra=0;
        }
    }
    printf ("Suma de ambos numeros: ");
    for (int i=0;i<cant;i++){
        if (r[i]>=0 && r[i]<=19){
            printf ("%d",r[i]);
        }
    }
}

int main() {
    int cant;

    printf ("\nCantidad de cifras de ambos numeros:");
    scanf("%d",&cant);

    char n1[cant],n2[cant];
    int r[cant];

    datos(cant,n1,n2);
    suma (cant,n1,n2,r);
    printf("\n");
    return 0;
}