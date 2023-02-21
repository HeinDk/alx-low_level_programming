#include <stdio.h>
/**
 * main - Entry point
 *
 * 3-digit numbers combinations
 *
 * Return: Always (0) (Success)
 *
 */
int main(void)
{
	int a, b, c;
	for (a = 0 ; a <= 7 ; a++)
	{
		for (b = 0 ; b <= 8 ; b++)
		{
			for (c = 0 ; c <= 9 ; c++)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');
				if (a == 7 && b == 8 && c == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
		return(0);
}
