#include <stdio.h>

void datos (int t, char l[t]){
    printf ("\nIntroduce una frase:\n");
    for (int i=0;i<t;++i){
        scanf ("%c",&l[i]);
        if (l[i]=='\n'){
            break;
        }
    }
}

void sustituir (int t, char l[t],char lr[t]){
    int dp=0, dps=0,cont,t2=t;
    char p[dp], ps[20];

    for (int i=0;i<t;++i){
        lr[i]=l[i];
    }

    printf ("\nPalabra a sustituir:");
    do{
        scanf ("%c",&p[dp]);
        if (p[dp]=='\n'){
            break;
        }else{
            dp++;
        }
    }while (p[dp]!='\n');

    printf ("\nPalabra por la que sustituir:");
    for (int i=0;i<20;i++){
        scanf ("%c",&ps[i]);
        if (ps[i]=='\n'){
            break;
        }
        dps++;
    }

    for (int i=0;i<t;i++){
        if(l[i]==p[0]){
            cont=1;
            for (int j=0;j<dp;j++){
                cont++;
                if (l[i+j] != p[j]){
                    break;
                } else if (cont==dp){
                    if (dps>dp){
                        t2+=dps-dp;
                        for (int k=t2;k>i;k--){
                            lr[k]=lr[k-1];
                        }
                        for (int k=0;k<dps;k++){
                            lr[i+k]=ps[k];
                        }
                    }else if (dps==dp){
                        t2=t;
                        for (int k=0;k<dps;k++){
                            lr[i+k]=ps[k];
                        }
                    }else{
                        t2-=dp-dps;
                        for (int k=i+dps;k<t2;k++){
                            lr[k]=lr[k+(dp-dps)];
                        }
                        for (int k=0;k<dps;k++){
                            lr[i+k]=ps[k];
                        }
                    }
                }
            }
        }
    }

    printf ("\nFrase original:\n");
    for (int i=0;i<t;++i){
        if (l[i]=='\n'){
            break;
        }else{
            printf ("%c",l[i]);
        }
    }
    printf ("\n\nFrase despues del cambio:\n");
    for (int i=0;i<t2;++i){
        if(lr[i]=='\n'){
            break;
        }else{
            printf ("%c",lr[i]);
        }
    }
}

int main() {
    const int t=100;
    char l[t], lr[t];

    datos(t,l);
    sustituir (t,l,lr);

    printf("\n");
    return 0;
}
