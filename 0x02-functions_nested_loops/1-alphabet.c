#include "main.h"
/**
 * main - print the alphabets
 * Return: void if success
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}

