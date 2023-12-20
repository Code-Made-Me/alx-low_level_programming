#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Description: This function prints the alphabet in lowercase using _putchar.
 * Return: void (no return value)
 */
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
