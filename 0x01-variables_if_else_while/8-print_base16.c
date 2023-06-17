#include <stdio.h>
/**
 * main - main block
 * prints all the numbers of base 16 in lowercase
 * Return: 0 if success
 */
int main(void)
{
	int a;
	char b;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	for (b = 'a'; b < 'g'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
