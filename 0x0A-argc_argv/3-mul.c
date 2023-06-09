#include "main.h"

/**
 * main - program displays multiplication of two numbers
 * @ac: numbre of args
 * @av: arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	if (ac != 3)
		printf("Error\n");
	else
	{
		printf("%d\n", atoi(av[1]) * atoi(av[2]));
	}
	return (0);
}
