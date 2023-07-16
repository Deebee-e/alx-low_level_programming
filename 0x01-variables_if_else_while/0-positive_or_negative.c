#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the block of the code
 * Description: print  random number using the source code
 * check if number is Positive, Negative or Zero.
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The output is: %i\n", n);
	
	if (n < 0)
	    printf("%i is negative\n", n);
	else if (n > 0)
	    printf("%i is positive\n", n);
	else
	printf("%i is zero\n", n);
	return (0);
}
