#include <stdio.h>
#include <math.h>

int main() {
    float radio1, radio2, radio3;
    float area1, area2, area3;
    float peri1, peri2, peri3;
    printf ("Radio del circulo 1:");
    scanf ("%f", &radio1);
    peri1=2*3.14*radio1;
    area1= 3.14*radio1*radio1;
    printf ("Radio del circulo 2:");
    scanf ("%f", &radio2);
    peri2=2*3.14*radio2;
    area2= 3.14*radio2*radio2;
    printf ("Radio del circulo 3:");
    scanf ("%f", &radio3);
    peri3=2*3.14*radio3;
    area3= 3.14*radio3*radio3;

    printf ("RADIO\tPERIMETRO\tAREA\n");
    printf("\n=====================================================\n");
    printf("%.2f \t\t %.2f \t\t %.2f\n", radio1, peri1, area1);
    printf("%.2f \t\t %.2f \t\t %.2f\n", radio2, peri2, area2);
    printf("%.2f \t\t %.2f \t\t %.2f\n", radio3, peri3, area3);
    return 0;
}
