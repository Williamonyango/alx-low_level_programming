#include "main.h"
/**
 * _islower - checks for lowercase character
 * Return: 1 for the character or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
