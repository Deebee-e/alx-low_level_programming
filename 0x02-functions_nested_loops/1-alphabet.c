#include "main.h"

/**
 * main- Write a function that prints the alphabet, in lowercase.
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
