#include <stdio.h>

int main() {
    float kpatata,kmanzana,libro;
    float ppatata,pmanzana,plibro;
    float tpatata,tmanzana,tlibro;
    float pcpatata,pcmanzana,pclibro;
    float total;

    printf ("Kg de patatas comprados:");
    scanf ("%f",&kpatata);
    printf ("Precio sin IVA del kilo de patatas:");
    scanf ("%f",&ppatata);
    printf ("Kg de manzanas comprados:");
    scanf ("%f",&kmanzana);
    printf ("Precio sin IVA del kilo de manzanas:");
    scanf ("%f",&pmanzana);
    printf ("Libros comprados:");
    scanf ("%f",&libro);
    printf ("Precio sin IVA del libro:");
    scanf ("%f",&plibro);

    tpatata= kpatata*ppatata;
    tmanzana= kmanzana*pmanzana;
    tlibro= libro*plibro;
    pcpatata= tpatata+(tpatata*0.21);
    pcmanzana= tmanzana+(tmanzana*0.21);
    pclibro= tlibro+(tlibro*0.1);
    total= pcpatata+pcmanzana+pclibro;

    printf ("\n-----------------------------Ticket 1/1");
    printf ("\nPatatas: \t%.2f\t%.2f\t%.2f\t%.2f (IVA 21%)", kpatata,ppatata,tpatata,pcpatata);
    printf ("\nManzanas: \t%.2f\t%.2f\t%.2f\t%.2f (IVA 21%)", kmanzana,pmanzana,tmanzana,pcmanzana);
    printf ("\nLibro: \t\t%.2f\t%.2f\t%.2f\t%.2f (IVA 10%)", libro,plibro,tlibro,pclibro);
    printf ("\n---------------------------------------");
    printf ("\nTotal: %.2f",total);

    return 0;
}
