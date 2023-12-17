#include <stdio.h>
/**
 * main - Entry point
 *Description: prints the alphabet in lowercase,
 *and then in uppercase, followed by a new line.
 *Return: 0
 */
int main(void)
{
	char j = 'a';

	while (j <= 'z')
	{
		putchar(j);
		j++;
	}

	j = 'A'

	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}

