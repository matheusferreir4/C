/*Escrever um programa que leia um número n que indica quantos valores devem ser lidos. Para 
cada número lido, mostre uma tabela contendo o valor lido e o fatorial deste valor. */

#include <stdio.h>

int main() {
    int contador = 1, quantidade = 0, numeros;

    printf ("\nInsira quantas vezes números serão lidos:");
    scanf ("%d", &quantidade);

    quantidade++;

    do {
        printf ("\nInsira o %do número:", contador);
        scanf ("%d", &numeros);

        // Calcular o fatorial
        int fatorial = 1;
        for (int i = 1; i <= numeros; i++) {
            fatorial *= i;
        }

        // Mostrar o número e seu fatorial
        printf("Número: %d, Fatorial: %d\n", numeros, fatorial);

        contador++;

        if (contador >= quantidade)
            break;

    } while (1);

    return 0;
}
