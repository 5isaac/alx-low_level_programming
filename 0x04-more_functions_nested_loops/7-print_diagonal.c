#include "main.h"
/**
 * print_diagonal - print numbers 0-9
 * @n: number of diagonls to be printed
 * return: void
 */
void print_diagonal(int n);
{
	int i;
	int j;

	for (i = 0; n > 0 && i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}

