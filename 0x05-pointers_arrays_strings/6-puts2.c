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
	len --;
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
