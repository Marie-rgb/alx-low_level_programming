#include"main.h"

/**
 * print_sign - Prints the sign of a number
 * Returns:1 - prints + if n is greater than zero
 *and 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 * @n: the number
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
