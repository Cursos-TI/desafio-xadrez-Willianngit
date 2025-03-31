#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (for)
    printf("Movimento da Torre:\n");
    for(int casas_torre = 0; casas_torre < 5; casas_torre++) {
        printf("Pra cima\n");  // Move 5 casas pra cima
    }

    // Simulação do movimento do Bispo (while)
    printf("\nMovimento do Bispo:\n");
    int contador_bispo = 0;
    while(contador_bispo < 5) {
        printf("Cima, Direita\n");  // Move 5 casas na diagonal
        contador_bispo++;
    }

    // Simulação do movimento da Rainha (do-while)
    printf("\nMovimento da Rainha:\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");  // Move 8 casas para esquerda
        contador_rainha++;
    } while(contador_rainha < 8);

    return 0;
}
