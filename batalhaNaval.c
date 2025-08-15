
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal, e dois na vertical.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

#include <stdio.h>

#define TAM 10
#define NAVIO 3
#define OCUPADO 3
#define VAZIO 0

void inicializarBatalhaNaval(int batalhaNaval[TAM][TAM]) {
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < TAM; j++)
            batalhaNaval[i][j] = VAZIO;
}

void exibirBatalhaNaval(int batalhaNaval[TAM][TAM]) {
    printf("\nBatalha Naval:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", batalhaNaval[i][j]);
        }
        printf("\n");
    }
}

void posicionarNavioVertical(int batalhaNaval[TAM][TAM], int linha, int coluna) {
    if (linha + NAVIO <= TAM) {
        for (int i = 0; i < NAVIO; i++)
            batalhaNaval[linha + i][coluna] = OCUPADO;
    }
}

void posicionarNavioDiagonalPrincipal(int batalhaNaval[TAM][TAM], int linha, int coluna) {
    if (linha + NAVIO <= TAM && coluna + NAVIO <= TAM) {
        for (int i = 0; i < NAVIO; i++)
            batalhaNaval[linha + i][coluna + i] = OCUPADO;
    }
}

void posicionarNavioDiagonalSecundaria(int batalhaNaval[TAM][TAM], int linha, int coluna) {
    if (linha + NAVIO <= TAM && coluna - NAVIO + 1 >= 0) {
        for (int i = 0; i < NAVIO; i++)
            batalhaNaval[linha + i][coluna - i] = OCUPADO;
    }
}

int main() {
    int batalhaNaval[TAM][TAM];

    inicializarBatalhaNaval(batalhaNaval);

    // Posiciona 2 navios verticais
    posicionarNavioVertical(batalhaNaval, 0, 0);
    posicionarNavioVertical(batalhaNaval, 5, 9);

    // Posiciona 2 navios diagonais
    posicionarNavioDiagonalPrincipal(batalhaNaval, 2, 2);
    posicionarNavioDiagonalSecundaria(batalhaNaval, 6, 6);

    exibirBatalhaNaval(batalhaNaval);

    return 0;
}