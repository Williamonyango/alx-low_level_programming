#include <stdio.h>
/**
 * main - main block
 * prints all the possible different combination of three digits
 * numbers must be seperated by , .followed by a space
 * the three digits must be different
 * Return: 0 if success
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a < 1000; a++)
	{
		b = a / 100;
		c = (a / 10) % 10;
		d = a % 10;
		if (b < c && c < d)
		{
			putchar(b + '0');
			putchar(c + '0');
			putchar(d + '0');
			if (a < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
