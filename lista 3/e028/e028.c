/*Escreva um programa que leia um valor n inteiro e positivo e que calcule a seguinte soma: 
S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N
O programa deve escrever cada termo gerado e o valor final de S*/

#include <stdio.h>

int main (){
    
    int num;
    
    double resultado;
    
    do {
        
        printf ("\nInsira um número:");
        scanf ("%d", &num);
        
        for (int i = 1; i <= num; i++) {
        resultado += 1.0 / i;
        }
        
        printf ("\nO resultado de 1 + 1/2 + 1/3 + 1/4 + ... + 1/%d é = %.2lf.", num, resultado);
     
    } while (1);
    
    
    return 0;
}