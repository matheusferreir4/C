/* Escrever um programa que leia um conjunto de 50 informações contendo, cada uma delas, a 
altura e o sexo de uma pessoa (código=1, masculino código=2, feminino), calcule e mostre o 
seguinte: 
a) a maior e a menor altura da turma
b) a média da altura das mulheres
c) a média da altura da turma.
d) A maior e a menor altura dos homen*/

#include <stdio.h>
#define CON 50

int main (){
    
    int sexo,
    contador_homens = 1, contador_mulheres = 1, 
    altura_homens, maior_homens = -1, menor_homens = 99999, 
    altura_mulheres, maior_turma = -1, menor_turma = 99999;
    
    double media_turma, soma_homens = 0,
           media_mulheres,soma_mulheres = 0;
    
    do{
        
        printf ("\nInsira ('1- masculino || 2- feminino') ou um valor negativo p/sair:");
        scanf ("%d", &sexo);
        
        if (sexo < 0)
        break;
        
        if (sexo == 1)
        while (1){
            
            printf ("\nInsira a %da altura ou um valor negativo p/sair:", contador_homens);
            scanf ("%d", &altura_homens);
            
            if (altura_homens < 0)
            break;
            
            if (altura_homens > 0)
            soma_homens += altura_homens;
            
            if (altura_homens > 0)
            contador_homens++;
            
            if (altura_homens > maior_homens)
            maior_homens = altura_homens;
            
            if (altura_homens < menor_homens && altura_homens >= 0)
            menor_homens = altura_homens;
        }
        
        if (sexo == 2)
        while (1){
            
            printf ("\nInsira a %da altura ou um valor negativo p/sair:", contador_mulheres);
            scanf ("%d", &altura_mulheres);
            
            if (altura_mulheres < 0)
            break;
            
            if (altura_mulheres > 0)
            contador_mulheres++;
            
            if (altura_mulheres > 0)
            soma_mulheres += altura_mulheres;
            
            media_mulheres = soma_mulheres / (double)contador_mulheres;
            
        }
        
        if (maior_homens >= altura_mulheres)
        maior_turma = maior_homens;
        
        else if (altura_mulheres > maior_homens)
        maior_turma = altura_mulheres;
        
        if (menor_homens < altura_mulheres && altura_mulheres > 0)
        menor_turma = menor_homens;
        
        else if (altura_mulheres < menor_homens && altura_mulheres > 0)
        menor_turma = altura_mulheres;
        
        media_turma = (soma_homens +soma_mulheres) / (contador_homens + contador_mulheres);
        
        
        
    } while (1);
    
    printf ("\nA maior altura entre a turma é %d, enquanto a menor é %d.", maior_turma, menor_turma);
    
    printf ("\nA média de altura na turma é %.2lf.", media_turma);
    
    printf ("\nA maior altura entre os homens é: %d, enquanto a menor é: %d.", maior_homens, menor_homens);
    
    printf ("\nA média de altura entre as mulheres é %.2lf.", media_mulheres);
    
    return 0;
}
