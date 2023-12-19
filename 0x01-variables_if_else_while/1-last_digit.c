#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int n;
int RAND_MAX;
srand(time(0));
n = rand() - RAND_MAX / 2;
n = rand();
/**Entract the last digit of a number*/
int lastDigit = n % 10;
printf("Last digit of %d is ", n);
printf("%d and is ", lastDigit);
if (lastDigit > 5)
{
printf("greater than 5\n");
}
else if (lastDigit == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}
