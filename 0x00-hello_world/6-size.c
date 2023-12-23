#include<studio.h>
/*
 * main - entry point
 * Print the size of some datatypes using sizeof and printf
 * Return - 0 Successful
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
	return (0);
}
