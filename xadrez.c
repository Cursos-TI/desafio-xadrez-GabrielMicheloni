#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    //Simulação do movimento da Torre (5 casas para a direita) usando For

        printf("Movimento da Torre (5 casas para a direita): \n");
        for (int i = 1; i <= 5; i++) {
            printf("Direita\n");
        }

    //Simulação do movimento da Bispo (5 casas na diagonal superior direita) usando while

        printf("\nMovimento do Bispo (5 casas na diagonal superior direita): \n");
        int contador_bispo = 1;
        while(contador_bispo <= 5){
            printf("Cima, Direita\n");
            contador_bispo++;

        }

    //Simulação do movimento da Rainha (8 casas para a esquerda) usando do-while

        printf("\nMovimento da Rainha (8 casas para a esquerda): \n");
        int contador_rainha = 1;
        do{
            printf("Esquerda\n");
            contador_rainha++;

        } while (contador_rainha <= 8);

        

   

    return 0;
}
