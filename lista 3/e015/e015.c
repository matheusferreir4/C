/*Escreva um programa que leia 50 valores e encontre o maior e o menor deles. Mostre o 
resultado. */

#include <stdio.h>
#define CON 50

int main (){

    int a = 1, b, maior, menor;

    do {
        printf ("\nInsira o %do valor:", a);
        scanf ("%d", &b);

        a++;

        if (b > maior)
        maior = b;

        if (b < menor)
        menor = b;

        
    } while (a <= CON);

    printf ("\nO maior número inserido foi %d, já o menor foi %d.", maior, menor);

    return 0;
}