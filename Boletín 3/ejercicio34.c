#include <stdio.h>

void menu(){
    printf ("\n0- Salir");
    printf ("\n1- Calcular el numero de cifras de un entero");
    printf ("\n2- Sumar las cifras de un entero");
    printf ("\n3- Indica la cifra i-esima menos significativa de un entero");
    printf ("\n4- Calcular la imagen especular de un entero");
    printf ("\n5- Comprobar si un entero es primo");
    printf ("\n6- Mostrar el MCD de dos numeros");
    printf ("\n7- Presentar la tabla de sumar, restar, multiplicar y dividir un numero entero");
}
void cifras(int n){
    int s=0,c=n;
    while (n>0){
        s++;
        n=n/10;
    }
    printf ("\nEl numero de cifras de %d es: %d\n",c,s);
}
void sumar(int n){
    int cifra,t=0,c=n;
    while (n>0){
        cifra=n%10;
        t+=cifra;
        n=n/10;
    }
    printf ("\nLa suma de las cifras de %d es: %d\n",c,t);
}
void esima(int n){
    int cifra;
    cifra=n%10;
    printf ("\nLa cifra menos significativa de %d es: %d\n",n,cifra);
}
void imagen(int n){
    int copia=n,cifra,reves=0;

    while (n!=0){
        cifra=n%10;
        reves=reves*10+cifra;
        n=n/10;
    }
    printf("\nLa imagen especular de %d es: %d\n",copia,n);
}
void primo (int n){
    if (n<2){
        printf ("\nEl numero %d no es primo.\n",n);
    }else{
        for (int i=2;i<n;i++){
            if (n%i==0){
                printf ("\nEl numero %d no es primo.\n",n);
            }else if (i==n){
                printf ("\nEl numero %d es primo.\n",n);
            }
        }
    }
}
void mcd(int n,int n2){
    if (n2==0){
        printf ("\nEl MCD es: %d\n",n);
    }else{
        mcd(n2,n%n2);
    }
}
void cuentas(int n){
    printf ("\nTablas del %d",n);
    printf ("\nSuma\t\tResta\t\tMultiplicacion\tDivision\n");
    for (int i=1;i<=10;i++){
        printf ("%d+%d=%d\t\t%d-%d=%d\t\t%dx%d=%d\t\t%d/%d=%d\n",n,i,n+i,n,i,n-i,n,i,n*i,n,i,n/i);
    }
}

int main() {
    int m,n,n2;
    do{
        menu();
        printf ("\n\nSelecciona una opcion:");
        scanf ("%d",&m);
        if (m==0){
            printf ("\nSaliendo del programa...\n");
            return 0;
        }
        printf ("\nIntroduce un numero entero:");
        scanf ("%d",&n);

        if (m==1){
            cifras(n);
        }else if (m==2){
            sumar(n);
        }else if (m==3){
            esima(n);
        }else if (m==4){
            imagen(n);
        }else if (m==5){
            primo(n);
        }else if (m==6){
            printf ("\nIntroduce el segundo numero entero:");
            scanf ("%d",&n2);
            mcd(n,n2);
        }else if (m==7){
            cuentas(n);
        }else{
            printf ("\n%d no es una opcion.\n",m);
        }
    }while(m!=0);

    return 0;
}
