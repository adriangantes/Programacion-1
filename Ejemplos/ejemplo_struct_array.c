#include <stdio.h>
#define clase 5

struct {
    struct estu{
        char nombre[10];
        int nota;
    };
}grupo [clase];

int main() {
    struct estu e;
    struct grupo g;
    for (int i=0;i<clase;i++){
        printf("Datos alumno %d:\n",i+1);
        scanf ("%s %d",g.nombre[i],&g.nota[i]);
    }
    for (int i=0;i<clase;i++){
        printf("Alumno %d - Nombre: %s\t Nota: %d\n",i+1,g.nombre[i],&g.nota[i]);
    }

    return 0;
}
