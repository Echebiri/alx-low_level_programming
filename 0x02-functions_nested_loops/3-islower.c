#include "main.h"

/**
 * _islower - Checks for lower character
 * @c: The character is to be checked
 * Return: 1 for lower case or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
