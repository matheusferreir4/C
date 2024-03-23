/*Faça um programa que leia a, b, c, d, e que constituem o gabarito de uma prova de 5 questões. 
Leia, a seguir, um número não determinado de conjuntos de 6 valores num, a1, b1, c1, d1, e1 onde 
num é o número do aluno e os demais valores são as respostas dos alunos às 5 questões. Conte o 
número de acertos e multiplique por 2. Escrever, para cada aluno, o seu número e a sua nota.*/

#include <stdio.h>
#define CON 0

int main (){
    
    int id,
        questao1, questao2, questao3, questao4, questao5,
        a, b, c, d, e,
        resposta, pontuacao = 0;
        
    do {
        
        printf ("\nInsira o seu ID ou um valor negativo p/sair:");
        scanf ("%d", &id);
        
        if (id < CON)
        break;
        
        printf ("\nTeste de Conhecimentos de Trânsito - Nível Básico\n");
        
        printf ("\nInsira (1) p/letra A, (2) p/letra B, (3) p/letra C, (4) p/letra D e (5) p/letra E.\n");
        
        printf ("\n1 - Qual é a finalidade do cinto de segurança em um veículo?\n a) Aumentar o conforto dos passageiros.\n b) Reduzir a poluição sonora dentro do veículo.\n c) Manter o motorista mais aquecido.\n d) Reduzir o risco de ferimentos em caso de colisão.\n e) Melhorar o consumo de combustível.");
        printf ("\n\nInsira sua resposta:");
        scanf ("%d", &resposta);
        
            if (resposta == 4) //4 = d)
            pontuacao ++;
            
           
        
      
        printf ("\n2 - Em uma rotatória, quem tem a preferência?\n a) O veículo que entra na rotatória.\n b) O veículo que está saindo da rotatória.\n c) O veículo maior.\n d) O veículo que está mais rápido.\n e) O veículo que está à direita.");
        printf ("\n\nInsira sua resposta:");
        scanf ("%d", &resposta);

            if (resposta == 5) // 5 = e)
            pontuacao ++;


        printf ("\n3 - O que significa a sinalização de 'Pare' em uma via?\n a) Diminuir a velocidade.\n b) Seguir em frente.\n c) Estacionar o veículo.\n d) Parar completamente o veículo.\n e) Aumentar a velocidade.");
        printf ("\n\nInsira sua resposta:");
        scanf ("%d", &resposta);

            if (resposta == 4) // 4 = d)
            pontuacao ++;
    
        printf ("\n4 - Qual a função do sistema ABS em um veículo?\n a) Controlar o sistema de climatização.\n b) Regular a tração nas rodas.\n c) Ajustar a suspensão do veículo.\n d) Evitar o travamento das rodas durante a frenagem.\n e) Regular a velocidade máxima do veículo.");
        printf ("\n\nInsira sua resposta:");
        scanf ("%d", &resposta);

            if (resposta == 4) // 4 = d)
            pontuacao ++;


        printf ("\n5 - Como se comportar em uma faixa de pedestres quando um pedestre está atravessando?\n a) Acelerar para passar rapidamente.\n b) Buzinar para alertar o pedestre.\n c) Diminuir a velocidade e parar para permitir a passagem do pedestre.\n d) Ignorar o pedestre e seguir em frente.\n e) Mudar de faixa para evitar o pedestre.");
        printf ("\n\nInsira sua resposta:");
        scanf ("%d", &resposta);

            if (resposta == 3) // 3 = c)
            pontuacao ++;
            
        printf ("\nVocê fez %d pontos.", pontuacao);

        
        
    } while (1);
    
    return 0;
}