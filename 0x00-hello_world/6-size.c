#include <stdio.h>
/**
 * main-the main block
 * Return: always 0
 */
int main(void)
{
	printf("Size of a char: %i byt(s)\n", sizeof(char));
	printf("size of an int: %i byte(s)\n", sizeof(int));
	printf("size of a long int: %i byte(s)\n", sizeof(long int));
	printf("size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("size of a float: %i bytes(s)\n", sizeof(float));
	fprintf(stderr, "[stderr]: [Anything]\n");
	char empty_message[] = "";
	printf("(%d chars long)\n", sizeof(empty_message) - 1);
	
	return (0);
}
