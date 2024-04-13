/*Faça um programa que mostre os conceitos finais dos alunos de uma classe de 75 alunos, 
considerando:
a) os dados de cada aluno (número de matrícula e nota numérica final) serão fornecidos pelo 
usuário;
b) a tabela de conceitos segue abaixo:
Nota Conceito
de 0,0 a 4,9 D
de 5,0 a 6,9 C
de 7,0 a 8,9 B
de 9,0 a 10,0 A*/

#include <stdio.h>
#define CON 0 

int main (){
    
    int id, nota, contador = 1;
    char conceito;
    
    do{
        
        printf ("\nInsira o seu ID ou um valor negativo para sair:");
        scanf ("%d", &id);
        
        if (id < CON)
        break;
            
            printf ("\nInsira a %da nota ('Entre 0 e 10'):", contador);
            scanf ("%d", &nota);
            
            if (nota >= CON && nota <= 4.9)
            conceito = 'D';
            
            else if (nota >= 5.0 && nota <= 6.9)
            conceito = 'C';
            
            else if (nota >= 7.0 && nota <= 8.9)
            conceito = 'B';
            
            else if (nota >= 9.0 && nota <= 10.0)
            conceito = 'A';
            
            printf ("\nO seu conceito foi %c.", conceito);
            
    } while (1);
    
    return 0;
}