#include "main.h"
/**
 * jack_bauer - displays time all the day
 * Return: nothing
 */
void jack_bauer(void)
{
    int hour, minute;

	for (h = 0; h < 24; h++)
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