#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry Point
 * @ alpha : character array
 * @ i : used to track loop
 * Description: it prints alphabets in lowercase, and then print in  uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char alpha[26] = {"abcdefghijklmnopqrstuvwxyz"};
	int i = 0;

	while (i < 26)
	{
		putchar(alpha[i]);
		i++;
	}
	i = 0;
	while (i < 26)
	{
		putchar(toupper(alpha[i]));
		i++;
	};
	putchar('\n');
	return (0);
}

