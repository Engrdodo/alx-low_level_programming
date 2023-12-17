#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *Description: prints the alphabets in lowercase
 *Return: 0
 */
int main(void)
{
	char lower_letter = 'a';

	while (lower_letter <= 'z')
	{
		putchar(lower_letter);
		lower_letter++;
	}
	putchar('\n');
	return (0);
}
