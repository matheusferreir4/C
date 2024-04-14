*Foi feita uma pesquisa entre os 1000 habitantes de uma região para coletar os seguintes dados:
sexo (0-feminino, 1-masculino), idade e altura. Faça um programa que leia as informações coletadas
e mostre as seguintes informações:
a) média da idade do grupo;
b) média da altura das mulheres;
c) média da idade dos homens;
d) percentual de pessoas com idade entre 18 e 35 anos (inclusive)*/

#include <stdio.h>

int main (){
    
    int sexo, idade, altura,
        soma_idade = 0, cont_idade = 0,
        soma_altura_fem = 0, cont_altura_fem = 0,
        soma_idade_men = 0, cont_idade_men = 0;
        
    double porcentual,
           total_pessoas = 0, grupo_fechado = 0;
    
    do {
        printf ("\nInsira 0 para feminino, 1 para masculino ou 2 para sair:");
        scanf ("%d", &sexo);
        
        if (sexo == 2)
            break;
        
        if (sexo != 0 && sexo != 1)
            continue;
        
        printf ("\nInsira a idade:");
        scanf ("%d", &idade);
        
        // Verificar se a idade é válida
        if (idade < 0 || idade > 110) {
            printf ("\nIdade inválida.");
            continue;
        }
        
        total_pessoas++;
        
        // Calculando a porcentagem de pessoas com idade entre 18 e 35 anos
        if (idade >= 18 && idade <= 35){
            grupo_fechado++;
        }
        
        // Calculando a média de idade entre os homens
        if (sexo == 1){
            soma_idade_men += idade;
            cont_idade_men++;
        }
        
        // Calculando a média de idade do grupo
        soma_idade += idade;
        cont_idade++;
        
        printf ("\nInsira a altura em cm:");
        scanf ("%d", &altura);
        
        // Calculando a média de altura das mulheres
        if (sexo == 0){
            soma_altura_fem += altura;
            cont_altura_fem++;
        }
        
    } while (1);
    
    // Imprimindo a média de idades do grupo
    printf ("\nA média de idades no grupo é: %.1lf anos", (double)soma_idade/cont_idade);
    
    // Imprimindo a média das alturas das mulheres
    printf ("\nA média de altura entre as mulheres é: %.1lf cm", (double)soma_altura_fem/cont_altura_fem);
    
    // Imprimindo a média das idades entre os homens
    printf ("\nA média de idades entre os homens é: %.1lf anos", (double)soma_idade_men/cont_idade_men);
    
    // Imprimindo a porcentagem de pessoas com idade entre 18 e 35 anos
    if (total_pessoas > 0) {
        porcentual = (100 * (grupo_fechado / total_pessoas));
        printf ("\nA porcentagem de pessoas com idade entre 18 e 35 anos é %.1lf%%", porcentual);
    } else {
        printf ("\nNenhuma idade válida foi inserida.");
    }
    
    return 0;
}
