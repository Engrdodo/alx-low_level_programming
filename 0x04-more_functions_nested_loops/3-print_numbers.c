#include "main.h"
#include "stdio.h"

/**
 *print_numbers - priints numbers from 0 to 9 inclusive
 *
 *Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
