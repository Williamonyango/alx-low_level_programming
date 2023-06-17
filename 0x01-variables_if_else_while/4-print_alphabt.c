#include <stdio.h>
/**
 * main - main block
 * prints the alphabets in lowercase except q and e.
 * Return: 0 if success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
