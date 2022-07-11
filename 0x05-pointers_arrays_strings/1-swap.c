#include "main.h"

/**
 * swap_int - use pointer to change value in memory
 * @a: pointer to int a location
 * @b: pointer to int b locstion
 * Return: Null/Void
 */
void swap_int(int *a, int *b);
{
	int y = *a;
	int z = *b;
	*a = z;
	*b = y;
}
