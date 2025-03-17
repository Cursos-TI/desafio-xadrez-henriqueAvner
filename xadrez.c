#include <stdio.h>
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva para movimentar a Torre para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar a Rainha para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para movimentar o Bispo (também usará loops aninhados)
void moverBispo(int casas, int atual) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispo(casas - 1, atual + 1);
}

// Movimento do Bispo utilizando loops aninhados
void moverBispoComLoops(int casas) {
    for (int i = 0; i < casas; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }
}

int main() {
    // Movimento da Torre - 5 casas para a direita (recursividade)
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimento do Bispo - 5 casas na diagonal para cima e à direita (recursividade e loops aninhados)
    printf("Movimento do Bispo:\n");
    moverBispo(5, 0);
    printf("\n");

    // Movimento da Rainha - 8 casas para a esquerda (recursividade)
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Movimento do Cavalo - 2 casas para cima e 1 para a direita (loops aninhados e controle de fluxo)
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }
    
    return 0;
}


