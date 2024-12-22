#include <stdio.h>

int main() {
    float a1,a2,a3,a4,a5,a6,nota,notap,cont;
    cont=0;

    printf("Calificacion asignatura 1(formato X.X, 0 para no presentado):");
    scanf ("%f",&a1);
    printf("Calificacion asignatura 2(formato X.X, 0 para no presentado):");
    scanf ("%f",&a2);
    printf("Calificacion asignatura 3(formato X.X, 0 para no presentado):");
    scanf ("%f",&a3);
    printf("Calificacion asignatura 4(formato X.X, 0 para no presentado):");
    scanf ("%f",&a4);
    printf("Calificacion asignatura 5(formato X.X, 0 para no presentado):");
    scanf ("%f",&a5);
    printf("Calificacion asignatura 6(formato X.X, 0 para no presentado):");
    scanf ("%f",&a6);

    if (a1==0){
        cont=cont+1;
    }
    if (a2==0){
        cont=cont+1;
    }
    if (a3==0){
        cont=cont+1;
    }
    if (a4==0){
        cont=cont+1;
    }
    if (a5==0){
        cont=cont+1;
    }
    if (a6==0){
        cont=cont+1;
    }
    nota= (a1+a2+a3+a4+a5+a6)/6;
    notap= (a1+a2+a3+a4+a5+a6)/(6-cont);

    if (nota<5){
        printf ("Nota media: SUSPENSO (%.1f)",nota);
    }else if (5<=nota && nota<=6.9){
        printf ("Nota media: APROBADO (%.1f)",nota);
    }else if (7<=nota && nota<=8.9){
        printf ("Nota media: NOTABLE (%.1f)",nota);
    }else if (nota>=9){
        printf ("Nota media: SOBRESALIENTE (%.1f)",nota);
    }
    if (notap<5){
        printf ("Nota media de asignaturas presentadas: SUSPENSO (%.1f)",notap);
    }else if (5<=notap && notap<=6.9){
        printf ("Nota media de asignaturas presentadas: APROBADO (%.1f)",notap);
    }else if (7<=notap && notap<=8.9){
        printf ("Nota media de asignaturas presentadas: NOTABLE (%.1f)",notap);
    }else if (9<=notap){
        printf ("Nota media de asignaturas presentadas: SOBRESALIENTE (%.1f)",notap);
    }

    return 0;
}
