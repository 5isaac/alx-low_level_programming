#include "main.h"
/**
 * print_line - print numbers 0-9
 * @n: number of lines to be printed
 * return: void
 */
void print_line(int n);
{
	int i;

	for (i = 0; n > 0 && i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

