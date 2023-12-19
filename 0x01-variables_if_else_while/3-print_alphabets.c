#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Aways 0 (Success)
*/
int main(void)
{
char letter = 'a';
/*Print lowercase alphabet*/
while (letter <= 'z')
{
putchar(letter);
letter++;
}
/* Reset letter to 'A' for uppercase alphabet*/
letter = 'A';
/*Print uppercase alphabet*/
while (letter <= 'Z')
{
putchar(letter);
letter++;
}
/*Print a new line*/
putchar('\n');
return (0);
}

