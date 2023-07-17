#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the block of code
 * Description: a program that prints the last digit of the number
 * Return: 0
 */

int main(void)
{
	int n;
	int a;
	/* a refers to the last digit of each random number*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, a);
	else if (n == 0)
		 printf("Last digit of %i is %i and is 0\n", n, a);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, a);
	return (0);
}
