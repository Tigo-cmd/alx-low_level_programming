#include "main.h"
/**
* print_chessboard - prints the chess board
* @a: array of characters
*
* Decsription: function that prints the chessboard.
* Return: Always(0) success
*/
void print_chessboard(char (*a)[8])
{
	int u, h;

	for (u = 0; u < 8; u++)
	{
		for (h = 0; h < 8; h++)
		{
			_putchar(a[u][h]);
		}
		_putchar('\n');
	}
}
