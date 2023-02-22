#include "main.h"
#include <stdio.h>


/**
 * print_to_98 - print i to 98 counts
 *           separated by comma, followed
 *           by space and number should be
 *           printed in order
 *
 * @i: input
*/

void print_to_98(int i)
{
	if (i < 98)
	{
		for (i = i; i < 98; i++)
			printf("%d, ", i);
		printf("%d\n", 98);
	}
	else
	{
		for (i = i; i > 98; i--)
			printf("%d, ", i);
		printf("%d\n", 98);
	}
}
