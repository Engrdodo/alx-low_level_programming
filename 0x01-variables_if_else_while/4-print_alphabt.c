#include <stdio.h>

/**
 * main - print the letters of the alphabet
 *
 * Description: print the letters of the alphabet except e, q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int low = 97;

	while (low < 123)
	{
		if (low != 101 && low != 113)
		{
			putchar(low);
		}
		low++;
	}
	putchar(10);

	return (0);
}
