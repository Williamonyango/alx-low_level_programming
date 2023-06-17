#include <stdio.h>
/**
 * main - main block
 * prints all single digits of base 10.
 * Return: 0 if success
 */
int main(void)
{
	int c = 0;

	while (c >= 0 && c < 10)
	{
		printf("%d", c);
		c++;
	}
	putchar('\n');
	return (0);
}
