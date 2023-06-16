#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block (sign a random number to a variable n each time
 * it is executd
 * Return: 0 if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() -  RAND_MAX / 2;
	printf("The number is %d\n", n);

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
