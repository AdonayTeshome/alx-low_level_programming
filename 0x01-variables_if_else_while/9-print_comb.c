#include<stdio.h>
/**
 * main - Entry Point
 * Description: A program that prints all possible combinations of single-digit
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int i = 48;
	int space = 32;
	int comma = 44;

	while (i <= 57)
	{
		if (i == 57)
		{
			comma = ' ';
		}
		putchar(i);
		putchar(comma);
		putchar(space);
		i++;
	}
	return (0);}
