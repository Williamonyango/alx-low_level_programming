#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to be printed
 * Return: the value of the last digit
 */
int print_last_digit(int)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
