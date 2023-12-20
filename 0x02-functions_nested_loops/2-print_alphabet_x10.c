#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet ten times in lowercase
 *
 * Description: This function prints the lowercase alphabet ten times,
 *              each followed by a newline character.
 * Return: void (no return value)
 */
void print_alphabet_x10(void)
{
int count = 0;
char letter;
while (count < 10)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
count++;
}
}
