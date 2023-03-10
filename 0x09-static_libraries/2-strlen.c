#include "main.h"

/**
 * _strlen - returns the length of a string
 * @strl: string
 * Return: length
 */
int _strlen(char *strl)
{
        int leng = 0;

        while (*strl != '\0')
        {
                leng++;
                strl++;
        }

        return (leng++);
}

