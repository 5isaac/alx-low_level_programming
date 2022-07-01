#include <stdio.h>

/**
 * main -> entry points 
 * and print the last digit 
 * Return : always 0
 */
int main(void)
{
	char ch;
	for (ch = 'z'; ch >= 'a'; ch --)
	{
		putchar(ch);
	}
	putchar(10); /* this is an ascii code for new line*/

	return (0);
}
