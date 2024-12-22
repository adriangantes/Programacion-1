#include <stdio.h>

int main() {
    int a,s;
    a=2100,s=21;

    printf ("\nPulse ENTER para avanzar de siglo a siglo.");
    printf ("\nPulse ESPACIO y despues ENTER para avanzar de siglo a siglo.");

    while (getchar() != ' '){
        if (s>0){
            printf("\nSiglo %d:\n",s);
            s-=1;
            while (a>=(s*100)){
                printf ("%d - ",a);
                a=a-4;
            }
        }else{
            break;
        }
    }

    return 0;
}
