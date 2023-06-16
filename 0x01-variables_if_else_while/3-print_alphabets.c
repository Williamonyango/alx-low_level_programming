#include <stdio.h>
/**
 * main - main block (prints alphabets in lower case
 * followed by upper case
 *Return: 0 when success
 */
int main(void)
{
	char c = 'A';
	char y = 'a';

	while (y <= 'z')
	{
		putchar(y);
		y++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
