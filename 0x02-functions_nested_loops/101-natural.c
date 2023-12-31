#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of 3 or 5
 * below 1024 (exluded), followed by a new line.
 * Return: 0 if success
 */
int main(void)
{
	int a, b = 0;

	while (a < 1024)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b += a;
		}
		a++;
	}
	printf("%d\n", b);
	return (0);
}
