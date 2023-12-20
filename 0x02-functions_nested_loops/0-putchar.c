#include "main.h"
/**
* main - prints -Putchar, followed by a new lines
* Return: return 0
*/
int main(void)
{
	char letter[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(letter[c]);
	}
	_putchar('\n');
	return (0);

}
