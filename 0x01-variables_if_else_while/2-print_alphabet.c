#include <stdio.h>
/**
 * main - Entry point
 * @i used to track loop
 * @alpha array ofaracter that hold all small alphabets
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha[26] = {"abcdefghijklmnopqrstuvwxyz"};
	int i = 0;

	while (i < 26)
	{
		putchar(alpha[i]);
		putchar('\n');
			i++;
	};
	return (0);
}
