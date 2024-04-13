#include <stdio.h>

int main (){
    
    int num, soma = 0;
    
    printf ("\nDigite um número maior do que zero:");
    scanf ("%d", &num);
    
    for (int i = 1; i < num; i++){
        if(num % i == 0)
        soma += i;
    }
    
    if (soma == num)
    printf ("\n%d é um número perfeito.", num);
    
    else 
    printf ("\n%d não é um número perfeito.", num);
    
    return 0;
}