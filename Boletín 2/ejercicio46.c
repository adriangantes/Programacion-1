#include <stdio.h>

int main() {
    printf ("\n");

    for (int i=1;i<=9;i++){
        printf("\t%d",i);
    }

    for (int i=1;i<=9;i++) {
        printf("\n\n%d", i);
        for (int r = 1; r <= i; r++) {
            printf("\t%d", r * i);
        }
    }
    printf ("\n");
    return 0;
}
