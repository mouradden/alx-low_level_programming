#include "main.h"

/**
 * main - program displays number of args except the program name
 * @ac: numbre of args
 * @av: arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	(void)av;
	printf("%d\n", ac - 1);
	return (0);
}
