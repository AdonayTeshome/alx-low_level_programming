#include<stdio.h>
/**
 * main - Entry Point
 * Description: A program that prints all possible combinations of single-digit
 *
 * Return: Always newline (succes)
 */
int main(void)
{
	int i = 48;
	int space = 32;
	int comma = 44;

	while (i <= 57)
	{
		putchar(i);
		if (i == 57)
		{
			putchar(space);
			i++;
		}
		else
		{
			putchar(comma);
			putchar(space);
			i++;
		}
	};
	return ('\n');
}
