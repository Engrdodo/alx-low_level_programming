#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Prints lowercase alphabets in reverse order
 *Return: return 0
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
