#include<stdio.h>
/**
 * main - Entry Point
 * Description: print English alphabets reverse order
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);

}
