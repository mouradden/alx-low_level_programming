#include "main.h"
/**
 * puts_half - display the second half of a string
 * @str: the string
 */
void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
