#include "main.h"

/**
 * _memset - function to fill the first bytes of mem
 * @s: pointer to char param
 * @b: data to change
 * @n: index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unassigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s)
}
