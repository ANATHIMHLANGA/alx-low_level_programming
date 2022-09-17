#include	<stdio.h>
#include	<ctype.h>
/**
 * main	-	Program to print alphabet letter follwed by a new line
 *
 * Return:	return 0
 */
int	main(void)
{
	int	letter;

	for	(letter = 'a'; letter <= 'z'; letter++)
	{
		letter = tolower(letter);
		putchar(letter);
	}
	putchar('\n');
	return	(0);
}
