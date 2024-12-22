#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float tmp;
    float s1, s2;

    printf("Introduce el coeficiente a:");
    scanf("%f",&a);
    printf("Introduce el coeficiente b:");
    scanf("%f",&b);
    printf("Introduce el coeficiente c:");
    scanf("%f",&c);

    tmp = powf (b, 2) - 4*a*c;
    if (tmp < 0){
        printf("No tiene \"solucion\" \n");
    }else{
        if (tmp==0) {
            s1 = s2 = -b/(2*a);
        }else{
            tmp= sqrtf(tmp);
            s1 = (-b + tmp)/(2*1);
            s2 = (-b - tmp)/(2*1);
        }
        printf("Sol1: %.3f\n", (-b + tmp)/(2*a));
        printf("Sol2: %.3f\n", (-b - tmp)/(2*a));
    }

    return 0;
}