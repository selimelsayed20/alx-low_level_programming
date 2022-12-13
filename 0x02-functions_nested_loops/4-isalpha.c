#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - Shows 1 if the input is a
 * lowercase character. Another cases, shows
 * 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
