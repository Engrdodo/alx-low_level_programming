#include "main.h"
/**
  * print_alphabet - This function prints alphabet
  * it prints it in lowercase
  * Return: no return
  */
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar (10);
}
