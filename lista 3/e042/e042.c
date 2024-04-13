/*Implementar uma função para calcular o cos(X). O valor do cosseno de X será calculado pela 
soma dos 15 primeiros termos da série a seguir*/
#include <stdio.h>
#include <math.h>

int main() {

    int x, resultado = 0, sinal = -1, fatorial = 1;

    printf("\nInsira o valor de um valor 'x': ");
    scanf("%d", &x);

    for (int i = 2; i <= 15; i++) {

        fatorial = 1; // Reinicie o fatorial para cada termo

        for (int j = 1; j <= x; j++) {
            fatorial *= j; // Calcule o fatorial corretamente
        }

        resultado += (1 - (pow(x, i + 2) / fatorial)) * sinal;
        sinal *= -1; // Alterne o sinal
    }

    printf("\nO cosseno de %d é %d\n", x, resultado);

    return 0;
}