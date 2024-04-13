/*Escrever um programa para calcular e escrever o produto dos números primos entre M e N.
M e N são inteiros positivos e M é menor que N.*/
#include <stdio.h>

int main (){
    
    int m, n, produto = 0;
    
    printf ("\nInsira um valor 'n':");
    scanf ("%d", &n);
    
    printf ("\nInsira um valor 'm' menor do que 'n':");
    scanf ("%d", &m);
    
    if (n < m){
        int aux = n;
        n = m;
        m = aux;
        
        for (int i = m; i <= n; i++){
        int cont_divisores = 0;
        
        for (int j = 1; j <= i; j++){
            if (i % j == 0)
            cont_divisores++;
        }
        
        if (cont_divisores == 2)
            if (produto == 0)
            produto = i;
         
            else
            produto *= i;
    }
    
    printf ("\nO produto dos números primos entre %d e %d é = %d.", m, n, produto);

    }
    
    else if (m < n){
    
    for (int i = m; i <= n; i++){
        int cont_divisores = 0;
        
        for (int j = 1; j <= i; j++){
            if (i % j == 0)
            cont_divisores++;
        }
        
        if (cont_divisores == 2)
            if (produto == 0)
            produto = i;
         
            else
            produto *= i;
    }
    
    printf ("\nO produto dos números primos entre %d e %d é = %d.", m, n, produto);
    }
    
    return 0;
}
