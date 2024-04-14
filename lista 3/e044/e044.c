/*Um cinema possui capacidade de 100 lugares e está sempre com ocupação total. Certo dia, cada
espectador respondeu a um questionário, no qual constava:
 sua idade;
 sua opinião em relação ao filme, segundo as seguintes notas:
A: Ótimo
B: Bom
C: Regular
D: Ruim
E: Péssimo
Elabore um programa que, lendo estes dados, calcule e imprima:
 A quantidade de respostas ótimo;
 A média de idade das pessoas que responderam ruim;
 O percentual de respostas péssimo e a maior idade que utilizou esta opção;
 A diferença de idade entre a maior idade que respondeu ótimo e a maior idade
que respondeu ruim*/

#include <stdio.h>

int main () {
    int idade, idade_ruim = 0, nota_ruim = 0, nota,
        a = 0;
    double total_pessoas = 0, grupo_fechado = 0, maior_idade_otimo = 0,
           maior_idade_ruim = 0, maior_idade_pessimo = 0;
    
    while (1) {
        printf ("\nInsira quantos anos você tem ou um valor negativo p/finalizar:");
        scanf ("%d", &idade);
        
        if (idade >= 0)
            total_pessoas++;
        
        if (idade < 0)
            break;
        
        printf ("\nO que você achou do filme?\n");
        printf ("\n1 p/ótimo, 2 p/bom, 3 p/regular, 4 p/ruim e 5 p/péssimo:");
        scanf ("%d", &nota);
        
        if (nota == 1) {
            a++;
            if (idade > maior_idade_otimo)
                maior_idade_otimo = idade;
        }
        
        if (nota == 4) {
            idade_ruim += idade;
            nota_ruim++;
            if (idade > maior_idade_ruim)
                maior_idade_ruim = idade;
        }
        
        if (nota == 5) {
            grupo_fechado++;
            if (idade > maior_idade_pessimo)
                maior_idade_pessimo = idade;
        }
    }
    
    printf ("\n%d pessoas acharam o filme Ótimo.", a);
    
    if (nota_ruim != 0)
        printf ("\nA média de idade entre as pessoas que acharam o filme ruim é %.1lf", (double)idade_ruim/nota_ruim);
    else
        printf ("\nNenhuma pessoa achou o filme ruim.");

    printf ("\nO porcentual de pessoas que acharam o filme péssimo é %.2lf%%, enquanto a maior idade entre as pessoas que acharam o filme péssimo foi %.0lf.", (grupo_fechado/total_pessoas) * 100, maior_idade_pessimo);
    
    printf ("\nA diferença das idades pedidas é %.0lf anos.", maior_idade_otimo - maior_idade_ruim);
    
    return 0;
}
