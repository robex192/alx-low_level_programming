#include "main.h"

/**
* rev_string - Reverses a string
* @str: Input string
* Return: String in reverse
**/

void rev_string(char *str)
{
	char rev = str[0];
	int cntr = 0;
	int a;

	while (str[cntr] != '\0')
		cntr++;
	for (a = 0; a < cntr; a++)
	{
		cntr--;
		rev = str[a];
		str[a] = str[cntr];
		str[cntr] = rev;
	}
}
