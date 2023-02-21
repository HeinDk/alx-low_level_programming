#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * print lower- and  uppercase alphabets
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
	for (lc = 'a' ; lc <= 'z' ; lc++)
	{
		putchar(toupper(lc));
	}
	putchar('\n');
	return (0);
}
