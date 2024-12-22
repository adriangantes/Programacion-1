#include <stdio.h>
#include <string.h>
#define cant 20
#define cap 20

void datos (char capi[cant][cap],long int pob[cant]){
    for (int i=0;i<cant;i++){
        printf ("Introduce la capital %d y su poblacion:",i+1);
        scanf ("%s %ld",capi[i],&pob[i]);
    }
}

void ordenar (char capi[cant][cap],long int pob [cant]){
    char temp_capi[cap];
    long int temp_pob;
    for (int i=0;i<cant;i++){
        for (int j=0;j<cant-1;j++){
            if (strcmp(capi[j],capi[j+1])>0){
                memcpy(temp_capi,capi[j],cap);
                temp_pob=pob[j];
                memcpy(capi[j],capi[j+1],cap);
                pob[j]=pob[j+1];
                memcpy(capi[j+1],temp_capi,cap);
                pob[j+1]=temp_pob;
            }
        }
    }
    printf ("\n\tORDENADO POR CAPITALES\n");
    printf ("========================================");
    for (int i=0;i<cant;i++){
        printf ("\n%d - %s\t%ld",i+1,capi[i],pob[i]);
    }

    for (int i=0;i<cant;i++){
        for (int j=0;j<cant-1;j++){
            if (pob[j]>pob[j+1]){
                memcpy(temp_capi,capi[j],cap);
                temp_pob=pob[j];
                memcpy(capi[j],capi[j+1],cap);
                pob[j]=pob[j+1];
                memcpy(capi[j+1],temp_capi,cap);
                pob[j+1]=temp_pob;
            }
        }
    }
    printf ("\n\n\tORDENADO POR POBLACION\n");
    printf ("========================================");
    for (int i=0;i<cant;i++){
        printf ("\n%d - %s\t%ld",i+1,capi[i],pob[i]);
    }
}

int main() {
    char capi[cant][cap];
    long int pob[cant];

    printf("\nCapitales en MAYUSCULAS y poblacion en miles de perosnas (X1000).\n\n");
    datos(capi,pob);
    ordenar(capi,pob);
    printf("\n");

    return 0;
}
