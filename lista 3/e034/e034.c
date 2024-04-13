/*Faça um programa que calcule a soma dos N (>0) primeiros termos da série Fibonacci 
S = 1 1 2 3 5 8 13 ...*/

#include <stdio.h>
#define CON 0

int main (){
    
    int num, a = 0, b = 1, nextTerm, i;
    
    do{
    
    printf ("\nInsina um número inteiro positivo maior que ('0') ou um valor negativo p/sair:");
    scanf ("%d", &num);
    
    if (num < 0)
    break;
    
    for (i = 1; i <= num; ++i) {
        printf("%d, ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    
    } while (1);
    
    return 0;
}