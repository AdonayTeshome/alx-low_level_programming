#include <stdio.h>
/**
 * main - Entry point
 * Description: print all english alphabets except e and q
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;
	char alpha[26] = {"abcdefghijklmnopqrstuvwxyz"};

	while (i < 26)
	{
		if (alpha[i] == 'e' || alpha[i] == 'q')
		{
			i++;
		}
		else
		{
			putchar(alpha[i]);
			i++;
		}

	};
	putchar('\n');
	return (0);
}
