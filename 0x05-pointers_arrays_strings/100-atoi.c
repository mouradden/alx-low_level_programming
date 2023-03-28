#include "main.h"
/**
 * _atoi - copy from src to dst
 * @s: parametre
 * Return: integer converted
 */
int _atoi(char *s)
{
	int i;
	int res;
	int signe;
	
	res = 0;
	i = 0;
	signe = 1;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			signe *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			res *= 10;
			res -= (s[i] - '0');
		}
		else if (signe == 1)
			break;
		i++;
	}
	
	return res*signe;
}
