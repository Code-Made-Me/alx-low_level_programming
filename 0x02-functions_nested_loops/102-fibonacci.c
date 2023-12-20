#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers
 n *
 * Return: Always 0 (Success)
 */
int main(void)
{
int count, num1 = 1, num2 = 2, next;
printf("%d, %d", num1, num2);
for (count = 2; count < 50; count++)
{
next = num1 + num2;
printf(", %d", next);
num1 = num2;
num2 = next;
}
printf("\n")
return (0);
}
