/*Faça um programa que calcule o sub-factorial de n*/

#include <stdio.h>

int main() {
    int n, k,
        resultado;

    do {
        resultado = 1; // Reiniciar o resultado para 1 a cada iteração

        printf("\nInsira o valor de 'n': ");
        scanf("%d", &n);

        printf("Insira o valor de 'k': ");
        scanf("%d", &k);

        for (int i = n; i > 0; i--) {
            if (i % k != 0)
                resultado *= i;
        }

        printf("O sub-fatorial de %d é %d.\n", n, resultado);

    } while (1);

    return 0;
}