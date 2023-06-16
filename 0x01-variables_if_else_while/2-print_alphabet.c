#include <stdio.h>
/**
 * main - main block (prints the alphabet in lowercase,
 * followed by a new line
 * Return: 0 if success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
		putchar('\n');
	}
	return (0);
}
