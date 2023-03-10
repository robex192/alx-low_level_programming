#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @strp: string to print
 */
void _puts(char *strp)
{
        while (*strp != '\0')
        {
                _putchar(*strp++);
        }
        _putchar('\n');
}

