#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to be checked
 *
 * Description: This function prints the sign of the input number.
 * + if n is greater than zero, 0 if n is zero, and - if n is less than zero.
 *
 * Return: 1 if n is < than 0, 0 if n is zero, -1 if n is < than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
