#include<unistd.h>
/**
 * main - display the sentence
 *
 * Return: 1 because it print to the standard error
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 58);
	write(2, "\n", 1);
	return (1);
}
