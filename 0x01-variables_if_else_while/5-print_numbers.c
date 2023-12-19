#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Aways 0 (Success)
 */
int main(void)
{
/*String containing digits from 0 to 9*/
char digits[] = "0123456789";
int i = 0;
while (i < 10)
{
putchar(digits[i]);
putchar('\n');
i++;
}
return (0);
}
