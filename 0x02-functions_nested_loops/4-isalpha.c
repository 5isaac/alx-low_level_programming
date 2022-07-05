#include "main.h"

/**
 * _isalpha - Begin here
 * @c: Character ASCII Code
 *return 1 if lower or upper case and 0 otherwise
 *Return: value 0 (Success)
 */
int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
