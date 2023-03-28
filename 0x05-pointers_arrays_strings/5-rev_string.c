#include "main.h"
/**
 * rev_string - reverse   string
 * @s: the string
 */
void rev_string(char *s)
{
	int i;
	int len;
	char help;

	i = 0;
	len = 0;
	while (s[len])
	{
		len++;
	}
	len--;
	while (i <= len / 2)
	{
		help = s[i];
		s[i] = s[len - i];
		s[len - i] = help;
		i++;
	}
}
