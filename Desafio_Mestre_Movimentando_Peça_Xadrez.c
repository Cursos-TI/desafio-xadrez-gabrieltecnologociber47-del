#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

#include <stdio.h>

void moverTorre(int Torre){
    if (Torre > 0) {
        printf("Direita\n");
        moverTorre (Torre - 1);
    }
}
void moverBispo(int Bispo){
    if (Bispo > 0) {
        printf("Cima-Direita\n");
        moverBispo (Bispo - 1);
    }
}
void moverRainha(int Rainha){
    if (Rainha > 0) {
        printf("Esquerda\n");
        moverRainha (Rainha - 1);
    }
}

int main(){

    // Simular os movimentos das peças de xadrez
    int Torre;
    int Bispo;
    int Rainha;
    int Cavalo = 0;

    // Movimentando a Torre
    printf("***** Torre *****\n");
    do {
        printf("Quantas casas mover a Torre (1 a 5): ");
        scanf("%d", &Torre);
    } while (Torre < 1 || Torre > 5);
    moverTorre(Torre);

    printf("\n");

    // Movimentando o Bispo
    printf("***** Bispo *****");

    do {
        printf("Quantas casas mover o Bispo (1 a 5): ");
        scanf("%d", &Bispo);
    }while (Bispo < 1 || Bispo > 5);
    moverBispo(Bispo);

    printf("\n");

    // Movimentando a Rainha
    printf("***** Rainha *****");
    do {
        printf("Quantas casas mover a Rainha (1 a 8): ");
        scanf("%d", &Rainha);
    } while (Rainha < 1 || Rainha > 8);
    moverRainha(Rainha);

    printf("\n");
 
    // Movimentando o Cavalo
    printf("***** Cavalo *****");
    for(Cavalo = 0; Cavalo < 1; Cavalo++){
        for(int i = 0; i < 3; i++){
            printf("Cima\n");
        }
        printf("Direita\n");
    }    
    return 0;
        
    
    
}