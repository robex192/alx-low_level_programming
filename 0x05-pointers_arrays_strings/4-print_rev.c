#include "main.h"

/**
 * print_rev - imprime en reversa
 * @str: string
 * return: 0
 */

void print_rev(char *str)
{
	int leng = 0;
	int x;

	while (*str != '\0')
	{
		leng++;
		str++;
	}
	str--;
	for (x = leng; x > 0; x--)
	{
		_putchar(*str);
		str--;
	}

	_putchar('\n');
}
