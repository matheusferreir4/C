/*Faça um programa que tenha como entrada um conjunto não determinado de pares de valores a, 
b, e para cada par lido, obtém o M.D.C. e o M.M.C. de a,b, escrevendo-os juntamente com os 
valores lidos.*/

#include <stdio.h>
#define CON 0

int main (){
    
    int  a, b, mmc, mdc;
    
    do {
        
        printf ("\nInsira um valor ou 0 p/sair:");
        scanf ("%d", &a);
        
        if (a == CON)
        break;
        
        printf ("\nInsira outro valor:");
        scanf ("%d", &b);
        
        mmc = a * b;
        while (b != CON) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        
        mmc = mmc / a;
        
        mdc = 1;
        for (int i = 1; i <= a / 2; i++) {
            if (a % i == 0 && b % i == 0)
                mdc = i;
        }
        
        
        
        printf ("\nO mmc é %d.", mmc);
        printf ("\nO mdc é %d", mdc);
        
    } while (1);
    
    
    
    return 0;
}