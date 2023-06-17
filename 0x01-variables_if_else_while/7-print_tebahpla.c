#include <stdio.h>
/**
 * main - main block
 * prints the lowercase alphabet in reverse
 * Return: 0 if success
 */
int main(void)
{
	char a = 'z';

	for ( a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
