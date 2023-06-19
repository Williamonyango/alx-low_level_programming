#include <stdio.h>
/**
 * main - main block
 * printing the size of various types in computer
 * Return: 0 if success
 */
int main(void)
{
	fprintf("size of a char: %d byte(s)\n", sizeof(char));
	fprintf("Size of an int: %d byte(s)\n", sizeof(int));
	fprintf("Size of a long int: %d byte(s)\n", sizeof(long int));
	fprintf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	fprintf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
