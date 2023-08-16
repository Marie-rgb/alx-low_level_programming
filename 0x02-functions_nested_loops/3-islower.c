#include "main.h"

/**
 * print _islower(int c)
 * Return 1 if c is lowercase
 * Return 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return 1;
	}
	return (0);
}
