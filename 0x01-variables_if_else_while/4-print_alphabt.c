#include <stdio.h>

/**
 * main -> Entry points 
 * and print the last digit
 * Return : always 0
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch ++)
	{
		if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}
	}
return (0);
}
