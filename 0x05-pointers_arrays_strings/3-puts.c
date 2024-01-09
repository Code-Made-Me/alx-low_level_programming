#include"main.h"

/**
* _puts - prints a string, followed by a newline to stdout
*
* @str: string parameter to print
 Description:
 * Prints each character of the string 'str' followed by a newline,
 * until the null terminator '\0' is encountered.
*
* Return: Nothing
*/
int _putchar(char c);
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
++str;
}
_putchar('\n');
}

