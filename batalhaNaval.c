#include <stdio.h>

int main() {
    char letra[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char tabuleiro[10][10];

    // inicializar o tabuleiro com água (~)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // posição dos navios 
    tabuleiro[0][0] = 1; // A1
    tabuleiro[1][0] = 1; 
    tabuleiro[2][0] = 1; 
    tabuleiro[3][9] = 1; 
    tabuleiro[3][8] = 1; 

    // espaço vazio entre "A" e "1"
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf("%c  ", letra[i]);
    }
    printf("\n");

    // imprimir tabuleiro com letras nas linhas
    for (int i = 0; i < 10; i++) {
        printf("%d ", i +1); 
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}