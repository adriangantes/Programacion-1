#include <stdio.h>
#include <string.h>
#define clase 3
typedef struct estudiante {
    char nombre [10], apellido1[20], apellido2[20];
    char sexo;
    int edad, dni;
};

int main() {
    char n[10], a1[20],a2[20];
    struct estudiante e;
    printf("\nNombre completo:");
    scanf ("%s %s %s",n,a1,a2);
    strcpy (e.nombre,n);
    strcpy (e.apellido1,a1);
    strcpy (e.apellido2,a2);
    getchar ();
    printf("Sexo:");
    scanf("%c",&e.sexo);
    printf("Edad:");
    scanf("%d",&e.edad);
    printf("DNI:");
    scanf("%d",&e.dni);


    printf("\nNombre completo: %s %s %s",n,a1,a2);
    printf("\nSexo: %c",e.sexo);
    printf("\nEdad: %d",e.edad);
    printf("\nDNI: %d",e.dni);

    //struct base[clase];
    /*for (int i=0; i<clase; i++){
        printf("Nuevo estudiante (%d):\n",i+1);
        printf("===============================\n");

    }*/
    //datos (estudiante);


    return 0;
}
