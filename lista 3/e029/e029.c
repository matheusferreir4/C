/*Faça um programa que leia 2 valores inteiros e positivos: X e Y. O programa deve calcular e 
escrever a função potência X^Y*/

#include <stdio.h>
#include <math.h>
#define CON 0

int main (){
    
    int x, y, z;
    
    do{
        
        printf ("\nInsira um valor inteiro positivo ou um valor negativo p/sair:");
        scanf ("%d", &x);
        
        if (x < CON)
        break;
        
        printf ("\nInsira outro valor inteiro positivo:");
        scanf ("%d", &y);
        
        z = pow(x, y);
        printf ("\nO resultado é %d.", z);
        
    } while (1);
    
    return 0;
}