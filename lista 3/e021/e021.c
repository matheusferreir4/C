/*Escrever um programa que tenha como entrada um número não determinado de valores para m, 
todos inteiros e positivos, um de cada vez. Se m for par, verificar quantos divisores possui e 
escrever esta informação. Se m for impar e menor do que 10 calcular e escrever o fatorial de m. Se 
m for ímpar e maior ou igual a 10 calcular e escrever a soma dos inteiros de 1 até m.*/

#include <stdio.h>
#define CON 0

int main (){
    
    int num, contadordedivisores, fatorial = 1, soma;
    
    do{
        
        printf ("\nInsira um número inteiro positivo ou um valor negativo p/sair:");
        scanf ("%d", &num);
        
        if (num < CON)
        break;
        
        if (num % 2 == 0){
            
             for (int i = 1; i <= num / 2; i++) {
        
             if (num % i == 0)
             contadordedivisores++;
        
            } 
            
            contadordedivisores++;
            
            
            printf ("\nO número %d possúi %d divisores.", num, contadordedivisores);
            
        }
        
        if (num % 2 == 1 && num < 10){
            
            for (int i = 1; i <= num; i++){
                fatorial *= i;
                
            }
            
            printf ("\nO fatorial de %d é %d.", num, fatorial);
            
        }
        
        if (num % 2 == 1 && num > 10){
            
            for (int i = 1; i <= num; i++){
                soma += i;
                
            }
            
            printf ("\nA soma é %d.", soma);
        }
        
        
    } while (1);
    
    
    return 0;
}