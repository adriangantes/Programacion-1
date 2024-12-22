#include <stdio.h>

void datos (int dist,char nombre[dist],char apellido1[dist],char apellido2[dist], int cant,char matricula[cant]){
    printf ("Introduce tu nombre:");
    for (int i=0;i<cant;i++){
        scanf ("%c",&nombre[i]);
        if (nombre[i]=='\n'){
            break;
        }
    }
    printf ("Introduce tu primer apellido:");
    for (int i=0;i<cant;i++){
        scanf ("%c",&apellido1[i]);
        if (apellido1[i]=='\n'){
            break;
        }
    }
    printf ("Introduce tu segundo apellido:");
    for (int i=0;i<cant;i++){
        scanf ("%c",&apellido2[i]);
        if (apellido2[i]=='\n'){
            break;
        }
    }
    printf ("\nIntroduce la matricula de tu coche (1111-XXX):");
    for (int i=0;i<cant;i++){
        scanf ("%c",&matricula[i]);
    }
}

int val (int edad, int cant,char matricula[cant]){
    int suma=0,v;
    for (int i=0;i<cant;i++){
        if (matricula[i]>='0' && matricula[i]<='9'){
            v=matricula[i]-48;
            suma+=v;
        }
    }
    if (suma==edad){
        return 1;
    }else{
        return 0;
    }
}

int letras (int dist,int cant,char nombre[dist],char apellido1[dist],char apellido2[dist],char matricula[cant]){
    if (matricula[5]==nombre[0] && matricula[6]==apellido1[0] && matricula[7]==apellido2[0]){
        return 1;
    }else{
        return 0;
    }
}

int main() {
    const int cant=8,dist=20;
    char nombre[dist],apellido1[dist],apellido2[dist],matricula[cant];
    int edad;

    printf ("\nIntroduce tu edad:");
    scanf ("%d",&edad);
    getchar();
    datos (dist,nombre,apellido1,apellido2,cant,matricula);
    printf("\nLa suma de los digitos es igual a la edad? %s\n",val(edad,cant,matricula)==1? "Si":"No");
    printf("\nLas iniciales del nombre completo son\niguales a las letras de la matricula? %s\n",letras(dist,cant,nombre,apellido1,apellido2,matricula)==1? "Si":"No");
    return 0;
}
