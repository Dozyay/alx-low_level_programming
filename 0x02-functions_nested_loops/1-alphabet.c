#include "main.h"

/**
 * print_alphabet - This function prints the alphabet in lower case.
 *
 * Return: void (Success)
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
