#include <stdio.h>
#define CON 0
#define CONA 1 
#define CONB 2

int main (){
    
    int sexo, idade, maior_homem = -1, menor_homem = 999999,
    maior_mulher = -1, menor_mulher = 999999;
    
    double salario, soma_homem = 0, soma_mulher = 0, 
    media_homem = 0, media_mulher = 0;
    
    do {
        
        printf ("\nInsira o seu sexo (1 - Homem || 2 - Mulher):");
        scanf ("%d", &sexo);
        
        if (sexo < CON || sexo > CONB)
            break;
        
      
        if (sexo == CONA) {
            int contador_homem = 0;
            while (1) {
                
                printf ("\nInsira a sua idade ou um valor negativo p/sair:");
                scanf ("%d", &idade);
                
                if (idade < CON)
                    break;
                
                printf ("\nInsira o seu salário:");
                scanf ("%lf", &salario);
              
                soma_homem += salario;
                contador_homem++;
                
             
                if (idade > maior_homem)
                    maior_homem = idade;
                
                if (idade < menor_homem)
                    menor_homem = idade;
            }
           
            if (contador_homem != 0)
                media_homem = soma_homem / contador_homem;
            else
                media_homem = 0; 
            printf ("\nA maior idade entre os homens é %d, enquanto a menor é %d.\n", maior_homem, menor_homem);
            printf ("\nA média salarial dos homens é %.2lf reais.\n", media_homem);
        }
        
      
        if (sexo == CONB) {
            int contador_mulher = 0;
            while (1) {
                
                printf ("\nInsira a sua idade ou um valor negativo p/sair:");
                scanf ("%d", &idade);
                
                if (idade < CON)
                    break;
                
                printf ("\nInsira o seu salário:");
                scanf ("%lf", &salario);
                
             
                soma_mulher += salario;
                contador_mulher++;
                
            
                if (idade > maior_mulher)
                    maior_mulher = idade;
                
                if (idade < menor_mulher)
                    menor_mulher = idade;
            }

            if (contador_mulher != 0)
                media_mulher = soma_mulher / contador_mulher;
            else
                media_mulher = 0;
            printf ("\nA maior idade entre as mulheres é %d, enquanto a menor é %d.\n", maior_mulher, menor_mulher);
            printf ("\nA média salarial das mulheres é %.2lf reais.\n", media_mulher);
        }
        
    } while (1);
    
    return 0;
}
