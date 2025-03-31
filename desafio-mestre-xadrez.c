#include <stdio.h>

// Função recursiva para o movimento da Torre (direita)
void mover_torre(int casas_restantes) {
    if (casas_restantes == 0) {
        return;  // Caso base: se não houver casas restantes, a recursão termina
    }
    printf("Direita\n");
    mover_torre(casas_restantes - 1);  // Chamada recursiva com uma casa a menos
}

// Função recursiva para o movimento do Bispo (cima, direita) com loops aninhados
void mover_bispo(int casas_restantes, int movimento_vertical) {
    if (casas_restantes == 0) {
        return;  // Caso base: se não houver casas restantes, a recursão termina
    }

    // Loop aninhado: O loop externo controla a movimentação vertical
    for (int i = 0; i < movimento_vertical; i++) {
        printf("Cima\n");
    }

    // Loop interno para movimentação horizontal (para direita)
    for (int j = 0; j < movimento_vertical; j++) {
        printf("Direita\n");
    }
    
    mover_bispo(casas_restantes - 1, movimento_vertical);  // Chamada recursiva
}

// Função recursiva para o movimento da Rainha (esquerda)
void mover_rainha(int casas_restantes) {
    if (casas_restantes == 0) {
        return;  // Caso base: se não houver casas restantes, a recursão termina
    }
    printf("Esquerda\n");
    mover_rainha(casas_restantes - 1);  // Chamada recursiva com uma casa a menos
}

// Função para o movimento do Cavalo (2 casas para cima e 1 para a direita)
void mover_cavalo() {
    // Movimentação do Cavalo com loops aninhados
    for (int passo_vertical = 0; passo_vertical < 2; passo_vertical++) {
        // Loop para o movimento vertical
        if (passo_vertical == 0) {
            printf("Cima\n");
        } else {
            printf("Cima\n");  // Segunda casa para cima
            // Loop interno para o movimento horizontal (1 casa para a direita)
            printf("Direita\n");
        }
    }
}

int main() {
    // Número de casas a serem movidas para cada peça
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    mover_torre(casas_torre);
    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    mover_bispo(casas_bispo, 1);  // Movimenta-se uma casa para a direita a cada movimento vertical
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    mover_rainha(casas_rainha);
    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");
    mover_cavalo();
    printf("\n");

    return 0;
}

