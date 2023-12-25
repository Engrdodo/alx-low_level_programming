#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *@n: the integer to get the last digit from
 *Return: return last didgit
 */

int print_last_digit(int n)
{
	int lastdigit;

	lastdigit  = n % 10;

	if (lastdigit < 0)
	{
		_putchar(lastdigit + '0');
	}
	return (lastdigit);
}
