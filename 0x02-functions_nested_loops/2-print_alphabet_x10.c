#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabet
 * ten times
 *Description: The function uses while and for loops
 *Return: No return
 */
void print_alphabet_x10(void)
{
	int i;
	int letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
