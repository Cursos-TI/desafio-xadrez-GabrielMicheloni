#include <stdio.h>

// Função recursiva para o movimento da Torre (direita)
void moverTorre(int casas) {
    if (casas <= 0) return; // Caso base
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo (diagonal superior direita)
void moverBispo(int casas) {
    if (casas <= 0) return; // Caso base
    printf("Cima, Direita\n");
    moverBispo(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha (esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return; // Caso base
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// Função para movimento do Bispo com loops aninhados
void moverBispoComLoops(int casas) {
    // Loop externo para controle vertical (cima)
    for (int i = 1; i <= casas; i++) {
        // Loop interno para controle horizontal (direita)
        for (int j = 1; j <= 1; j++) { // Executa apenas uma vez por movimento diagonal
            printf("Cima, Direita\n");
        }
    }
}

int main() {
    // Movimento da Torre usando recursão (5 casas para a direita)
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(5);
    
    // Movimento do Bispo usando recursão (5 casas na diagonal superior direita)
    printf("\nMovimento do Bispo com recursão (5 casas na diagonal superior direita):\n");
    moverBispo(5);
    
    // Movimento do Bispo usando loops aninhados (5 casas na diagonal superior direita)
    printf("\nMovimento do Bispo com loops aninhados (5 casas na diagonal superior direita):\n");
    moverBispoComLoops(5);
    
    // Movimento da Rainha usando recursão (8 casas para a esquerda)
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(8);
    
    // Movimento do Cavalo (movimento em L: 2 cima, 1 direita) com loops complexos
    printf("\nMovimento do Cavalo (2 casas para cima e 1 para a direita):\n");
    
    const int movimentos_cima = 2;    // Duas casas para cima
    const int movimentos_direita = 1; // Uma casa para a direita
    
    // Loop complexo para o movimento do cavalo
    for (int i = 1; i <= movimentos_cima; i++) {
        // Verifica se devemos pular alguma iteração
        if (i > movimentos_cima) {
            break; // Sai do loop se já completamos os movimentos para cima
        }
        
        printf("Cima\n");
        
        // Loop interno para o movimento horizontal (direita)
        int j = 1;
        while (j <= movimentos_direita) {
            // Verifica se estamos na última iteração vertical
            if (i == movimentos_cima) {
                printf("Direita\n");
            } else {
                // Usamos continue para pular o movimento horizontal até a última iteração vertical
                continue;
            }
            j++;
        }
    }
    
    return 0;
}