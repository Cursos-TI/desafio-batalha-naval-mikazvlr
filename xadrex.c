#include <stdio.h>

int main() {
    // Posição inicial do cavalo
    int linha = 4;
    int coluna = 4;

    // Constantes para o movimento
    const int movimentosCima = 2;
    const int movimentosDireita = 1;

    // Movimento do Cavalo
    printf("\nMovimento do Cavalo:\n");

    // Loop FOR para mover duas casas para cima
    for (int i = 0; i < movimentosCima; i++) {
        linha--; // sobe uma linha
        printf("Cima\n");
    }

    // Loop WHILE para mover uma casa para a direita
    int contador = 0;
    while (contador < movimentosDireita) {
        coluna++; // move uma coluna para a direita
        printf("Direita\n");
        contador++;
    }

    // Exibe a nova posição do cavalo
    printf("\nPosição final do Cavalo: linha %d, coluna %d\n", linha, coluna);

    return 0;
}