/*Escrever um programa que leia uma quantidade desconhecida de números e conte 
quantos deles estão nos seguintes intervalos: [0.25], [26,50], [51,75] e [76,100]. 
A entrada de dados deve terminar quando for lido um número negativo.*/

#include <stdio.h>
#define CON 0

int main (){

    int cont = 1, numero, cond1 = 0 , cond2 = 0 , cond3  = 0, cond4 = 0;

    do{
        printf ("\nInsira o %do número:", cont);
        scanf ("%d", &numero);

        cont ++;

        if (numero < CON)
        break;

        if (numero >= CON && numero <= 25)
        cond1++;

        if (numero >= 26 && numero <= 50)
        cond2++;

        if (numero >= 51 && numero <= 75)
        cond3++;

        if (numero >= 75 && numero <= 100)
        cond4++;

    } while (1);

    printf ("\n%d números entre 0 e 25, %d entre 26 e 50, %d entre 51 e 75, %d entre 75 e 100.", cond1, cond2, cond3, cond4);

    return 0;
}