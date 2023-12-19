#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Aways 0 (Success)
 */
int main(void)
{
int i = 0;
while (i < 10)
{
putchar(i + '0');
i++;
}
putchar('\n'); /* Print a new line after all digits*/
return (0);
}

