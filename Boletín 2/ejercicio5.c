#include <stdio.h>

int main() {
    int a, b, c;
    int p1, p2, p3;

    printf ("Primer numero:");
    scanf ("%d", &a);
    printf ("Segundo numero:");
    scanf ("%d", &b);
    printf ("Tercer numero:");
    scanf ("%d", &c);

    if (a>=b && a>=c){
        p1=a;
        if (b>=c){
            p2=b;
            p3=c;
        }else{
            p2=c;
            p3=b;
        }
    }else {
        if (b>=c){
            p1=b;
            if (a>=c){
                p2=a;
                p3=c;
            }else{
                p2=c;
                p3=a;
            }
        } else{
            p1=c;
            if (b>=a){
                p2=b;
                p3=a;
            }else{
                p2=a;
                p3=b;
            }
        }
    }

    printf ("%d <= %d <= %d",p3,p2,p1);
    return 0;
}
