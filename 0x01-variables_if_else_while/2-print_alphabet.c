#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Aways 0 (Success)
*/
int main(void)
{
char letter = 'a';
/*Loop through the lowercase alphabet and print each character*/
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n'); /*Print a new line at the end*/
return (0);
}
