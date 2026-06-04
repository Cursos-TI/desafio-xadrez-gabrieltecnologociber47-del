#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main(){
    
    int i;

    // Mover a Torre 5 casas para a direita.
    printf("Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção do movimento.
    }
        printf("\n");

    // Mover o Bispo 5 casas para a diagonal (cima + direita).
    printf("Bispo:\n");
     i = 0;
     while (i < 5) {
        printf("Cima Direita\n"); // Imprime a direção do movimento.
        i++;
     }
        printf("\n");
     
    // Mover a Rainha 8 casas para frente.
     printf("Rainha:\n");
     i = 0;
     do {
         printf("Esquerda\n"); // Imprime a direção do movimento.
         i++;
     } while (i < 8);
        
     
    
     return 0;
     

}