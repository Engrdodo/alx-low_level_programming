#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Prints all single digits follow by ,
 * Return: return 0
 */

int main(void)
{
	char m;

	for (m = '0'; m <= '9'; m++)
	{
		putchar(m);
		if (m != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);

}
