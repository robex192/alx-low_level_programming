#include "main.h"

/**
 * main - check the code print_alphabet lowercase
 *
 * Return: Always 0.
 */

void print_alphabet()
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
