/*Uma loja tem 150 clientes cadastrados e deseja mandar uma correspondência a cada um deles 
anunciando um bônus especial. Escreva um programa que leia o nome do cliente e o valor das suas 
compras no ano passado e calcule um bônus de 10% se o valor das compras for menor que R$ 
500,01 e de 15 %, caso contrário.*/
#include <stdio.h>
#define CON 150

int main (){

    double valor, bonus;
    char nome[50];
    
    while (1){
        printf ("\nDigite o nome do cliente:");
        scanf ("%s", &nome);
        
        printf ("\nInsira quanto o cliente gastou no último ano ou um valor negativo p/sair:");
        scanf ("%lf", &valor);
        
        if (valor < 0)
        break;
        
        if (valor < 500.01)
            bonus = valor + (valor * 0,1);
        
        else 
            bonus = valor + (valor * 0.15);
        
        printf ("Olá %s!\nNós da LIMITADA LIMITADA LTDA viemos por meio dessa correspondência mostrar o quão importante você é para nós!\nNo ano passado você gastou %.4lf reais em nossos estabelecimentos\ne por isso estamos te dando um bônus de %.4lf reais em compras com o cartão de crédito!", nome, valor, bonus);
        
    }
    
    return 0;
}