#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - enty point
 *
 * @n: rand()
 *
 * check if the rand value is 0 if it is print the number  is zero
 * else check if the rand value is greater than 0 print the number is positive
 * if not print the number  is negative
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
