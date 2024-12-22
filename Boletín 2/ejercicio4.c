#include <stdio.h>

int main() {
    int a, b, c;

    printf ("Primer numero:");
    scanf ("%d", &a);
    printf ("Segundo numero:");
    scanf ("%d", &b);
    printf ("Tercer numero:");
    scanf ("%d", &c);

    if (a>=b && a>=c){
        printf ("%d es el numero mas grande.",a);
    }else {
        if (b>=c){
            printf ("%d es el numero mas grande.",b);
        } else{
            printf ("%d es el numero mas grande.",c);
        }
    }
    return 0;
}
