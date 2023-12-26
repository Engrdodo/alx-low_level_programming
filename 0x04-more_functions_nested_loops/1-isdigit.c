#include "main.h"

/**
 * _isdigit - function checks for a digit
 *@c: this is the character to be tested
 *Return: return 1 if it is digit,and 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
