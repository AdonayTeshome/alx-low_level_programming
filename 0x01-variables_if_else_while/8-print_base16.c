#include<stdio.h>
/**
 * main - Entry Point
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int i = 48;

	while (i <= 102)
	{
		if (i == 57)
		{
		putchar(i);
		i = 97;
		}
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');

	return (0);
}
