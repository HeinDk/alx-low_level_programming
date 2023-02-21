#include<stdio.h>
/**
 * main - Entry point
 *
 * 2-digit number combinations
 *
 * Return: Always (0) (Success)
 *
 */

int main(void)
{
	int a,b;
	for (a = 0; a <= 8;a++)
	{
		for (b = 0; b <= 9;b++)
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');
			if (a == 8 && b == 9)
				continue;
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return(0);
}
