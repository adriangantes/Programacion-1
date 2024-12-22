#include <stdio.h>
#include <stdlib.h>

int main() {
    const int n=500;
    int a1[n],a2[n],a3[n],r[1500],tmp;

    for (int i=0;i<n;i++){
        a1[i]= rand()%10000;
        a2[i]= rand()%10000;
        a3[i]= rand()%10000;
    }

    for (int i=0;i<1500;i++){
        if (i<500){
            r[i]=a1[i];
        }else if (i>=500 && i<1000){
            r[i]=a2[i-500];
        }else if (i<1500 && i>=1000){
            r[i]=a2[i-1000];
        }
    }
    printf ("\n\n\nArray 1:\n");
    for (int i=0;i<n;i++){
        printf ("%d   ",a1[i]);
    }
    printf ("\n\n\nArray 2:\n");
    for (int i=0;i<n;i++){
        printf ("%d   ",a2[i]);
    }
    printf ("\n\n\nArray 3:\n");
    for (int i=0;i<n;i++){
        printf ("%d   ",a3[i]);
    }


    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if (a1[j]>a1[j+1]){
                tmp=a1[j+1];
                a1[j+1]=a1[j];
                a1[j]=tmp;
            }
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if (a2[j]>a2[j+1]){
                tmp=a2[j+1];
                a2[j+1]=a2[j];
                a2[j]=tmp;
            }
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if (a1[j]>a3[j+1]){
                tmp=a3[j+1];
                a3[j+1]=a3[j];
                a3[j]=tmp;
            }
        }
    }

    printf ("\n\n\nArray 1 ordenado:\n");
    for (int i=0;i<n;i++){
        printf ("%d   ",a1[i]);
    }
    printf ("\n\n\nArray 2 ordenado:\n");
    for (int i=0;i<n;i++){
        printf ("%d   ",a2[i]);
    }
    printf ("\n\n\nArray 3 ordenado:\n");
    for (int i=0;i<n;i++){
        printf ("%d   ",a3[i]);
    }


    printf ("\n\n\nArray final:\n");
    for (int i=0;i<1500;i++){
        printf ("%d   ",r[i]);
    }

    for (int i=0;i<1500;i++){
        for (int j=0;j<1500-i-1;j++){
            if (r[j]>r[j+1]){
                tmp=r[j+1];
                r[j+1]=r[j];
                r[j]=tmp;
            }
        }
    }
    printf ("\n\n\nArray final ordenado:\n");
    for (int i=0;i<1500;i++){
        printf ("%d   ",r[i]);
    }

    printf("\n");
    return 0;
}
