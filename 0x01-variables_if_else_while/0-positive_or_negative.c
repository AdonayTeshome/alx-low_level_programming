#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * @ n: is the value of rand() number
 * Description: set random number to n then check the number and print
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
