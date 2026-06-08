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

     printf("\n");

     // Mover o Cavalo 3 casas para cima e 2 casa para esquerda (Cima + Esquerda).
     printf("Cavalo:\n");
     i = 0;
     for(int i = 0; i < 2; i++){
        i = 0;
        while (i < 3) {
            printf("Cima\n");
            i++;
        }
        printf("Esquerda\n"); // Imprime a direção do movimento.
    
    }
        
     
    
     return 0;
     

}