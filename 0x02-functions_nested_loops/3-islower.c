#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * int _islower - checks for lowercase character
 *
 * Return: 1 for lowercase character. 0 for the rest
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
