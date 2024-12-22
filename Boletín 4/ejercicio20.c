#include <stdio.h>

void datos (int f, char alum[f][30],int nota[f]){
    for (int i=0;i<f;i++){
        printf ("\nNombre y nota del alumno %d(separado por espacio):",i+1);
        scanf ("%s %d",alum[i],&nota[i]);
    }
}

void mostrar (int f,char alum[f][30],int nota[f]){
    printf ("\nAlumno\t\tNota");
    printf ("\n____________________________");
    for (int i=0;i<f;i++){
        printf ("\n%s\t\t%d",alum[i],nota[i]);
    }
}

void buscar (int f,char alum[f][30],int nota[f]){
    int min=10,pmin,max=0,pmax;

    for (int i=0;i<f;i++){
        if (nota[i]<min){
            min=nota[i];
            pmin=i;
        }
        if (nota[i]<max){
            max=nota[i];
            pmax=i;
        }
    }
    printf ("\nAlumno con la mejor calificacion: %s (%d)",alum[pmax],nota[pmax]);
    printf ("\nAlumno con la peor calificacion: %s (%d)",alum[pmin],nota[pmin]);
}

int main() {
    const int f=15;
    char alum[f][30];
    int nota[f];

    datos (f,alum,nota);
    mostrar (f,alum,nota);
    buscar (f,alum,nota);

    printf("\n");
    return 0;
}
