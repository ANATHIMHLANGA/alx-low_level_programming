#include <stdio.h>
/**
 * main - Prints the size of each variable
 * Return: 0 prints sizes
 */
int main(void)
{
	printf("size of char: %1d byte(s)\n", sizeof(char));
	printf("size of an int: %1d byte(s)\n", sizeof(int));
	printf("size of a long int: %1d byte(s)\n", sizeof(long));
	printf("size of a long long int: %1d byte(s)\n", sizeof(long long int));
	printf("size of a float: %1d byte(s)", sizeof(float));
	return (0);
}
