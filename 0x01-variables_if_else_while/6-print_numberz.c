#include <stdio.h>
/**
 * main - main block
 * using putchar to print all single digits
 * of base 10 starting with 0.
 * Return: 0 if success
 */
int main(void)
{
	int a;

	for (a = 0; a > 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
