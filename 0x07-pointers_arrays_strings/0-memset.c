#include "main.h"


/**
 * *_memset - Fills memory with a constant byte
 *
 * @a: pointer
 * @b: char
 * @n: unsigned int
 *
 *Return: a
 */
char *_memset(char *a, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; index++)
	{
		a[index] = b;
		n -= 1;
	}
	return (a);
}

