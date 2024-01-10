#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
* generateRandomChar - Generates a random character from a predefined charset.
*
* Return: A randomly generated character.
*/
char generateRandomChar(void)
{
const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJ0123456789";
int index = rand() % (sizeof(charset) - 1);
return (charset[index]);
}

/**
* generatePassword - Generates a random password.
* It prints the generated password to stdout.
*/
void generatePassword(void)
{
char password[PASSWORD_LENGTH + 1];
int i;

srand((unsigned int)time(NULL));

for (i = 0; i < PASSWORD_LENGTH; ++i)
{
password[i] = generateRandomChar();
}
password[PASSWORD_LENGTH] = '\0';

printf("Generated Password: %s\n", password);
}

/**
* main - Entry point.
* Generates and prints a random password.
*
* Return: Always 0.
*/
int main(void)
{
generatePassword();
return (0);
}

