#include "main.h"
#include "stdio.h"

/**
 *_isupper - Function checks if a character is an uppercase letter
 *@c: character to be tested
 *Return: return 1 if it is uppercase, and 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
