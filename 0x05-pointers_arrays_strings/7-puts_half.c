#include "main.h"
/**
 * puts_half - display the second half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int len;
	int i;

	len = 0;
	while (str[len])
	{
		len++;
	}
	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len - 1) / 2;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
