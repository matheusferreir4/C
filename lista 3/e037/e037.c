#include <stdio.h>
#include <math.h>

int main (){
    
    int cont;
    double num, resultado;
    
    printf ("\nInsira um número:");
    scanf ("%lf", &num);
    
    for (int i = 1; i <= 20; i++) {
        resultado += 1.0 / pow(num, i);
    }

    
    printf ("\nO resultado de 1/%.0lf - 1/%.0lf + 1/%.0lf - 1/%.0lf - ... + 1/%.0lf é = %.2lf.", num, pow(num, 2), pow(num, 3), pow(num, 4), pow(num, 20), resultado);
    
    return 0;
}