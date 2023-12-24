#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * @ n: is the value of rand() /random number/
 * @ last_n: is the last value of n
 * Description: set n next compute last_n then check the number and print
 *
 * Return: 0 ( Allways )
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_n = n % 10;
	if (last_n == 0)
	{
		printf("Last digit of %i is %i and is 0 \n", n, last_n);
	}
	else if (last_n < 6)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0 \n", n, last_n);
	}
	else
	{
		printf("Last digit of %i is %i and is greater than 5 \n", n, last_n);
	}
	return (0);
}
