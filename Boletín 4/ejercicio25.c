#include <stdio.h>

int main() {
    int ca=0,ce=0,ci=0,co=0,cu=0,c=0;
    char l;

    printf("\nIntroduce una frase:\n");

    do{
        scanf ("%c",&l);
        if(l=='a' || l=='A'){
            ca++;
        }else if(l=='e' || l=='E'){
            ce++;
        }else if(l=='i' || l=='I'){
            ci++;
        }else if(l=='o' || l=='O'){
            co++;
        }else if(l=='u' || l=='U') {
            cu++;
        }
        c++;
    }while (l != '\n');

    printf ("\nFrecuencia de \"a\": %d/%d",ca,c);
    printf ("\nFrecuencia de \"e\": %d/%d",ce,c);
    printf ("\nFrecuencia de \"i\": %d/%d",ci,c);
    printf ("\nFrecuencia de \"o\": %d/%d",co,c);
    printf ("\nFrecuencia de \"u\": %d/%d\n",cu,c);

    return 0;
}
