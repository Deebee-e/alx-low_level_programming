#include "main.h"

/**
 * main - Print "_putchar" followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	char myVar[] = "_putchar";
	int a = 0;

	while (myVar[a] != '\0')
	{
		_putchar(myVar[a]);
		a++;
	}
	_putchar('\n');

	return (0);
}
