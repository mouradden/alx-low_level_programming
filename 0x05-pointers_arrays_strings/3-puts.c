#include "main.h"
/**
 * _puts - display string
 * @str: the string
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
