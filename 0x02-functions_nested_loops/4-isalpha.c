#include "main.h"
/**
 *_isalpha - checks the alphabetic character
 *@c: the character to be checked
 *Return: 1 if lowercase or lowercarse or 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
