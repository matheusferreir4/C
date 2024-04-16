/*Em um prédio há três elevadores denominados A, B e C. Para otimizar o sistema de controle
dos elevadores foi realizado um levantamento no qual cada usuário respondia:
a) O elevador que utilizava com mais frequência;
b) O período que utilizava o elevador, entre:
M = matutino;
V = vespertino
N = Noturno
Faça um programa que calcule e imprima:
 Qual é o elevador mais frequentado e em que período se concentra o maior fluxo;
 Qual a diferença entre o mais usado dos horários e o menos usado;*/

#include <stdio.h>

int main (){
    
    int elevador, cont_elevadorA = 0, cont_elevadorB = 0, cont_elevadorC = 0,
        turno, cont_matutino = 0, cont_vespertino = 0, cont_noturno = 0;
        
    int turno_mais_frequentado = 0,
        matutino = 1, vespertino = 2, noturno = 3;
    
    char elevador_mais_frequentado, A = 'A', B = 'B', C = 'C';
    
    while (1){
        printf ("\nQual elevador você mais utiliza? Insira ('1 p/A, 2 p/B ou 3 p/C') ou 4 p/finalizar:");
        scanf ("%d", &elevador);
        
        if (elevador == 4)
            break;
        
        if (elevador == 3)
            cont_elevadorC++;
        
        if (elevador == 2)
            cont_elevadorB++;
        
        if (elevador == 1)
            cont_elevadorA++;
        
        printf ("\nQual o turno em que você mais utiliza o elevador? Insira ('1 p/matutino, 2 p/vespertino ou 3 p/Noturno'):");
        scanf ("%d", &turno);
        
        if (turno == 3)
            cont_noturno++;
        
        if (turno == 2)
            cont_vespertino++;
        
        if (turno == 1)
            cont_matutino++;
    }
    
    if ((cont_elevadorC > cont_elevadorB) && (cont_elevadorC > cont_elevadorA))
        elevador_mais_frequentado = C;
    
    else if ((cont_elevadorB > cont_elevadorC) && (cont_elevadorB > cont_elevadorA))
        elevador_mais_frequentado = B;
    
    else if ((cont_elevadorA > cont_elevadorB) && (cont_elevadorA > cont_elevadorC))
        elevador_mais_frequentado = A;
    
    if ((cont_noturno > cont_vespertino) && (cont_noturno > cont_matutino))
        turno_mais_frequentado = noturno;
    
    else if ((cont_vespertino > cont_noturno) && (cont_vespertino > cont_matutino))
        turno_mais_frequentado = vespertino;
    
    else if ((cont_matutino > cont_noturno) && (cont_matutino > cont_vespertino))
        turno_mais_frequentado = matutino;
    
    printf ("\nO elevador mais frequentado é o %c, enquanto o período mais frequentado é o %do turno.", elevador_mais_frequentado, turno_mais_frequentado);

    int elevador_menos_frequentado;
    if ((cont_elevadorC < cont_elevadorB) && (cont_elevadorC < cont_elevadorA))
        elevador_menos_frequentado = C;
    
    else if ((cont_elevadorB < cont_elevadorC) && (cont_elevadorB < cont_elevadorA))
        elevador_menos_frequentado = B;
    
    else if ((cont_elevadorA < cont_elevadorB) && (cont_elevadorA < cont_elevadorC))
        elevador_menos_frequentado = A;

    int diferenca_elevadores;
    if (elevador_mais_frequentado == A)
        diferenca_elevadores = cont_elevadorA - elevador_menos_frequentado;
    
    else if (elevador_mais_frequentado == B)
        diferenca_elevadores = cont_elevadorB - elevador_menos_frequentado;
    
    else if (elevador_mais_frequentado == C)
        diferenca_elevadores = cont_elevadorC - elevador_menos_frequentado;

    printf("\nA diferença entre o elevador mais usado (%c) e o menos usado (%c) é: %d", elevador_mais_frequentado, elevador_menos_frequentado, diferenca_elevadores);

    return 0;
}
