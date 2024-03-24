/*Faça um programa que leia um conjunto de valores, um de cada vez, acompanhados de um 
código 1 ou 2. O valor representa o número de cobaias utilizadas em cada uma das experiências 
feitas e os códigos 1 e 2 representam respectivamente coelhos e ratos. Quer-se saber o total de 
cobaias utilizadas, o total de coelhos, o total de ratos, a percentagem de coelhos e a percentagem de 
ratos. Escrever estes valores.
Obs. Flag de saída código igual a 3.*/

#include <stdio.h>
#define CON 3 

int main (){
    
    int codigo, ratos = 0, coelhos = 0;
    double porcentual_ratos = 0, porcentual_coelhos = 0;
    
    do{
        
        printf ("\nInsira o código do experimento('1' - '2') ou ('3') p/sair:");
        scanf ("%d", &codigo);
        
        if (codigo == 1)
        coelhos++;
        
        if (codigo == 2)
        ratos++;
        
        if (codigo == 3)
        break;
        
    } while (1);
    
    porcentual_coelhos = (1 / (double)coelhos) * 100;
    porcentual_ratos = (1 / (double)ratos) * 100;
   
    if (coelhos == ratos)
    porcentual_ratos = porcentual_coelhos = 50.0;
    
    printf ("\nTotal de coelhos: %d || Total de ratos: %d.", coelhos, ratos);
    
    printf ("\nO total de coelhos utilizados foi %.1lf%%, já o total de ratos foi %.1lf%%.", porcentual_coelhos, porcentual_ratos);
    
    return 0;
}