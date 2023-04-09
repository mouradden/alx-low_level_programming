#include "main.h"

/**
 * main - program displays addition of args
 * @ac: numbre of args
 * @av: arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	int i;

    i = 0;
    
	printf("%d\n", atoi(av[1]) * atoi(av[2])); 
	
	return (0);
}
