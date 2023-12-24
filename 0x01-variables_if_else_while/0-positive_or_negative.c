#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * @n: rand()
 * Description: set random number to n check the number and print positv, negative,zero
 *
 * Return: 0 ( Allways )
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
	printf("%i is zero\n", n);
	}
	else if (n > 0)
	{
	printf("%i is positive\n", n);
	}
	else
	{
	printf("%i is negative\n", n);
	}
	return (0);
}
