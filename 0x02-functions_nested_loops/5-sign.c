#include "main.h"

/**
 * main - prints the sign of a number.
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

	return (1);
	}
	else if (n == 0)
	{
		_putchar('0');

	return (0);
	}
	else if (n < 0)
        {		
		-putchar('-');

	return (-1);
	}
}