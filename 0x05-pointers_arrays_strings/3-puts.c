#include "main.h"
#include "_putchar.c"
#include "3-main.c"

/**
 * _puts - a function that prints a string.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
