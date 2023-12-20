#include "main.h"
#include <stdio.h>

/**
* print_to_98 - Prints natural numbers from n to 98
* @n: Starting number
*
* Description: This function prints all natural numbers from the input number n
*              up to 98, separated by a comma and space.
*/
void print_to_98(int n)
{
int i;

if (n <= 98)
{
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
}
else
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
}
printf("98\n");
}
