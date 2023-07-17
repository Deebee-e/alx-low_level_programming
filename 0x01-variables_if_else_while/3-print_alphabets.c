#include <stdio.h>

/**
 * main - main block
 * Description: Use `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
 */

int main(void)
{
	char b = 'a';
	char B = 'A';

	while (b <= 'z')
	{
		putchar(b);
		b++;
	}

	while (B <= 'Z')
	{
		putchar(B);
		B++;
	}
	putchar('\n');
	return (0);
}
