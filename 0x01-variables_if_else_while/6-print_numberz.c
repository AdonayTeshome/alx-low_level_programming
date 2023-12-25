#include<stdio.h>
/**
 * main -  Entry Point
 * Description: print from 0 - 9 using putchar
 *
 * Return: Aways 0 (success)
 */
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
