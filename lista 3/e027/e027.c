/*Uma empresa deseja aumentar seus preços em 20%. Faça um programa que leia o código e o 
preço de custo de cada produto e calcule o preço novo. Calcule também, a média dos preços com e 
sem aumento. Mostre o código e o preço novo de cada produto e, no final, as médias. A entrada de 
dados deve terminar quando for lido um código de produto negativo*/

#include <stdio.h>
#define CONA 0 
#define CONB 0.2

int main (){
    
    int codigo, produtos, antes, depois;
    double preco, novopreco, media_antes, media_depois;
    
    do{
        
        printf ("\nInsira o código númerico do produto ou um valor negativo p/sair:");
        scanf ("%d", &codigo);
        
        if (codigo >= 0)
        produtos++;
        
        if (codigo < CONA)
        break;
        
        printf ("\nInsira o preço do produto:");
        scanf ("%lf", &preco);
        
        antes += preco;
        
        //Calculando o novo preço
        novopreco = preco - (preco * CONB);
        printf ("\nO novo preço do produto de código %d, de antigo preço R$%.2lf, é: R$%.2lf", codigo, preco, novopreco);
        
        depois += novopreco;
        
        //Calculando media de preços antigos
        media_antes = antes / produtos;
        
        //Calculando media de preços novos
        media_depois = depois / produtos;
        
    } while (1);
    
    printf ("\nA média dos preços antes das mudanças era R$%.2lf, enquanto a média de preços depois das mudanças é de R$%.2lf.", media_antes, media_depois);
    
   
    
    return 0;
}