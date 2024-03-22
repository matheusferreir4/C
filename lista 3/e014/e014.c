/* Escreva um programa que calcule a média dos números digitados pelo usuário, se eles forem 
pares. Termine a leitura se o usuário digitar zero (0).*/

#include <stdio.h>
#define CON 2

int main (){

    int a = 1, b;
    double c, d, media;

    do {

        printf ("\nInsira o %do número:", a);
        scanf ("%d", &b);

        if (b == 0)
        break;

        a++;

        if (b % 2 == 0) 
        c++;

        if (b % 2 == 0)
        d += b;

        media = d / c;

    } while (1);

    printf ("\nA média aritmética dos números inseridos pares é %.1lf.", media);

    return 0;
}