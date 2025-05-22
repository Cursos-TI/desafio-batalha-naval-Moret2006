#include <stdio.h>
int main (){

    char letra[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    //Tabuleiro
    for (int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }


    //posição dos navios
    for (int i = 0; i < 10; i++)
    {
        tabuleiro [i] [i] = 2; 
    }

    for (int i = 0; i < 10; i++)
    {
        tabuleiro [i] [9-i] = 3; 
    }
    tabuleiro[1][3] = 1;
    tabuleiro[1][4] = 1;


    //inicio do tabuleiro
    printf("  ");
    for(int i = 0; i < 10; i ++)
    {
        printf("%c ", letra [i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i + 1);
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
    printf("\n");
    }
    

}