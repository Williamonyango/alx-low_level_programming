#include <stdio.h>
/**
 * main - main block
 * prints all the possible different combinations of two digits
 * the numbers must be seperated by , .followed by space
 * the two digits must be different
 * Return: 0 if success
 */
int main(void)
{
	int a = 0;
	int b;
	int c;

	while (a < 100)
	{
		b = a % 10;
		c = a / 10;

		if (c < b)
		{
			putchar(c + '0');
			putchar(b + '0');
			if (a < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
