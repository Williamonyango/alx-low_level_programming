#include <stdio.h>
/**
 * main - main block
 * prints all possible combinations of two two-digit numbers
 * the two numbers should range from 0 to 99
 * the two numbers should be sepersted by a space
 * all numbers should be printed with two digits. 1 should be printed as 01
 * Return: 0 if success
 */
int main(void);
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10;
		b = i % 10;
		for (j = 0; j < 100; j++)
		{
			c = j / 10;
			d = j % 10;
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');
				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
