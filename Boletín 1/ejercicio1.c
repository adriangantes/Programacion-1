#include <stdio.h>

int main() {
    char name [50];
    int age;
    printf ("Introduzca su nombre:");
    scanf ("%s", name);
    printf ("Introduzca su edad:");
    scanf ("%d", &age);
    printf ("\nHola %s, tienes %d anhos\n", name,age);
    return 0;
}
