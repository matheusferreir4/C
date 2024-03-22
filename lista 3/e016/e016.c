/*Escreva um programa que leia o código de um aluno e suas três notas. Calcule a média 
ponderada do aluno, considerando que o peso para a maior nota seja 4 e para as duas restantes, 3. 
Mostre o código do aluno, suas três notas, a média calculada e uma mensagem "APROVADO" se a 
média for maior ou igual a 5 e "REPROVADO" se a média for menor que 5. Repita a operação até 
que o código lido seja negativo.*/
#include <stdio.h>
#define CONA 4
#define CONB 3
#define CONC 10

int main (){
    int aluno, contador, notas;
    double media = 0, maior = 0, meio = 0, menor = 0;

    contador = 1;

    do {
        printf ("\nInsira o ID do aluno ou um valor negativo para sair: ");
        scanf ("%d", &aluno);

        if (aluno <= -1)
            break;

        contador = 1; // Reinicialize o contador a cada iteração
        maior = meio = menor = 0; // Reinicialize as variáveis de notas

        do {
            printf ("\nInsira a %da nota: ", contador);
            scanf ("%d", &notas);

            if (notas > maior)
                maior = notas; // Atualize apenas a maior nota
            else if (notas > meio)
                meio = notas; // Atualize a segunda maior nota
            else
                menor = notas; // A menor nota será o valor restante

            contador++;
        } while (contador <= 3);

        media =  (maior * CONA + meio * CONB + menor * CONB) / CONC; // Calcule a média ponderada

        printf ("\nID do aluno: %d", aluno);
        printf ("\nNotas: %d, %d, %d", (int)maior, (int)meio, (int)menor);
        printf ("\nMédia ponderada: %.2lf", media);

        if (media >= 5)
            printf ("\nAPROVADO\n");
        else
            printf ("\nREPROVADO\n");

    } while (1);

    return 0;
}