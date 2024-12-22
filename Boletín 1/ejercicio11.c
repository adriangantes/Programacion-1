#include <stdio.h>
#include <math.h>

int main() {
    int seg, min, h, segc;

    printf("Tiempo en segundos: ");
    scanf("%d", &seg);

    segc=seg;
    h= segc/3600;
    segc= seg-h*3600;
    min= segc/60;
    segc = seg- (h*3600+min*60) ;

    printf("%d segundos son %d horas, %d minutos y %d segundos\n",seg, h, min, segc);

    return 0;
}
