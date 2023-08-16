#include"main.h"

/**
 * _isalpha - checks for alphabetic character
 * Return: 1 for a letter and 0 otherwise
 * @c: character to be checked
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
