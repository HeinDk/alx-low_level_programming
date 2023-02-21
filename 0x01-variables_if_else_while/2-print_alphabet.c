#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point 
 *
 * prints the lower case of the alphabet
 *
 * Return: Always (0) (success)
 */
int main(void)
{
	char lc;

	for (lc = 'a' ; lc <= 'z' ; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
