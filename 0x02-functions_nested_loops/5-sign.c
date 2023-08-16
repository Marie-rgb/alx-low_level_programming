#include"main.h"

/**
 * print_sign - Prints the sign of a number
 * Returns:1 - for positive num, -1 for negative
 * and zero for anything else
 * @n: the number to be checked
 *
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
