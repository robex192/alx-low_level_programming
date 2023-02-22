#include "main.h"

/**
*_islower - Check for lowercase character
*c: character to be ckecked return 1 for 
*lowercase character or 0 for anything else
*/

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
