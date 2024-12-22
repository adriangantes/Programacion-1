#include <stdio.h>

int fact (int n){
    int tot=1;
    for (int i=1;i<=n;i++){
        tot=tot*i;
    }
    return tot;
}
float pot (float num,int n){
    float tot=1;
    for (int i=1;i<=n;i++){
        tot=tot*num;
    }
    return tot;
}

float aprox (int prof, float num){
    float res=0;
    for (int i=1;i<=prof;i++){
        if (i%2==0){
            res+=(-1)*(pot(num,i*2-1)/fact(i*2-1));
        }else{
            res+=(pot(num,i*2-1)/fact(i*2-1));
        }
    }
    return res;
}

int main() {
    int prof;
    float num;

    printf ("\nIntroduce el angulo:");
    scanf ("%f",&num);
    printf ("Introduce la profundidad:");
    scanf ("%d",&prof);

    printf ("\nsen(%.2f) = %f  (con una profundidad de %d\n)",num,aprox(prof,num),prof);

    return 0;
}
