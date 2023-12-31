#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Description: This function prints every minute of a day (24-hour format)
 *              starting from 00:00 (midnight) to 23:59 (11:59 PM).
 *              It does this by printing each minute as a string.
 *              Format: "HH:MM" (hour:minute)
 */
void jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((minute / 10) + '0');
_putchar((minute % 10) + '0');
_putchar('\n');
}
}
}

