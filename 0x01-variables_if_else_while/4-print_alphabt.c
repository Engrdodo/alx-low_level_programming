#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints alphabets in lowercase, except e and q
 *
 * Return:  return 0
*/
int main(void)
{
		char j;

		for (j = 'a'; j <= 'z'; j++)
		{
		if ((j != 'e') && (j != 'q'))
		putchar(j);
		}

		putchar('\n');
	return (0);
}
