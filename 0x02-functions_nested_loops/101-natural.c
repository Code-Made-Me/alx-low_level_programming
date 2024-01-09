#include <stdio.h>

/**
* main - Entry point
*
* Description: Computes the sum of all multiples of 3 or 5 below 1024.
*              Prints the sum followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int sum = 0;
int i;
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
return (0);
}