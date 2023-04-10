#include "main.h"
/**
 * _strcmp - copy from src to dst
 * @s1: parametre
 * @s2: parametre
 * Return: the first ascii diff
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}
