#include <stdio.h>

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)

{
	int n;
	int x;

	for (x = 0; x <= 10; x++)
	{
	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	}

}

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}
