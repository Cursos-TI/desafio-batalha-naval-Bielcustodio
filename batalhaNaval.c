#include <stdio.h>
#define TAM_INICIAL 5   // Tamanho inicial do tabuleiro (Nível Novato)
#define TAM_AVANCADO 10 // Tamanho do tabuleiro expandido (Nível Aventureiro)

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

// Função para exibir o tabuleiro
void exibirTabuleiro(int tamanho, int tabuleiro[tamanho][tamanho]) {
    printf("\n=== TABULEIRO ===\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

// Função para criar habilidade especial em cone
void habilidadeCone() {
    int cone[5][5] = {0}; // Matriz 5x5 para demonstrar o formato
    int i, j;

    // Preenche a habilidade em formato de cone
    cone[0][2] = 1;
    cone[1][1] = cone[1][2] = cone[1][3] = 1;
    for (j = 0; j < 5; j++) {
        cone[2][j] = 1;
    }

    printf("\nHabilidade Especial: CONE\n");
    exibirTabuleiro(5, cone);
}

// Função para criar habilidade em cruz
void habilidadeCruz() {
    int cruz[5][5] = {0};

    // Linha central
    for (int j = 0; j < 5; j++) {
        cruz[1][j] = 1;
    }
    // Coluna central
    cruz[0][2] = 1;
    cruz[1][2] = 1;
    cruz[2][2] = 1;

    printf("\nHabilidade Especial: CRUZ\n");
    exibirTabuleiro(5, cruz);
}

// Função para criar habilidade em octaedro
void habilidadeOctaedro() {
    int octaedro[5][5] = {0};

    // Formato de octaedro
    octaedro[0][2] = 1;
    octaedro[1][1] = octaedro[1][2] = octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    printf("\nHabilidade Especial: OCTAEDRO\n");
    exibirTabuleiro(5, octaedro);
}

int main() {
    // ===============================
    // NÍVEL NOVATO - Tabuleiro 5x5
    // ===============================
    int tabuleiroNovato[TAM_INICIAL][TAM_INICIAL] = {0};

    printf("=== Batalha Naval - Nível Novato ===\n\n");

    // Navio vertical na coluna 1
    printf("Posicionando Navio Vertical:\n");
    for (int i = 0; i < 3; i++) {
        tabuleiroNovato[i][1] = 3;
        printf("Navio vertical em (%d, %d)\n", i, 1);
    }

    // Navio horizontal na linha 3
    printf("\nPosicionando Navio Horizontal:\n");
    for (int j = 2; j < 5; j++) {
        tabuleiroNovato[3][j] = 3;
        printf("Navio horizontal em (%d, %d)\n", 3, j);
    }

    // Exibe o tabuleiro inicial
    exibirTabuleiro(TAM_INICIAL, tabuleiroNovato);

    // ============================================
    // NÍVEL AVENTUREIRO - Tabuleiro 10x10
    // ============================================
    int tabuleiroAvancado[TAM_AVANCADO][TAM_AVANCADO] = {0};

    printf("\n\n=== Batalha Naval - Nível Aventureiro ===\n\n");

    // Navio vertical
    printf("Posicionando Navio Vertical:\n");
    for (int i = 0; i < 4; i++) {
        tabuleiroAvancado[i][2] = 3;
        printf("(%d, %d)\n", i, 2);
    }

    // Navio horizontal
    printf("\nPosicionando Navio Horizontal:\n");
    for (int j = 5; j < 9; j++) {
        tabuleiroAvancado[6][j] = 3;
        printf("(%d, %d)\n", 6, j);
    }

    // Navio diagonal ↘
    printf("\nPosicionando Navio Diagonal ↘:\n");
    for (int i = 0; i < 4; i++) {
        tabuleiroAvancado[i][i] = 3;
        printf("(%d, %d)\n", i, i);
    }

    // Navio diagonal ↙
    printf("\nPosicionando Navio Diagonal ↙:\n");
    for (int i = 0; i < 4; i++) {
        tabuleiroAvancado[i][9 - i] = 3;
        printf("(%d, %d)\n", i, 9 - i);
    }

    // Exibe tabuleiro 10x10
    printf("\nTabuleiro 10x10 - Navios posicionados:\n");
    exibirTabuleiro(TAM_AVANCADO, tabuleiroAvancado);

    // ============================================
    // NÍVEL MESTRE - Habilidades Especiais
    // ============================================
    printf("\n\n=== Batalha Naval - Nível Mestre ===\n");
    habilidadeCone();
    habilidadeCruz();
    habilidadeOctaedro();

    printf("\nFim do Jogo - Todos os níveis concluídos!\n");
    return 0;
}
