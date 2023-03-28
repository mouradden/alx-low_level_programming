#include "main.h"
/**
 * puts2 - display string
 * @str: the string
 */
void puts2(char *str)
{
	int len;
	int i;

	len = 0;
	while (str[len])
	{
		len++;
	}
	i = (len - 1) / 2;
	while (str[i + 1])
	{
		write(1, &str[i + 1], 1);
		i++;
	}
	write(1, "\n", 1);
}
