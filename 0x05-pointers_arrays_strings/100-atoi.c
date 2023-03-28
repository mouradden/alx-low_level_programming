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
	while (s[i])
	{
		while (s[i] == ' ' || s[i] == '-' || s[i] == '+')
		{
			if (s[i] == '-')
				signe *= -1;
			i++;
		}
		while (s[i] >= '0' && s[i] <= '9')
		{
			res = res * 10 + (s[i] - '0');
			i++;
		}
	}
	
	return res*signe;
}
