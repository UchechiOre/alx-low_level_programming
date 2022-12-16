#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * @c: The number to be checked
 * Return: 1 for a character that wil be a digit or 0 for any else
 */

int _isdigit(int c)
{
	if (c >= 40 && c <= 57)
	{
	return (1);
	}
	return (0);
}
