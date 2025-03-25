#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (5 casas para a direita) usando for
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    
    // Simulação do movimento do Bispo (5 casas na diagonal superior direita) usando while
    printf("\nMovimento do Bispo (5 casas na diagonal superior direita):\n");
    int contador_bispo = 1;
    while (contador_bispo <= 5) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    
    // Simulação do movimento da Rainha (8 casas para a esquerda) usando do-while
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int contador_rainha = 1;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= 8);
    
    // Simulação do movimento do Cavalo (movimento em L: 2 baixo, 1 esquerda)
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");
    
    // Definindo constantes para o movimento do cavalo
    const int movimentos_baixo = 2;  // Duas casas para baixo
    const int movimentos_esquerda = 1; // Uma casa para a esquerda
    
    // Loop for para as casas para baixo
    for (int i = 1; i <= movimentos_baixo; i++) {
        printf("Baixo\n");
    }
    
    // Loop while para as casas para a esquerda
    int contador_esquerda = 1;
    while (contador_esquerda <= movimentos_esquerda) {
        printf("Esquerda\n");
        contador_esquerda++;
    }
    
    return 0;
}