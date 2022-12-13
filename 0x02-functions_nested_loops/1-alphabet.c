#include <stdio.h>

/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)

{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}
