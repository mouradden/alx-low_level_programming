#include "main.h"

/**
 * main - program displays addition of args
 * @ac: numbre of args
 * @av: arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	int i, j, res;

	i = 1;
	res = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] < '0' || av[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	i = 1;
	while (i < ac)
	{
		res += atoi(av[i]);
		i++;
	}
	printf("%d\n", res);
	return (0);
}
