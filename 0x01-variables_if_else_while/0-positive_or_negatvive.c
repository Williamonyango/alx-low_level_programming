#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - the main block, its assign a random number to the variable n
 * each time it is executed
 *and print if the number is positive or negative
 *Return: 0 if success
 */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n = 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
