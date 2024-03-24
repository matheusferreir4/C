/*Faça um programa que tenha como entrada a nota de cada um dos alunos de uma turma ( a nota 
é inteira e varia de 0 a 5). Calcule e imprima:
a) A frequência absoluta (número de ocorrências de cada nota);
b) A frequência relativa (a frequência de cada nota dividida pelo total de alunos).*/

#include <stdio.h>
#define CON 0

int main (){
    
    int contador = 1, nota,
    frequencia_absoluta_0 = 0,
    frequencia_absoluta_1 = 0, frequencia_absoluta_2 = 0,
    frequencia_absoluta_3 = 0, frequencia_absoluta_4 = 0,
    frequencia_absoluta_5 = 0;
    
    double frequencia_relativa0 = 0, frequencia_relativa1 = 0,
        frequencia_relativa2 = 0, frequencia_relativa3 = 0,
        frequencia_relativa4 = 0, frequencia_relativa5 = 0;
    
    do{
        
        printf ("\nInsira a %da nota ou um valor negativo p/sair:", contador);
        scanf ("%d", &nota);
        
        if (nota >= CON)
        contador++;
        
        if (nota < CON)
        break;
        
        //Calculando frequência absoluta
        if (nota == 0)
        frequencia_absoluta_0++;
        
        if (nota == 1)
        frequencia_absoluta_1++;
        
        if (nota == 2)
        frequencia_absoluta_2++;
        
        if (nota == 3)
        frequencia_absoluta_3++;
        
        if (nota == 4)
        frequencia_absoluta_4++;
        
        if (nota == 5)
        frequencia_absoluta_5++;
        
        //Calculando frequência relativa
        if (nota == 0)
        frequencia_relativa0 = (double)frequencia_absoluta_0 / (double)contador;
        
        if (nota == 1)
        frequencia_relativa1 = (double)frequencia_absoluta_1 / (double)contador;
        
        if (nota == 2)
        frequencia_relativa2 = (double)frequencia_absoluta_2 / (double)contador;
        
        if (nota == 3)
        frequencia_relativa3 = (double)frequencia_absoluta_3 / (double)contador;
        
        if (nota == 4)
        frequencia_relativa4 = (double)frequencia_absoluta_4 / (double)contador;
        
        if (nota == 5)
        frequencia_relativa5 = (double)frequencia_absoluta_5 /(double) contador;
        
    } while (1);
    
    printf ("\nA frequência absoluta da nota 0 é %d, enquanto a relativa é %.2lf", frequencia_absoluta_0, frequencia_relativa0);
    
    printf ("\nA frequência absoluta da nota 1 é %d, enquanto a relativa é %.2lf", frequencia_absoluta_1, frequencia_relativa1);
    
    printf ("\nA frequência absoluta da nota 2 é %d, enquanto a relativa é %.2lf", frequencia_absoluta_2, frequencia_relativa2);
    
    printf ("\nA frequência absoluta da nota 3 é %d, enquanto a relativa é %.2lf", frequencia_absoluta_3, frequencia_relativa3);
    
    printf ("\nA frequência absoluta da nota 4 é %d, enquanto a relativa é %.2lf", frequencia_absoluta_4, frequencia_relativa4);
    
    printf ("\nA frequência absoluta da nota 5 é %d, enquanto a relativa é %.2lf", frequencia_absoluta_5, frequencia_relativa5);
    
    return 0;
}