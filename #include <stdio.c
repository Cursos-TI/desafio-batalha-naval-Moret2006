#include <stdio.h>


int main() {

    char letra[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

for (int i = 0; i < 10; i++)
{
    for (int j = 0; j < 10; j++)
    {
       tabuleiro [i] [j] = 0;
    }

}
for (int i = 0; i < 10; i++)
{
    tabuleiro [i][i] = 1;
}
for (int i = 0; i < 10; i++)
{
    tabuleiro[i][9-i] = 2;
}


printf("   ");

for (int i = 0; i < 10; i++)
{
    printf("%c ",letra[i]);
}
printf("\n");

for (int i = 0; i < 10; i++)
{
    printf("%d  ", i+1);
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", tabuleiro[i][j]);
    }
    printf("\n");
}


    return 0;
}