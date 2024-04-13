/*Escrever um programa que gere os 5 primeiros números perfeitos. Um número perfeito é aquele 
que é igual a soma dos seus divisores. (Ex.: 6 = 1+2+3; 28= 1+2+4+7+14 etc).*/
#include <stdio.h>

int main (){
    
     int i, num, cont = 0, soma = 0;
    
    do{
        
        soma = 0;
        cont++;
        
        printf ("Digite um inteiro positivo ou um valor negativo p/sair:");
        scanf ("%d", &num);
        
        if (num < 0)
        break;
        
        else
        for (i = 1; i < num; i++){
       
            if(num % i == 0)
            soma += i;
        }
        
        if (soma == num)
        printf ("\n%d é um número perfeito.", num);
        
        else 
        printf ("\n%d não é um número perfeito.", num);
        
    } while (cont <= 5);
 
    return 0;
}