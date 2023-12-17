#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints the hexadecimal numbers in lowercase
 * Return: Return 0
 */

int main(void)
{
	char j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
