#include <stdio.h>

/**
 * main - main block
 * Description: Print all numbers of base64 in lowercase.
 * You can only use `putchar`, and only 3 times.
 * Return: 0
 */

int main(void)
{
	int b;
	char c;

	for (b = 48; b < 58; b++)
	{
		putchar(b);
	}

	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
