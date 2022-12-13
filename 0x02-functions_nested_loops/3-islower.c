#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * int _islower - checks for lowercase character
 *
 * Return: Always 0 (Success)
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
