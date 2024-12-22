#include <stdio.h>

int comp (char c){
    if (c>='a'&& c<='z'){
        return 1;
    }else if (c<='Z' && c>='A'){
        return 2;
    }else if(c<='9' && c>='0'){
        return 3;
    }else{
        if (c!=' ' && c!='\n'){
            return 4;
        }
    }
    return 0;
}

int main() {
    int may=0,min=0,num=0,dig=0;
    char c;

    printf("\nEscribe una frase:\n");
    do{
        c=getchar();
        if (comp(c)==1){
            min++;
        }else if (comp(c)==2){
            may++;
        }else if (comp(c)==3){
            num++;
        }else if (comp(c)==4){
            dig++;
        }
    }while (c != '\n');

    printf ("\nLetras mayusculas: %d",may);
    printf ("\nLetras minusculas: %d",min);
    printf ("\nNumeros: %d",num);
    printf ("\nOtros digitos: %d\n",dig);
    return 0;
}
