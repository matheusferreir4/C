/* Escrever um programa que leia um número não determinado de valores e calcule a média 
aritmética dos valores lidos, a quantidade de valores positivos, a quantidade de valores negativos e 
o percentual de valores negativos e positivos. Mostre os resultados. Adote um falg de saída.*/

#include <stdio.h>
#define CON '38'

int main (){

    int contador = 1, valor = 0, negativos = 0, positivos = 0;
    double media, soma, porcentualnegativo, porcentualpositivo;

    do {

        printf ("\nInsira o %do valor ou insira ('38') p/sair:", contador);
        scanf ("%d", & valor);


        if (valor == CON)
        break;

        contador++;

        //Somando valores
        soma += valor;

        //Calculando média
        media = soma / ((double)contador - 1);

        //Definindo positivos e negativos
        if (valor > 0 && valor != CON)
        positivos++;

        if (valor < 0)
        negativos++;

        //Calculando porcentual
        porcentualpositivo =  (((double)contador - 1) / positivos) * 100;
        porcentualnegativo =  (((double)contador - 1) / negativos) * 100;

        if (porcentualnegativo == porcentualnegativo)
        porcentualpositivo = 50.0;
        porcentualnegativo= 50.0;

    } while (1);

    printf ("\nA média aritmética dos valores lidos é %.1lf\n", media);

    printf ("\nAo total, são %d valores positivos e %d valores negativos", positivos, negativos);

    printf ("\nO porcentual positivo é = %.1lf%% e o porcentual negativo é = %.1lf%%", porcentualpositivo, porcentualnegativo);

    return 0;
}