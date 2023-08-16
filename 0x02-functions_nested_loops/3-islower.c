#include "main.h"

/**
 * _islower - checks lowercase character
 * Return:1 for  lowercase
 * Return:0 otherwise
 * @c: character to be checked
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
