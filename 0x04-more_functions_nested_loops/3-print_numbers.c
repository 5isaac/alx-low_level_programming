#include "main.h"
/**
 * print - numbers from 0-9
 * Return: void
 */
void print_numbers(void);
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	putchar('\n');
}
