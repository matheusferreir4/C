/*Foi realizada uma pesquisa de algumas características físicas da população de uma certa região, 
a qual coletou os seguintes dados referentes a cada habitante para serem analisados: 
- sexo (masculino e feminino);
- cor dos olhos (azuis, verdes ou castanhos);
- cor dos cabelos (louros, castanhos, pretos);
- idade.
Faça um programa que determine e escreva: 
- a maior idade dos habitantes 
- a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos inclusive e que 
tenham olhos verdes e cabelos louros.*/
#include <stdio.h>

int main(){
    
    int idade, sexo, olho, cabelo,
    total,
    contador_mulher_olhos = 0,
    contador_mulher_cabelos = 0,
    maior = -1, menor = 999999;
    
    do{
        
        printf ("\nIdade ou valor negativo p/sair:");
        scanf ("%d", &idade);
        
        if (idade > maior)
        maior = idade;
        
        if (idade < menor && idade >= 0)
        menor = idade;
        
        if (idade < 0)
        break;
        
        printf ("\nSexo (1- Homen || 2- Mulher):");
        scanf ("%d", &sexo);
        
        printf ("\nOlhos: (3- Azuis || 4- Verdes || 5- Castanhos):");
        scanf ("%d", &olho);
        
        if ((idade >= 18 && idade <= 35) && (sexo == 2 && olho == 4))
        contador_mulher_olhos++;
        
        printf ("\nCabelos (6- Loiro || 7- Preto || 8- Outro):");
        scanf ("%d", &cabelo);
        
        if ((idade >= 18 && idade <= 35) && (sexo == 2 && cabelo == 6))
        contador_mulher_cabelos++;
        
        
    } while (1);
    
    total = (contador_mulher_cabelos + contador_mulher_olhos) / 2;
    
    printf ("\nMaior idade = %d anos, menor = %d anos.", maior, menor);
    
    printf ("\nQuantidade de mulheres que cumprem os requisitos: %d", total);

    return 0;
}