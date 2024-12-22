#include <stdio.h>

float PedirNota (){
    float nota,total=0;

    for (int c=1;c<=4;c++){
        printf ("\nNota %d.",c);
        printf("\nIntroduce nota:");
        scanf ("%f",&nota);
        while (nota<0 || nota>100){
            printf ("Nota no valida. Introduce nota:");
            scanf ("%f",&nota);
        }
        total+=nota;
    }
    return total;
}

char CalcularMedia(float total){
    float res=total/4;

    if (res>=90){
        return 'A';
    }else if (res<90 && res>=80){
        return 'B';
    }else if (res<80 && res>=70){
        return 'C';
    }else if (res<70 && res>=60){
        return 'D';
    }else{
        return 'E';
    }
}

int main() {
    float total;
    total=PedirNota();
    printf ("\nMedia: %c\n",CalcularMedia(total));
    return 0;
}
