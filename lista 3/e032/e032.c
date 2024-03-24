/* Faça um programa que tenha como entrada a nota de cada um dos alunos de uma turma. Deve 
ser calculado e impresso o número de alunos que tiraram a maior nota e o número de alunos que 
tiraram a segunda maior nota. Imprimir os resultados*/

#include <stdio.h>
#define CON 0

int main (){
    
    int notas, maior_nota, segunda_maior_nota, contador = 1;
    
    maior_nota = segunda_maior_nota = -2147483648;
    
    do{
        
        printf ("\nInsira a %da nota ou um valor negativo p/sair::", contador);
        scanf ("%d", &notas);
        
        if (notas < CON)
        break;
        
        if (notas > maior_nota)
        maior_nota = notas;
        
        else if (notas > segunda_maior_nota && notas != maior_nota)
        segunda_maior_nota = notas;
        
    } while (1);
    
    printf ("\nMaior nota = %d, segunda maior nota = %d.", maior_nota, segunda_maior_nota);
    
    return 0;
}