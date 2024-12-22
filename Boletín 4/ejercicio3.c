#include <stdio.h>
#define nums 30

float n[nums],s=0;

void suma(){
    for (int i=0;i<nums;i++){
        s+=n[i];
    }
    printf ("\nLa suma de los numeros introducidos es: %.4f",s);
}
void pedir(){
    printf("\nIntroduzca %d numeros (ENTER para terminar):",nums);
    for (int i=0;i<nums;){
        scanf ("%f",&n[i]);
        if (getchar() == '\n'){
            break;
        }
        i++;
    }
}
int main() {
    pedir();
    suma();
    printf("\n");
    return 0;
}
