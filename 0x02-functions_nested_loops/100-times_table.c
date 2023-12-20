#include "main.h"
#include <stdio.h>

/**
* print_times_table - Prints the n times table
* @n: The number up to which the times table is printed
*
* Description: This function prints the times table for the number n,
*              starting from 0 up to n.
*prints nothing if n is greater than 15 or less than 0.
*              The numbers are printed in a specified format.
*/
void print_times_table(int n)
{
int row, column, product;
if (n >= 0 && n <= 15)
{
for (row = 0; row <= n; row++)
{
for (column = 0; column <= n; column++)
{
product = row * column;
if (column == 0)
printf("%d", product);
else
{
printf(", ");
if (product >= 100)
printf("%d", product);
else if (product >= 10)
printf(" %d", product);
else
printf("  %d", product);
}
}
printf("\n");
}
}
}

