#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - printing without printf and puts
 *
 * Return: 1 (Success)
 *
 */
int main(void)
{
char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, quote, strlen(quote));
return (1);
}
