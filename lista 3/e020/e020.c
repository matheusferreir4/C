/*Escrever um programa que tenha como entrada um número não determinado de pares de valores m,n, todos inteiros e positivos, 
um par de cada vez, e calcula e escreve a soma dos n inteiros consecutivos a partir de m inclusive.*/

#include <stdio.h>
#define CON 0

int main (){

    int m, n, soma, contador = 1;

    do {

        printf ("\nInsira um valor 'm' ou um valor negativo p/sair:");
        scanf ("%d", &m);

        if (m < CON)
        break;

        else
        printf ("\nInsira um valor 'n':");
        scanf ("%d", &n);

        soma = m + n;

        if (m >= CON)
        printf ("\nA %da soma é %d.", contador, soma);

        contador++;

    } while (1);

    return 0;
}