#include <stdio.h>

int main() {
    int a, b, c;
    int p1,p3,d,r;

    printf ("Primer numero:");
    scanf ("%d", &a);
    printf ("Segundo numero:");
    scanf ("%d", &b);
    printf ("Tercer numero:");
    scanf ("%d", &c);

    if (a>=b && a>=c){
        p1=a;
        if (b>=c){
            p3=c;
        }else{
            p3=b;
        }
    }else {
        if (b>=c){
            p1=b;
            if (a>=c){
                p3=c;
            }else{
                p3=a;
            }
        } else{
            p1=c;
            if (b>=a){
                p3=a;
            }else{
                p3=b;
            }
        }
    }

    if (p3==0){
        printf ("\nNo se puede dividir entre cero");
    }else{
        d=p1/p3;
        r= p1-(d*p3);
        printf ("\nEl resultado de la division entre %d y %d es: %d",p1,p3,d);
        printf ("\nY su resto es: %d",r);
    }

    return 0;
}
