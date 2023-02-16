# include <stdio.h>

/**
 * main - Entry point
 *
 * return -Always (0)
 */

int main(void)
{
	printf("Size of a char: %d bytes\n", sizeof(char));
	printf("Size of float: %d bytes\n", sizeof(float));
	printf("Size of int: %d bytes\n", sizeof(int));
	printf("Size of long int: %d bytes\n", sizeof(long int));
	printf("Size of long long int: %d bytes\n", sizeof(long long int));
	return (0);
}
