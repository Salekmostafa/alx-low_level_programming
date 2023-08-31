<<<<<<< HEAD
#include <stdio.h>

void print_board(char (*a)[8])
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char board[8][8] = {
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
    };

    print_board(board);

    return 0;
}
=======
nclude "main.h"

/**
 * print_chessboard - Entry pt
 * @: array
 * Return: 0
*/
void print_chessboard(char (*a)[8])
{
    int i, j;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
            _putchar(a[i][j]);
        _putchar("\n");
    }
}
>>>>>>> a35b6493991dd6b8734710f8ec9ed24a667ddd5c
