#include <stdio.h>

int check_date(int d,int m, int y){
    if (d<1||m<1||y<1||m>12){
        return 0;
    }else{
        switch(m){
            case 2:
                if (y%4==0){
                    return d<=29;
                }else{
                    return d<=28;
                }
            case 4: case 6: case 9: case 11:
                return d<=30;
            default:
                return d<=31;
        }
    }
}

int main() {
    int day,month,year;

    printf("\nIntroduzca una fecha (dd/mm/yyyy):");
    scanf ("%d/%d/%d",&day,&month,&year);

    printf("\n%02d/%02d/%04d es %s\n",day,month,year, check_date(day,month,year) ? "valida":"invalida");
    return 0;
}
