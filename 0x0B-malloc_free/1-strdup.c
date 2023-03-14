#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * _strdup - function that returns a pointer to a newly allocated space in
 *           memory, which contains a copy of the string given as a parameter.
 *
 * @str: This is the input string
 *
 * Return: function returns a pointer to the duplicated string. It returns
 *         NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *s;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
           i = 0;
	   while (str[i] != '\0')
		   i++;
	   s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		s[j] = str[j];

	return (s);
}
