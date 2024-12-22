#include <stdio.h>

int main() {
    float preg, res,por;

    printf("Cantidad de preguntas:");
    scanf ("%f",&preg);
    printf ("Respuestas correctas:");
    scanf ("%f",&res);
    por= (res/preg)*100;

    if (por>90) {
        printf("Nivel del examen: Maximo");
    }else{
        if (por>75){
            printf("Nivel del examen: Medio");
        }else{
            if(por>=50){
                printf("Nivel del examen: Regular");
            }else{
                printf("Nivel del examen: Fuera de nivel");
            }
        }
    }

    return 0;
}
