#include "main.h"

/**
 * main - checks for uppercase character.
 *.
 * Return: Returns 1 if c is uppercase or Returns 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	return (0);
}
