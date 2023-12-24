#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - enty point
 *
 * @n: rand()
 * check if n is 0 if it is print n is zero
 * else check if n is greater than 0 print n is positive
 * if not print n is negative
 *
 * Return - 0 ( Allways )
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
	printf("%i is zero", n);
	}
	else if (n > 0)
	{
	printf("%i is positive", n);
	}
	else
	{
	printf("%i is negative", n);
	}
	return (0);
}
