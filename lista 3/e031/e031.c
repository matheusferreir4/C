/*Faça um programa que implemente o jogo "hi-lo". A finalidade do jogo é que o usuário acerte 
um número entre 1 e 100, escolhido aleatoriamente pelo programa. A cada palpite do usuário, o 
programa deve responder indicando se este é inferior ou superior ao número escondido. Quando o 
usuário acertar, o programa deve dar-lhe os parabéns e indicar em quantas jogadas acertou.
Obs.:
rand (x) = um número aleatório, menor que x e maior ou igual a zero.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CONA 1
#define CONB 100

int main (){
    
    int chute, resposta,
        contador_de_acertos = 0;
    
    do{
        
        srand(time(NULL));
        resposta = rand() % CONB + CONA;
        
        printf ("\nInsira um número entre ('1 - 100') ou um valor menor do que ('1') p/sair:");
        scanf ("%d", &chute);
        
        if (chute < CONA)
        break;
        
            if (chute == resposta){
                contador_de_acertos++;
            
                printf ("\nParábens, você acertou!");
            
            }
        
            if (chute != resposta){
            printf ("\nVocê errou.\n");
            
            }
        
        printf ("\nVocê tem %d ponto(s).", contador_de_acertos);
        
    } while (1);
    
    return 0;
}