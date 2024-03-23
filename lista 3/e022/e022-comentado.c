#include <stdio.h>
#define CON 0 // Constante para sair do loop

int main (){
    
    int  a, b, mmc, mdc; // Variáveis para armazenar os valores e os resultados do MMC e MDC
    
    // Loop para continuar lendo pares de valores até que o usuário decida sair
    do {
        
        printf ("\nInsira um valor ou 0 p/sair:"); // Solicita ao usuário que insira um valor ou 0 para sair
        scanf ("%d", &a); // Lê o primeiro valor
        
        if (a == CON) // Se o valor lido for 0, sai do loop
            break;
        
        printf ("\nInsira outro valor:"); // Solicita ao usuário que insira outro valor
        scanf ("%d", &b); // Lê o segundo valor
        
        // Cálculo do MMC usando o algoritmo de Euclides
        mmc = a * b; // Inicializa o MMC com o produto dos valores
        while (b != CON) { // Enquanto b não for zero
            int temp = b; // Armazena temporariamente o valor de b
            b = a % b; // Calcula o resto da divisão de a por b
            a = temp; // Atualiza o valor de a com o valor temporário armazenado
        }
        mmc = mmc / a; // Divide o produto pelo último valor de a encontrado, que é o MMC
        
        // Cálculo do MDC usando força bruta
        mdc = 1; // Inicializa o MDC
        for (int i = 1; i <= a / 2; i++) { // Percorre os possíveis divisores de a até a metade do valor de a
            if (a % i == 0 && b % i == 0) // Se i for divisor comum de a e b
                mdc = i; // Atualiza o MDC
        }
        
        // Exibe os resultados do MMC e MDC
        printf ("\nO mmc é %d.", mmc); // Exibe o MMC
        printf ("\nO mdc é %d", mdc); // Exibe o MDC
        
    } while (1); // Loop infinito
    
    return 0;
}
