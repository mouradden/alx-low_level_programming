#include "main.h"

/**
 * main - program displays args one per line
 * @ac: numbre of  args
 * @av: arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	int i;

	(void)ac;
	i = 0;
	while (av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
