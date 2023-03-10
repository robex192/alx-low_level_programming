#include "main.h"
#include <stdlib.h>


/**
 * create_array - function that creates an array of chars, and initializes it
 *                with a specific char.
 *
 * @size: This is the length of the array
 * @c: This is the input character
 *
 * Return: An Array Initialized with the specific char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		str[a] = c;
	}
	return (str);
}
