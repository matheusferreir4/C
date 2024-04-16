/*Faça um programa que calcule e imprima o valor da série S= 1/N + 2/(N-1) + 3/(N2) + 4/(N-3)
+ ... + (N-1)/2 + N/1*/

#include <stdio.h>

int main() {
    int num;
    double soma = 0.0;

    printf("Insira um número inteiro positivo N: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        soma += (double)i / (num - i + 1);
    }

    printf("O valor da série S é: %.1f\n", soma);

    return 0;
}
