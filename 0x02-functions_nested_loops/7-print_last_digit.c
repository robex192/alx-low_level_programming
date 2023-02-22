#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int num;

	if (i < 0)
		i = -i;

	num = i % 10;

	if (i < 0)
		num = -num;

	_putchar(num + '0');

	return (num);
}
