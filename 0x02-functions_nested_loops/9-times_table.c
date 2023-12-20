#include "main.h"

/**
* times_table - Prints the 9 times table
*
* Description: This function prints the multiplication table for 9
*              from 0 to 9 in the following format:
*              0  0  0  0  0  0  0  0  0  0
*              0  1  2  3  4  5  6  7  8  9
*              ...
*              Each number is separated by two spaces.
*/
void times_table(void)
{
int row, column, product;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
product = row * column;

if (column == 0)
_putchar('0');
else
{
_putchar(',');
_putchar(' ');
if (product >= 10)
_putchar((product / 10) + '0');
else
_putchar(' ');
_putchar((product % 10) + '0');
}
}
_putchar('\n');
}
}
